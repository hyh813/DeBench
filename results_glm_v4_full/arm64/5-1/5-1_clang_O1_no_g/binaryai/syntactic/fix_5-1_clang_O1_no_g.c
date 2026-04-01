/* Auto-injected type definitions by preprocessor */
#include <stdint.h>

#ifndef uint
typedef unsigned int uint;
#endif
typedef unsigned char undefined7[7];
#define true 1
#define false 0

/* Standard library function declarations */
#include <stdlib.h>
extern int strcmp(char *__s1, char *__s2);

/* Forward declarations */
typedef struct Base Base;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct VirtualBase VirtualBase;
typedef struct LifecycleClass LifecycleClass;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Init Init;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct Derived Derived;

/* Structure definitions */
struct Container_int_ {
    int data[10];
    unsigned int size;
};

struct Container_double_ {
    double data[10];
    unsigned int size;
};

struct Base {
    void *vptr;
    int value;
};

struct Derived {
    void *vptr;
    int value;
};

struct MultiDerived {
    void *vptr;
    int value;
};

struct DiamondDerived {
    void *vptr;
    int value;
};

struct MiddleA {
    void *vptr;
    int value;
};

struct MiddleB {
    void *vptr;
    int value;
};

struct BaseA {
    void *vptr;
    int value;
};

struct BaseB {
    void *vptr;
    int value;
};

struct VirtualBase {
    void *vptr;
    int value;
};

struct LifecycleClass {
    int data[5];
};

struct RTTIBase {
    void *vptr;
    int value;
};

struct RTTIDerivedA {
    void *vptr;
    int value;
};

struct RTTIDerivedB {
    void *vptr;
    int value;
};

struct Init {
    int dummy;
};

/* Forward function declarations */
int call_weak_fn(int);
int main(void);
unsigned long long MultiDerived__funcB(void);
int Base_virtual_func(Base *this, int param_1);
int Derived_virtual_func(Derived *this, int param_1);
unsigned long long MultiDerived_funcA(void);
int DiamondDerived_func(DiamondDerived *this);
int DiamondDerived__func(DiamondDerived *this);
unsigned long long MultiDerived_funcB(MultiDerived *this);
int Base_virtual_func__Derived__virtual_func(Derived *this, int param_1);
void Base__Base(Base *this);
void MultiDerived__MultiDerived(MultiDerived *this);
void DiamondDerived__DiamondDerived(DiamondDerived *this);
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
char * Base__getName(void);
void Base__Base_2(Base *this);
char * Derived__getName(void);
void Derived__Derived(Derived *this);
unsigned long long MultiDerived__funcA(void);
void MultiDerived__MultiDerived_2(MultiDerived *this);
void MultiDerived__MultiDerived_3(MultiDerived *this);
void MultiDerived__MultiDerived_4(MultiDerived *this);
unsigned long long BaseA__funcA(void);
void BaseA__BaseA(void);
void BaseA__BaseA_2(BaseA *this);
unsigned long long BaseB__funcB(void);
void BaseB__BaseB(void);
void BaseB__BaseB_2(BaseB *this);
int MiddleA__func(MiddleA *this);
void MiddleA__MiddleA(void);
void MiddleA__MiddleA_2(MiddleA *this);
void MiddleA__MiddleA_3(MiddleA *this);
void MiddleA__MiddleA_4(MiddleA *this);
int MiddleB__func(MiddleB *this);
void MiddleB__MiddleB(void);
void MiddleB__MiddleB_2(MiddleB *this);
void MiddleB__MiddleB_3(MiddleB *this);
void MiddleB__MiddleB_4(MiddleB *this);
int DiamondDerived__func(DiamondDerived *this);
void DiamondDerived__DiamondDerived_2(DiamondDerived *this);
int DiamondDerived__func_2(DiamondDerived *this);
void DiamondDerived__DiamondDerived_3(DiamondDerived *this);
int DiamondDerived__func_3(DiamondDerived *this);
void DiamondDerived__DiamondDerived_4(DiamondDerived *this);
void DiamondDerived__DiamondDerived_5(DiamondDerived *this);
unsigned long long VirtualBase__func(void);
void VirtualBase__VirtualBase(void);
void VirtualBase__VirtualBase_2(VirtualBase *this);
unsigned long long BaseA__funcA(void);
void BaseA__BaseA(void);
void BaseA__BaseA_2(BaseA *this);
unsigned long long BaseB__funcB(void);
void BaseB__BaseB(void);
void BaseB__BaseB_2(BaseB *this);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
unsigned long long RTTIDerivedA__getType(void);
void RTTIBase__RTTIBase(RTTIBase *this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
unsigned long long RTTIDerivedB__getType(void);
void DiamondDerived__DiamondDerived_6(DiamondDerived *this);
void VirtualBase__VirtualBase_3(VirtualBase *this);
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this);
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this);
extern unsigned long long stack0x00000008;
extern char DAT_001025f9[];
extern char DAT_00102495[];
extern char DAT_001024b3[];
extern char DAT_001024cf[];
extern char DAT_001024eb[];
extern char DAT_00102507[];
extern char DAT_00102524[];
extern char DAT_00102540[];
extern char DAT_0010255c[];
extern char DAT_00102578[];
extern char DAT_00102594[];
extern char DAT_001025b1[];
extern char DAT_001025ce[];
extern char DAT_001025ec[];

