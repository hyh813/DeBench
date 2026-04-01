/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned int uint;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef unsigned long ulong;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra-specific types */
typedef void (*code)(void);
typedef uint32_t undefined4;
typedef uint64_t undefined8;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-1/5-1_clang_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/* Forward declarations for user classes */
struct type_info {
  const char *name;
  int dummy;  // Additional field to match std::type_info layout
};

struct Init {
  int dummy;  // Non-empty to avoid warnings
};

struct Init __ioinit = {0};

void Init_Init(struct Init *this)
{
  return;
}

void Init_dtor(struct Init *this)
{
  return;
}

/* Forward declarations for user classes */
struct Base {
  void **_vptr_Base;
};

struct Derived {
  void **_vptr_Derived;  // Vtable pointer
  struct Base base;
};

struct MultiDerived {
  int dummy;  // Non-empty to avoid warnings
};

struct DiamondDerived {
  int dummy;  // Non-empty to avoid warnings
};

struct Point {
  int dummy;  // Non-empty to avoid warnings
};

struct SimpleClass {
  int dummy;  // Non-empty to avoid warnings
};

struct LifecycleClass {
  int dummy;  // Non-empty to avoid warnings
};
int LifecycleClass_instance_count = 0;

struct BaseException {
  int dummy;  // Non-empty to avoid warnings
};

struct DerivedException {
  struct BaseException base;
};

struct Container_int {
  int size;
  union {
    int data_i[10];
    double data_d[10];
  };
};

struct Container_double {
  int size;
  union {
    int data_i[10];
    double data_d[10];
  };
};

/* Typedefs for convenience */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

struct RTTIBase {
  void **_vptr;
  const struct type_info *typeinfo;
};

struct type_info RTTIBase_typeinfo_data = {"RTTIBase", 0};
const struct type_info *RTTIBase_typeinfo = &RTTIBase_typeinfo_data;

struct RTTIDerivedA {
  void **_vptr;
  const struct type_info *typeinfo;
};

struct type_info RTTIDerivedA_typeinfo_data = {"RTTIDerivedA", 0};
const struct type_info *RTTIDerivedA_typeinfo = &RTTIDerivedA_typeinfo_data;

struct RTTIDerivedB {
  void **_vptr;
  const struct type_info *typeinfo;
};

struct type_info RTTIDerivedB_typeinfo_data = {"RTTIDerivedB", 0};
const struct type_info *RTTIDerivedB_typeinfo = &RTTIDerivedB_typeinfo_data;

/* External function declarations */
extern void __cxa_atexit(void (*func)(void*), void* arg, void* __dso_handle);
extern void* __dso_handle;

/* Wrapper for Init_dtor to match __cxa_atexit signature */
static void Init_dtor_wrapper(void* arg) {
  Init_dtor((struct Init*)arg);
}

void* operator_new(size_t size);

void* operator_new(size_t size)
{
  return malloc(size);
}

void operator_delete(void* ptr)
{
  free(ptr);
}

void* __dso_handle = NULL;

extern void* __cxa_allocate_exception(size_t size) __attribute__((nothrow));
extern void __attribute__((noreturn)) __cxa_throw(void* exc, const void* tinfo, void (*dest)(void*));

/* Stub implementation of __dynamic_cast for RTTI support */
void* __dynamic_cast(void* ptr, const void* src_type, const void* dst_type, int src2dst_offset)
{
  /* Simplified stub - always returns NULL (cast fails) 
   * A real implementation would check type hierarchy */
  return NULL;
}

/* Stub implementations for C++ exception handling */
void* __cxa_allocate_exception(size_t size)
{
  return malloc(size);
}

void __attribute__((noreturn)) __cxa_throw(void* exc, const void* tinfo, void (*dest)(void*))
{
  /* Stub: In a real implementation, this would unwind the stack
   * For compilation purposes, we just exit */
  exit(1);
}

/* builtin_strncpy removed - use standard strncpy from string.h */

