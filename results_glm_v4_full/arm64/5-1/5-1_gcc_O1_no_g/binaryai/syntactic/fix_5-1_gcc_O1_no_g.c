#include <stddef.h>
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
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations and structure definitions */
struct Base {
    void **vtable;
    int padding;
};
typedef struct Base Base;

struct RTTIBase {
    void **vtable;
};

/* LifecycleClass definition */
struct LifecycleClass {
    int vtable;
    int data;
};
typedef struct LifecycleClass LifecycleClass;

struct DiamondDerived {
    void **vtable;
    int data1;
    int data2;
    int padding1;
    int padding2;
};
typedef struct DiamondDerived DiamondDerived;

struct Derived {
    void **vtable;
    int data;
};
typedef struct Derived Derived;

struct MultiDerived {
    void **vtable1;
    void **vtable2;
    int data1;
    int data2;
    int padding;
};
typedef struct MultiDerived MultiDerived;

struct MiddleA {
    void **vtable;
    int data;
};
typedef struct MiddleA MiddleA;

struct MiddleB {
    void **vtable;
    int data;
};
typedef struct MiddleB MiddleB;

struct RTTIDerivedA {
    void **vtable;
};
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIDerivedB {
    void **vtable;
};
typedef struct RTTIDerivedB RTTIDerivedB;

struct Container_int_ {
    int data[10];
    int size;
};
typedef struct Container_int_ Container_int_;

struct Container_double_ {
    double data[10];
    int size;
};
typedef struct Container_double_ Container_double_;

struct Init {
    int dummy;
};
typedef struct Init Init;

/* Member function forward declarations */
int DiamondDerived_func(DiamondDerived *this);
int Base_virtual_func(Base *this, int param_1);
unsigned char *Base_getName(void);
void Base__Base(Base *this);
int Derived_virtual_func(Derived *this, int param_1);
char *Derived_getName(void);
void Derived__Derived(Derived *this);
unsigned long long MultiDerived_funcA(void);
unsigned long long MultiDerived_funcB(void);
int MiddleA_func(MiddleA *this);
int MiddleB_func(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
void DiamondDerived__DiamondDerived(DiamondDerived *this);
void MultiDerived__MultiDerived(MultiDerived *this);
void Derived__Derived(Derived *this);
void Base__Base(Base *this);
void Container_int_Container(Container_int_ *this);
void Container_int_push(Container_int_ *this, int param_1);
unsigned int Container_int_get(Container_int_ *this, int param_1);
unsigned int Container_int_getSize(Container_int_ *this);
void Container_double_Container(Container_double_ *this);
void Container_double_push(Container_double_ *this, double param_1);
double Container_double_get(Container_double_ *this, int param_1);
unsigned int Container_double_getSize(Container_double_ *this);

extern int LifecycleClass_instance_count;
extern void *PTR_virtual_func_00113958;
extern void *PTR_virtual_func_00113988;
extern void *PTR_func_00113b30;
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* Global variable definitions */
int LifecycleClass_instance_count = 0;
void *PTR_virtual_func_00113958 = (void *)Base_virtual_func;
void *PTR_virtual_func_00113988 = (void *)Derived_virtual_func;
void *PTR_func_00113b30 = (void *)DiamondDerived_func;
void *PTR__RTTIDerivedA_00113b58 = (void *)RTTIDerivedA__RTTIDerivedA;
void *PTR__RTTIDerivedB_00113b80 = (void *)RTTIDerivedB__RTTIDerivedB;
void *RTTIBase_typeinfo = (void *)"RTTIBase";
void *RTTIDerivedA_typeinfo = (void *)"12RTTIDerivedA";
void *RTTIDerivedB_typeinfo = (void *)"12RTTIDerivedB";
void *int_typeinfo = (void *)"int";

/* RTTI typeinfo access - C compatible */
extern void *RTTIBase_typeinfo;
extern void *int_typeinfo;

/* Global variables */
extern long __stack_chk_guard;
extern long ___stack_chk_guard;
char completed_0 = '\0';
void *__dso_handle;
void *stack0x00000008;
Init std___ioinit;
void Init__Init(Init *this);
void Init___Init(Init *this);

/* String data constants */
char DAT_00102148[] = "Testing C++ Object-Oriented Features:\n";
char DAT_00102170[] = "  test_cpp_member_func: 0x%x\n";
char DAT_00102190[] = "  test_cpp_constructor: 0x%x\n";
char DAT_001021b0[] = "  test_cpp_virtual_func: 0x%x\n";
char DAT_001021d0[] = "  test_cpp_multiple_inheritance: 0x%llx\n";
char DAT_001021f0[] = "  test_cpp_diamond_inheritance: 0x%x\n";
char DAT_00102210[] = "  test_cpp_operator_overload: 0x%x\n";
char DAT_00102230[] = "  test_cpp_template_func: 0x%x\n";
char DAT_00102250[] = "  test_cpp_template_class: 0x%x\n";
char DAT_00102270[] = "  test_cpp_lambda: 0x%llx\n";
char DAT_00102290[] = "  test_cpp_exception: 0x%x\n";
char DAT_001022b0[] = "  test_cpp_smart_ptr: 0x%x\n";
char DAT_001022d0[] = "  test_cpp_rtti: 0x%x\n";
char DAT_00102130[] = "Base";

/* Forward declarations */
int call_weak_fn(void);
int main(void);
void Init__Init(Init *this);
void Init___Init(Init *this);

/* External library function declarations */
void __libc_start_main(void (*)(), void *, void *, void *, void *, unsigned long long);
void abort(void);
void __cxa_finalize(void *);
char *strncpy(char *, const char *, size_t);
size_t strlen(const char *);
int strcmp(const char *, const char *);
void *malloc(size_t);
void free(void *);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, void *, void *);
void *__dynamic_cast(void *, void *, void *, int);
void __cxa_atexit(void (*)(void *), void *, void *);
int puts(const char *);
int printf(const char *, ...);
void __stack_chk_fail(void);
void __gmon_start__(void);

