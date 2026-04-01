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
typedef unsigned int uint;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Forward declarations for C++ classes
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct Init Init;
typedef struct type_info type_info;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;

// Global variable declarations
extern void *PTR_func_00011b2c;
extern void *PTR_func_00011b48;
extern void *PTR_func_00011b68;
extern void *PTR_func_00011b84;
extern void *PTR_func_00011c20;
extern void *PTR_func_00011c38;
extern void *PTR_func_00011c54;
extern void *PTR_virtual_func_00011af0;
extern void *PTR_virtual_func_00011b08;
extern void *PTR__RTTIDerivedA_00011c68;
extern void *PTR__RTTIDerivedB_00011c7c;
extern Init std___ioinit;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;
extern type_info int_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info RTTIBase_typeinfo;
extern char DAT_00011866;
extern char DAT_0001188a;
extern char DAT_000118a8;
extern char DAT_000118e0;
extern char DAT_000118fc;
extern char DAT_00011919;
extern char DAT_0001196d;
extern char DAT_00011989;
extern char DAT_000119a6;
extern char DAT_000119c3;
extern char DAT_00011854;
extern int completed_0;
extern void __gmon_start__(void);
extern void call_weak_fn(void);
extern void __aeabi_atexit(void *, void *, void *);
extern void *malloc(size_t __size);
extern void free(void *__ptr);

// Struct definitions for C++ classes
struct Base {
 void *vtable;
};

struct Derived {
 void *vtable;
 int value;
};

struct MultiDerived {
 void *vtable;
 int value;
 int padding[2];
};

struct VirtualBase {
 void *vtable;
 int value;
};

struct MiddleA {
 void *vtable;
 int offset;
 int value;
 int padding[5];
};

struct MiddleB {
 void *vtable;
 int offset;
 int value;
 int padding[5];
};

struct DiamondDerived {
 void *vtable;
 int offset;
 int value;
 int padding[9];
};

struct RTTIDerivedA {
 void *vtable;
};

struct RTTIDerivedB {
 void *vtable;
};

struct Container_int_ {
 int data[10];
 int size;
 char padding[0x28];
};

struct Container_double_ {
 double data[10];
 int size;
 char padding[0x50];
};

struct Init {
 int dummy;
};

struct type_info {
 void *vtable;
 char *name;
};

struct unique_ptr_int_std__default_delete_int__ {
 void *ptr;
};

struct unique_ptr_int___std__default_delete_int____ {
 void *ptr;
};

// Decompiled by BinaryAI
// SHA256: 3a4de938d6abc6bdc65dd41346a89f50af55fc0c72fe03f1ae863edbc2c55bf7