/* External data references - defined as string literals */
const char DAT_001021d4[] = "Testing C++ OO Features\n";
const char DAT_0010207d[] = "  Member function test: %d\n";
const char DAT_0010209b[] = "  Constructor test: %d\n";
const char DAT_001020b7[] = "  Virtual function test: %d\n";
const char DAT_001020d3[] = "  Multiple inheritance test: %d\n";
const char DAT_001020ef[] = "  Diamond inheritance test: %d\n";
const char DAT_0010210c[] = "  Operator overload test: %d\n";
const char DAT_00102128[] = "  Template function test: %d\n";
const char DAT_00102144[] = "  Template class test: %d\n";
const char DAT_00102160[] = "  Lambda test: %d\n";
const char DAT_0010217c[] = "  Exception test: %d\n";
const char DAT_00102199[] = "  Smart pointer test: %d\n";
const char DAT_001021b6[] = "  RTTI test: %d\n";

/* Forward declarations for vtable functions */
void RTTIBase_destructor(struct RTTIBase *this);
int RTTIBase_getType(const struct RTTIBase *this);
void RTTIDerivedA_destructor(struct RTTIDerivedA *this);
int RTTIDerivedA_getType(const struct RTTIDerivedA *this);
void RTTIDerivedB_destructor(struct RTTIDerivedB *this);
int RTTIDerivedB_getType(const struct RTTIDerivedB *this);

/* Vtable wrapper functions - use void* for polymorphic calls */
void RTTIBase_vdestructor(void* obj) {
  RTTIBase_destructor((struct RTTIBase*)obj);
}

int RTTIBase_vgetType(const void* obj) {
  return RTTIBase_getType((const struct RTTIBase*)obj);
}

void RTTIDerivedA_vdestructor(void* obj) {
  RTTIDerivedA_destructor((struct RTTIDerivedA*)obj);
}

int RTTIDerivedA_vgetType(const void* obj) {
  return RTTIDerivedA_getType((const struct RTTIDerivedA*)obj);
}

void RTTIDerivedB_vdestructor(void* obj) {
  RTTIDerivedB_destructor((struct RTTIDerivedB*)obj);
}

int RTTIDerivedB_vgetType(const void* obj) {
  return RTTIDerivedB_getType((const struct RTTIDerivedB*)obj);
}

/* Vtable stub for RTTIBase */
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
static void* RTTIBase_vtable[2];
static void RTTIBase_init_vtable(void) __attribute__((constructor));
static void RTTIBase_init_vtable(void) {
  RTTIBase_vtable[0] = (void*)(uintptr_t)RTTIBase_vdestructor;
  RTTIBase_vtable[1] = (void*)(uintptr_t)RTTIBase_vgetType;
}

/* Vtable stub for RTTIDerivedA */
static void* RTTIDerivedA_vtable[] = {
  (void*)(uintptr_t)RTTIDerivedA_vdestructor,
  (void*)(uintptr_t)RTTIDerivedA_vgetType
};

/* Vtable stub for RTTIDerivedB */
static void* RTTIDerivedB_vtable[] = {
  (void*)(uintptr_t)RTTIDerivedB_vdestructor,
  (void*)(uintptr_t)RTTIDerivedB_vgetType
};
#pragma GCC diagnostic pop

void** PTR__RTTIBase_00103d78 = RTTIBase_vtable;
void** PTR__RTTIDerivedA_00103d90 = RTTIDerivedA_vtable;
void** PTR__RTTIBase_00103da0 = RTTIDerivedB_vtable;

