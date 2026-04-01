#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stddef.h>
#include <unistd.h>
#include <stdbool.h>
#include <errno.h>
#include <stdarg.h>

// Type definitions for decompiled code
typedef unsigned int undefined3;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned long undefined4;
typedef unsigned long long undefined8;

// Forward declarations for classes
typedef struct Init Init;
typedef struct Base Base;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct LifecycleClass LifecycleClass;

// Struct definitions
struct Init {
    char data[64];
};

struct Base {
    void *vtable;
};

struct RTTIBase {
    void *vtable;
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

struct Container_int_ {
    char data[64];
};

struct Container_double_ {
    char data[128];
};

struct LifecycleClass {
    char data[64];
};

// External variable declarations
extern void *__dso_handle;
extern char completed_0;
extern Init std_ioinit;
extern int LifecycleClass_instance_count;
extern void *PTR__RTTIBase_00103d78;
extern void *PTR__RTTIBase_00103da0;
extern char DAT_001021d4[];
extern char DAT_0010207d[];
extern char DAT_0010209b[];
extern char DAT_001020b7[];
extern char DAT_001020d3[];
extern char DAT_001020ef[];
extern char DAT_0010210c[];
extern char DAT_00102128[];
extern char DAT_00102144[];
extern char DAT_00102160[];
extern char DAT_0010217c[];
extern char DAT_00102199[];
extern char DAT_001021b6[];
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *int_typeinfo;

// Stub definitions for external data (for compilation)
char DAT_001021d4[] = "Testing C++ OO features\n";
char DAT_0010207d[] = "test_cpp_member_func result: %d\n";
char DAT_0010209b[] = "test_cpp_constructor result: %d\n";
char DAT_001020b7[] = "test_cpp_virtual_func result: %d\n";
char DAT_001020d3[] = "test_cpp_multiple_inheritance result: %d\n";
char DAT_001020ef[] = "test_cpp_diamond_inheritance result: %d\n";
char DAT_0010210c[] = "test_cpp_operator_overload result: %d\n";
char DAT_00102128[] = "test_cpp_template_func result: %d\n";
char DAT_00102144[] = "test_cpp_template_class result: %d\n";
char DAT_00102160[] = "test_cpp_lambda result: %d\n";
char DAT_0010217c[] = "test_cpp_exception result: %d\n";
char DAT_00102199[] = "test_cpp_smart_ptr result: %d\n";
char DAT_001021b6[] = "test_cpp_rtti result: %d\n";
void *PTR__RTTIBase_00103d78 = NULL;
void *PTR__RTTIBase_00103da0 = NULL;
void *RTTIBase_typeinfo = NULL;
void *RTTIDerivedA_typeinfo = NULL;
void *RTTIDerivedB_typeinfo = NULL;
void *int_typeinfo = NULL;
int LifecycleClass_instance_count = 0;
char completed_0 = 0;
void *__dso_handle = NULL;
Init std_ioinit = {0};

// External function declarations
extern int __gmon_start__(void);
extern void _exit(int);
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_throw(void *, void *, void (*)(void *));
extern void *__dynamic_cast(void *, void *, void *, int);
extern void *operator_new(unsigned long);
extern void operator_delete(void *);
extern int __cxa_atexit(void (*)(void), void *, void *);
extern void __cxa_finalize(void *);
extern size_t strlen(const char *);
extern int printf(const char *, ...);
extern int puts(const char *);

// Stub destructor function for exceptions
typedef void (*exception_dtor_func)(void *);
void exception_destructor(void *obj);
__attribute__((weak)) void exception_destructor(void *obj) { (void)obj; }

// Stub implementations for C++ runtime functions
__attribute__((weak)) void *__cxa_allocate_exception(unsigned long size) { return malloc(size); }
__attribute__((weak)) void __cxa_throw(void *obj, void *typeinfo, void (*destructor)(void *)) { (void)obj; (void)typeinfo; (void)destructor; }
__attribute__((weak)) void *operator_new(unsigned long size) { return malloc(size); }
__attribute__((weak)) void operator_delete(void *ptr) { free(ptr); }
__attribute__((weak)) void *__dynamic_cast(void *obj, void *src_type, void *dest_type, int flags) { (void)obj; (void)src_type; (void)dest_type; (void)flags; return NULL; }
__attribute__((weak)) int __gmon_start__(void) { return 0; }
__attribute__((weak)) int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle) { (void)func; (void)arg; (void)dso_handle; return 0; }
__attribute__((weak)) void __cxa_finalize(void *dso_handle) { (void)dso_handle; }

