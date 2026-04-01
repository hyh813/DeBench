#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

/* Stub for C++ std::type_info used in decompiled code */
struct std_type_info {
    const char **vtable;
    const char *_name;
};
typedef struct std_type_info std_type_info;

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
typedef long ptrdiff_t;
typedef unsigned int uint;
#ifndef __cplusplus
typedef unsigned char bool;
#define true 1
#define false 0
#endif
typedef unsigned char undefined3;

/* Helper macro for CONCAT44 decompiler artifact */
#define CONCAT44(a, b) ((long long)(((unsigned long long)(a) << 32) | ((unsigned long long)(b) & 0xFFFFFFFF)))

// External function declarations
int __gmon_start__(void);
void __libc_start_main(void *, int, void *, void *, void *, unsigned long long, void *);
void __cxa_atexit(void *, void *, void *);
void __cxa_finalize(void *);
void __cxa_throw(void *, void *, void *);
void *__cxa_allocate_exception(unsigned long);
void __cxa_begin_catch(void);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void *_Unwind_Resume(void);
void *malloc(unsigned long size);
void free(void *ptr);
int printf(const char *format, ...);
int puts(const char *s);
size_t strlen(const char *s);
int strcmp(const char *s1, const char *s2);
void operator_delete(void *param_1);
void operator_delete__(void *param_1);

// External variables
extern void *__dso_handle;
extern int std___ioinit;
extern char completed_0;

// Forward declarations for classes (must come before function declarations)
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
typedef struct Init Init;

// Forward declarations for undefined functions
int main(int argc, char **argv);
int Base_virtual_func(Base *this, int param_1);
char * Base_getName(void);
void Base__Base(Base *this);
unsigned long long Base__Base_deleting(Base *this);
int Derived_virtual_func(Derived *this, int param_1);
char * Derived_getName(void);
unsigned long long Derived__Derived(Derived *this);
unsigned long long MultiDerived_funcA(void);
unsigned long long MultiDerived_funcB(MultiDerived *this);

int DiamondDerived_func(DiamondDerived *this);
void DiamondDerived__DiamondDerived(DiamondDerived *this);
int DiamondDerived_func_offset(DiamondDerived *this);
unsigned long long DiamondDerived__DiamondDerived_offset(DiamondDerived *this);
int DiamondDerived_func_vbase(DiamondDerived *this);
void DiamondDerived__DiamondDerived_vbase(DiamondDerived *this);
unsigned long long DiamondDerived__DiamondDerived_vbase_deleting(DiamondDerived *this);
void *__dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, ptrdiff_t src2dst_offset)
{
    /* Stub implementation - simplified dynamic_cast */
    /* In real C++, this would perform RTTI checks and offset adjustment */
    if (src_ptr == NULL) return NULL;
    /* For this decompiled code, return the src_ptr if types match or are related */
    if (src_type == dst_type) return (void *)src_ptr;
    /* If src2dst_offset is non-zero, apply it for multiple inheritance */
    if (src2dst_offset != 0) {
        return (void *)((char *)src_ptr + src2dst_offset);
    }
    /* Default: return NULL for failed cast */
    return NULL;
}
int LifecycleClass_instance_count;
unsigned long long BaseA_funcA(void);
void BaseA*__BaseA(BaseA *this);
unsigned long long BaseA__BaseA_deleting(BaseA *this);
unsigned long long BaseB_funcB(void);
void BaseB__BaseB(BaseB *this);
unsigned long long BaseB__BaseB_deleting(BaseB *this);
int MiddleA_func1(MiddleA *this);
int MiddleA_func(MiddleA *this);
unsigned long long MiddleA__MiddleA_deleting(MiddleA *this);
int MiddleB_func1(MiddleB *this);
int MiddleB_func(MiddleB *this);
void MiddleB__MiddleB(MiddleB *this);
unsigned long long VirtualBase_func(void);
unsigned long long RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
unsigned long long RTTIDerivedB_getType(void);
unsigned long long MultiDerived__MultiDerived_deleting_offset(MultiDerived *this);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void Container_int__Container(Container_int_ *this);
void Container_int__push(Container_int_ *this, int param_1);
unsigned int Container_int__get(Container_int_ *this, int param_1);
unsigned int Container_int__getSize(Container_int_ *this);
void Container_double__Container(Container_double_ *this);
void Container_double__push(Container_double_ *this, double param_1);
unsigned long long Container_double__get(Container_double_ *this, int param_1);
unsigned int Container_double__getSize(Container_double_ *this);

