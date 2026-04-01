#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>

/* Auto-injected type definitions by preprocessor */
/* Note: size_t, ssize_t, uintptr_t, intptr_t, ptrdiff_t, intmax_t, uintmax_t are provided by stdint.h/stddef.h */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned char undefined_t;
typedef unsigned char undefined2_t[2];
typedef unsigned char undefined3_t[3];
typedef unsigned char undefined4_t[4];

/* Forward declarations for classes/structs */
typedef struct Base Base;
typedef struct Init Init;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Struct definitions */
struct Base { void *vtable; };
struct Init { int _idx; };
struct LifecycleClass { int dummy; };
struct RTTIBase { void *vtable; };
struct RTTIDerivedA { void *vtable; };
struct RTTIDerivedB { void *vtable; };
struct Container_int_ { int data[10]; unsigned int size; undefined4_t _pad[3]; };
struct Container_double_ { double data[10]; unsigned int size; undefined4_t _pad[3]; };

/* External function declarations */
int __gmon_start__(void);
void __cxa_begin_catch(void *);
void *__cxa_allocate_exception(size_t);
void __cxa_atexit(void (*)(void *), void *, void *);
void *__dynamic_cast(void *, void *, void *, int);
void __cxa_rethrow(void);
void __cxa_end_catch(void);
void __cxa_throw(void *, void *, void (*)(void *));
void _Unwind_Resume(void *);
void __cxa_finalize(void *);
void __libc_start_main(int (*)(int, char **, char **), int, char **, void (*)(), void (*)(), void *, char **);
void std__ios_base__Init__Init_(Init *);

/* Operator new/delete implementations */
void *operator_new(size_t size)
{
 void *p = malloc(size);
 if (!p) {
   /* In C, we can't throw exceptions, just return NULL */
   return NULL;
 }
 return p;
}

void operator_delete(void *ptr)
{
 free(ptr);
}

/* Placeholder implementations for undefined functions */
void Init__construct(Init *this)
{
 /* Placeholder for std::ios_base::Init */
}

void std__ios_base__Init__Init(Init *this)
{
 Init__construct(this);
}

void std__ios_base__Init__Init_(Init *this)
{
 /* Placeholder for std::ios_base::Init destructor */
}

/* Global data declarations */
extern char std__ioinit;
char completed_0 = 0;
void *__dso_handle;
const char DAT_001021d4[] = "";
const char DAT_0010207d[] = "%lu\n";
const char DAT_0010209b[] = "%lu\n";
const char DAT_001020b7[] = "%lu\n";
const char DAT_001020d3[] = "%lu\n";
const char DAT_001020ef[] = "%lu\n";
const char DAT_0010210c[] = "%lu\n";
const char DAT_00102128[] = "%lu\n";
const char DAT_00102144[] = "%lu\n";
const char DAT_00102160[] = "%lu\n";
const char DAT_0010217c[] = "%lu\n";
const char DAT_00102199[] = "%lu\n";
const char DAT_001021b6[] = "%lu\n";

/* VTable and RTTI pointer declarations */
/* Forward declarations for RTTI constructor/destructor functions */
void RTTIBase__RTTIBase(RTTIBase *this);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);

/* Class typeinfo definitions - standard C++ ABI layout */
typedef struct type_info type_info;
struct type_info {
    void *vtable;
    const char *name;
};

/* Dummy vtables - storing actual function pointers directly */
void *RTTIBase_vtable[2] = {(void *)RTTIBase__RTTIBase, (void *)RTTIBase__RTTIBase};
void *RTTIDerivedA_vtable[2] = {(void *)RTTIDerivedA__RTTIDerivedA, (void *)RTTIDerivedA__RTTIDerivedA};
void *RTTIDerivedB_vtable[2] = {(void *)RTTIDerivedB__RTTIDerivedB, (void *)RTTIDerivedB__RTTIDerivedB};

/* type_info vtable placeholder */
void *type_info_vtable[2] = {NULL, NULL};

/* Initialize the vtable pointers */
void *PTR__RTTIBase_00103d78 = (void *)RTTIBase_vtable;
void *PTR__RTTIBase_00103da0 = (void *)RTTIDerivedB_vtable;

/* Dummy typeinfo objects */
const type_info RTTIBase__typeinfo = {type_info_vtable, "RTTIBase"};
const type_info RTTIDerivedA__typeinfo = {type_info_vtable, "RTTIDerivedA"};
const type_info RTTIDerivedB__typeinfo = {type_info_vtable, "RTTIDerivedB"};
const type_info int__typeinfo = {type_info_vtable, "int"};

/* Static class members */
int LifecycleClass__instance_count = 0;

// Decompiled by BinaryAI
// SHA256: 5d02349844d25a496f5e07dea4ea0b2c41b31abb19c209e1a5560e148b73bbd3

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
 /* Placeholder - original code had undefined behavior (null pointer dereference) */
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010c0
void std__ios_base__Init__Init(Init *this)
{
 Init__construct(this);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
__attribute__((constructor))
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std__ios_base__Init__Init((Init *)&std__ioinit);
 __cxa_atexit((void (*)(void *))std__ios_base__Init__Init_,&std__ioinit,&__dso_handle);
 return;
}