// Decompiled by BinaryAI
// SHA256: d9e7362b0248b250abdba69a9c576cf04e927c19a7172ae75f5a280e4eb7e8d7

// Function: _init @ 0x101000
__attribute__((section(".init")))
void _init(void)
{
 __gmon_start__();
 return;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}































// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void _GLOBAL__sub_I_5_1_cpp(void)
{
 // std::ios_base::Init::Init((Init *)&std::__ioinit);
 // __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Forward declaration for main
int main(int argc, char **argv);

// Function: _start @ 0x101150
void _start(unsigned long long param_1,unsigned long long param_2)
{
 (void)param_1;
 (void)param_2;
 main(0, NULL);
 _exit(0);
}

// Function: deregister_tm_clones @ 0x101180
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011b0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011f0
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

// Function: test_cpp_member_func @ 0x101240
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
 uStack_14 = 0;
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

// Function: test_cpp_constructor @ 0x101280
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Forward declaration
void call_virtual_func(Base *param_1,int param_2);

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(Base *param_1,int param_2)
{
 void **vtable = *(void ***)param_1;
 void (*func_ptr)(Base *, int) = (void (*)(Base *, int))vtable[0];
 func_ptr(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x1012b0
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x1012c0
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1012d0
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1012e0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1012f0
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x101300
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101310
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101320
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,exception_destructor);
 return 0;
}

// Function: test_cpp_smart_ptr @ 0x1013e0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013f0
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
 lVar4 = __dynamic_cast(puVar2,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = __dynamic_cast(plVar3,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 operator_delete(puVar2);
 operator_delete(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 int iVar2;
 size_t sVar3;
 void **puVar4;
 void **plVar5;
 void *lVar6;
 int iVar7;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 undefined3 uStack_3c;
 unsigned int uStack_39;
 unsigned int uStack_35;
 unsigned int uStack_31;
 char local_2d;
 puts(DAT_001021d4);
 uStack_3c = 0;
 uStack_39 = 0;
 uStack_35 = 0;
 uStack_31 = 0;
 local_4c = 0x74736554;
 uStack_48 = 0;
 uStack_44 = 0;
 uStack_40 = 0;
 local_2d = 0;
 sVar3 = strlen((char *)&local_4c);
 printf(DAT_0010207d,(unsigned long)((int)sVar3 + 0x125c));
 printf(DAT_0010209b,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_001020b7,0x2a);
 printf(DAT_001020d3,0x47);
 printf(DAT_001020ef,0x28a);
 printf(DAT_0010210c,0x16);
 printf(DAT_00102128,0x27);
 printf(DAT_00102144,0x10);
 printf(DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(DAT_0010217c,(unsigned long)uVar1);
 printf(DAT_00102199,0x2bf);
 puVar4 = (void **)operator_new(8);
 *puVar4 = &PTR__RTTIBase_00103d78;
 plVar5 = (void **)operator_new(8);
 *plVar5 = &PTR__RTTIBase_00103da0;
 lVar6 = __dynamic_cast(puVar4,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar2 = 0x82;
 if (lVar6 == 0) {
 iVar2 = 0x1e;
 }
 lVar6 = __dynamic_cast(plVar5,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 iVar7 = iVar2 + 200;
 if (lVar6 == 0) {
 iVar7 = iVar2;
 }
 operator_delete(puVar4);
 operator_delete(plVar5);
 printf(DAT_001021b6,(unsigned long)(iVar7 + 0xe));
 return;
}

// Function: main @ 0x101680
int main(int argc, char **argv)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101690
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1016a0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1016b0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x1016c0
void Container_int_Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x1016d0
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x1016f0
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x101710
unsigned int Container_int_getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container_double_Container @ 0x101720
void Container_double_Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x101730
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x101750
unsigned long long Container_double_get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x101770
unsigned int Container_double_getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA_destructor @ 0x101780
void RTTIDerivedA_destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101790
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_destructor @ 0x1017a0
void RTTIBase_destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB_destructor @ 0x1017b0
void RTTIDerivedB_destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x1017c0
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x1017c8
__attribute__((section(".fini")))
void _fini(void)
{
 return;
}

