#pragma clang diagnostic ignored "-Wgnu"
#pragma clang diagnostic ignored "-Wpointer-arith"
#pragma clang diagnostic ignored "-Wcast-function-type"
#pragma clang diagnostic ignored "-Wstrict-prototypes"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
#include <inttypes.h>

/* Non-conflicting type definitions */
typedef unsigned int uint;
typedef unsigned int undefined;

/* Boolean constants for C compatibility */
#ifndef true
#define true 1
#define false 0
#endif

/* Type definitions for C++ classes */
typedef struct Base Base;
typedef struct Init Init;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct LifecycleClass LifecycleClass;

/* Undefined types commonly used in decompiled code */
typedef unsigned int undefined;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
struct undefined3_struct { unsigned char bytes[3]; };
typedef struct undefined3_struct undefined3;

/* Forward declarations of undefined structures */
struct Init {
    int _dummy;
};

struct Base {
    void **vtable;
};

struct Container_int_ {
    int data[10];
    char _padding1[8];
    int size;
};

struct Container_double_ {
    double data[10];
    char _padding2[4];
    int size;
};

struct RTTIDerivedA {
    void **vtable;
};

struct RTTIDerivedB {
    void **vtable;
};

/* LifecycleClass structure */
struct LifecycleClass {
    int instance_count;
};



/* External function declarations */
extern void __libc_start_main(int (*)(int,char **,char **), int, char **, void (*)(), void (*)(), void *, void *);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, const void *, void (*)(void *));
extern void *__dynamic_cast(void *, const void *, const void *, int);
extern void __cxa_atexit(void (*)(void *), void *, void *);
extern void __cxa_finalize(void *);
extern void __cxa_end_catch(void);

/* Stub implementation for __gmon_start__ (profiling initialization) */
int __gmon_start__(void) {
    return 0;
}

/* Forward declaration of main for _start */
int main(int argc, char **argv, char **envp);

/* C++ runtime functions */
void *operator_new(size_t size);
void operator_delete(void *ptr);

void *operator_new__(size_t size) 
{ 
 return operator_new(size); 
}
void operator_delete__(void *ptr) 
{ 
 operator_delete(ptr); 
}

/* Actual implementations of operator new/delete */
void *operator_new(size_t size) {
    return malloc(size);
}

void operator_delete(void *ptr) {
    free(ptr);
}

/* Provide the symbols expected by C++ code */
#define new operator_new
#define delete operator_delete

/* Function pointer typedef for virtual functions */
typedef void (*VirtualFunc)(void*);



/* C++ class/destructor forward declarations */

void std_ios_base_Init_Init(void *this);

/* Stub implementation for std::ios_base::Init destructor */
void std_ios_base_Init__Init(void *this)
{
 return;
}

/* Global variable declarations */
char std__ioinit;
char __dso_handle;
char completed_0 = 0;

/* Typeinfo structures for RTTI */
typedef struct {
    const char *name;
    void *base_typeinfo;
} type_info_struct;

/* Typeinfo instances */
type_info_struct typeinfo_RTTIBase = { "RTTIBase", NULL };
type_info_struct typeinfo_RTTIDerivedA = { "RTTIDerivedA", &typeinfo_RTTIBase };
type_info_struct typeinfo_RTTIDerivedB = { "RTTIDerivedB", &typeinfo_RTTIBase };

/* Vtable pointers pointing to typeinfo */
void *PTR__RTTIBase_00103d78 = &typeinfo_RTTIBase;
void *PTR__RTTIBase_00103da0 = &typeinfo_RTTIDerivedB;
char *DAT_001021d4 = "test_cpp_oo_features: %s\n";
char *DAT_0010207d = "test_cpp_member_func: %lu\n";
char *DAT_0010209b = "test_cpp_constructor: %lu\n";
char *DAT_001020b7 = "test_cpp_virtual_func: %lu\n";
char *DAT_001020d3 = "test_cpp_multiple_inheritance: %lu\n";
char *DAT_001020ef = "test_cpp_diamond_inheritance: %lu\n";
char *DAT_0010210c = "test_cpp_operator_overload: %lu\n";
char *DAT_00102128 = "test_cpp_template_func: %lu\n";
char *DAT_00102144 = "test_cpp_template_class: %lu\n";
char *DAT_00102160 = "test_cpp_lambda: %lu\n";
char *DAT_0010217c = "test_cpp_exception: %lu\n";
char *DAT_00102199 = "test_cpp_smart_ptr: %lu\n";
char *DAT_001021b6 = "test_cpp_rtti: %lu\n";

/* LifecycleClass static member */
int LifecycleClass_instance_count = 0;

