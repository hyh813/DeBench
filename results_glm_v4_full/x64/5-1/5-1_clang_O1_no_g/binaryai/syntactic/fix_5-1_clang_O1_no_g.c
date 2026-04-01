/* C headers for proper compilation */
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Forward declarations for C++ ABI functions */
void __cxa_begin_catch(void) __attribute__((__externally_visible__));
void __cxa_throw(void *, void *, void (*)(void *)) __attribute__((__externally_visible__));
void __cxa_rethrow(void) __attribute__((__externally_visible__));
void __cxa_end_catch(void) __attribute__((__externally_visible__));
void *__cxa_allocate_exception(size_t) __attribute__((__externally_visible__));



/* Types from decompilation */
typedef unsigned int undefined4;

/* Type_info forward declaration - minimal struct for RTTI compatibility */
typedef struct type_info {
  const char *name;
} type_info;

/* Generic virtual function pointer type for compatibility across all virtual functions */
typedef int (*VirtualFunc)(void *, int);

/* Union for safe function pointer to void* conversion */
typedef union {
  void *void_ptr;
  VirtualFunc virtual_func;
} func_ptr_union;

/* Flexible pointer union for pointer-to-integer conversions */
typedef union {
  void *void_ptr;
  void **void_ptr_ptr;
  unsigned long long ull;
  unsigned int uint_array[2];
} flexible_ptr_t;

/* Type_info references */
extern type_info typeinfo_for_int;

/* std_ios_base_Init struct definition */
struct std_ios_base_Init {
  int dummy;
};

/* Forward declarations for C++ types */
struct Base;
struct Derived;
struct LifecycleClass;
struct MultiDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct std_ios_base_Init;
struct Container_int_;
struct Container_double_;

/* Struct definitions for C++ types */
struct Base {
  void **vptr;  // virtual table pointer
};

struct Derived {
  void **vptr;
  int value;
};

struct BaseA {
  void **vptr;
};

struct BaseB {
  void **vptr;
};

struct MiddleA {
  void **vptr;
};

struct MiddleB {
  void **vptr;
};

struct DiamondDerived {
  void **vptr;
};

struct VirtualBase {
  void **vptr;
};

struct RTTIBase {
  void **vptr;
};

struct RTTIDerivedA {
  void **vptr;
};

struct RTTIDerivedB {
  void **vptr;
};

struct MultiDerived {
  void **vptr;
  void **vptr2;  // second vptr for multiple inheritance
};

struct LifecycleClass {
  int data[5];
};

struct Container_int_ {
  int data[10];
  unsigned int size;
};

struct Container_double_ {
  double data[10];
  unsigned int size;
};

/* Vtable structure with type_info pointer at offset 8 */
struct vtable {
  void *func_ptr;        // +0: virtual function pointer
  struct type_info *type; // +8: pointer to type_info
};

/* Vtable with name pointer directly at offset 8 (simplified RTTI) */
struct vtable_with_name {
  void *func_ptr;  // +0
  char *name;      // +8: type name string
};

/* Global variable declarations */
extern struct std_ios_base_Init std___ioinit;
extern void *__dso_handle;
extern char completed_0;
extern int LifecycleClass_instance_count;
extern void *PTR_virtual_func_001059c8;
extern void *PTR_virtual_func_00105a08;
extern void *PTR_funcA_00105a50;
extern void *PTR_funcB_00105a80;
extern void *PTR_func_00105b58;
extern void *PTR_func_00105b88;
extern void *PTR_func_00105bc0;
extern struct vtable_with_name VTABLE_RTITIBase;
extern struct vtable_with_name VTABLE_RTITIDerivedA;
extern struct vtable_with_name VTABLE_RTITIDerivedB;
extern type_info typeinfo_for_int;
extern char DAT_001031e1[];
extern char DAT_0010307d[];
extern char DAT_0010309b[];
extern char DAT_001030b7[];
extern char DAT_001030d3[];
extern char DAT_001030ef[];
extern char DAT_0010310c[];
extern char DAT_00103128[];
extern char DAT_00103144[];
extern char DAT_00103160[];
extern char DAT_0010317c[];
extern char DAT_00103199[];
extern char DAT_001031b6[];
extern char DAT_001031d4[];