/* Typeinfo for int */
struct type_info int_typeinfo_data = {"int", 0};
const struct type_info *int_typeinfo = &int_typeinfo_data;


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* Stub: NULL function call removed */
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101120 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 Init_Init((struct Init *)&__ioinit);
 __cxa_atexit(Init_dtor_wrapper,&__ioinit,__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char local_24 [36];
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_24[0x10] = '\0';
 local_24[0x11] = '\0';
 local_24[0x12] = '\0';
 local_24[0x13] = '\0';
 local_24[0x14] = '\0';
 local_24[0x15] = '\0';
 local_24[0x16] = '\0';
 local_24[0x17] = '\0';
 local_24[0x18] = '\0';
 local_24[0x19] = '\0';
 local_24[0x1a] = '\0';
 local_24[0x1b] = '\0';
 local_24[0x1c] = '\0';
 local_24[0x1d] = '\0';
 local_24[0x1e] = '\0';
 strncpy(local_24,"Test",5);
 local_24[5] = '\0';
 local_24[6] = '\0';
 local_24[7] = '\0';
 local_24[8] = '\0';
 local_24[9] = '\0';
 local_24[10] = '\0';
 local_24[0xb] = '\0';
 local_24[0xc] = '\0';
 local_24[0xd] = '\0';
 local_24[0xe] = '\0';
 local_24[0xf] = 0;
 local_24[0x1f] = 0;
 sVar1 = strlen(local_24);
 return (int)sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 001012a0 */

int call_virtual_func(struct Base *obj,int x)

{
 int iVar1;
 int (*vfunc)(void*);
 
 /* WARNING: Could not recover jumptable at 0x001012a6. Too many branches */
 /* WARNING: Treating indirect jump as call */
 vfunc = (int (*)(void*))*obj->_vptr_Base;
 iVar1 = vfunc(obj);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???]
 Unresolved local var: Base base@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: bool eq@[???]
 Unresolved local var: Point p3@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_16_2_b9b285fb lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 uint32_t *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 puVar1 = (uint32_t *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00101335 to 00101348 has its CatchHandler @ 0010134b */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,(const void*)(&int_typeinfo),0);
 return 0;  /* Never reached, but suppress compiler warning */
}



/* Function: test_cpp_smart_ptr @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 001013f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 uint64_t *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar1 = operator_new(8);
 *puVar1 = (uint64_t)PTR__RTTIBase_00103d78;
 plVar2 = operator_new(8);
 *plVar2 = (long)(uintptr_t)PTR__RTTIDerivedB_00103da0;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
  lVar3 = __dynamic_cast((void*)puVar1,(const void*)&RTTIBase_typeinfo,(const void*)&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x82;
 if (lVar3 == 0) {
 iVar4 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar3 = __dynamic_cast((void*)plVar2,(const void*)&RTTIBase_typeinfo,(const void*)&RTTIDerivedB_typeinfo,0);
 iVar5 = iVar4 + 200;
 if (lVar3 == 0) {
 iVar5 = iVar4;
 }
 operator_delete(puVar1);
 {
   void **vtable = (void**)(void*)(uintptr_t)*plVar2;
   void (*destructor)(void*) = (void (*)(void*))vtable[0];
   destructor(plVar2);
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 uint uVar1;
 size_t sVar2;
 uint64_t *puVar3;
 long *plVar4;
 long lVar5;
 int iVar6;
 int iVar7;
 char local_4c [36];
 
 puts(&DAT_001021d4);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 local_4c[0x10] = '\0';
 local_4c[0x11] = '\0';
 local_4c[0x12] = '\0';
 local_4c[0x13] = '\0';
 local_4c[0x14] = '\0';
 local_4c[0x15] = '\0';
 local_4c[0x16] = '\0';
 local_4c[0x17] = '\0';
 local_4c[0x18] = '\0';
 local_4c[0x19] = '\0';
 local_4c[0x1a] = '\0';
 local_4c[0x1b] = '\0';
 local_4c[0x1c] = '\0';
 local_4c[0x1d] = '\0';
 local_4c[0x1e] = '\0';
 strncpy(local_4c,"Test",5);
 local_4c[5] = '\0';
 local_4c[6] = '\0';
 local_4c[7] = '\0';
 local_4c[8] = '\0';
 local_4c[9] = '\0';
 local_4c[10] = '\0';
 local_4c[0xb] = '\0';
 local_4c[0xc] = '\0';
 local_4c[0xd] = '\0';
 local_4c[0xe] = '\0';
 local_4c[0xf] = 0;
 local_4c[0x1f] = 0;
 sVar2 = strlen(local_4c);
 printf(&DAT_0010207d,(int)sVar2 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 printf(&DAT_0010209b, LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(&DAT_001020b7,0x2a);
 printf(&DAT_001020d3,0x47);
 printf(&DAT_001020ef,0x28a);
 printf(&DAT_0010210c,0x16);
 printf(&DAT_00102128,0x27);
 printf(&DAT_00102144,0x10);
 printf(&DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_0010217c,(int)uVar1);
 printf(&DAT_00102199,0x2bf);
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 puVar3 = operator_new(8);
 *puVar3 = (uint64_t)PTR__RTTIBase_00103d78;
 plVar4 = operator_new(8);
 *plVar4 = (long)(uintptr_t)PTR__RTTIDerivedB_00103da0;
  /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = __dynamic_cast((void*)puVar3,(const void*)&RTTIBase_typeinfo,(const void*)&RTTIDerivedA_typeinfo,0);
 iVar6 = 0x82;
 if (lVar5 == 0) {
 iVar6 = 0x1e;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = __dynamic_cast((void*)plVar4,(const void*)&RTTIBase_typeinfo,(const void*)&RTTIDerivedB_typeinfo,0);
 iVar7 = iVar6 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar6;
 }
 operator_delete(puVar3);
 {
   void **vtable = (void**)(void*)(uintptr_t)*plVar4;
   void (*destructor)(void*) = (void (*)(void*))vtable[0];
   destructor(plVar4);
 }
 printf(&DAT_001021b6,iVar7 + 0xe);
 return;
}



/* Function: main @ 00101680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00101690 */

