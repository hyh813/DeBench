/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <setjmp.h>
#include <inttypes.h>

/* Missing type definitions */
/* typedef unsigned int uint; - Removed to avoid conflicts with uint32_t */

/* Forward declarations for types */
struct Init;
typedef struct Init Init;

struct Base;
typedef struct Base Base;

struct Container_int_;
typedef struct Container_int_ Container_int_;

struct Container_double_;
typedef struct Container_double_ Container_double_;

struct RTTIDerivedA;
typedef struct RTTIDerivedA RTTIDerivedA;

struct RTTIBase;
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedB;
typedef struct RTTIDerivedB RTTIDerivedB;

struct LifecycleClass;
typedef struct LifecycleClass LifecycleClass;

/* std::type_info base structure for RTTI - must be defined before use in other structs */
typedef struct type_info {
    void **vtable;
    char *name;
} type_info;

/* Structure definitions */
struct Init {
  int dummy;
};

/* Base class with vtable pointer for polymorphism */
struct Base {
  void **vtable;
};

/* RTTI class structures */
struct RTTIBase {
  void **vtable;
  type_info *type_info_ptr;
};

struct RTTIDerivedA {
  void **vtable;
  type_info *type_info_ptr;
};

struct RTTIDerivedB {
  void **vtable;
  type_info *type_info_ptr;
};

/* Container class for int - sized to match the offset 0x28 (40 bytes) used in the code */
struct Container_int_ {
  int data[10];
  int size;
  char padding[4]; /* Padding to make struct 44 bytes (0x2c) */
};

/* Container class for double - sized to match the offset 0x50 (80 bytes) used in the code */
struct Container_double_ {
  double data[10];
  int size;
  char padding[4]; /* Padding to make struct 84 bytes (0x54) */
};

/* LifecycleClass - sized to match the 0x14 (20 bytes) allocation */
struct LifecycleClass {
  int data[5];
};

/* Function declarations */
void Init__Init(Init *this);
void Init_wrapper(void *this);
int main(void);
void RTTIDerivedA__dtor(RTTIDerivedA *this);
unsigned long long RTTIDerivedA_getType(void);
void RTTIBase__dtor(RTTIBase *this);
void RTTIDerivedB__dtor(RTTIDerivedB *this);
unsigned long long RTTIDerivedB_getType(void);

/* Operator new/delete implementations */
void *operator_new__(unsigned long size)
{
 return malloc(size);
}

void operator_delete__(void *ptr)
{
 free(ptr);
}

void Init__Init(Init *this)
{
 return;
}

void Init_wrapper(void *this)
{
 Init__Init((Init *)this);
}

/* Extern typeinfo variable declarations - use standard type_info type */
extern type_info int_typeinfo_type;
extern type_info RTTIBase_typeinfo_type;
extern type_info RTTIDerivedA_typeinfo_type;
extern type_info RTTIDerivedB_typeinfo_type;

/* Define the type_info variables */
type_info int_typeinfo_type = { NULL, "int" };
type_info RTTIBase_typeinfo_type = { NULL, "RTTIBase" };
type_info RTTIDerivedA_typeinfo_type = { NULL, "RTTIDerivedA" };
type_info RTTIDerivedB_typeinfo_type = { NULL, "RTTIDerivedB" };

/* Global variable declarations */
extern char completed_0;
extern Init std___ioinit;
extern int LifecycleClass_instance_count;
extern void *__dso_handle;
extern void *PTR__RTTIBase_00103d78;
extern void *PTR__RTTIBase_00103da0;

/* Define global pointer variables */
void *PTR__RTTIBase_00103d78 = NULL;
void *PTR__RTTIBase_00103da0 = NULL;

/* Define global variables */
char completed_0 = 0;
Init std___ioinit;
int LifecycleClass_instance_count = 0;
void *__dso_handle = NULL;

/* Define string data arrays */
char DAT_001021d4[256] = "Testing C++ features\n";
char DAT_0010207d[256] = "Member function test: %lu\n";
char DAT_0010209b[256] = "Constructor test: %lu\n";
char DAT_001020b7[256] = "Virtual function test: %lu\n";
char DAT_001020d3[256] = "Multiple inheritance test: %lu\n";
char DAT_001020ef[256] = "Diamond inheritance test: %lu\n";
char DAT_0010210c[256] = "Operator overload test: %lu\n";
char DAT_00102128[256] = "Template function test: %lu\n";
char DAT_00102144[256] = "Template class test: %lu\n";
char DAT_00102160[256] = "Lambda test: %lu\n";
char DAT_0010217c[256] = "Exception test: %lu\n";
char DAT_00102199[256] = "Smart pointer test: %lu\n";
char DAT_001021b6[256] = "RTTI test: %lu\n";