/* std namespace forward declarations - translated to C */
typedef struct std_ios_base_Init std_ios_base_Init;
struct std_ios_base_Init {
  /* Placeholder for C++ std::ios_base::Init */
};

/* Global variables */
void *__dso_handle = &__dso_handle;
char completed_0 = 0;

/* Typeinfo structure for RTTI */
struct type_info {
  void *vptr;
  const char *name;
};

/* Typeinfo vtable stub functions */
static void type_info_destructor(void *this) {
  /* Stub destructor */
}

static int type_info_before(void *this, void *other) {
  struct type_info *t1 = (struct type_info *)this;
  struct type_info *t2 = (struct type_info *)other;
  if (t1->name && t2->name) {
    return strcmp(t1->name, t2->name);
  }
  return 0;
}

/* Typeinfo vtable - static to avoid export issues */
static void *type_info_vtable[2] = {
  (void *)&type_info_destructor,
  (void *)&type_info_before
};

/* Typeinfo definitions for RTTI */
struct type_info int_typeinfo_struct = { type_info_vtable, "int" };
struct type_info RTTIBase_typeinfo_struct = { type_info_vtable, "7RTTIBase" };
struct type_info RTTIDerivedA_typeinfo_struct = { type_info_vtable, "12RTTIDerivedA" };
struct type_info RTTIDerivedB_typeinfo_struct = { type_info_vtable, "12RTTIDerivedB" };

void *int_typeinfo = &int_typeinfo_struct;
void *RTTIBase_typeinfo = &RTTIBase_typeinfo_struct;
void *RTTIDerivedA_typeinfo = &RTTIDerivedA_typeinfo_struct;
void *RTTIDerivedB_typeinfo = &RTTIDerivedB_typeinfo_struct;

/* Vtable and RTTI pointer definitions */
void *PTR_virtual_func_001139a8 = (void *)Base_virtual_func;
void *PTR_virtual_func_001139e8 = (void *)Derived_virtual_func;
void *PTR_funcB_00113a60 = (void *)MultiDerived__funcB;
void *PTR_func_00113ba0 = (void *)DiamondDerived__func;
void *PTR__RTTIBase_00113d58 = &RTTIBase_typeinfo_struct;
void *PTR__RTTIBase_00113d80 = &RTTIBase_typeinfo_struct;
int LifecycleClass_instance_count = 0;
char std__ioinit[sizeof(void*)];

/* Global data definitions */
unsigned long long stack0x00000008;
char DAT_001025f9[1];
char DAT_00102495[1];
char DAT_001024b3[1];
char DAT_001024cf[1];
char DAT_001024eb[1];
char DAT_00102507[1];
char DAT_00102524[1];
char DAT_00102540[1];
char DAT_0010255c[1];
char DAT_00102578[1];
char DAT_00102594[1];
char DAT_001025b1[1];
char DAT_001025ce[1];
char DAT_001025ec[1];

/* Macro to concatenate two 32-bit values into 64-bit */
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | ((unsigned long long)(low)))

