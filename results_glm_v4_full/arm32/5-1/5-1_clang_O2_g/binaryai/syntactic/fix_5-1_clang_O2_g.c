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

// Decompiled by BinaryAI
// SHA256: 67e796735b89b4870cd1557a2847a12ac5c8011e7939a28ea8d0c1ba5772acab

// Forward declarations
void call_weak_fn(void);

// Missing type definitions
struct Base {
    void **vtable;
};

struct Init {
    int dummy;
};

struct Container_int_ {
    int data[10];
    int size;
};

struct Container_double_ {
    double data[10];
    int size;
};

struct RTTIBase {
    void **vrtti;
};

struct RTTIDerivedA {
    void **vrtti;
};

struct RTTIDerivedB {
    void **vrtti;
};

struct LifecycleClass {
    int dummy;
};

extern char std___ioinit;
extern void *__dso_handle;
extern void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void std_ios_base_Init_Init(void *);
extern void std_ios_base_Init_Destroy(void *);
extern int main(void);
extern void __libc_start_main(int (*)(), unsigned int, void *, int, int, unsigned int);
extern int LifecycleClass_instance_count;
extern unsigned int test_cpp_exception_impl(void);
extern void *operator_new_impl(uint32_t size);
extern int __aeabi_dcmpgt(double, double);
extern void *__libc_stack_end;
extern void *__dynamic_cast_impl(void *, void *, void *, int);
extern void *__cxa_allocate_exception(uint32_t);
extern void *__dynamic_cast(void *, void *, void *, int);
extern void __cxa_throw(void *, void *, void *);
extern void *PTR__RTTIBase_00021ed8;
extern void *PTR__RTTIBase_00021eec;
extern char completed_0;
extern void __gmon_start__(void);
extern void __cxa_finalize(void *);
extern const char DAT_0001134c[];
extern const char DAT_000111f5[];
extern const char DAT_00011213[];
extern const char DAT_0001122f[];
extern const char DAT_0001124b[];
extern const char DAT_00011267[];
extern const char DAT_00011284[];
extern const char DAT_000112a0[];
extern const char DAT_000112bc[];
extern const char DAT_000112d8[];
extern const char DAT_000112f4[];
extern const char DAT_00011311[];
extern const char DAT_0001132e[];

// Additional C++ runtime declarations
extern void *__cxa_begin_catch(void *);
extern void __cxa_end_catch(void);
extern void __cxa_end_cleanup(void);
extern void __cxa_rethrow(void);
extern void __gxx_personality_v0(void);

// Standard library function declarations
extern int vprintf(const char *, va_list);
extern void operator_delete(void *ptr);


// std::type_info structure definition (C-compatible)
struct std_type_info {
    const char *name;
};

// Forward declarations for std::type_info objects
extern struct std_type_info RTTIBase_typeinfo;
extern struct std_type_info RTTIDerivedA_typeinfo;
extern struct std_type_info RTTIDerivedB_typeinfo;
extern struct std_type_info std___type_info_int;

// CONCAT44 macro for combining two 32-bit values into 64-bit
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | ((uint64_t)(lo) & 0xFFFFFFFF))

// Use standard stdarg.h for variadic argument handling
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Compatibility defines
#define __builtin_va_list va_list
#define __builtin_va_start(ap, last) va_start(ap, last)
#define __builtin_va_end(ap) va_end(ap)

// Function: _init @ 0x10848
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: <EXTERNAL>::operator.new @ 0x10868
void * operator_new(uint32_t param_1)
{
 void *pvVar1;
 pvVar1 = operator_new_impl(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
void *__cxa_begin_catch_wrapper(void *exception_obj)
{
 return __cxa_begin_catch(exception_obj);
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
void *__cxa_allocate_exception_wrapper(uint32_t size)
{
 return __cxa_allocate_exception(size);
}

// Function: <EXTERNAL>::printf @ 0x1088c
int printf_wrapper(const char *__format, ...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vprintf(__format, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10898
// External function - implementation provided by libc


// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
void __libc_start_main_wrapper(unsigned int (*main)(), unsigned int argc, void *argv, int init, int fini, unsigned int rtld_fini)
{
 __libc_start_main(main, argc, argv, init, fini, rtld_fini);
 return;
}

// Function: <EXTERNAL>::abort @ 0x108b0
void abort_wrapper(void)
{
 abort();
}

// Function: <EXTERNAL>::operator.delete @ 0x108bc
void operator_delete_wrapper(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup_wrapper(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void *__dynamic_cast_wrapper(void *obj, void *src, void *dst, int hint)
{
 return __dynamic_cast_impl(obj, src, dst, hint);
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x108f8
size_t strlen_wrapper(const char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
void std_ios_base_Init_Init(Init *this)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
void __cxa_end_catch_wrapper(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
void __gxx_personality_v0_wrapper(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw_wrapper(void *obj, void *tinfo, void *dest)
{
 __cxa_throw(obj, tinfo, dest);
 return;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
int __aeabi_dcmpgt_wrapper(double param_1, double param_2)
{
 return __aeabi_dcmpgt(param_1, param_2);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x109c8
void __cxa_finalize_wrapper(void *dso_handle)
{
 __cxa_finalize(dso_handle);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Destroy,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x10994
void _start(int argc, char **argv, char **envp)
{
 __libc_start_main(main, (unsigned int)argc, argv, 0, 0, (unsigned int)envp);
 abort();
}

// Function: call_weak_fn @ 0x109d8
void call_weak_fn(void)
{
 __gmon_start__();
 return;
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
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&std___type_info_int,0);
 return 0;
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
 puVar1 = (unsigned int *)operator_new(4);
 *puVar1 = (unsigned int)&PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
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
 puts(&DAT_0001134c);
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
 printf(&DAT_000111f5,sVar1 + 0x125c);
 printf(&DAT_00011213,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(&DAT_0001122f,0x2a);
 printf(&DAT_0001124b,0x47);
 printf(&DAT_00011267,0x28a);
 printf(&DAT_00011284,0x16);
 printf(&DAT_000112a0,0x27);
 printf(&DAT_000112bc,0x10);
 printf(&DAT_000112d8,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_000112f4,uVar2);
 printf(&DAT_00011311,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = &PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00021eec;
 iVar5 = __dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = __dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 (**(void **)(*piVar4 + 4))(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf(&DAT_0001132e,iVar7 + 0xe);
 return;
}

// Function: main @ 0x10fac
int main(void)
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
 if (param_1 > param_2) {
 return param_1;
 }
 return param_2;
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
void Container_int__Constructor(Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x11020
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11038
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < this->size) {
 uVar1 = *(unsigned int *)&this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11058
unsigned int Container_int__getSize(Container_int_ *this)
{
 return *(unsigned int *)&this->size;
}

// Function: Container<double>::Constructor @ 0x11060
void Container_double__Constructor(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x1106c
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar2;
 iVar2 = this->size;
 if (iVar2 < 10) {
 this->data[iVar2] = param_1;
 this->size = iVar2 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x11090
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < this->size) {
 uVar1 = *(unsigned int *)&this->data[param_1];
 uVar2 = *(unsigned int *)((char *)&this->data[param_1] + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x110bc
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)&this->size;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x110c4
void RTTIDerivedA__destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x110c8
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x110d0
void RTTIBase__destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x110d4
void RTTIDerivedB__destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x110d8
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x110e0
void _fini(void)
{
 return;
}