// Function: _init @ 0x109b0
int _init(void)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_000109bc @ 0x109bc
void FUN_000109bc(void)
{
 (*(void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x109d0
void * operator_new(uint param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
extern void *__cxa_begin_catch(void *);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
extern void *__cxa_allocate_exception(size_t __size);

// Function: <EXTERNAL>::puts @ 0x10a00
extern int puts(const char *__s);

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
extern void operator_delete(void *param_1,uint param_2);

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
extern int __libc_start_main(int (*main)(void), int argc, void *argv, void (*init)(void), void (*fini)(void), void *stack);

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
void * operator_new__(uint param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10a30
extern void abort(void);

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
int std_type_info_operator_eq(type_info *this_,type_info *param_1)
{
 int iVar1;
 iVar1 = (this_ == param_1);
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
extern void __stack_chk_fail(void);

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
extern void __cxa_end_cleanup(void);

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
extern void *__dynamic_cast(void *obj, void *base_type, void *derived_type, int flags);

// Forward declarations for missing functions
extern void Container_int_push(Container_int_ *this_,int param_1);
extern unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int___std__default_delete_int________unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_);
extern unique_ptr_int_std__default_delete_int__ *
std_unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_);
extern int DiamondDerived_func(DiamondDerived *this_);
extern DiamondDerived * DiamondDerived__DiamondDerived(DiamondDerived *this_);

// Function: <EXTERNAL>::operator.delete[] @ 0x10a6c
extern void operator_delete__(void *param_1);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10a78
extern void __cxa_rethrow(void);

// Function: <EXTERNAL>::strlen @ 0x10a84
extern size_t strlen(const char *__s);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void std_ios_base_Init_Init(Init *this_)
{
 (void)this_;
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
extern int __aeabi_d2iz(double param_1);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
extern void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
extern int __gxx_personality_v0(int version, int actions, long exception_class, void *uebp, void *context);

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
extern void __cxa_throw(void *exception, void *tinfo, void (*dest)(void *));

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
extern int __aeabi_dcmpgt(double param_1, double param_2);

// Function: <EXTERNAL>::strncpy @ 0x10ad8
extern char *strncpy(char *__dest, const char *__src, size_t __n);

// Function: <EXTERNAL>::__printf_chk @ 0x10af0
extern int __printf_chk(int __flag, const char *__format, ...);

// Function: test_cpp_exception @ 0x10b08
void test_cpp_exception(void);

// Function: test_cpp_exception @ 0x10b08
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,(void (*)(void *))0);
 return;
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
 __aeabi_atexit(&std___ioinit,(void *)std_ios_base_Init_Init,(void *)&__dso_handle);
 return;
}

// Function: _start @ 0x10bfc
void _start(unsigned int param_1,unsigned int param_2)
{
 void *stack0x00000004;
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10c40
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10c64
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10c90
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10cc8
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

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
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10d7c
int call_virtual_func(Base *param_1,int param_2)
{
 int iVar1;
 iVar1 = ((int (*)(int))(*(void (**)(int))param_1))(param_2);
 return iVar1;
}

// Function: test_cpp_virtual_func @ 0x10d88
void test_cpp_virtual_func(void)
{
 int iVar1;
 unsigned long long uVar2;
 void **local_18;
 void **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_18 = &PTR_virtual_func_00011af0;
 local_14 = &PTR_virtual_func_00011b08;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_18,5);
 uVar2 = (unsigned long long)call_virtual_func((Base *)&local_14,5);
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

// Function: template_max<int> @ 0x11580
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

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
 double dVar7;
 int local_14;
 int local_10;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 dVar7 = template_max_double_((double)in_r0,(double)in_r2);
 iVar5 = 10;
 iVar6 = 0x14;
 local_14 = iVar5;
 local_10 = iVar6;
 template_swap_int_(&local_14,&local_10);
 uVar4 = (unsigned long long)__aeabi_d2iz((double)uVar2);
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
 Container_int_push((Container_int_ *)local_38,0x14);
 Container_int_push((Container_int_ *)local_38,0x1e);
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
 void **piVar1;
 void **piVar2;
 int iVar3;
 void *pVar4;
 char *__s;
 size_t sVar5;
 void *iVar6;
 piVar1 = operator_new(4);
 *piVar1 = (void *)&PTR__RTTIDerivedA_00011c68;
 piVar2 = operator_new(4);
 *piVar2 = (void *)&PTR__RTTIDerivedB_00011c7c;
 iVar3 = std_type_info_operator_eq
 (*(type_info **)((char *)*piVar1 + -4),(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar3 = std_type_info_operator_eq
 (*(type_info **)((char *)*piVar2 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar3 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 pVar4 = __dynamic_cast((void *)*piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (pVar4 != (void *)0) {
 iVar3 = iVar3 + 100;
 }
 pVar4 = __dynamic_cast((void *)*piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar6 = *piVar1;
 if (pVar4 != (void *)0) {
 iVar3 = iVar3 + 200;
 }
    __s = (char *)((char *)iVar6 + -4 + 4);
    if (*__s == '*') {
    __s = __s + 1;
    }
    sVar5 = strlen(__s);
    (*(void (*)(void *))((char *)iVar6 + 4))(piVar1);
    (*(void (*)(void *))((char *)*piVar2 + 4))(piVar2);
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
 std_unique_ptr_int___std__default_delete_int________unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)&local_10);
 std_unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_14);
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
 void **local_24 [2];
 void **local_1c;
 DiamondDerived *local_14;
 unsigned int local_10;
 int local_c;
  local_c = 0;
  local_14 = (DiamondDerived *)PTR_func_00011c54;
  local_24[0] = &PTR_func_00011c20;
 local_1c = &PTR_func_00011c38;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func(local_14);
 local_10 = 100;
 iVar2 = DiamondDerived_func(local_14);
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
 puts(&DAT_00011866);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001188a,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_000118a8,uVar1);
 test_cpp_virtual_func();
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_000118e0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000118fc,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00011919,uVar1);
 test_cpp_template_func();
 test_cpp_template_class();
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_0001196d,uVar1);
 test_cpp_exception();
 __printf_chk(1,&DAT_00011989,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_000119a6,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_000119c3,uVar1);
 return;
}

// Function: Base::virtual_func @ 0x112b0
int Base_virtual_func(Base *this_,int param_1)
{
 (void)this_;
 return param_1 + 1;
}

// Function: Base::getName @ 0x112b8
unsigned char * Base_getName(Base *this_)
{
 (void)this_;
 return (unsigned char *)&DAT_00011854;
}

// Function: Base::~Base @ 0x112c4
void Base__Base(Base *this_)
{
 (void)this_;
 return;
}

// Function: Derived::virtual_func @ 0x112c8
int Derived_virtual_func(Derived *this_,int param_1)
{
 return param_1 * *(int *)(this_ + 4);
}

// Function: Derived::getName @ 0x112d4
char * Derived_getName(Derived *this_)
{
 (void)this_;
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x112e0
unsigned int MultiDerived_funcA(MultiDerived *this_)
{
 (void)this_;
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x112e8
unsigned int MultiDerived_funcB(MultiDerived *this_)
{
 (void)this_;
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x112f0
unsigned int MultiDerived_funcB2(MultiDerived *this_)
{
 (void)this_;
 return 0x28;
}

// Function: VirtualBase::func @ 0x112f8
unsigned int VirtualBase_func(VirtualBase *this_)
{
 (void)this_;
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x11300
void VirtualBase__VirtualBase(VirtualBase *this_)
{
 (void)this_;
 return;
}

// Function: MiddleA::func @ 0x11304
int MiddleA_func(MiddleA *this_)
{
 return *(int *)(this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x1131c
void MiddleA_func2(MiddleA *this_)
{
 MiddleA_func(this_ + *(int *)(*(int *)this_ + -0xc));
 return;
}

// Function: MiddleB::func @ 0x11330
int MiddleB_func(MiddleB *this_)
{
 return *(int *)(this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11348
void MiddleB_func2(MiddleB *this_)
{
 MiddleB_func(this_ + *(int *)(*(int *)this_ + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x1135c
int DiamondDerived_func(DiamondDerived *this_)
{
 return *(int *)(this_ + *(int *)(*(int *)this_ + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11374
void DiamondDerived_func2(DiamondDerived *this_)
{
 DiamondDerived_func(this_ + *(int *)(*(int *)this_ + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x11388
void DiamondDerived_func3(DiamondDerived *this_)
{
 DiamondDerived_func(this_ + -8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x11390
void MiddleA__MiddleA(MiddleA *this_)
{
 *(void ***)this_ = (void **)&PTR_func_00011b2c;
 *(void ***)(this_ + 8) = (void **)&PTR_func_00011b48;
 return;
}

// Function: MiddleA::~MiddleA @ 0x113a8
void MiddleA__MiddleA2(MiddleA *this_)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ + -0x10);
 *(void ***)((char *)this_ + iVar1) = (void **)&PTR_func_00011b2c;
 *(void ***)((char *)this_ + iVar1 + 8) = (void **)&PTR_func_00011b48;
 return;
}

// Function: MiddleB::~MiddleB @ 0x113d0
void MiddleB__MiddleB(MiddleB *this_)
{
 *(void ***)this_ = (void **)&PTR_func_00011b68;
 *(void ***)(this_ + 8) = (void **)&PTR_func_00011b84;
 return;
}

// Function: MiddleB::~MiddleB @ 0x113e8
void MiddleB__MiddleB2(MiddleB *this_)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ + -0x10);
 *(void ***)((char *)this_ + iVar1) = (void **)&PTR_func_00011b68;
 *(void ***)((char *)this_ + iVar1 + 8) = (void **)&PTR_func_00011b84;
 return;
}

// Function: RTTIDerivedA::getType @ 0x11410
unsigned int RTTIDerivedA_getType(RTTIDerivedA *this_)
{
 (void)this_;
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11418
unsigned int RTTIDerivedB_getType(RTTIDerivedB *this_)
{
 (void)this_;
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11420
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 (void)this_;
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11424
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 (void)this_;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11428
void MultiDerived__MultiDerived(MultiDerived *this_)
{
 (void)this_;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1142c
MultiDerived * MultiDerived__MultiDerived2(MultiDerived *this_)
{
 return this_ + -8;
}

// Function: Derived::~Derived @ 0x11434
void Derived__Derived(Derived *this_)
{
 (void)this_;
 return;
}

// Function: Base::~Base @ 0x11438
Base * Base__Base2(Base *this_)
{
 operator_delete(this_,4);
 return this_;
}

// Function: Derived::~Derived @ 0x11450
Derived * Derived__Derived2(Derived *this_)
{
 operator_delete(this_,8);
 return this_;
}

// Function: MultiDerived::~MultiDerived @ 0x11468
MultiDerived * MultiDerived__MultiDerived3(MultiDerived *this_)
{
 operator_delete(this_,0x10);
 return this_;
}

// Function: MultiDerived::~MultiDerived @ 0x11480
void MultiDerived__MultiDerived4(MultiDerived *this_)
{
 MultiDerived__MultiDerived(this_ + -8);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x11488
VirtualBase * VirtualBase__VirtualBase2(VirtualBase *this_)
{
 operator_delete(this_,8);
 return this_;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x114a0
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB2(RTTIDerivedB *this_)
{
 operator_delete(this_,4);
 return this_;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x114b8
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA2(RTTIDerivedA *this_)
{
 operator_delete(this_,4);
 return this_;
}

// Function: MiddleA::~MiddleA @ 0x114d0
MiddleA * MiddleA__MiddleA3(MiddleA *this_)
{
 *(void ***)this_ = (void **)&PTR_func_00011b2c;
 *(void ***)(this_ + 8) = (void **)&PTR_func_00011b48;
 operator_delete(this_,0x10);
 return this_;
}

// Function: MiddleA::~MiddleA @ 0x114fc
void MiddleA__MiddleA4(MiddleA *this_)
{
 MiddleA__MiddleA((MiddleA *)((char *)this_ + *(int *)(*(int *)this_ + -0x10)));
 return;
}

// Function: MiddleB::~MiddleB @ 0x11510
MiddleB * MiddleB__MiddleB3(MiddleB *this_)
{
 *(void ***)this_ = (void **)&PTR_func_00011b68;
 *(void ***)(this_ + 8) = (void **)&PTR_func_00011b84;
 operator_delete(this_,0x10);
 return this_;
}

// Function: MiddleB::~MiddleB @ 0x1153c
void MiddleB__MiddleB4(MiddleB *this_)
{
 MiddleB__MiddleB((MiddleB *)((char *)this_ + *(int *)(*(int *)this_ + -0x10)));
 return;
}

// Function: MiddleA::~MiddleA @ 0x11550
void MiddleA__MiddleA5(MiddleA *this_)
{
 int iVar1;
 iVar1 = *(int *)this_;
 *(int *)this_ = iVar1;
 *(int *)((char *)this_ + *(int *)(iVar1 + -0xc)) = iVar1;
 return;
}

// Function: MiddleB::~MiddleB @ 0x11568
void MiddleB__MiddleB5(MiddleB *this_)
{
 int iVar1;
 iVar1 = *(int *)this_;
 *(int *)this_ = iVar1;
 *(int *)((char *)this_ + *(int *)(iVar1 + -0xc)) = iVar1;
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
void Container_int__Container(Container_int_ *this_)
{
 this_->size = 0;
 return;
}

// Function: Container_int_::Container @ 0x115d0
void Container_int__Container(Container_int_ *this_);

// Function: Container_int_::push @ 0x115dc
void Container_int_push(Container_int_ *this_,int param_1);

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int___std__default_delete_int________unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_);

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int___std__default_delete_int________unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_);

// Function: Container_int_::push @ 0x115dc
void Container_int_push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ + 0x28) = iVar1 + 1;
 this_->data[iVar1] = param_1;
 }
 return;
}

// Function: Container_int_::get @ 0x115f4
unsigned int Container_int_get(Container_int_ *this_,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ + 0x28))) {
 return *(unsigned int *)(this_ + param_1 * 4);
 }
 return 0;
}

// Function: Container_int_::getSize @ 0x11618
unsigned int Container_int_getSize(Container_int_ *this_)
{
 return *(unsigned int *)(this_ + 0x28);
}

// Function: Container_double_::Container @ 0x11620
void Container_double__Container(Container_double_ *this_)
{
 *(unsigned int *)(this_ + 0x50) = 0;
 return;
}

// Function: Container_double_::push @ 0x1162c
void Container_double_push(Container_double_ *this_,double param_1)
{
 int iVar2;
 unsigned int *puVar1;
 unsigned int in_r2;
 unsigned int in_r3;
 (void)param_1;
 iVar2 = *(int *)(this_ + 0x50);
 if (9 < iVar2) {
 return;
 }
 *(int *)(this_ + 0x50) = iVar2 + 1;
 puVar1 = (unsigned int *)((char *)this_ + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 (void)puVar1;
 return;
}

// Function: Container_double_::get @ 0x1164c
unsigned long long Container_double_get(Container_double_ *this_,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ + 0x50))) {
 return *(unsigned long long *)((char *)this_ + param_1 * 8);
 }
 return 0;
}

// Function: Container_double_::getSize @ 0x11678
unsigned int Container_double_getSize(Container_double_ *this_)
{
 return *(unsigned int *)(this_ + 0x50);
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int___std__default_delete_int________unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_);

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int___std__default_delete_int________unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_);

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x11680
unique_ptr_int_std__default_delete_int__ *
std_unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_)
{
 if (*(void **)this_ != (void *)0x0) {
 operator_delete(*(void **)this_,4);
 }
 return this_;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
unique_ptr_int___std__default_delete_int____ *
std_unique_ptr_int___std__default_delete_int________unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_)
{
 if (*(void **)this_ != (void *)0x0) {
 operator_delete__(*(void **)this_);
 }
 return this_;
}

// Function: DiamondDerived::~DiamondDerived @ 0x116c4
DiamondDerived * DiamondDerived__DiamondDerived(DiamondDerived *this_)
{
 *(void **)this_ = (void *)&PTR_func_00011c20;
 *(void **)((char *)this_ + 0x10) = (void *)&PTR_func_00011c54;
 *(void **)((char *)this_ + 8) = (void *)&PTR_func_00011c38;
 MiddleB__MiddleB((MiddleB *)((char *)this_ + 8));
 MiddleA__MiddleA((MiddleA *)this_);
 return this_;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11748
void DiamondDerived__DiamondDerived2(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11754
void DiamondDerived__DiamondDerived3(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ - 8));
 (void)this_;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1175c
void DiamondDerived__DiamondDerived4(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ + *(int *)(*(int *)this_ + -0x10)));
 (void)this_;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11770
DiamondDerived * DiamondDerived__DiamondDerived5(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_);
 operator_delete(this_,0x18);
 return this_;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11790
void DiamondDerived__DiamondDerived6(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ - 8));
 (void)this_;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11798
void DiamondDerived__DiamondDerived7(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)this_ + *(int *)(*(int *)this_ + -0x10)));
 (void)this_;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x117ac
void DiamondDerived__DiamondDerived8(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_);
 return;
}



// Function: _fini @ 0x117b8
void _fini(void)
{
 return;
}