int template_max_int(int a,int b)

{
 if (b < a) {
 b = a;
 }
 return b;
}



/* Function: template_max<double> @ 001016a0 */

double template_max_double(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 001016b0 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 001016c0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void Container_int_Constructor(struct Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 001016d0 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void Container_int_push(struct Container_int *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data_i[iVar1] = value;
 }
 return;
}



/* Function: get @ 001016f0 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int Container_int_get(struct Container_int *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if ((-1 < idx) && (iVar1 = 0, idx < this->size)) {
 iVar1 = this->data_i[(uint)idx];
 }
 return iVar1;
}



/* Function: getSize @ 00101710 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int Container_int_getSize(struct Container_int *this)

{
 return this->size;
}



/* Function: Container @ 00101720 */

/* DWARF original prototype: void Container(Container<double> * this) */

void Container_double_Constructor(struct Container_double *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00101730 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void Container_double_push(struct Container_double *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if ((long)iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data_d[iVar1] = value;
 }
 return;
}



/* Function: get @ 00101750 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double Container_double_get(struct Container_double *this,int idx)

{
 double dVar1;
 
 dVar1 = 0.0;
 if ((-1 < idx) && (idx < this->size)) {
 dVar1 = this->data_d[(uint)idx];
 }
 return dVar1;
}



/* Function: getSize @ 00101770 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int Container_double_getSize(struct Container_double *this)

{
 return this->size;
}



/* Function: ~RTTIDerivedA @ 00101780 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void RTTIDerivedA_destructor(struct RTTIDerivedA *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 00101790 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int RTTIDerivedA_getType(const struct RTTIDerivedA *this)

{
  return 1;
}



/* Function: getType @ 00101790 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int RTTIBase_getType(const struct RTTIBase *this)

{
  return 0;
}



/* Function: ~RTTIBase @ 001017a0 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void RTTIBase_destructor(struct RTTIBase *this)

{
  return;
}





/* Function: ~RTTIDerivedB @ 001017b0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void RTTIDerivedB_destructor(struct RTTIDerivedB *this)

{
 operator_delete(this);
 return;
}



/* Function: getType @ 001017c0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int RTTIDerivedB_getType(const struct RTTIDerivedB *this)

{
  return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