/* Typeinfo placeholders */
char int_typeinfo;
char RTTIBase_typeinfo;
char RTTIDerivedA_typeinfo;
char RTTIDerivedB_typeinfo;

#define int_typeinfo_ref (&int_typeinfo)
#define RTTIBase_typeinfo_ref (&RTTIBase_typeinfo)
#define RTTIDerivedA_typeinfo_ref (&RTTIDerivedA_typeinfo)
#define RTTIDerivedB_typeinfo_ref (&RTTIDerivedB_typeinfo)

/* Additional typeinfo references */
#define int__typeinfo int_typeinfo
#define RTTIBase__typeinfo RTTIBase_typeinfo
#define RTTIDerivedA__typeinfo RTTIDerivedA_typeinfo
#define RTTIDerivedB__typeinfo RTTIDerivedB_typeinfo

// Decompiled by BinaryAI
// SHA256: ab9bb528a91221b32fa049eb4a600782fb1f0b2bb8f2b86bec46db2198bcdfaf

// Function: _init @ 0x101000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}



// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010e0
void std_ios_base_Init_Init(void *this)
{
 /* Stub implementation - actual initialization handled elsewhere */
 return;
}

// Function: <EXTERNAL>::puts @ 0x1010f0
int puts_impl(char *__s)
{
 return puts(__s);
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101100
void __cxa_end_catch_impl(void)
{
 __cxa_end_catch();
 return;
}



// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)&std__ioinit);
 __cxa_atexit((void*)std_ios_base_Init__Init,&std__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101170
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char **argv;
 char **envp;
 argv = (char **)(param_2 + 8);
 envp = (char **)((char *)argv + (long)param_2 + 1);
 __libc_start_main((int (*)(int,char **,char **))&main,(int)param_2,argv,0,0,param_1,envp);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1011a0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011d0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101210
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

// Function: test_cpp_member_func @ 0x10125c
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
 uStack_14.bytes[0] = 0;
 uStack_14.bytes[1] = 0;
 uStack_14.bytes[2] = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 local_5 = 0;
 sVar1 = strlen((char *)&local_24);
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101294
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

// Function: call_virtual_func @ 0x1012e5
void call_virtual_func(Base *param_1,int param_2)
{
 void (*vfunc)(void*) = (void (*)(void*))(*(void **)param_1);
 vfunc(param_1);
 return;
}

// Function: test_cpp_virtual_func @ 0x1012ed
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x1012f3
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1012f9
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1012ff
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101305
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x10130b
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101311
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101317
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo_ref,0);
}

// Function: test_cpp_smart_ptr @ 0x1013d7
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013dd
int test_cpp_rtti(void)
{
 int iVar1;
 void **puVar2;
 void **plVar3;
 void *lVar4;
 int iVar5;
 puVar2 = (void **)operator_new(8);
 *puVar2 = &PTR__RTTIBase_00103d78;
 plVar3 = (void **)operator_new(8);
 *plVar3 = &PTR__RTTIBase_00103da0;
 lVar4 = __dynamic_cast(puVar2,RTTIBase_typeinfo_ref,RTTIDerivedA_typeinfo_ref,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = __dynamic_cast(plVar3,RTTIBase_typeinfo_ref,RTTIDerivedB_typeinfo_ref,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 operator_delete(puVar2);
 (**(void ***)plVar3)(plVar3);
 operator_delete(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10147f
void test_cpp_oo_features(void)
{
 uint uVar1;
 size_t sVar2;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 undefined3 uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 puts(DAT_001021d4);
 uStack_14.bytes[0] = 0;
 uStack_14.bytes[1] = 0;
 uStack_14.bytes[2] = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 local_5 = 0;
 sVar2 = strlen((char *)&local_24);
 printf(DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(DAT_0010209b,(unsigned long)uVar1);
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 test_cpp_exception();
 uVar1 = 0;
 printf(DAT_0010217c,(unsigned long)uVar1);
 printf(DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 printf(DAT_001021b6,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1015a8
int main(int argc,char **argv,char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1015b2
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1015ba
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1015bf
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1015c8
void Container_int__Container_(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1015d0
void Container_int__push_(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1015e4
unsigned int Container_int__get_(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1015f6
unsigned int Container_int__getSize_(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x1015fa
void Container_double__Container_(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101602
void Container_double__push_(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101618
unsigned long long Container_double__get_(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10162c
unsigned int Container_double__getSize_(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101630
void RTTIDerivedA___dtor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101636
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10163c
void RTTIBase___dtor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10163e
void RTTIDerivedB___dtor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101644
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x10164c
void _fini(void)
{
 return;
}

