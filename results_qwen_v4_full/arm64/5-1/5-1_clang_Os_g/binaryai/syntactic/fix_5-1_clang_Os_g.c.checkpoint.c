/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Global variables
char completed_0 = 0;
void *__dso_handle = 0;
void *std___ioinit = 0;
char DAT_00101529 = 0;
char DAT_00101547 = 0;
char DAT_00101563 = 0;
char DAT_0010157f = 0;
char DAT_0010159b = 0;
char DAT_001015b8 = 0;
char DAT_001015d4 = 0;
char DAT_001015f0 = 0;
char DAT_0010160c = 0;
char DAT_00101628 = 0;
char DAT_00101645 = 0;
char DAT_00101662 = 0;
char DAT_00101680 = 0;
void *PTR__RTTIBase_00111d58 = 0;
void *PTR__RTTIBase_00111d80 = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;

// Type definitions for C++ runtime
typedef struct Init {
 int dummy;
} Init;

typedef unsigned long long undefined7;

// Forward declarations
static void call_weak_fn(intptr_t param_1);
int main(void);

typedef struct std_struct {
 void *__ioinit;
} std_struct;

typedef struct ios_base_struct {
 int dummy;
} ios_base_struct;

typedef struct Init_func {
 int dummy;
} Init_func;

typedef struct Container_int_ {
 int data[10];
 int size;
} Container_int_;

typedef struct Container_double_ {
 double data[10];
 int size;
} Container_double_;

typedef struct RTTIDerivedA {
 void **vtable;
} RTTIDerivedA;

typedef struct RTTIBase {
 void **vtable;
} RTTIBase;

typedef struct RTTIDerivedB {
 void **vtable;
} RTTIDerivedB;

// Decompiled by BinaryAI
// SHA256: 010e8616b3ec90c6246288639bc968fba63d564d95a7d7012a9ab6a057832aa6

// Function: _init @ 0x100d48
static int _init_wrapper_local(void *ctx) __attribute__((used));
static int _init_wrapper_local(void *ctx)
{
 call_weak_fn((intptr_t)ctx);
 return 0;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100d80
static int external_puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x100d90
static size_t external_strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::printf @ 0x100d98
static int external_printf(char *__format, ...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
static void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
static void *__cxa_allocate_exception(unsigned long size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
static void __cxa_finalize(void *param_1)
{
 (void)param_1;
 return;
}



// Function: <EXTERNAL>::operator.delete @ 0x100de0
static void operator_delete(void *param_1)
{
 free(param_1);
}

// Function: <EXTERNAL>::operator.new @ 0x100df0
static void * operator_new(unsigned long param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
static void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags)
{
 (void)obj;
 (void)src_type;
 (void)dst_type;
 (void)flags;
 return obj;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
static void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 (void)func;
 (void)arg;
 (void)dso_handle;
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
static void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
static void std_ios_base_Init_Init(void *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: std_ios_base_Init_Destroy @ 0x100e38
static void std_ios_base_Init_Destroy(void *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
static void external_abort(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
static void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
static void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
static void __cxa_throw(void *exception, void *tinfo, void *dest)
{
 (void)exception;
 (void)tinfo;
 (void)dest;
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
static void _Unwind_Resume(void)
{
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
static void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::call_weak_fn @ 0x100ea0
static void call_weak_fn(intptr_t param_1)
{
 (void)param_1;
 return;
}



// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Destroy,&std___ioinit,&__dso_handle);
 return;
}



// Function: test_cpp_member_func @ 0x101014
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_38;
 unsigned long long local_34;
 unsigned long long uStack_2c;
 char uStack_25;
 unsigned long long uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

typedef struct LifecycleClass {
 int instance_count;
} LifecycleClass;

int LifecycleClass_instance_count = 0;

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

typedef struct Base {
 void **vtable;
} Base;

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(Base *, int))(*(void **)param_1))(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101088
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101090
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101098
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1010a0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1010a8
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x1010b0
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1010b8
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1010c0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)0,0);
}

// Function: test_cpp_smart_ptr @ 0x1011b0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011b8
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 void *lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = (unsigned long long)(uintptr_t)&PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)(uintptr_t)&PTR__RTTIBase_00111d80;
 lVar3 = __dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = __dynamic_cast(plVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 ((void (*)(void *))(*(void **)((char *)*plVar2 + 8)))(plVar2);
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101278
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long uVar3;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 puts(&DAT_00101680);
 local_15 = 0;
 local_38 = 10;
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar2 = strlen((char *)((unsigned long)&local_38 | 4));
 printf(&DAT_00101529,(unsigned long)((int)sVar2 + 0x125c));
 printf(&DAT_00101547,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(&DAT_00101563,0x2a);
 printf(&DAT_0010157f,0x47);
 printf(&DAT_0010159b,0x28a);
 printf(&DAT_001015b8,0x16);
 printf(&DAT_001015d4,0x27);
 printf(&DAT_001015f0,0x10);
 printf(&DAT_0010160c,0x55);
 test_cpp_exception();
 printf(&DAT_00101628,0);
 printf(&DAT_00101645,0x2bf);
 uVar3 = test_cpp_rtti();
 iVar1 = printf(&DAT_00101662,uVar3 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x1013a4
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x1013bc
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x1013c8
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1013d4
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1013e8
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1013f0
void Container_int__push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x10140c
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 uVar1 = *(unsigned int *)(this_ptr + (unsigned long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x10142c
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container<double>::Container @ 0x101434
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x10143c
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(double *)(this_ptr + (long)iVar1 * 8) = param_1;
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x101458
unsigned long long Container_double__get(Container_double_ *this_ptr,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 uVar1 = *(unsigned long long *)(this_ptr + (unsigned long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101474
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x10147c
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101480
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x101488
void RTTIBase__RTTIBase(RTTIBase *this_ptr)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10148c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101490
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x101498
static void _fini_wrapper_local(void) __attribute__((used));
static void _fini_wrapper_local(void)
{
 return;
}

