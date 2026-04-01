/* Auto-injected type definitions by preprocessor */
#include <stdlib.h>
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

// Decompiled by BinaryAI
// SHA256: e887006d2b7cc734b10593330b5a0c94858cad9c019ddee9890acaa73c8d550a

// Forward declarations for classes
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct type_info type_info;
typedef struct Init Init;

struct LifecycleClass {
    int instance_count;
};

struct Base {
    uintptr_t vtable;
};

struct Derived {
    uintptr_t vtable;
    int value;
};

struct MultiDerived {
    uintptr_t vtable;
};

struct MiddleA {
    uintptr_t vtable;
};

struct MiddleB {
    uintptr_t vtable;
};

struct DiamondDerived {
    uintptr_t vtable;
};

struct RTTIDerivedA {
    uintptr_t vtable;
};

struct RTTIDerivedB {
    uintptr_t vtable;
};

struct type_info {
    char *name;
};

struct Init {
    int dummy;
};

struct Container_int_ {
    int data[10];
    int size;
};

struct Container_double_ {
    double data[10];
    int size;
};

// Global variables
int LifecycleClass_instance_count = 0;
int completed_0 = 0;
int std___ioinit = 0;
int __dso_handle = 0;
char *PTR_virtual_func_0001187c = 0;
char *PTR_virtual_func_00011894 = 0;
char *PTR_func_00011968 = 0;
char *PTR__RTTIDerivedA_0001197c = 0;
char *PTR__RTTIDerivedB_00011990 = 0;
type_info *RTTIBase_typeinfo = 0;
type_info *RTTIDerivedA_typeinfo = 0;
type_info *RTTIDerivedB_typeinfo = 0;
char *DAT_000115e4 = 0;
char *DAT_00011608 = 0;
char *DAT_00011628 = 0;
char *DAT_00011644 = 0;
char *DAT_00011660 = 0;
char *DAT_0001167c = 0;
char *DAT_0001169c = 0;
char *DAT_000116b8 = 0;
char *DAT_000116d4 = 0;
char *DAT_000116f0 = 0;
char *DAT_0001170c = 0;
char *DAT_0001172c = 0;
char *DAT_0001174c = 0;
char *DAT_000115cc = 0;

// Forward declarations
void call_weak_fn(void);
void __gmon_start__(void);
int main(void);
int DiamondDerived_func(DiamondDerived *self);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