// Forward declaration for main
int main(int argc, char **argv, char **envp);

// Function: _start @ 0x101150
void _start(unsigned long long param_1,unsigned long long param_2)
{
 __libc_start_main(main, (int)param_2, (char **)param_2, 0, 0, (void *)param_1, (char **)param_2);
 do {
 } while( true );
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
 undefined3_t uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 uStack_14[0] = 0;
 uStack_14[1] = 0;
 uStack_14[2] = 0;
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
 return LifecycleClass__instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
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
 puVar1 = (unsigned int *)__cxa_allocate_exception((size_t)4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)&int__typeinfo,NULL);
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
 unsigned long long *puVar2;
 long *plVar3;
 void *pvVar4;
 int iVar5;
 puVar2 = (unsigned long long *)operator_new(8);
 *puVar2 = (unsigned long long)(uintptr_t)&PTR__RTTIBase_00103d78;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)(uintptr_t)&PTR__RTTIBase_00103da0;
 pvVar4 = __dynamic_cast((void *)puVar2,(void *)&RTTIBase__typeinfo,(void *)&RTTIDerivedA__typeinfo,0);
 iVar1 = 0x82;
 if (pvVar4 == 0) {
 iVar1 = 0x1e;
 }
 pvVar4 = __dynamic_cast((void *)plVar3,(void *)&RTTIBase__typeinfo,(void *)&RTTIDerivedB__typeinfo,0);
 iVar5 = iVar1 + 200;
 if (pvVar4 == 0) {
 iVar5 = iVar1;
 }
 operator_delete(puVar2);
 if ((void *)(*plVar3) != NULL) {
   void **vtable = (void **)(uintptr_t)*plVar3;
   if (vtable[1] != NULL) {
     ((void (*)(void *))vtable[1])((void *)plVar3);
   }
 }
 operator_delete(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 unsigned long long *puVar4;
 long *plVar5;
 void *pvVar6;
 int iVar7;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 undefined3_t uStack_3c;
 unsigned int uStack_39;
 unsigned int uStack_35;
 unsigned int uStack_31;
 char local_2d;
 puts(&DAT_001021d4);
 uStack_3c[0] = 0;
 uStack_3c[1] = 0;
 uStack_3c[2] = 0;
 uStack_39 = 0;
 uStack_35 = 0;
 uStack_31 = 0;
 local_4c = 0x74736554;
 uStack_48 = 0;
 uStack_44 = 0;
 uStack_40 = 0;
 local_2d = 0;
 sVar3 = strlen((char *)&local_4c);
 printf(&DAT_0010207d,(unsigned long)((int)sVar3 + 0x125c));
 printf(&DAT_0010209b,(unsigned long)(LifecycleClass__instance_count * 0x3e9 + 0x15));
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
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)(uintptr_t)&PTR__RTTIBase_00103d78;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)(uintptr_t)&PTR__RTTIBase_00103da0;
 pvVar6 = __dynamic_cast((void *)puVar4,(void *)&RTTIBase__typeinfo,(void *)&RTTIDerivedA__typeinfo,0);
 iVar2 = 0x82;
 if (pvVar6 == 0) {
 iVar2 = 0x1e;
 }
 pvVar6 = __dynamic_cast((void *)plVar5,(void *)&RTTIBase__typeinfo,(void *)&RTTIDerivedB__typeinfo,0);
 iVar7 = iVar2 + 200;
 if (pvVar6 == 0) {
 iVar7 = iVar2;
 }
 operator_delete(puVar4);
 if ((void *)(*plVar5) != NULL) {
   void **vtable = (void **)(uintptr_t)*plVar5;
   if (vtable[1] != NULL) {
     ((void (*)(void *))vtable[1])((void *)plVar5);
   }
 }
 operator_delete(plVar5);
 printf(&DAT_001021b6,(unsigned long)(iVar7 + 0xe));
 return;
}

// Function: main @ 0x101680
int main(int argc, char **argv, char **envp)
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

// Function: Container<int>::Container @ 0x1016c0
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1016d0
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

// Function: Container<int>::get @ 0x1016f0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x28) != param_1 && param_1 <= *(int *)((char *)this + 0x28))) {
 uVar1 = *(unsigned int *)((char *)this + (unsigned long)(uint)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x101710
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Container @ 0x101720
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101730
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

// Function: Container<double>::get @ 0x101750
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)this + 0x50) != param_1 && param_1 <= *(int *)((char *)this + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101770
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101780
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: RTTIDerivedA::getType @ 0x101790
unsigned long long RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1017a0
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1017b0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedB::getType @ 0x1017c0
unsigned long long RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _fini @ 0x1017c8
void _fini(void)
{
 return;
}