// Struct definitions
struct Base {
    void **vtable;
    int data;
};

struct Derived {
    void **vtable;
    int data1;
    int data2;
};

struct MultiDerived {
    void **vtable;
    int data;
};

struct DiamondDerived {
    void **vtable;
    int data;
};

struct BaseA {
    void **vtable;
    int data;
};

struct BaseB {
    void **vtable;
    int data;
};

struct MiddleA {
    void **vtable;
    int data;
};

struct MiddleB {
    void **vtable;
    int data;
};

struct VirtualBase {
    void **vtable;
    int data;
};

struct RTTIBase {
    void **vtable;
    int data;
};

struct RTTIDerivedA {
    void **vtable;
    int data;
};

struct RTTIDerivedB {
    void **vtable;
    int data;
};

struct Container_int_ {
    void **vtable;
    int data[10];
    int size;
};

struct Container_double_ {
    void **vtable;
    double data[10];
    int size;
};

struct Init {
    int data;
};

// Typeinfo placeholders - now defined above

// Data pointer placeholders
void *PTR_virtual_func_001059c8;
void *PTR_virtual_func_00105a08;
void *PTR_funcA_00105a50;
void *PTR_funcB_00105a80;
void *PTR_func_00105b58;
void *PTR_func_00105bc0;
char DAT_001031e1[] = "Testing C++ features";
char DAT_0010307d[] = "Member func: %ld\n";
char DAT_0010309b[] = "Constructor: %ld\n";
char DAT_001030b7[] = "Virtual func: %ld\n";
char DAT_001030d3[] = "Multiple inheritance: %ld\n";
char DAT_001030ef[] = "Diamond inheritance: %ld\n";
char DAT_0010310c[] = "Operator overload: %d\n";
char DAT_00103128[] = "Template func: %d\n";
char DAT_00103144[] = "Template class: %d\n";
char DAT_00103160[] = "Lambda: %d\n";
char DAT_0010317c[] = "Exception: %d\n";
char DAT_00103199[] = "Smart pointer: %d\n";
char DAT_001031b6[] = "RTTI: %d\n";
char DAT_001031d4[] = "";

// Typeinfo vtable for RTTI support
static const char *type_info_vtable[] = {
    (const char *)0x1  // Placeholder for vtable entries
};

// RTTI type_info instances
static const struct std_type_info RTTIBase_typeinfo = {
    (const char **)&type_info_vtable,
    "8RTTIBase"
};

static const struct std_type_info RTTIDerivedA_typeinfo = {
    (const char **)&type_info_vtable,
    "12RTTIDerivedA"
};

static const struct std_type_info RTTIDerivedB_typeinfo = {
    (const char **)&type_info_vtable,
    "12RTTIDerivedB"
};

static const struct std_type_info int_typeinfo = {
    (const char **)&type_info_vtable,
    "i"
};

// Vtable pointers for RTTI classes
static void *PTR__RTTIBase_00105d78 = (void *)&RTTIBase_typeinfo;
static void *PTR__RTTIBase_00105da0 = (void *)&RTTIDerivedB_typeinfo;



// Decompiled by BinaryAI
// SHA256: 263969b977307e8ccb8f5e7a44b341910e0728f726f7e3f0f6cf5ccc074e9d3b

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x102030
void * operator_new__(unsigned long param_1)
{
 extern void *malloc(unsigned long size);
 return malloc(param_1);
}

// Function: <EXTERNAL>::printf @ 0x102040
// printf is provided by libc

// Function: <EXTERNAL>::__cxa_begin_catch is external

// Function: <EXTERNAL>::strlen @ 0x102060
// strlen is provided by libc

// Function: <EXTERNAL>::__cxa_allocate_exception is external

// Function: <EXTERNAL>::__cxa_atexit is external

// Function: <EXTERNAL>::operator.delete @ 0x102090
void operator_delete(void *param_1)
{
 extern void free(void *ptr);
 free(param_1);
}

// Function: <EXTERNAL>::operator.new @ 0x1020a0
void * operator_new(unsigned long param_1)
{
 extern void *malloc(unsigned long size);
 return malloc(param_1);
}

// Function: <EXTERNAL>::__dynamic_cast is external

