#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <typeinfo>
#include <cxxabi.h>

/* Ensure uint is defined */
#ifndef uint
typedef unsigned int uint;
#endif

/* C++ standard library placeholders for decompiled code - must be before forward declarations */
typedef struct Init Init;
struct Init {
    int dummy;
};

/* Forward declarations */
int call_weak_fn(void);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
__attribute__((weak)) void __gmon_start__(void);
void std__ios_base__Init__Init(Init *init_ptr);
void _fini(void);
int main(int argc, char **argv, char **envp);

int printf(const char *format, ...);
int puts(const char *s);

/* Missing type definitions */
typedef struct Base Base;
typedef struct LifecycleClass LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

/* Base struct - needed for virtual function calls */
struct Base {
    void **vtable;
};

/* Type info structures */
typedef struct {
    void *typeinfo;
} type_info;

/* Missing class declarations */
struct LifecycleClass {
    int dummy;
};

struct RTTIBase {
    type_info *typeinfo_ptr;
};

struct RTTIDerivedA {
    type_info *typeinfo_ptr;
};

struct RTTIDerivedB {
    type_info *typeinfo_ptr;
};

struct Container_int_ {
    int size;
    int data[10];
    char padding[8];
};

struct Container_double_ {
    int size;
    char padding1[12];
    double data[10];
};

/* Static member declarations */
extern int LifecycleClass_instance_count;
extern type_info *RTTIBase_typeinfo;
extern type_info *RTTIDerivedA_typeinfo;
extern type_info *RTTIDerivedB_typeinfo;
extern type_info int_typeinfo;

/* Define the external variables */
int LifecycleClass_instance_count = 0;
type_info *RTTIBase_typeinfo = NULL;
type_info *RTTIDerivedA_typeinfo = NULL;
type_info *RTTIDerivedB_typeinfo = NULL;
type_info int_typeinfo = {NULL};
void *PTR__RTTIBase_00021ed8 = NULL;
void *PTR__RTTIBase_00021eec = NULL;

/* Data placeholders */
char DAT_00011294[1] = {0};
char DAT_0001113d[1] = {0};
char DAT_0001115b[1] = {0};
char DAT_00011177[1] = {0};
char DAT_00011193[1] = {0};
char DAT_000111af[1] = {0};
char DAT_000111cc[1] = {0};
char DAT_000111e8[1] = {0};
char DAT_00011204[1] = {0};
char DAT_00011220[1] = {0};
char DAT_0001123c[1] = {0};
char DAT_00011259[1] = {0};
char DAT_00011276[1] = {0};

/* Helper macro */
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | (unsigned long long)(low))

/* Duplicate struct definition removed - Init already defined above */

typedef struct {
    Init *init_ptr;
} ios_base_Init;

typedef struct {
    ios_base_Init init_member;
} ios_base;

typedef struct {
    ios_base ios_base;
} ios_base_namespace;

typedef struct {
    ios_base_namespace ios_base;
    Init __ioinit;
} std_namespace;

std_namespace std;
void *__dso_handle;

// Decompiled by BinaryAI
// SHA256: eee87f212dbb668b79da9426ab482ab4783fedab8dc906927ec80922d641d81b

// Function: _init @ 0x10848
int _init(void *ctx)
{
 return call_weak_fn();
}

// Function: operator_new @ 0x10868
void *my_operator_new(size_t param_1)
{
 return malloc(param_1);
}

// Function: __cxa_begin_catch @ 0x10874
void __cxa_begin_catch(void *exception)
{
 return;
}

// Function: __cxa_allocate_exception @ 0x10880
void *__cxa_allocate_exception(size_t size)
{
 return (void *)0;
}



// Function: __libc_start_main @ 0x108a4
// Linux glibc signature: main, argc, argv, init, fini, rtld_fini, stack_end
int __libc_start_main(int (*main_func)(int, char **, char **), int argc, char **argv,
                       void (*init)(), void (*fini)(), void (*rtld_fini)(), void *stack_end)
{
 return 0;
}

// Function: abort @ 0x108b0
void abort(void)
{
 while(1);
}

// Function: operator_delete @ 0x108bc
void my_operator_delete(void *param_1)
{
 free(param_1);
}

// Function: __cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int offset)
{
 return (void *)0;
}

// Function: __cxa_rethrow @ 0x108ec
void __cxa_rethrow(void)
{
 return;
}



