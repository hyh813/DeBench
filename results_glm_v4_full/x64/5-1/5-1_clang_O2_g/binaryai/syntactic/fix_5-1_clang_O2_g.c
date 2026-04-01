#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

/* Additional type definitions */
typedef unsigned int uint;

/* Forward declarations for missing globals */
extern void *__dso_handle;
extern int completed_0;
extern int LifecycleClass_instance_count;
extern struct Init std__ioinit;

/* Define missing global variables */
void *__dso_handle = 0;
int completed_0 = 0;
int LifecycleClass_instance_count = 0;
struct Init std__ioinit = {0};

/* Data references */
char DAT_001021d4[1] = {0};
char DAT_0010207d[1] = {0};
char DAT_0010209b[1] = {0};
char DAT_001020b7[1] = {0};
char DAT_001020d3[1] = {0};
char DAT_001020ef[1] = {0};
char DAT_0010210c[1] = {0};
char DAT_00102128[1] = {0};
char DAT_00102144[1] = {0};
char DAT_00102160[1] = {0};
char DAT_0010217c[1] = {0};
char DAT_00102199[1] = {0};
char DAT_001021b6[1] = {0};

/* RTTI and type info pointers */
void *PTR__RTTIBase_00103d78 = 0;
void *PTR__RTTIBase_00103da0 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *int_typeinfo = 0;

/* Class type stubs - empty struct definitions to make them complete types */
typedef struct Base { int dummy; } Base;
typedef struct Init { int dummy; } Init;
typedef struct Container_int_ { int dummy; } Container_int_;
typedef struct Container_double_ { int dummy; } Container_double_;
typedef struct RTTIDerivedA { int dummy; } RTTIDerivedA;
typedef struct RTTIBase { int dummy; } RTTIBase;
typedef struct RTTIDerivedB { int dummy; } RTTIDerivedB;

/* External function declarations */
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern int __gmon_start__(void);
extern void __libc_start_main(int (*)(int, char **, char **), int, char **, void (*)(), void (*)(), void *, void *);
extern void *__dynamic_cast(void *, void *, void *, int);

/* Forward declarations for operator new/delete */
void operator_delete(void *);
void *operator_new(unsigned long);

/* Forward declarations for functions called before definition */
int main(int argc, char **argv);
void test_cpp_oo_features(void);
int test_cpp_exception(void);
void RTTIBase_dtor(RTTIBase *this);

/* Forward declaration for Init destructor */
void std_ios_base_Init_dtor(void *this);

// Decompiled by BinaryAI
// SHA256: d9e7362b0248b250abdba69a9c576cf04e927c19a7172ae75f5a280e4eb7e8d7

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



// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101040
void *__cxa_begin_catch(void *param_1)
{
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x101050
// Using strlen from string.h

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101060
void *__cxa_allocate_exception(unsigned long param_1)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101070
int __cxa_atexit(void (*param_1)(void *), void *param_2, void *param_3)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete @ 0x101080
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x101090
void * operator_new(unsigned long param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1010a0
void *__dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1010b0
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1010c0
void std_ios_base_Init_Init(Init *this)
{
 return;
}



// Function: <EXTERNAL>::__cxa_end_catch @ 0x1010e0
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1010f0
void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101100
void _Unwind_Resume(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101110
void __cxa_finalize(void *param_1)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)&std__ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_dtor,&std__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101150
void _start(int argc, char **argv, char **envp)
{
 __libc_start_main(main, argc, argv, 0, 0, envp, 0);
 do {
 } while( 1 );
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
 uint8_t uStack_14[3];
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 memset(&uStack_14, 0, sizeof(uStack_14));
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

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(Base *param_1,int param_2)
{
 (*(void (**)(void))*(void **)param_1)();
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
int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo,0);
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
 long lVar4;
 int iVar5;
 puVar2 = (unsigned long long *)operator_new(8);
 *puVar2 = (unsigned long long)PTR__RTTIBase_00103d78;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)PTR__RTTIBase_00103da0;
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
 if (plVar3 != (long *)0) {
  RTTIBase_dtor((RTTIDerivedB *)plVar3);
 }
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
 long lVar6;
 int iVar7;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 uint8_t uStack_3c[3];
 unsigned int uStack_39;
 unsigned int uStack_35;
 unsigned int uStack_31;
 char local_2d;
 puts(&DAT_001021d4);
 memset(&uStack_3c, 0, sizeof(uStack_3c));
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
 printf(&DAT_0010209b,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
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
 *puVar4 = (unsigned long long)PTR__RTTIBase_00103d78;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)PTR__RTTIBase_00103da0;
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
 if (plVar5 != (long *)0) {
  RTTIBase_dtor((RTTIDerivedB *)plVar5);
 }
 printf(&DAT_001021b6,(unsigned long)(iVar7 + 0xe));
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
 *(int *)((char *)this + 0x28) = iVar1;
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
 uVar1 = *(unsigned int *)((char *)this + (unsigned long)(unsigned int)param_1 * 4);
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
 *(int *)((char *)this + 0x50) = iVar1;
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
 uVar1 = *(unsigned long long *)((char *)this + (unsigned long)(unsigned int)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101770
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101780
void RTTIDerivedA_dtor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101790
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1017a0
void RTTIBase_dtor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1017b0
void RTTIDerivedB_dtor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x1017c0
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: std::ios_base::Init::~Init @ 0x1017c8
void std_ios_base_Init_dtor(Init *this)
{
 return;
}

// Function: _fini @ 0x1017d0
void _fini(void)
{
 return;
}