// Function: <EXTERNAL>::operator.delete[] @ 0x1020c0
void operator_delete__(void *param_1)
{
 extern void free(void *ptr);
 free(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x1020d0
// strcmp is provided by libc

// Function: <EXTERNAL>::__cxa_rethrow is external

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1020f0
void std_ios_base_Init_Init(void *this)
{
 // std::ios_base::Init constructor - placeholder
}

// Function: <EXTERNAL>::puts @ 0x102100
// puts is provided by libc

// Function: <EXTERNAL>::__cxa_end_catch is external

// Function: <EXTERNAL>::__cxa_throw @ 0x102120
// __cxa_throw is provided by libstdc++

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102130
// _Unwind_Resume is provided by libgcc

// Function: <EXTERNAL>::__cxa_finalize is external

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x102150
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void *)std_ios_base_Init_Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x102180
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&auStack_8,0,0,param_1,auStack_8);
 do {
 } while( true );
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
 undefined3 uStack_14;
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
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x102320
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_20;
 unsigned int local_18;
 char **local_10;
 local_10 = &PTR_virtual_func_001059c8;
 local_20 = (void **)&PTR_virtual_func_00105a08;
 local_18 = 3;
 iVar1 = Base_virtual_func((Base *)&local_10,5);
 iVar2 = (**local_20)(&local_20,5);
 return iVar2 + iVar1 + 0x15;
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
 iVar2 = (int)(**local_20)(&local_20);
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
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_20);
 local_18 = 100;
 iVar2 = (int)(**local_20)(&local_20);
 return iVar2 + iVar1;
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
int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0;
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
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 bool bVar8;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIBase_00105d78;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00105da0;
 __s1 = *(char **)(*(long *)(*plVar3 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
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
 __s1_00 = *(char **)(*(long *)(*plVar4 + -8) + 8);
 if (__s1_00 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else if (*__s1_00 == '*') {
 bVar8 = false;
 }
 else {
 iVar2 = strcmp(__s1_00,"12RTTIDerivedB");
 bVar8 = iVar2 == 0;
 }
 uVar1 = uVar7 | 0x14;
 if (!bVar8) {
 uVar1 = uVar7;
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 uVar7 = uVar1 + 100;
 if (lVar5 == 0) {
 uVar7 = uVar1;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(void **)(*plVar3 + 8))(plVar3);
 (**(void **)(*plVar4 + 8))(plVar4);
 return (int)sVar6 + uVar1;
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
 puts(&DAT_001031e1);
 auStack_40[0] = 0;
 auStack_40[1] = 0;
 auStack_40[2] = 0;
 auStack_40[3] = 0;
 local_30 = 0;
 uStack_2c = 0;
 local_28 = 0;
 local_48 = (char **)0x747365540000000a;
 sVar3 = strlen((char *)((long)&local_48 + 4));
 lVar7 = 0;
 printf(&DAT_0010307d,(unsigned long)((int)sVar3 + 0x125c));
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
 printf(&DAT_0010309b,(unsigned long)(uint)(LifecycleClass_instance_count * 1000 + iVar6));
 local_18 = &PTR_virtual_func_001059c8;
 local_48 = &PTR_virtual_func_00105a08;
 auStack_40[0] = 3;
 iVar6 = Base_virtual_func((Base *)&local_18,5);
 iVar1 = (*(void *)*local_48)(&local_48,5);
 printf(&DAT_001030b7,(unsigned long)(iVar6 + iVar1 + 0x15));
 local_48 = &PTR_funcA_00105a50;
 auStack_40[2] = 0x105a80;
 auStack_40[3] = 0;
 auStack_40[0] = 100100;
 local_30 = 200;
 iVar6 = MultiDerived_funcB((MultiDerived *)(auStack_40 + 2));
 printf(&DAT_001030d3,(unsigned long)(iVar6 + 0x1f));
 local_48 = &PTR_func_00105b58;
 local_28 = 0x105bc0;
 uStack_24 = 0;
 auStack_40[2] = 0x105b88;
 auStack_40[3] = 0;
 local_20 = 0x32;
 iVar6 = DiamondDerived_func((DiamondDerived *)&local_28);
 *(unsigned int *)((long)auStack_40 + (long)local_48[-3]) = 100;
 iVar1 = (**(void **)CONCAT44(uStack_24,local_28))(&local_28);
 printf(&DAT_001030ef,(unsigned long)(uint)(iVar6 + iVar1));
 printf(&DAT_0010310c,0x16);
 printf(&DAT_00103128,0x27);
 printf(&DAT_00103144,0x10);
 printf(&DAT_00103160,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_0010317c,(unsigned long)uVar2);
 printf(&DAT_00103199,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_001031b6,(unsigned long)uVar2);
 return;
}

// Function: main @ 0x1028f0
int main(int argc, char **argv)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x102900
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x102910
int Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)((char *)this + 8);
}

// Function: Base::~Base @ 0x102920
void Base__Base(Base *this)
{
 return;
}



// Function: DiamondDerived::~DiamondDerived @ 0x102940
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

// Function: Container<int>::Container @ 0x102980
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x102990
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1029b0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1029d0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1029e0
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1029f0
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x102a10
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102a30
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base::getName @ 0x102a40
char * Base_getName(void)
{
 return &DAT_001031e1[0];
}

// Function: Base::~Base @ 0x102a50
unsigned long long Base__Base_deleting(Base *this)
{
 operator_delete(this);
 return 0;
}

// Function: Derived::getName @ 0x102a60
char * Derived_getName(void)
{
 return "Derived";
}

// Function: Derived::~Derived @ 0x102a70
unsigned long long Derived__Derived(Derived *this)
{
 operator_delete(this);
 return 0;
}

// Function: MultiDerived::funcA @ 0x102a80
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x102a90
unsigned long long MultiDerived__MultiDerived_deleting(MultiDerived *this)
{
 operator_delete(this);
 return 0;
}



// Function: MultiDerived::funcB @ 0x102ab0
unsigned long long MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x102ac0
void MultiDerived__MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::MultiDerived @ 0x102ac5
unsigned long long MultiDerived__MultiDerived(MultiDerived *this)
{
 return 0;
}

// Function: MultiDerived::~MultiDerived @ 0x102ad0
unsigned long long MultiDerived__MultiDerived_deleting_offset(MultiDerived *this)
{
 unsigned long long in_RAX;
 operator_delete(this + -0x10);
 return in_RAX;
}

// Function: BaseA::funcA @ 0x102ae0
unsigned long long BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x102af0
void BaseA__BaseA(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x102b00
unsigned long long BaseA__BaseA_deleting(BaseA *this)
{
 operator_delete(this);
 return 0;
}

// Function: BaseB::funcB @ 0x102b10
unsigned long long BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x102b20
void BaseB__BaseB(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x102b30
unsigned long long BaseB__BaseB_deleting(BaseB *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleA::func @ 0x102b40
int MiddleA_func1(MiddleA *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102b70
unsigned long long MiddleA__MiddleA_deleting(MiddleA *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleA::func @ 0x102b80
int MiddleA_func(MiddleA *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102ba0
void MiddleA__MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x102bb0
unsigned long long MiddleA__MiddleA_deleting(MiddleA *this)
{
 operator_delete((char *)this + *(long *)(*(long *)this + -0x20));
 return 0;
}

// Function: MiddleB::func @ 0x102bc0
int MiddleB_func1(MiddleB *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x102bf0
unsigned long long MiddleB__MiddleB_deleting(MiddleB *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleB::func @ 0x102c00
int MiddleB_func(MiddleB *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 200;
}

// Function: MiddleB::~MiddleB @ 0x102c20
void MiddleB__MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x102c30
unsigned long long MiddleB__MiddleB_deleting(MiddleB *this)
{
 operator_delete((char *)this + *(long *)(*(long *)this + -0x20));
 return 0;
;
}

// Function: MiddleB::MiddleB @ 0x102c35
void MiddleB__MiddleB(MiddleB *this)
{
 return;
}

// Function: DiamondDerived::func @ 0x102c40
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102c60
unsigned long long DiamondDerived__DiamondDerived_deleting(DiamondDerived *this)
{
 operator_delete(this);
 return 0;
}

// Function: DiamondDerived::func @ 0x102c70
int DiamondDerived_func_offset(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ca0
unsigned long long DiamondDerived__DiamondDerived_offset(DiamondDerived *this)
{
 operator_delete(this + -0x10);
 return 0;
}

// Function: DiamondDerived::func @ 0x102cb0
int DiamondDerived_func_vbase(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102cd0
void DiamondDerived__DiamondDerived_vbase(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ce0
unsigned long long DiamondDerived__DiamondDerived_vbase_deleting(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return 0;
}

// Function: VirtualBase::func @ 0x102cf0
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102d00
void VirtualBase__VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102d10
unsigned long long VirtualBase__VirtualBase_deleting(VirtualBase *this)
{
 operator_delete(this);
 return 0;
}

// Function: VirtualBase::VirtualBase @ 0x102d15
void VirtualBase__VirtualBase(VirtualBase *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102d20
unsigned long long RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return 0;
}

// Function: RTTIDerivedA::getType @ 0x102d30
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x102d40
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102d50
unsigned long long RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return 0;
}

// Function: RTTIDerivedB::getType @ 0x102d60
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x102d68
void _fini(void)
{
 return;
}

