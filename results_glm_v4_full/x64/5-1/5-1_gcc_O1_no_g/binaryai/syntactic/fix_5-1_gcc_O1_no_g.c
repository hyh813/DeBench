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
typedef unsigned int uint;

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

// Global variables used for stack checking
extern long in_FS_OFFSET;

// Decompiled by BinaryAI
// SHA256: da4f897e564b424c59aa78cb325dfd688a2cabdabec03a89c0318597841d4cc1

/* Forward declarations for C++ classes */
/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct LifecycleClass;
struct MultiDerived;
struct DiamondDerived {
    void **vtable;
    int data;
};
struct MiddleA;
struct MiddleB;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
template<typename T> struct Container;
struct Init;

/* Forward declarations for functions */
int main(void);
int DiamondDerived_func_1(DiamondDerived *_this);
int DiamondDerived_func_2(DiamondDerived *_this);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
int Base_virtual_func(Base *_this,int param_1);
int Derived_virtual_func(Derived *_this,int param_1);

/* Global variables */
extern char completed_0;
extern void *__dso_handle;
int LifecycleClass_instance_count = 0;
extern struct Init std___ioinit;

/* Virtual function pointers */
extern void *PTR_virtual_func_001059a0[1];
extern void *PTR_virtual_func_001059d0[1];

// Define vtable pointers for Base and Derived
void *PTR_virtual_func_001059a0[1] = { (void*)Base_virtual_func };
void *PTR_virtual_func_001059d0[1] = { (void*)Derived_virtual_func };
extern struct typeinfo_int RTTIDerivedA_typeinfo;
extern struct typeinfo_int RTTIDerivedB_typeinfo;
void *PTR__RTTIDerivedA_00105ba0[3] = { &RTTIDerivedA_typeinfo, 0, 0 };
void *PTR__RTTIDerivedB_00105bc8[3] = { &RTTIDerivedB_typeinfo, 0, 0 };
extern void *PTR_DAT_00103004;
char DAT_00103004[] = "Base";
char DAT_00103018[] = "Testing C++ features:";
char DAT_0010303c[] = "  Member function test: %d\n";
char DAT_0010305a[] = "  Constructor test: %d\n";
char DAT_00103076[] = "  Virtual Virtual function test: %d\n";
char DAT_00103092[] = "  Multiple inheritance test: %llu\n";
char DAT_001030ae[] = "  Diamond inheritance test: %d\n";
char DAT_001030cb[] = "  Operator overload test: %llu\n";
char DAT_001030e7[] = "  Template function test: %d\n";
char DAT_00103103[] = "  Template class test: %llu\n";
char DAT_0010311f[] = "  Lambda test: %llu\n";
char DAT_0010313b[] = "  Exception test: %d\n";
char DAT_00103158[] = "  Smart pointer test: %llu\n";
char DAT_00103175[] = "  RTTI test: %d\n";

/* Type info structures */
struct type_info {
    const char *name;
};

struct typeinfo_int {
    struct type_info _base;
};

struct typeinfo_int int__typeinfo = { "i" };
struct typeinfo_int RTTIBase_typeinfo = { "8RTTIBase" };
struct typeinfo_int RTTIDerivedA_typeinfo = { "12RTTIDerivedA" };
struct typeinfo_int RTTIDerivedB_typeinfo = { "12RTTIDerivedB" };

/* Template class type aliases */
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

// Function: _init @ 0x102000
int _init(void *ctx)
{
 return 0;
}

// Function: FUN_00102020 @ 0x102020
typedef void (*void_func_ptr)(void);