/* External function declarations */
extern int printf(const char *, ...);
extern int puts(const char *);
extern size_t strlen(const char *);
extern void *operator_new__(unsigned long);
extern void operator_delete__(void *);

/* C++ ABI function stub implementations */
int __gmon_start__(void)
{
 return 0;
}

void __libc_start_main(int (*)(void), unsigned long long, void *, void (*)(int), void (*)(void), unsigned long long, char *)
{
 /* Stub - should call main() in real implementation */
 return;
}

void __cxa_begin_catch(void *)
{
 return;
}

void __cxa_end_catch(void)
{
 return;
}

void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

void __cxa_throw(void *, const type_info *, void (*)(void))
{
 /* Stub - in real implementation this would throw the exception */
 return;
}

int __cxa_atexit(void (*)(void *), void *, void *)
{
 return 0;
}

void __cxa_rethrow(void)
{
 return;
}

void *__dynamic_cast(const void *, const type_info *, const type_info *, int)
{
 return NULL;
}

void _Unwind_Resume(void)
{
 return;
}

void __cxa_finalize(void *)
{
 return;
}

// Decompiled by BinaryAI
// SHA256: e85c1c90e0ded39a3ed678a2e38525457a29c6d517dc7232a17d012117a5d612

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

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 Init__Init(&std___ioinit);
 __cxa_atexit(Init_wrapper,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101170
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main((int (*)(void))main,param_2,&auStack_8,(void (*)(int))0,(void (*)(void))0,param_1,auStack_8);
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
 const char *test_str = "Test";
 size_t sVar1;
 sVar1 = strlen(test_str);
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
 void **vtable = param_1->vtable;
 void (*vfunc)(void) = (void (*)(void))vtable[0];
 vfunc();
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
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(const type_info *)&int_typeinfo_type,0);
 return 0;
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
 void *puVar2;
 void *plVar3;
 void *lVar4;
 int iVar5;
 puVar2 = operator_new__(sizeof(RTTIBase));
 plVar3 = operator_new__(sizeof(RTTIDerivedB));
 lVar4 = __dynamic_cast(puVar2,&RTTIBase_typeinfo_type,&RTTIDerivedA_typeinfo_type,0);
 iVar1 = 0x82;
 if (lVar4 == 0) {
 iVar1 = 0x1e;
 }
 lVar4 = __dynamic_cast(plVar3,&RTTIBase_typeinfo_type,&RTTIDerivedB_typeinfo_type,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == 0) {
 iVar5 = iVar1;
 }
 operator_delete__(puVar2);
 RTTIDerivedB__dtor((RTTIDerivedB *)plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10147f
void test_cpp_oo_features(void)
{
 uint uVar1;
 size_t sVar2;
 const char *test_str = "Test";
 puts(&DAT_001021d4);
 sVar2 = strlen(test_str);
 printf(&DAT_0010207d,(unsigned long)((int)sVar2 + 0x125c));
 uVar1 = test_cpp_constructor();
 printf(&DAT_0010209b,(unsigned long)uVar1);
 printf(&DAT_001020b7,0x2a);
 printf(&DAT_001020d3,0x47);
 printf(&DAT_001020ef,0x28a);
 printf(&DAT_0010210c,0x16);
 printf(&DAT_00102128,0x27);
 printf(&DAT_00102144,0x10);
 printf(&DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_0010217c,(unsigned long)uVar1);
 printf(&DAT_00102199,0x2bf);
 uVar1 = test_cpp_rtti();
 printf(&DAT_001021b6,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1015a8
int main(void)
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
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1015d0
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

// Function: Container<int>::get @ 0x1015e4
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (unsigned long)(uint32_t)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1015f6
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x1015fa
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101602
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

// Function: Container<double>::get @ 0x101618
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (unsigned long)(uint32_t)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10162c
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101630
void RTTIDerivedA__dtor(RTTIDerivedA *this)
{
 operator_delete__(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101636
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10163c
void RTTIBase__dtor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10163e
void RTTIDerivedB__dtor(RTTIDerivedB *this)
{
 operator_delete__(this);
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