// Decompiled by BinaryAI
// SHA256: 41a1e93c17559ea6970bdf973ffbc8e313959930237c4d67893e2086484a7228

// Function: _init @ 0x101618
int _init(void *ctx)
{
 call_weak_fn((int)ctx);
 return 0;
}

// Function: FUN_00101630 @ 0x101630
void FUN_00101630(void)
{
 ((void (*)(void))(void *)0x0)();
 return;
}

// External function declarations
extern void *operator_new__(unsigned long);
extern int puts(char *__s);
extern size_t strlen(char *__s);
extern void __cxa_begin_catch(void);
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_finalize(void *handle);
extern void __libc_start_main(int (*)(void), int, void *, int (*)(), int (*)(), void *);
extern void operator_delete(void *param_1);
extern void *operator_new(unsigned long param_1);
extern void *__dynamic_cast(void *, void *, void *, int);
extern int __cxa_atexit(void (*)(void *), void *, void *);
extern void operator_delete__(void *param_1);
extern int strcmp(char *__s1,char *__s2);
extern void __cxa_rethrow(void);
extern void std_ios_base_Init_Init(Init *this);
extern void abort(void);
extern void __cxa_end_catch(void);
extern void __gxx_personality_v0(void);
extern void __cxa_throw(void *, void *, void *);
extern void _Unwind_Resume(void);
extern void __gmon_start__(void);
extern int printf(char *__format,...);

/* Helper function to allocate memory from heap */
static void *allocate_memory(unsigned long size) {
  /* Simple stack-like allocation for this decompiled code */
  /* In real C++ this would use malloc */
  extern void *malloc(unsigned long);
  void *ptr = malloc(size);
  if (!ptr) {
    abort();
  }
  return ptr;
}

/* Implementations for required operator functions */
void *operator_new(unsigned long size) {
  void *ptr = allocate_memory(size);
  if (!ptr) {
    abort();
  }
  return ptr;
}

void operator_delete(void *ptr) {
  if (ptr) {
    /* Stub implementation */
  }
}

void *operator_new__(unsigned long size) {
  return operator_new(size);
}

void operator_delete__(void *ptr) {
  operator_delete(ptr);
}

/* Stub implementation for __dynamic_cast */
void *__dynamic_cast(void *src_ptr, void *src_type, void *dst_type, int src2dst_offset) {
  /* Simplified stub - return null for now as RTTI is complex */
  return (void *)0;
}

/* Stub implementation for __gmon_start__ (profiling start function) */
void __gmon_start__(void) {
  /* Stub - gmon profiling initialization */
}

/* Stub implementation for __gxx_personality_v0 (required for C++ exception handling) */
void __gxx_personality_v0(void) {
  /* Stub - personality function for exception handling */
}

/* Stub implementation for __cxa_begin_catch */
void __cxa_begin_catch(void) {
  /* Stub - begin exception handling */
}

/* Stub implementation for __cxa_end_catch */
void __cxa_end_catch(void) {
  /* Stub - end exception handling */
}

/* Stub implementation for __cxa_rethrow */
void __cxa_rethrow(void) {
  /* Stub - rethrow current exception */
}

/* Stub implementation for _Unwind_Resume */
void _Unwind_Resume(void) {
  /* Stub - resume unwinding after exception cleanup */
}

/* Implementation for __cxa_allocate_exception */
void *__cxa_allocate_exception(unsigned long size) {
  return operator_new(size);
}