// Function: std__ios_base__Init__Init @ 0x10904
void  std__ios_base__Init__Init(Init *init_ptr)
{
 if (init_ptr) {
 init_ptr->dummy = 0;
 }
 return;
}

// Function: __cxa_end_catch @ 0x10910
void __cxa_end_catch(void)
{
 return;
}

// Function: __gxx_personality_v0 @ 0x1091c
void __gxx_personality_v0(void)
{
 return;
}

// Function: __cxa_throw @ 0x10928
void __cxa_throw(void *obj, void *typeinfo, void *dest)
{
 return;
}

// Function: __aeabi_dcmpgt @ 0x10934
// Note: This is typically a compiler built-in on ARM
__attribute__((weak, used))
int __aeabi_dcmpgt(double param_1, double param_2)
{
 if (param_1 > param_2) {
 return 1;
 }
 return 0;
}

// Function: __cxa_finalize @ 0x1094c
void __cxa_finalize(void *handle)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std__ios_base__Init__Init(&std.__ioinit);
 __cxa_atexit(std__ios_base__Init__Init, &std.__ioinit, &__dso_handle);
 return;
}

// Function: _start @ 0x10994
void _start(unsigned int param_1,unsigned int param_2)
{
 char *argv[1] = {NULL};
 __libc_start_main(main, 0, (char **)argv, _init, _fini, NULL, (void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x109d8
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x109fc
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10a40
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10a90
void __do_global_dtors_aux(void)
{
 static char completed_0 = 0;
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
 sVar1 = strlen((const char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x10b64
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10b80
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
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
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
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
 puVar1 = (unsigned int *)my_operator_new(4);
 *(void **)puVar1 = &PTR__RTTIBase_00021ed8;
 piVar2 = (int *)my_operator_new(4);
 *(void **)piVar2 = &PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 my_operator_delete(puVar1);
 (**(void ***)piVar2)(piVar2);
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
 puts((const char *)&DAT_00011294);
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
 sVar1 = strlen((const char *)&local_28);
 printf((const char *)&DAT_0001113d,sVar1 + 0x125c);
 printf((const char *)&DAT_0001115b,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf((const char *)&DAT_00011177,0x2a);
 printf((const char *)&DAT_00011193,0x47);
 printf((const char *)&DAT_000111af,0x28a);
 printf((const char *)&DAT_000111cc,0x16);
 printf((const char *)&DAT_000111e8,0x27);
 printf((const char *)&DAT_00011204,0x10);
 printf((const char *)&DAT_00011220,0x55);
 test_cpp_exception();
 uVar2 = 0;
 printf((const char *)&DAT_0001123c,uVar2);
 printf((const char *)&DAT_00011259,0x2bf);
 uVar2 = test_cpp_rtti();
 printf((const char *)&DAT_00011276,uVar2);
 return;
}

// Function: main @ 0x10ef4
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x10f08
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10f14
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x10f48
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int__Constructor @ 0x10f5c
void  Container_int__Constructor(Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container_int__push @ 0x10f68
void  Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x10f80
unsigned int  Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < this->size) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x10fa0
unsigned int  Container_int__getSize(Container_int_ *this)
{
 return this->size;
}

// Function: Container_double__Constructor @ 0x10fa8
void  Container_double__Constructor(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container_double__push @ 0x10fb4
void  Container_double__push(Container_double_ *this, double param_1)
{
 int iVar2;
 iVar2 = this->size;
 if (iVar2 >= 10) {
 return;
 }
 this->data[iVar2] = param_1;
 this->size = iVar2 + 1;
 return;
}

// Function: Container_double__get @ 0x10fd8
double  Container_double__get(Container_double_ *this,int param_1)
{
 if (param_1 >= 0 && param_1 < this->size) {
 return this->data[param_1];
 }
 return 0.0;
}

// Function: Container_double__getSize @ 0x11004
unsigned int  Container_double__getSize(Container_double_ *this)
{
 return this->size;
}



// Function: RTTIDerivedA_getType @ 0x11010
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_Destructor @ 0x11018
void  RTTIBase_Destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB_Destructor @ 0x1101c
void  RTTIDerivedB_Destructor(RTTIDerivedB *this)
{
 my_operator_delete(this);
 return;
}

// Function: RTTIDerivedB_getType @ 0x11020
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x11028
void _fini(void)
{
 return;
}

