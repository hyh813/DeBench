#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* Auto-injected type definitions by preprocessor (non-conflicting types) */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Helper macro for 64-bit value construction */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

/* Forward declarations */
int call_weak_fn(void);
int main(void);

/* C++ ABI and runtime function declarations - just prototypes, no static */
__extension__ void *operator_new(size_t size);
__extension__ void operator_delete(void *ptr);
void __cxa_begin_catch(void *exception);
void *__cxa_allocate_exception(size_t size);
void __cxa_end_cleanup(void);
void *__dynamic_cast(void *ptr, const void *src_type, const void *dst_type, int hint);
void __cxa_rethrow(void);
void __cxa_end_catch(void);
void __gxx_personality_v0(void);
void __cxa_throw(void *exception, const void *typeinfo, void (*dest)(void*)) __attribute__((noreturn));
int __aeabi_dcmpgt(double a, double b);
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __cxa_finalize(void *dso_handle);
/* Class forward declarations */
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Struct definitions for decompiled classes */
struct Base {
    void *vtable;
};

struct LifecycleClass {
    int dummy;
};

struct RTTIBase {
    void *vtable;
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
    int dummy;
};

struct Container_int_ {
    unsigned int data[10];  /* 40 bytes */
    unsigned int size;      /* at offset 0x28 (40) */
};

struct Container_double_ {
    double data[10];        /* 80 bytes for 10 doubles */
    unsigned int size;      /* at offset 0x50 (80) */
};

/* Global data references */
extern void *PTR__RTTIBase_00021ed8;
extern void *PTR__RTTIBase_00021eec;

/* C++ std compatibility stubs */
struct std_ioinit_t {
    int dummy;
};

/* Forward declaration for std::ios_base::Init::Init */
void std_ios_base_Init_Init(struct std_ioinit_t *this_ptr);

/* Union for safe function pointer casts */
typedef union {
    void (*void_func)(void*);
    void (*typed_func)(struct std_ioinit_t*);
} func_ptr_union_t;

/* Wrapper function for __cxa_atexit compatibility */
void std_ios_base_wrapper(void *arg)
{
    std_ios_base_Init_Init((struct std_ioinit_t *)arg);
}

/* libc startup function declaration */
int __libc_start_main(int (*main)(int, char**, char**),
                      int argc,
                      void *ubp_av,
                      void (*init)(void),
                      void (*fini)(void),
                      void (*rtld_fini)(void),
                      void (*stack_end));

void abort(void) __attribute__((noreturn));
void abort(void)
{
    /* Use _Exit to terminate the process without calling atexit handlers */
    _Exit(134);
}

/* Global variable definitions */
char completed_0 = 0;
struct std_ioinit_t std___ioinit;
char stack0x00000004[4] = {0};
char DAT_0001134c[] = "";
void *__dso_handle = NULL;
const char DAT_000111f5[] = "%d\n";
const char DAT_00011213[] = "%d\n";
const char DAT_0001122f[] = "%d\n";
const char DAT_0001124b[] = "%d\n";
const char DAT_00011267[] = "%d\n";
const char DAT_00011284[] = "%d\n";
const char DAT_000112a0[] = "%d\n";
const char DAT_000112bc[] = "%d\n";
const char DAT_000112d8[] = "%d\n";
const char DAT_000112f4[] = "%d\n";
const char DAT_00011311[] = "%d\n";
const char DAT_0001132e[] = "%d\n";
void *PTR__RTTIBase_00021ed8 = NULL;
void *PTR__RTTIBase_00021eec = NULL;

// Decompiled by BinaryAI
// SHA256: 47db35a19a9c2e173afe6996b4695ef08a58e9b4da2438c85d6aacd7eb188555