/* Template function forward declarations */
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void Container_int_Container(Container_int_ *this);
void Container_int_push(Container_int_ *this, int param_1);
unsigned int Container_int_get(Container_int_ *this, int param_1);
unsigned int Container_int_getSize(Container_int_ *this);
void Container_double_Container(Container_double_ *this);
void Container_double_push(Container_double_ *this, double param_1);
double Container_double_get(Container_double_ *this, int param_1);
unsigned int Container_double_getSize(Container_double_ *this);

/* Member function forward declarations */
int DiamondDerived_func(DiamondDerived *this);
int Base_virtual_func(Base *this, int param_1);
unsigned char *Base_getName(void);
void Base__Base(Base *this);
int Derived_virtual_func(Derived *this, int param_1);
char *Derived_getName(void);
void Derived__Derived(Derived *this);
unsigned long long MultiDerived_funcA(void);
unsigned long long MultiDerived_funcB(void);
int MiddleA_func(MiddleA *this);
int MiddleB_func(MiddleB *this);
int DiamondDerived_func(DiamondDerived *this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
void DiamondDerived__DiamondDerived(DiamondDerived *this);
void MultiDerived__MultiDerived(MultiDerived *this);
void Derived__Derived(Derived *this);
void Base__Base(Base *this);
void Container_int_Container(Container_int_ *this);
void Container_int_push(Container_int_ *this, int param_1);
unsigned int Container_int_get(Container_int_ *this, int param_1);
unsigned int Container_int_getSize(Container_int_ *this);
void Container_double_Container(Container_double_ *this);
void Container_double_push(Container_double_ *this, double param_1);
double Container_double_get(Container_double_ *this, int param_1);
unsigned int Container_double_getSize(Container_double_ *this);

// Decompiled by BinaryAI
// SHA256: 02a1cabe0fe00f6c2b4447d507395f198ebea74125e99fad8cd9bf08ec08f66f

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
 return;
}

/* Forward declarations */
void * operator_new__(unsigned long param_1);
void * operator_new(unsigned long param_1);
void operator_delete(void *param_1, int param_2);
void operator_delete__(void *param_1);

// Function: <EXTERNAL>::operator.new[] @ 0x101490
void * operator_new__(unsigned long param_1)
{
 return operator_new(param_1);
}