/* Forward declarations for member functions - must be before global variable definitions */
extern int Base_virtual_func(struct Base *this, int param_1);
extern int Derived_virtual_func(struct Derived *this, int param_1);
extern unsigned long long MultiDerived_funcA(void);
extern unsigned long long MultiDerived_funcB_0(struct MultiDerived *this);
extern int DiamondDerived_func(struct DiamondDerived *this);
extern int DiamondDerived_func_2(struct DiamondDerived *this);
extern int DiamondDerived_func_3(struct DiamondDerived *this);

/* Global variable definitions */
struct std_ios_base_Init std___ioinit = {0};
void *__dso_handle = 0;
char completed_0 = 0;
int LifecycleClass_instance_count = 0;
void *PTR_virtual_func_001059c8 = (void *)Base_virtual_func;
void *PTR_virtual_func_00105a08 = (void *)Derived_virtual_func;
void *PTR_funcA_00105a50 = (void *)MultiDerived_funcA;
void *PTR_funcB_00105a80 = (void *)MultiDerived_funcB_0;
void *PTR_func_00105b58 = (void *)DiamondDerived_func;
void *PTR_func_00105b88 = (void *)DiamondDerived_func_2;
void *PTR_func_00105bc0 = (void *)DiamondDerived_func_3;
type_info typeinfo_for_int;
void *PTR__RTTIBase_00105d78 = &typeinfo_for_int;
void *PTR__RTTIDerivedA_00105da0 = &typeinfo_for_int;
void *PTR__RTTIBase_00105da0 = &typeinfo_for_int;
void *PTR__RTTIDerivedB_00105da0 = &typeinfo_for_int;

/* Data string definitions */
char DAT_001031e1[] = "Testing C++ OO Features\n";
char DAT_0010307d[] = "strlen result: %lu\n";
char DAT_0010309b[] = "constructor result: %lu\n";
char DAT_001030b7[] = "virtual func result: %lu\n";
char DAT_001030d3[] = "multiple inheritance result: %lu\n";
char DAT_001030ef[] = "diamond inheritance result: %lu\n";
char DAT_0010310c[] = "operator overload result: %lu\n";
char DAT_00103128[] = "template func result: %lu\n";
char DAT_00103144[] = "template class result: %lu\n";
char DAT_00103160[] = "lambda result: %lu\n";
char DAT_0010317c[] = "exception result: %lu\n";
char DAT_00103199[] = "smart ptr result: %lu\n";
char DAT_001031b6[] = "rtti result: %lu\n";
char DAT_001031d4[] = "Base";

/* External function declarations */
extern int __gmon_start__(void);
extern void __libc_start_main(int (*)(int, char **, char **), int, char **, 
                             void (*)(), void (*)(), void *, void *);
extern void *operator_new(unsigned long);
extern void *operator_new__(unsigned long);
extern void *__dynamic_cast(void *, void *, void *, int);
extern void _Unwind_Resume(void *);
extern void __cxa_finalize(void *);
extern int puts(const char *);
extern int printf(const char *, ...);
extern size_t strlen(const char *);
extern int strcmp(const char *, const char *);


// Decompiled by BinaryAI
// SHA256: 7d2eb3f67d7b79284ccda07814eb56f8d50035e18d0f3d5748618154554cf5d9

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
 return operator_new(param_1);
}

// Function: <EXTERNAL>::printf @ 0x102040
// Uses standard printf from stdio.h

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102050
void __cxa_begin_catch_wrapper(void)
{
 __cxa_begin_catch();
}

// Function: <EXTERNAL>::strlen @ 0x102060
// Uses standard strlen from string.h

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x102070
// Uses standard __cxa_allocate_exception