// Function: _init @ 0x10848
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10868
void *operator_new(size_t param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
void __cxa_begin_catch(void *exception)
{
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

/* Standard library functions - using actual implementations */

// Function: <EXTERNAL>::operator.delete @ 0x108c8
void operator_delete(void *ptr)
{
 free(ptr);
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108d0
void __cxa_end_cleanup(void)
{
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void *__dynamic_cast(void *ptr, const void *src_type, const void *dst_type, int hint)
{
 return NULL;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow(void)
{
}

// Function: <EXTERNAL>::strlen @ 0x108f8
// Using standard strlen from <string.h>

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
void std_ios_base_Init_Init(struct std_ioinit_t *this_ptr)
{
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
void __cxa_end_catch(void)
{
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
void __gxx_personality_v0(void)
{
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw(void *exception, const void *typeinfo, void (*dest)(void*))
{
 abort();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
int __aeabi_dcmpgt(double a, double b)
{
 return (int)(a > b);
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1094c
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x109dc
void __cxa_finalize(void *dso_handle)
{
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void _GLOBAL__sub_I_5_1_cpp(void)
{
 /* std::ios_base::Init constructor call stubbed */
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init,(void *)&std___ioinit,&__dso_handle);
}

// Function: __gmon_start__ @ 0x109d8
void __gmon_start__(void)
{
}

// Function: call_weak_fn @ 0x109dc
int call_weak_fn(void)
{
 return 0;
}

// Function: deregister_tm_clones @ 0x109fc
void deregister_tm_clones(void)
{
}

// Function: register_tm_clones @ 0x10a40
void register_tm_clones(void)
{
}

// Function: __do_global_dtors_aux @ 0x10a90
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: test_cpp_member_func @ 0x10afc
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned short local_c;
 char local_a;
 char local_9;
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return (unsigned int)(sVar1 + 0x125c);
}

// Function: test_cpp_constructor @ 0x10b64
int test_cpp_constructor(void)
{
 static int LifecycleClass_instance_count = 0;
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10b80
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(void))(*(void **)param_1))();
}

// Function: test_cpp_virtual_func @ 0x10b8c
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10b94
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10b9c
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10ba8
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10bb0
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x10bb8
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10bc0
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x10bc8
unsigned int test_cpp_exception(void)
{
 return 0x2a;
}

// Function: test_cpp_smart_ptr @ 0x10c98
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10ca4
int test_cpp_rtti(void)
{
 unsigned int *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 static const void *RTTIBase_typeinfo = 0;
 static const void *RTTIDerivedA_typeinfo = (void*)1;
 static const void *RTTIDerivedB_typeinfo = (void*)2;
 puVar1 = (unsigned int *)operator_new(4);
 *puVar1 = (unsigned int)(unsigned long)&PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)(unsigned long)&PTR__RTTIBase_00021eec;
 iVar3 = (int)(unsigned long)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = (int)(unsigned long)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 operator_delete(piVar2);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10d70
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 static const void *RTTIBase_typeinfo = 0;
 static const void *RTTIDerivedA_typeinfo = (void*)1;
 static const void *RTTIDerivedB_typeinfo = (void*)2;
 static int LifecycleClass_instance_count = 0;
 unsigned int local_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned short local_1c;
 char local_1a;
 char local_19;
 puts(DAT_0001134c);
 local_38 = 0x74736554;
 uStack_34 = 0;
 uStack_30 = 0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 local_1a = 0;
 local_19 = 0;
 sVar1 = strlen((char *)&local_38);
 printf(DAT_000111f5,(unsigned int)(sVar1 + 0x125c) + '0');
 printf(DAT_00011213,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(DAT_0001122f,0x2a);
 printf(DAT_0001124b,0x47);
 printf(DAT_00011267,0x28a);
 printf(DAT_00011284,0x16);
 printf(DAT_000112a0,0x27);
 printf(DAT_000112bc,0x10);
 printf(DAT_000112d8,0x55);
 uVar2 = test_cpp_exception();
 printf(DAT_000112f4,uVar2);
 printf(DAT_00011311,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = (unsigned int)(unsigned long)&PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)(unsigned long)&PTR__RTTIBase_00021eec;
 iVar5 = (int)(unsigned long)__dynamic_cast(puVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar6 = (int)(unsigned long)__dynamic_cast(piVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 operator_delete(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf(DAT_0001132e,iVar7 + 0xe);
 return;
}

// Function: main @ 0x10fac
int main(int argc, char **argv)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x10fc0
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10fcc
double template_max_double_(double param_1,double param_2)
{
 if (__aeabi_dcmpgt(param_2, param_1)) {
 return param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11000
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11014
void Container_int__Container(Container_int_ *this)
{
 this->size = 0;
}

// Function: Container<int>::push @ 0x11020
void Container_int__push(Container_int_ *this,int param_1)
{
 unsigned int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->data[iVar1] = (unsigned int)param_1;
 this->size = iVar1 + 1;
 }
}

// Function: Container<int>::get @ 0x11038
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 if (param_1 < 0) {
 return 0;
 }
 if ((unsigned int)param_1 < this->size) {
 return this->data[param_1];
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11058
unsigned int Container_int__getSize(Container_int_ *this)
{
 return this->size;
}

// Function: Container<double>::Container @ 0x11060
void Container_double__Container(Container_double_ *this)
{
 this->size = 0;
}

// Function: Container<double>::push @ 0x11080
void Container_double__push(Container_double_ *this, double param_1)
{
 unsigned int iVar2;
 iVar2 = this->size;
 if (iVar2 < 10) {
 this->data[iVar2] = param_1;
 this->size = iVar2 + 1;
 }
}

// Function: Container<double>::get @ 0x11090
double Container_double__get(Container_double_ *this,int param_1)
{
 if (param_1 < 0 || (unsigned int)param_1 >= this->size) {
 return 0.0;
 }
 return this->data[param_1];
}

// Function: Container<double>::getSize @ 0x110bc
unsigned int Container_double__getSize(Container_double_ *this)
{
 return this->size;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x110c4
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x110c8
unsigned int RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x110d0
void RTTIBase__RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x110d4
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x110d8
unsigned int RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _fini @ 0x110e0
void _fini(void)
{
 return;
}