/* Implementation for std::ios_base::Init */
void std_ios_base_Init_Init(Init *this) {
  if (this) {
    ((int *)this)[0] = 0;
  }
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x1017c0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)&std__ioinit);
 __cxa_atexit((void (*)(void *))operator_delete,&std__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101800
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x101834
int call_weak_fn(int param)
{
 __gmon_start__();
 return 0;
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
 char uStack_25[4];
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 uStack_2c[0] = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25[0] = 0;
 uStack_24[0] = 0;
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
 LifecycleClass_instance_count = LifecycleClass_instance_count - 1;
 return iVar2 + LifecycleClass_instance_count * 1000;
}

// Function: call_virtual_func @ 0x1019d0
void call_virtual_func(Base *param_1,int param_2)
{
 ((int (*)(Base *, int))(**(void ***)param_1))(param_1,param_2);
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
 iVar1 = Base_virtual_func((Base *)&local_8,5);
 iVar2 = ((int (*)(Base *, int))(*local_30))((Base *)local_30,5);
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
 iVar1 = MultiDerived_funcA();
 iVar2 = (*(int (**)(void **))(*local_30))((void **)local_30);
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
 iVar1 = DiamondDerived__func((DiamondDerived *)&local_40);
 local_38 = 100;
 iVar2 = (*(int (**)(void **))local_40)((void **)&local_40);
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
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo,0);
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
 bool bVar2;
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
 __s1_00 = *(char **)(*(long *)(lVar8 + -8) + 8);
 if (__s1_00 == "12RTTIDerivedA") {
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
 if (__s1 == "12RTTIDerivedB") {
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
 lVar8 = (long)__dynamic_cast((void *)plVar4,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 100;
 }
 lVar8 = (long)__dynamic_cast((void *)plVar5,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
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
 unsigned int local_40;
 unsigned int uStack_3c;
 unsigned int local_38;
 puts((char *)&DAT_001025f9);
 local_60 = 10;
 auStack_58[1] = 0;
 uStack_5c = 0x74736554;
 auStack_58[0] = 0;
 uStack_44 = 0;
 local_40 = 0;
 auStack_58[2] = 0;
 auStack_58[3] = 0;
 local_48 = 0;
 local_68 = (char **)&PTR_virtual_func_001139a8;
 sVar3 = strlen((char *)((unsigned long)&local_60 | 4));
 printf((char *)&DAT_00102495,(unsigned long)((int)sVar3 + 0x125c));
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
 LifecycleClass_instance_count = LifecycleClass_instance_count - 1;
 printf((char *)&DAT_001024b3,(unsigned long)(uint)(iVar1 + LifecycleClass_instance_count * 1000));
 auStack_58[0] = 3;
 local_68 = (char **)&PTR_virtual_func_001139a8;
 local_60 = 0x1139e8;
 uStack_5c = 0;
 iVar1 = Base_virtual_func((Base *)&local_68,5);
 iVar2 = (*(int (**)(void **, int))((void **)CONCAT44(uStack_5c,local_60)))((void **)&local_60,5);
 printf((char *)&DAT_001024cf,(unsigned long)(iVar1 + iVar2 + 0x15));
 local_60 = 0x113a30;
 uStack_5c = 0;
 auStack_58[2] = 0x113a60;
 auStack_58[3] = 0;
 auStack_58[0] = 100;
 local_48 = 200;
 iVar1 = MultiDerived_funcB((MultiDerived *)(auStack_58 + 2));
 printf((char *)&DAT_001024eb,(unsigned long)(iVar1 + 0x1f));
 local_60 = 0x113b38;
 uStack_5c = 0;
 local_40 = 0x113ba0;
 uStack_3c = 0;
 auStack_58[2] = 0x113b68;
 auStack_58[3] = 0;
 local_38 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_40);
 *(unsigned int *)((long)auStack_58 + *(long *)(CONCAT44(uStack_5c,local_60) + -0x18)) = 100;
 iVar2 = (*(int (**)(void **))((void **)CONCAT44(uStack_3c,local_40)))((void **)&local_40);
 printf((char *)&DAT_00102507,(unsigned long)(uint)(iVar2 + iVar1));
 printf((char *)&DAT_00102524,0x16);
 printf((char *)&DAT_00102540,0x27);
 printf((char *)&DAT_0010255c,0x10);
 printf((char *)&DAT_00102578,0x55);
 test_cpp_exception();
 uVar5 = 0;
 printf((char *)&DAT_00102594,uVar5 & 0xffffffff);
 printf((char *)&DAT_001025b1,0x2bf);
 uVar5 = test_cpp_rtti();
 iVar1 = printf((char *)&DAT_001025ce,uVar5 & 0xffffffff);
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

// Function: Base::virtual_func @ Derived::virtual_func
int Base_virtual_func__Derived__virtual_func(Derived *this,int param_1)
{
 return Derived_virtual_func(this,param_1);
}

// Function: Derived::virtual_func @ 0x102070
int Derived_virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 8) * param_1;
}

// Function: Base::~Base @ 0x10207c
void Base__Base(Base *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102080
void MultiDerived__MultiDerived(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102084
void DiamondDerived__DiamondDerived(DiamondDerived *this)
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
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1020bc
void Container_int__push(Container_int_ *this,int param_1)
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
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1020f8
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x102100
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102108
void Container_double__push(Container_double_ *this,double param_1)
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
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102140
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base::getName @ 0x102148
char * Base__getName(void)
{
 return (char *)&DAT_001025ec;
}

// Function: Base::~Base @ 0x102154
void Base__Base_2(Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived::getName @ 0x102168
char * Derived__getName(void)
{
 return "Derived";
}

// Function: Derived::~Derived @ 0x102174
void Derived__Derived(Derived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcA @ 0x102188
unsigned long long MultiDerived__funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x102190
void MultiDerived__MultiDerived_2(MultiDerived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcB @ 0x1021a4
unsigned long long MultiDerived__funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB
unsigned long long MultiDerived_funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1021ac
unsigned long long MultiDerived__funcB_2(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x1021b4
void MultiDerived__MultiDerived_3(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1021b8
void MultiDerived__MultiDerived_4(MultiDerived *this)
{
 operator_delete(this + -0x10);
 return;
}

// Wrapper for MultiDerived_funcA to match declaration
unsigned long long MultiDerived_funcA(void)
{
 return MultiDerived__funcA();
}

// Function: BaseA::funcA @ 0x1021d0
unsigned long long BaseA__funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x1021d8
void BaseA__BaseA(void)
{
 return;
}

// Function: BaseA::~BaseA @ 0x1021dc
void BaseA__BaseA_2(BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB::funcB @ 0x1021f0
unsigned long long BaseB__funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x1021f8
void BaseB__BaseB(void)
{
 return;
}

// Function: BaseB::~BaseB @ 0x1021fc
void BaseB__BaseB_2(BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x102210
int MiddleA__func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102228
void MiddleA__MiddleA(void)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x10222c
void MiddleA__MiddleA_2(MiddleA *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x102240
int MiddleA__func_2(MiddleA *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102264
void MiddleA__MiddleA_3(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x102268
void MiddleA__MiddleA_4(MiddleA *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB::func @ 0x102288
int MiddleB__func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x1022a0
void MiddleB__MiddleB(void)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022a4
void MiddleB__MiddleB_2(MiddleB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleB::func @ 0x1022b8
int MiddleB__func_2(MiddleB *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x1022dc
void MiddleB__MiddleB_3(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022e0
void MiddleB__MiddleB_4(MiddleB *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived::func @ 0x102300
int DiamondDerived__func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102318
void DiamondDerived__DiamondDerived_2(DiamondDerived *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived::func @ 0x10232c
int DiamondDerived__func_2(DiamondDerived *this)
{
 return *(int *)((long)(this + -0x10) + *(long *)(*(long *)(this + -0x10) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102344
void DiamondDerived__DiamondDerived_3(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102348
void DiamondDerived__DiamondDerived_4(DiamondDerived *this)
{
 operator_delete(this + -0x10);
 return;
}

// Function: DiamondDerived::func @ 0x102360
int DiamondDerived__func_3(DiamondDerived *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102384
void DiamondDerived__DiamondDerived_5(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102388
void DiamondDerived__DiamondDerived_6(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: VirtualBase::func @ 0x1023a8
unsigned long long VirtualBase__func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x1023b0
void VirtualBase__VirtualBase(void)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x1023b4
void VirtualBase__VirtualBase_2(VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1023c8
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x1023dc
unsigned long long RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1023e4
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1023e8
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x1023fc
unsigned long long RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: RTTIBase::~RTTIBase @ 0x102400
void RTTIBase__RTTIBase_2(RTTIBase *this)
{
 operator_delete(this);
 return;
}

// Function: BaseA::~BaseA @ 0x102400
void BaseA__BaseA_3(BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB::~BaseB @ 0x102400
void BaseB__BaseB_3(BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102400
void VirtualBase__VirtualBase_3(VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102400
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102400
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: _fini @ 0x102404
void _fini(void)
{
 return;
}