// Function: <EXTERNAL>::__cxa_atexit @ 0x102080
int __cxa_atexit(void (*func)(void *, void *), void *arg, void *dso_handle)
{
  return 0;
}

// Function: <EXTERNAL>::operator.delete @ 0x102090
void operator_delete(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1020a0
void * operator_new(unsigned long param_1)
{
 static unsigned char buffer[4096];
 static size_t offset = 0;
 void *ptr;
 offset = (offset + 7) & ~7;  // Align to 8 bytes
 ptr = &buffer[offset];
 offset += param_1;
 return ptr;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1020b0
void *__dynamic_cast_wrapper(void *obj, void *src, void *dst, int hint)
{
 return (void *)__dynamic_cast(obj, src, dst, hint);
}

// Function: <EXTERNAL>::operator.delete[] @ 0x1020c0
void operator_delete__(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x1020d0
// Uses standard strcmp from string.h

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1020e0
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1020f0
void std_ios_base_Init_Init(struct std_ios_base_Init *this)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::~Init
void std_ios_base_Init__Init(struct std_ios_base_Init *this)
{
  return;
}

// Function: <EXTERNAL>::puts @ 0x102100
// Uses standard puts from stdio.h

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102110
void __cxa_end_catch_wrapper(void)
{
 __cxa_end_catch();
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102120
void __cxa_throw_wrapper(void *obj, void *tinfo, void *dest)
{
 __cxa_throw(obj, tinfo, dest);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102130
void _Unwind_Resume_wrapper(void *exc)
{
 _Unwind_Resume(exc);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102140
void __cxa_finalize_wrapper(void *d)
{
 __cxa_finalize(d);
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x102150
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *, void *))std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x102180
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 char **argv = (char **)&auStack_8;
 __libc_start_main(main,(int)param_2,argv,NULL,NULL,NULL,NULL);
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
void call_virtual_func(struct Base *param_1,int param_2)
{
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
 iVar1 = Base_virtual_func((struct Base *)&local_10,5);
 iVar2 = ((int (*)(void *, int))(*local_20))(&local_20,5);
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
 iVar1 = MultiDerived_funcA();
 iVar2 = ((int (*)(void *))(*local_20))(&local_20);
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
 iVar1 = DiamondDerived_func((struct DiamondDerived *)&local_20);
 local_18 = 100;
 iVar2 = ((int (*)(void *))(*local_20))(&local_20);
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
unsigned long long test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&typeinfo_for_int,0);
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
 *plVar4 = (long)&PTR__RTTIDerivedB_00105da0;
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
 lVar5 = (long)__dynamic_cast_wrapper((void *)plVar3,&PTR__RTTIBase_00105d78,&PTR__RTTIDerivedA_00105da0,0);
 uVar7 = uVar1 + 100;
 if (lVar5 == 0) {
 uVar7 = uVar1;
 }
 lVar5 = (long)__dynamic_cast_wrapper((void *)plVar4,&PTR__RTTIBase_00105d78,&PTR__RTTIDerivedB_00105da0,0);
 uVar1 = uVar7 + 200;
 if (lVar5 == 0) {
 uVar1 = uVar7;
 }
 sVar6 = strlen(__s1);
 operator_delete(plVar3);
 operator_delete(plVar4);
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
 void *local_48;
 unsigned int auStack_40 [4];
 unsigned int local_30;
 unsigned int uStack_2c;
 void *local_28;
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
 local_48 = 0x747365540000000aULL;
 sVar3 = strlen((char *)(&local_48 + 1));
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
 iVar6 = Base_virtual_func((struct Base *)&local_18,5);
 iVar1 = ((int (*)(void *, int))(*local_48))(&local_48,5);
 printf(&DAT_001030b7,(unsigned long)(iVar6 + iVar1 + 0x15));
 local_48 = &PTR_funcA_00105a50;
 auStack_40[2] = 0x105a80;
 auStack_40[3] = 0;
 auStack_40[0] = 100;
 local_30 = 200;
 iVar6 = ((int (*)(void *))(*((void **)&PTR_funcB_00105a80)))(&PTR_funcB_00105a80);
 printf(&DAT_001030d3,(unsigned long)(iVar6 + 0x1f));
 local_48 = &PTR_func_00105b58;
 local_28 = 0x105bc0;
 uStack_24 = 0;
 auStack_40[2] = 0x105b88;
 auStack_40[3] = 0;
 local_20 = 0x32;
 iVar6 = DiamondDerived_func((struct DiamondDerived *)&local_28);
 *(unsigned int *)((long)auStack_40 + (long)local_48[-3]) = 100;
 iVar1 = (**(void **)local_28)(&local_28);
 printf(&DAT_001030ef,(unsigned long)(uint)(iVar6 + iVar1));
 printf(&DAT_0010310c,0x16);
 printf(&DAT_00103128,0x27);
 printf(&DAT_00103144,0x10);
 printf(&DAT_00103160,0x55);
 uVar2 = 0;
 printf(&DAT_0010317c,(unsigned long)uVar2);
 printf(&DAT_00103199,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_001031b6,(unsigned long)uVar2);
 return;
}

// Function: main @ 0x1028f0
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x102900
int Base_virtual_func(struct Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x102910
int Derived_virtual_func(struct Derived *this,int param_1)
{
  return param_1 * *(int *)((char *)this + 8);
}

// Function: Base::~Base @ 0x102920
unsigned long long Base__Base_0(struct Base *this)
{
  return 0;
}

// Function: MultiDerived::~MultiDerived @ 0x102930
unsigned long long MultiDerived__MultiDerived_0(struct MultiDerived *this)
{
  return 0;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102940
unsigned long long DiamondDerived__DiamondDerived_0(struct DiamondDerived *this)
{
  return 0;
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
void Container_int__Container(struct Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x102990
void Container_int__push(struct Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1029b0
unsigned int Container_int__get(struct Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1029d0
unsigned int Container_int__getSize(struct Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x1029e0
void Container_double__Container(struct Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1029f0
void Container_double__push(struct Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)((char *)this + 0x50) = iVar1 + 1;
 *(double *)((char *)this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x102a10
unsigned long long Container_double__get(struct Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102a30
unsigned int Container_double__getSize(struct Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: Base::getName @ 0x102a40
char * Base_getName(void)
{
  return &DAT_001031d4;
}

// Function: Base::~Base @ 0x102a50
unsigned long long Base__Base(struct Base *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: Derived::getName @ 0x102a60
char * Derived_getName(void)
{
  return "Derived";
}

// Function: Derived::~Derived @ 0x102a70
unsigned long long Derived__Derived(struct Derived *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MultiDerived::funcA @ 0x102a80
unsigned long long MultiDerived_funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x102a90
unsigned long long MultiDerived__MultiDerived(struct MultiDerived *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MultiDerived::funcB @ 0x102aa0
unsigned long long MultiDerived_funcB_0(struct MultiDerived *this)
{
  return 0;
}

// Function: MultiDerived::funcB @ 0x102ab0
unsigned long long MultiDerived_funcB(struct MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x102ac0
unsigned long long MultiDerived__MultiDerived_3(struct MultiDerived *this)
{
  return 0;
}

// Function: MultiDerived::~MultiDerived @ 0x102ad0
unsigned long long MultiDerived__MultiDerived_2(struct MultiDerived *this)
{
  unsigned long long in_RAX;
  operator_delete((char *)this + -0x10);
  return in_RAX;
}

// Function: BaseA::funcA @ 0x102ae0
unsigned long long BaseA_funcA(void)
{
  return 10;
}

// Function: BaseA::~BaseA @ 0x102af0
void BaseA__BaseA_1(struct BaseA *this)
{
  return;
}

// Function: BaseA::~BaseA @ 0x102b00
unsigned long long BaseA__BaseA(struct BaseA *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: BaseB::funcB @ 0x102b10
unsigned long long BaseB_funcB(void)
{
  return 0x14;
}

// Function: BaseB::~BaseB @ 0x102b20
void BaseB__BaseB_1(struct BaseB *this)
{
  return;
}

// Function: BaseB::~BaseB @ 0x102b30
unsigned long long BaseB__BaseB(struct BaseB *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MiddleA::func @ 0x102b40
int MiddleA_func(struct MiddleA *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102b60
void MiddleA__MiddleA_1(struct MiddleA *this)
{
  return;
}

// Function: MiddleA::~MiddleA @ 0x102b70
unsigned long long MiddleA__MiddleA(struct MiddleA *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MiddleA::func @ 0x102b80
int MiddleA_func_2(struct MiddleA *this)
{
  return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102ba0
void MiddleA__MiddleA_2(struct MiddleA *this)
{
  return;
}

// Function: MiddleA::~MiddleA @ 0x102bb0
unsigned long long MiddleA__MiddleA_3(struct MiddleA *this)
{
  unsigned long long in_RAX;
  operator_delete((char *)this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}

// Function: MiddleB::func @ 0x102bc0
int MiddleB_func(struct MiddleB *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x102be0
void MiddleB__MiddleB_1(struct MiddleB *this)
{
  return;
}

// Function: MiddleB::~MiddleB @ 0x102bf0
unsigned long long MiddleB__MiddleB(struct MiddleB *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: MiddleB::func @ 0x102c00
int MiddleB_func_2(struct MiddleB *this)
{
  return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 200;
}

// Function: MiddleB::~MiddleB @ 0x102c20
void MiddleB__MiddleB_2(struct MiddleB *this)
{
  return;
}

// Function: MiddleB::~MiddleB @ 0x102c30
unsigned long long MiddleB__MiddleB_3(struct MiddleB *this)
{
  unsigned long long in_RAX;
  operator_delete((char *)this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}

// Function: DiamondDerived::func @ 0x102c40
int DiamondDerived_func(struct DiamondDerived *this)
{
 return *(int *)((char *)this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102c60
unsigned long long DiamondDerived__DiamondDerived(struct DiamondDerived *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: DiamondDerived::func @ 0x102c70
int DiamondDerived_func_2(struct DiamondDerived *this)
{
  return *(int *)((char *)this + *(long *)(*(long *)((char *)this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102c90
void DiamondDerived__DiamondDerived_1(struct DiamondDerived *this)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ca0
unsigned long long DiamondDerived__DiamondDerived_2(struct DiamondDerived *this)
{
  unsigned long long in_RAX;
  operator_delete((char *)this + -0x10);
  return in_RAX;
}

// Function: DiamondDerived::func @ 0x102cb0
int DiamondDerived_func_3(struct DiamondDerived *this)
{
  return *(int *)((char *)this + *(long *)(*(long *)((char *)this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8 +
 *(long *)(*(long *)this + -0x18)) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102cd0
void DiamondDerived__DiamondDerived_3(struct DiamondDerived *this)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ce0
unsigned long long DiamondDerived__DiamondDerived_4(struct DiamondDerived *this)
{
  unsigned long long in_RAX;
  operator_delete((char *)this + *(long *)(*(long *)this + -0x20));
  return in_RAX;
}

// Function: VirtualBase::func @ 0x102cf0
unsigned long long VirtualBase_func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102d00
void VirtualBase__VirtualBase_1(struct VirtualBase *this)
{
  return;
}

// Function: VirtualBase::~VirtualBase @ 0x102d10
unsigned long long VirtualBase__VirtualBase(struct VirtualBase *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102d20
unsigned long long RTTIDerivedA__RTTIDerivedA(struct RTTIDerivedA *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
}

// Function: RTTIDerivedA::getType @ 0x102d30
unsigned long long RTTIDerivedA_getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x102d40
void RTTIBase__RTTIBase(struct RTTIBase *this)
{
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102d50
unsigned long long RTTIDerivedB__RTTIDerivedB(struct RTTIDerivedB *this)
{
 unsigned long long in_RAX;
 operator_delete(this);
 return in_RAX;
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