void FUN_00102020(void)
{
 ((void_func_ptr)(void*)0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102150
extern void __cxa_finalize(void *dso_handle);

extern void __libc_start_main(int (*main)(void), int argc, char **argv, 
                                int (*init)(void), void (*fini)(void), 
                                void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::__printf_chk @ 0x102160
extern int __printf_chk(int flag, const char *format, ...);

// Function: <EXTERNAL>::operator.new[] @ 0x102170
void * operator_new__(unsigned long param_1)
{
 extern void *operator new[](unsigned long);
 return operator new[](param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102180
extern void *__cxa_begin_catch(void);

// Function: <EXTERNAL>::strlen @ 0x102190
size_t strlen(const char *__s)
{
    size_t len = 0;
    if (__s) {
        while (__s[len]) len++;
    }
    return len;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1021a0
void *__cxa_allocate_exception(unsigned long size)
{
    return malloc(size);
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1021b0
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

// Function: <EXTERNAL>::operator.new @ 0x1021c0
extern void *operator new(unsigned long size);

// Function: <EXTERNAL>::operator.delete @ 0x1021d0
void operator_delete(void *param_1)
{
 ::operator delete(param_1);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1021e0
extern void __stack_chk_fail(void);

// Function: <EXTERNAL>::__dynamic_cast @ 0x1021f0
void *__dynamic_cast(void *ptr, const struct type_info *src, const struct type_info *dst, int offset)
{
    // Stub implementation - return ptr if types match, NULL otherwise
    if (src == dst || src == NULL || dst == NULL) {
        return ptr;
    }
    return NULL;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102200
extern void operator delete[](void *ptr);

// Function: <EXTERNAL>::strcmp @ 0x102210
int strcmp(const char *__s1, const char *__s2)
{
    if (!__s1 || !__s2) return -1;
    while (*__s1 && *__s1 == *__s2) {
        __s1++;
        __s2++;
    }
    return *(const unsigned char *)__s1 - *(const unsigned char *)__s2;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x102220
extern void __cxa_rethrow(void);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x102230
extern void std_ios_base_Init_Init(Init *_this);

// Function: <EXTERNAL>::puts @ 0x102240
extern int puts(const char *__s);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102250
extern void __cxa_end_catch(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x102260
extern void __cxa_throw(void *obj, struct type_info *tinfo, void *dest);

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102270
void _Unwind_Resume(void *exception)
{
    // Stub implementation for exception resume
    while (1);
}

// Implementations for external library functions

void __cxa_throw(void *obj, struct type_info *tinfo, void *dest)
{
    // Stub implementation for exception throwing
    _Unwind_Resume(obj);
}

int __printf_chk(int flag, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int ret = vprintf(format, args);
    va_end(args);
    return ret;
}

void __stack_chk_fail(void)
{
    // Stub implementation for stack check failure
    while (1);
}

int puts(const char *__s)
{
    return printf("%s\n", __s);
}

// Function: register_tm_clones @ 0x1022e0
void register_tm_clones(void)
{
 return;
}



// Function: test_cpp_member_func @ 0x102369
int test_cpp_member_func(void)
{
 size_t sVar1;
 long in_FS_OFFSET;
 unsigned long long local_34;
 unsigned long long local_2c;
 unsigned long long local_24;
 unsigned int local_1c;
 unsigned short local_18;
 char local_16;
 char local_15;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_16 = 0;
 local_15 = 0;
 sVar1 = strlen((char *)&local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x1023de
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
 operator delete(pvVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar1;
}

// Function: call_virtual_func @ 0x10243c
typedef int (*virtual_func_ptr)(void *_this, int param);

int call_virtual_func(Base *param_1,int param_2)
{
 return ((virtual_func_ptr)(**(void ***)param_1))(param_1, param_2);
}

// Function: test_cpp_virtual_func @ 0x10244e
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 void **local_30;
 void **local_28;
 unsigned int local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = PTR_virtual_func_001059a0;
 local_28 = PTR_virtual_func_001059d0;
 local_20 = 3;
 iVar1 = call_virtual_func((Base *)local_30,5);
 iVar2 = call_virtual_func((Base *)local_28,5);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + 0x15 + iVar2;
 }
 __stack_chk_fail();
}

// Function: test_cpp_multiple_inheritance @ 0x1024c6
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1024d0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned long long local_38;
 unsigned int local_30;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_38 = (unsigned long long)0x105b78;
 local_30 = 0x32;
 iVar1 = DiamondDerived_func_1((DiamondDerived *)&local_38);
 local_30 = 100;
 iVar2 = DiamondDerived_func_2((DiamondDerived *)&local_38);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + iVar1;
 }
 __stack_chk_fail();
}

// Function: test_cpp_operator_overload @ 0x10254c
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x102556
int test_cpp_template_func(void)
{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int_(&local_18,&local_14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x1025e5
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1025ef
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1025f9
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int__typeinfo._base,0);
}

// Function: test_cpp_smart_ptr @ 0x1026d1
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1026db
int test_cpp_rtti(void)
{
 void *lVar1;
 char *sVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 void *pvVar5;
 size_t sVar6;
 uint uVar7;
 void **pvVar8;
 struct type_info *pti;
 plVar3 = (long *)operator_new__(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105ba0;
 plVar4 = (long *)operator_new__(8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc8;
 lVar1 = (void *)*plVar3;
 pvVar8 = (void **)(*plVar3);
 pti = (struct type_info *)pvVar8[0];
 sVar1 = (char *)pti->name;
 uVar7 = 10;
 if ((sVar1 != (char *)"12RTTIDerivedA") && (uVar7 = 0, *sVar1 != '*')) {
 iVar2 = strcmp(sVar1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 pvVar5 = __dynamic_cast(plVar3,&RTTIBase_typeinfo._base,&RTTIDerivedA_typeinfo._base,0);
 iVar2 = uVar7 + 0x14;
 if (pvVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 pvVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo._base,&RTTIDerivedB_typeinfo._base,0);
 if (pvVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(sVar1 + ((*sVar1 == '*') ? 1 : 0));
 ((void (*)(void *))(*(void **)((char *)(uintptr_t)plVar3 + 8)))(plVar3);
 ((void (*)(void *))(*(void **)((char *)(uintptr_t)plVar4 + 8)))(plVar4);
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x102801
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 uVar1 = puts(DAT_00103018);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303c,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_0010305a,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00103092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ae,uVar1);
 __printf_chk(1,DAT_001030cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e7,uVar1);
 __printf_chk(1,DAT_00103103,0x10);
 __printf_chk(1,DAT_0010311f,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_0010313b,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103158,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103175,uVar1);
}

// Function: main @ 0x102970
int main(void)
{
 test_cpp_oo_features();
 return 0;
}


// Function: Base::virtual_func @ 0x1029b4
int Base_virtual_func(Base *_this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1029bc
char * Base_getName(void)
{
 return DAT_00103004;
}

// Function: Base::~Base @ 0x1029c8
void Base__Base(Base *self)
{
 return;
}

// Function: Derived::virtual_func @ 0x1029ce
int Derived_virtual_func(Derived *_this,int param_1)
{
 return param_1 * *(int *)((char *)_this + 8);
}

// Function: Derived::getName @ 0x1029da
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x1029e6
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1029f0
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1029fa
unsigned long long MultiDerived_funcB_2(MultiDerived *_this, int param_1)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x102a04
int MiddleA_func_1(MiddleA *_this)
{
 return *(int *)((char *)_this + *(long *)((char *)_this + *(long *)(*(long *)_this + -0x18) + 8) + 0x96);
}

// Function: MiddleA::func @ 0x102a19
int MiddleA_func_2(MiddleA *_this, int param_1)
{
 long *vtable_ptr;
 long base_offset;
 vtable_ptr = *(long **)_this;
 base_offset = vtable_ptr[-6];
 return *(int *)((char *)_this + base_offset) + 0x96;
}

// Function: MiddleB::func @ 0x102a36
int MiddleB_func_1(MiddleB *_this)
{
 return *(int *)((char *)_this + *(long *)((char *)_this + *(long *)(*(long *)_this + -0x18) + 8)) + 200;
}

// Function: MiddleB::func @ 0x102a4b
int MiddleB_func_2(MiddleB *_this, int param_1)
{
 long *vtable_ptr;
 long base_offset;
 vtable_ptr = *(long **)_this;
 base_offset = vtable_ptr[-6];
 return *(int *)((char *)_this + base_offset) + 200;
}

// Function: DiamondDerived::func @ 0x102a68
int DiamondDerived_func_1(DiamondDerived *_this)
{
 return *(int *)((char *)_this + *(long *)((char *)_this + *(long *)(*(long *)_this + -0x18) + 8)) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102a7d
int DiamondDerived_func_2(DiamondDerived *_this)
{
 long *vtable_ptr;
 long base_offset;
 vtable_ptr = *(long **)_this;
 base_offset = vtable_ptr[-6];
 return *(int *)((char *)_this + base_offset) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102a99
int DiamondDerived_func_3(DiamondDerived *_this, int param_1)
{
 return *(int *)((char *)_this + *(long *)((char *)_this + *(long *)((char *)((void *)_this - 0x10) - 0x18) + -8)) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x102ab0
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x102aba
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102ac4
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102aca
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ad0
void DiamondDerived__DiamondDerived_1(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ad5
void DiamondDerived__DiamondDerived_2(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ada
void DiamondDerived__DiamondDerived_3(DiamondDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102ae0
void MultiDerived__MultiDerived_1(MultiDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102ae5
void MultiDerived__MultiDerived_2(MultiDerived *self)
{
 return;
}

// Function: Derived::~Derived @ 0x102aea
void Derived__Derived(Derived *self)
{
 return;
}

// Function: Base::~Base @ 0x102af0
void Base__Base_1(Base *self)
{
 operator_delete(self);
 return;
}

// Function: Derived::~Derived @ 0x102b08
void Derived__Derived_1(Derived *self)
{
 operator_delete(self);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102b20
void MultiDerived__MultiDerived_3(MultiDerived *self)
{
 operator_delete(self);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102b37
void MultiDerived__MultiDerived_4(MultiDerived *self)
{
 operator_delete((char *)self - 0x10);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102b52
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *self)
{
 operator_delete(self);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102b6a
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *self)
{
 operator_delete(self);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102b82
void DiamondDerived__DiamondDerived_4(DiamondDerived *self)
{
 operator_delete(self);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102b99
void DiamondDerived__DiamondDerived_5(DiamondDerived *self)
{
 operator_delete((char *)self + *(long *)(*(long *)self + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102bb7
void DiamondDerived__DiamondDerived_6(DiamondDerived *self)
{
 operator_delete((char *)self - 0x10);
 return;
}

// Function: template_max<int> @ 0x102bd2
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x102bde
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102be7
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x102bf4
void Container_int__Container(Container_int_ *_this)
{
 *(unsigned int *)((char *)_this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x102c00
void Container_int__push(Container_int_ *_this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)_this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)_this + 0x28) = iVar1 + 1;
 *(int *)((char *)_this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x102c18
unsigned int Container_int__get(Container_int_ *_this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)_this + 0x28) != param_1 && param_1 <= *(int *)((char *)_this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)_this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x102c34
unsigned int Container_int__getSize(Container_int_ *_this)
{
 return *(unsigned int *)((char *)_this + 0x28);
}

// Function: Container<double>::Container @ 0x102c3c
void Container_double__Container(Container_double_ *_this)
{
 *(unsigned int *)((char *)_this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102c48
void Container_double__push(Container_double_ *_this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)_this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)_this + 0x50) = iVar1 + 1;
 *(double *)((char *)_this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x102c62
unsigned long long Container_double__get(Container_double_ *_this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)_this + 0x50) != param_1 && param_1 <= *(int *)((char *)_this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)_this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102c7e
unsigned int Container_double__getSize(Container_double_ *_this)
{
 return *(unsigned int *)((char *)_this + 0x50);
}

// Function: _fini @ 0x102c88
void _fini(void)
{
 return;
}
