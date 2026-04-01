/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>

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

// Global variables
char completed_0 = '\0';

// Type definitions for decompiled code
typedef unsigned long long undefined7;

// Forward declarations for classes/structs
typedef struct Base {
 void *vtable;
} Base;

typedef struct LifecycleClass {
 int instance_count;
} LifecycleClass;

// Global instances
LifecycleClass g_LifecycleClass = {0};

// External data references
void *PTR__RTTIBase_00111d58 = 0;
void *PTR__RTTIBase_00111d80 = 0;

// Data references
char DAT_00101680 = '\0';
char DAT_00101529 = '\0';
char DAT_00101547 = '\0';
char DAT_00101563 = '\0';
char DAT_0010157f = '\0';
char DAT_0010159b = '\0';
char DAT_001015b8 = '\0';
char DAT_001015d4 = '\0';
char DAT_001015f0 = '\0';
char DAT_0010160c = '\0';
char DAT_00101628 = '\0';
char DAT_00101645 = '\0';
char DAT_00101662 = '\0';

// Typeinfo references
void *int_typeinfo = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;

// Container type definitions
typedef struct {
 unsigned int data[10];
 unsigned int size;
} Container_int_;

typedef struct {
 double data[10];
 unsigned int size;
} Container_double_;

// RTTI class definitions
typedef struct RTTIBase {
 void *vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
 void *vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
 void *vtable;
} RTTIDerivedB;

// Forward declarations
int main(void);
static void call_weak_fn(void) { /* stub */ }

// Standard library function declarations
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);

// Decompiled by BinaryAI
// SHA256: bcc3c1f915f942182d2110f66079bde10fcde94c6d929c03621c5f174237c245

// Function: _init_wrapper @ 0x100d48
static int _init_wrapper(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100d60 @ 0x100d60
static void FUN_00100d60(void)
{
 return;
}















// Stub implementations for C++ runtime functions (weak aliases to avoid conflicts)
__attribute__((weak)) void *__cxa_allocate_exception(unsigned long size) { return 0; }
__attribute__((weak)) void __cxa_throw(void *exc, void *tinfo, void *dest) { }
__attribute__((weak)) void __cxa_begin_catch(void) { }
__attribute__((weak)) void __cxa_end_catch(void) { }
__attribute__((weak)) void __cxa_rethrow(void) { }
__attribute__((weak)) void *__dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4) { return 0; }
__attribute__((weak)) void *operator_new(unsigned long param_1) { return 0; }
__attribute__((weak)) void operator_delete(void *param_1) { }
__attribute__((weak)) void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) { }
__attribute__((weak)) void __cxa_finalize(void *param_1) { }
__attribute__((weak)) void __gxx_personality_v0(void) { }
__attribute__((weak)) void _Unwind_Resume(void) { }



// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100e30
typedef struct {
 int dummy;
} std_ios_base_Init;





// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0











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

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return g_LifecycleClass.instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(Base *, int))**(void ***)param_1)(param_1, param_2);
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
 __cxa_throw(puVar1,int_typeinfo,0);
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
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = (unsigned long long)PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)(uintptr_t)PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
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
 unsigned long long uStack_2c;
 char uStack_25;
 unsigned long long uStack_24;
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
 printf(&DAT_00101547,(unsigned long)(g_LifecycleClass.instance_count * 0x3e9 + 0x15));
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
 iVar1 = printf(&DAT_00101662,test_cpp_rtti());
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

// Function: Container_int__Container @ 0x1013e8
void Container_int__Container(Container_int_ *this_)
{
 *(unsigned int *)(this_ + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x1013f0
void Container_int__push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ + 0x28) = iVar1 + 1;
 *(int *)(this_ + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x10140c
unsigned int Container_int__get(Container_int_ *this_,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ + 0x28))) {
 uVar1 = *(unsigned int *)(this_ + (unsigned long)(unsigned int)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x10142c
unsigned int Container_int__getSize(Container_int_ *this_)
{
 return *(unsigned int *)(this_ + 0x28);
}

// Function: Container_double__Container @ 0x101434
void Container_double__Container(Container_double_ *this_)
{
 *(unsigned int *)(this_ + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x10143c
void Container_double__push(Container_double_ *this_,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ + 0x50);
 if (iVar1 < 10) {
 *(double *)(this_ + (long)iVar1 * 8) = param_1;
 *(int *)(this_ + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container_double__get @ 0x101458
unsigned long long Container_double__get(Container_double_ *this_,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ + 0x50))) {
 uVar1 = *(unsigned long long *)(this_ + (unsigned long)(unsigned int)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double__getSize @ 0x101474
unsigned int Container_double__getSize(Container_double_ *this_)
{
 return *(unsigned int *)(this_ + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x10147c
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 operator_delete(this_);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101480
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x101488
void RTTIBase__RTTIBase(RTTIBase *this_)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10148c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 operator_delete(this_);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101490
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x101498
void _fini(void)
{
 return;
}