// Function: <EXTERNAL>::operator.new @ 0x101510
void * operator_new(unsigned long param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::operator.delete @ 0x101560
void operator_delete(void *param_1, int param_2)
{
 free(param_1);
}























// Function: <EXTERNAL>::operator.delete[] @ 0x101560
void operator_delete__(void *param_1)
{
 operator_delete(param_1,0);
 return;
}





// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101590
void Init__Init(Init *this)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::~Init @ 0x101590
void Init___Init(Init *this)
{
 return;
}











// Function: <EXTERNAL>::__printf_chk @ 0x1015f0
#include <stdarg.h>
void __printf_chk(int flag, const char *format, ...)
{
 va_list args;
 va_start(args, format);
 vprintf(format, args);
 va_end(args);
}



// Function: _start @ 0x101640
void _start(unsigned long long param_1)
{
 __libc_start_main((void (*)())main,NULL,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x101674
int call_weak_fn(void)
{
 extern void __gmon_start__(void);
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
 __cxa_finalize(&__dso_handle);
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
 return (int)sVar1 + 0x125c;
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
 iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar1 + LifecycleClass_instance_count * 1000;
}

// Function: call_virtual_func @ 0x101838
void call_virtual_func(struct Base *param_1,int param_2)
{
 ((void (*)(struct Base *, int))(**(void ***)param_1))(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101854
void test_cpp_virtual_func(void)
{
 void **local_20;
 void **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113958;
 local_18 = &PTR_virtual_func_00113988;
 local_10 = 3;
 call_virtual_func((struct Base *)&local_20,5);
 call_virtual_func((struct Base *)&local_18,5);
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
 void **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_18 = &PTR_func_00113b30;
 local_10 = 0x32;
 DiamondDerived_func((DiamondDerived *)&local_18);
 local_10 = 100;
 DiamondDerived_func((DiamondDerived *)&local_18);
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
 puVar1 = (unsigned int *)__cxa_allocate_exception((size_t)4);
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
 long lVar4;
 size_t sVar5;
 int iVar6;
 char *__s1;
 long lVar7;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedB_00113b80;
 lVar7 = (long)*plVar2;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 iVar6 = 10;
 if ((__s1 != "12RTTIDerivedA") && (iVar6 = 0, *__s1 != '*')) {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar6 = 10;
 if (iVar1 != 0) {
 iVar6 = 0;
 }
 }
 lVar4 = (long)__dynamic_cast((void *)plVar2,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 iVar1 = iVar6 + 0x78;
 if (lVar4 == 0) {
 iVar1 = iVar6 + 0x14;
 }
 lVar4 = (long)__dynamic_cast((void *)plVar3,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 iVar6 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar6 = iVar1;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar5 = strlen(__s1);
 {
  void (*dtor)(void *) = (void (*)(void *))(uintptr_t)*(long *)(lVar7 + 8);
  dtor(plVar2);
 }
 {
  void (*dtor)(void *) = (void (*)(void *))(uintptr_t)*(long *)(*plVar3 + 8);
  dtor(plVar3);
 }
 return iVar6 + (int)sVar5;
}

// Function: test_cpp_oo_features @ 0x101c8c
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(DAT_00102148);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,(const char *)DAT_00102170,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(const char *)DAT_00102190,uVar1);
 test_cpp_virtual_func();
 __printf_chk(1,(const char *)DAT_001021b0,0);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,(const char *)DAT_001021d0,uVar1);
 test_cpp_diamond_inheritance();
 __printf_chk(1,(const char *)DAT_001021f0,0);
 __printf_chk(1,(const char *)DAT_00102210,0x16);
 test_cpp_template_func();
 __printf_chk(1,(const char *)DAT_00102230,0);
 __printf_chk(1,(const char *)DAT_00102250,0x10);
 __printf_chk(1,(const char *)DAT_00102270,0x55);
 test_cpp_exception();
 __printf_chk(1,(const char *)DAT_00102290,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(const char *)DAT_001022b0,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,(const char *)DAT_001022d0,uVar1);
 return;
}

// Function: main @ 0x101dbc
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101dd4
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 Init__Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))Init___Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x101e18
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101e20
unsigned char * Base_getName(void)
{
 return (unsigned char *)&DAT_00102130;
}

// Function: Base::~Base @ 0x101e2c
void Base_destructor2(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x101e30
int Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived::getName @ 0x101e3c
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x101e48
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x101e50
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x101e58
unsigned long long MultiDerived_funcB_this(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101e60
int MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x101e78
int MiddleA_func2(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101e9c
int MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x101eb4
int MiddleB_func2(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x101ed8
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101ef0
int DiamondDerived_func2(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) +
 *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101f14
int DiamondDerived_func3(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
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
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101f40
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f44
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f48
void DiamondDerived__DiamondDerived2(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101f4c
void DiamondDerived__DiamondDerived3(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f50
void MultiDerived__MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f54
void MultiDerived__MultiDerived2(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x101f58
void Derived__Derived(Derived *this)
{
 return;
}

// Function: Base::Base @ 0x101f5c
void Base__Base(Base *this)
{
 return;
}

// Function: Base::~Base @ 0x101f5c
void Base_destructor(Base *this)
{
 free(this);
 return;
}

// Function: Derived::~Derived @ 0x101f74
void Derived__Derived2(Derived *this)
{
 free(this);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101f8c
void MultiDerived__MultiDerived3(MultiDerived *this)
{
 free(this);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101fa4
void MultiDerived__MultiDerived4(MultiDerived *this)
{
 free(this + -0x10);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101fc0
void RTTIDerivedA__RTTIDerivedA2(RTTIDerivedA *this)
{
 free(this);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101fd8
void RTTIDerivedB__RTTIDerivedB2(RTTIDerivedB *this)
{
 free(this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101ff0
void DiamondDerived__DiamondDerived4(DiamondDerived *this)
{
 free(this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102008
void DiamondDerived__DiamondDerived5(DiamondDerived *this)
{
 free(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10202c
void DiamondDerived__DiamondDerived6(DiamondDerived *this)
{
 free(this + -0x10);
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

// Function: Container<int>::Container @ 0x102074
void Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x10207c
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x102098
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (uVar1 = 0, param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1020c0
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1020c8
void Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1020d0
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x1020ec
double Container_double_get(Container_double_ *this,int param_1)
{
 double uVar1;
 uVar1 = 0.0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(double *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10210c
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x102114
void _fini(void)
{
 return;
}