// Function: _init @ 0x109b0
int _init(void)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_000109bc @ 0x109bc
void FUN_000109bc(void)
{
 ((void(*)())0x0)();
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
void __aeabi_atexit(void *a, void (*b)(void), void *c, void *d)
{
 (void)a; (void)b; (void)c; (void)d;
 return;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
void __cxa_begin_catch(void *a)
{
 (void)a;
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
void *__cxa_allocate_exception(unsigned int a)
{
 return malloc(a);
}

// Function: <EXTERNAL>::puts @ 0x10a00
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
void operator_delete(void *param_1,unsigned int param_2)
{
 (void)param_2;
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
void __libc_start_main(void *a, void *b, void *c, void *d, void *e, void *f)
{
 (void)a; (void)b; (void)c; (void)d; (void)e; (void)f;
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
void * operator_new__(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10a30
void abort(void)
{
 while(1);
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
int std_type_info_operator_eq(type_info *this_,type_info *param_1)
{
 int result;
 result = (this_->name == param_1->name) ? 1 : 0;
 return result;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
void __stack_chk_fail(void)
{
 while(1);
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
int __dynamic_cast(void *a, void *b, void *c, int d)
{
 (void)a; (void)b; (void)c; (void)d;
 return 0;
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
 while(1);
}

// Function: <EXTERNAL>::strlen @ 0x10a84
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void std_ios_base_Init_Init(Init *this_)
{
 this_->dummy = 0;
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
int __aeabi_d2iz(double a)
{
 (void)a;
 return 0;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
void __cxa_throw(void *a, void *b, void *c)
{
 (void)a; (void)b; (void)c;
 while(1);
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
int __aeabi_dcmpgt(double a, double b)
{
 (void)a; (void)b;
 return 0;
}

// Function: <EXTERNAL>::strncpy @ 0x10ad8
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10af0
void __printf_chk(int a, void *b, ...)
{
 (void)a; (void)b;
 return;
}

// Function: _start @ 0x10b08
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,(void*)0,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10b4c
void call_weak_fn(void)
{
 __gmon_start__();
 return;
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
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return iVar2 + LifecycleClass_instance_count * 1000;
}

// Function: call_virtual_func @ 0x10cd0
void call_virtual_func(Base *self,int param_2)
{
 void (*func)(Base *, int) = (void(*)(Base *, int))((void*)(self->vtable));
 func(self, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x10ce4
void test_cpp_virtual_func(void)
{
 Base *local_18;
 Base *local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_18 = (Base *)PTR_virtual_func_0001187c;
 local_14 = (Base *)PTR_virtual_func_00011894;
 local_10 = 3;
 call_virtual_func(local_18,5);
 call_virtual_func(local_14,5);
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
 int iVar2;
 char **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_14 = &PTR_func_00011968;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_14);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_14);
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
 int iVar5;
 int iVar6;
 int stack_1c;
 int stack_18;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 ((double)0,
 (double)0);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&stack_1c,&stack_18);
 __aeabi_d2iz(0.0);
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
 void (*func1)(void *);
 void (*func2)(void *);
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)(uintptr_t)PTR__RTTIDerivedA_0001197c;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)(uintptr_t)PTR__RTTIDerivedB_00011990;
 iVar3 = std_type_info_operator_eq
 (*(type_info **)((int *)*piVar1 + -4),(type_info *)PTR__RTTIDerivedA_0001197c);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_eq
 (*(type_info **)((int *)*piVar2 + -4),(type_info *)PTR__RTTIDerivedB_00011990);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast((void*)piVar1,(void*)(uintptr_t)RTTIBase_typeinfo,(void*)(uintptr_t)RTTIDerivedA_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast((void*)piVar2,(void*)(uintptr_t)RTTIBase_typeinfo,(void*)(uintptr_t)RTTIDerivedB_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 iVar4 = *piVar1;
 __s = *(char **)((int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
    sVar5 = strlen(__s);
    func1 = (void(*)(void *))((uintptr_t)*(void **)(iVar4 + 4));
    func1(piVar1);
    func2 = (void(*)(void *))((uintptr_t)*(void **)(*piVar2 + 4));
    func2(piVar2);
    return iVar3 + sVar5;
}

// Function: test_cpp_oo_features @ 0x11074
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(DAT_000115e4);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_00011608,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_00011628,uVar1);
 test_cpp_virtual_func();
 __printf_chk(1,&DAT_00011644,0);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00011660,uVar1);
 test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_0001167c,0);
 __printf_chk(1,&DAT_0001169c,0x16);
 test_cpp_template_func();
 __printf_chk(1,&DAT_000116b8,0);
 __printf_chk(1,&DAT_000116d4,0x10);
 __printf_chk(1,&DAT_000116f0,0x55);
 test_cpp_exception();
 __printf_chk(1,&DAT_0001170c,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_0001172c,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0001174c,uVar1);
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
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __aeabi_atexit(0, (void(*)(void))_GLOBAL__sub_I_test_cpp_member_func, 0, &__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x111dc
int Base_virtual_func(Base *self,int param_1)
{
 (void)self;
 return param_1 + 1;
}

// Function: Base::getName @ 0x111e4
char * Base_getName(void)
{
 return DAT_000115cc;
}

// Function: Base::~Base @ 0x111f0
void Base__Base(Base *this_)
{
 (void)this_;
 return;
}

// Function: Derived::virtual_func @ 0x111f4
int Derived_virtual_func(Derived *self,int param_1)
{
 return param_1 * *(int *)((char *)self + 4);
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
unsigned int MultiDerived_funcB2(MultiDerived *self)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11224
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x1123c
int MiddleA_func2(MiddleA *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11260
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11278
int MiddleB_func2(MiddleB *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x1129c
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x112b4
int DiamondDerived_func2(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x112d8
int DiamondDerived_func3(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + -8) + -0xc) + -4) + 0xfa;
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
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *self)
{
 (void)self;
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11304
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *self)
{
 (void)self;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11308
void DiamondDerived_DiamondDerived(DiamondDerived *self)
{
 (void)self;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1130c
DiamondDerived * DiamondDerived_DiamondDerived2(DiamondDerived *self)
{
 return (DiamondDerived *)((char *)self + *(int *)(*(int *)self + -0x10));
}

// Function: DiamondDerived::~DiamondDerived @ 0x1131c
DiamondDerived * DiamondDerived_DiamondDerived3(DiamondDerived *self)
{
 return (DiamondDerived *)((char *)self + -8);
}

// Function: MultiDerived::~MultiDerived @ 0x11324
void MultiDerived__MultiDerived(MultiDerived *self)
{
 (void)self;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11328
MultiDerived * MultiDerived__MultiDerived2(MultiDerived *self)
{
 return (MultiDerived *)((char *)self + -8);
}

// Function: Derived::~Derived @ 0x11330
void Derived__Derived(Derived *self)
{
 (void)self;
 return;
}

// Function: Base::~Base @ 0x11334
Base * Base__Base2(Base *self)
{
 operator_delete(self,4);
 return self;
}

// Function: Derived::~Derived @ 0x1134c
Derived * Derived__Derived2(Derived *self)
{
 operator_delete(self,8);
 return self;
}

// Function: MultiDerived::~MultiDerived @ 0x11364
MultiDerived * MultiDerived__MultiDerived3(MultiDerived *self)
{
 operator_delete(self,0x10);
 return self;
}

// Function: MultiDerived::~MultiDerived @ 0x1137c
MultiDerived * MultiDerived__MultiDerived4(MultiDerived *self)
{
 operator_delete((char *)self + -8,0x10);
 return (MultiDerived *)((char *)self + -8);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11398
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA2(RTTIDerivedA *self)
{
 operator_delete(self,4);
 return self;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x113b0
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB2(RTTIDerivedB *self)
{
 operator_delete(self,4);
 return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x113c8
DiamondDerived * DiamondDerived_DiamondDerived4(DiamondDerived *self)
{
 operator_delete(self,0x18);
 return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x113e0
DiamondDerived * DiamondDerived_DiamondDerived5(DiamondDerived *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 operator_delete((char *)self + iVar1,0x18);
 return (DiamondDerived *)((char *)self + iVar1);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11404
DiamondDerived * DiamondDerived_DiamondDerived6(DiamondDerived *self)
{
 operator_delete((char *)self + -8,0x18);
 return (DiamondDerived *)((char *)self + -8);
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
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
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
void Container_int_Container(Container_int_ *self)
{
 *(unsigned int *)((char *)self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1147c
void Container_int_push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11494
unsigned int Container_int_get(Container_int_ *self,int param_1)
{
 if (param_1 < 0) {
 return 0;
 }
 if (self->size <= param_1) {
 return 0;
 }
 return self->data[param_1];
}

// Function: Container<int>::getSize @ 0x114c0
unsigned int Container_int_getSize(Container_int_ *self)
{
 return self->size;
}

// Function: Container<double>::Container @ 0x114c8
void Container_double_Container(Container_double_ *self)
{
 self->size = 0;
 return;
}

// Function: Container<double>::push @ 0x114d4
void Container_double_push(Container_double_ *self,double param_1)
{
 int iVar2;
 iVar2 = self->size;
 if (iVar2 < 10) {
 self->size = iVar2 + 1;
 self->data[iVar2] = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x114f0
double Container_double_get(Container_double_ *self,int param_1)
{
 if (param_1 < 0) {
 return 0.0;
 }
 if (self->size <= param_1) {
 return 0.0;
 }
 return self->data[param_1];
}

// Function: Container<double>::getSize @ 0x11528
unsigned int Container_double_getSize(Container_double_ *self)
{
 return self->size;
}

// Function: _fini @ 0x11530
void _fini(void)
{
 return;
}

