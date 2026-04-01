/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#include <stddef.h>
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct type_info {
  void **vtable;
  const char *name;
};

struct ios_base_init {
};

void ios_base_init_Init(void *obj) {
  return;
}

struct ios_base_init __ioinit;
void *__dso_handle = (void *)0;
unsigned int stack0x00000004;
char completed_0 = 0;

/* Forward declarations */
int call_weak_fn(void);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__dso_handle;
int __gmon_start__(void);

/* Define __gmon_start__ since it's being called but not implemented */
int __gmon_start__(void) {
  return 0;
}
int main(void);
void *__dynamic_cast(const void *, const struct type_info *, const struct type_info *, ptrdiff_t);
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, const struct type_info *, void (*)(void *));
void __cxa_begin_catch(void);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void __cxa_finalize(void *);
void *operator_new(size_t);

/* Missing variable declarations */
extern char completed_0;
extern unsigned int stack0x00000004;

/* String literals for format strings */
static const char DAT_00011358[] = "Test string\n";
static const char DAT_00011201[] = "Member func: %u\n";
static const char DAT_0001121f[] = "Constructor: %u\n";
static const char DAT_0001123b[] = "Virtual func: %u\n";
static const char DAT_00011257[] = "Multiple inheritance: %u\n";
static const char DAT_00011273[] = "Diamond inheritance: %u\n";
static const char DAT_00011290[] = "Operator overload: %u\n";
static const char DAT_000112ac[] = "Template func: %u\n";
static const char DAT_000112c8[] = "Template class: %u\n";
static const char DAT_000112e4[] = "Lambda: %u\n";
static const char DAT_00011300[] = "Exception: %u\n";
static const char DAT_0001131d[] = "Smart ptr: %u\n";
static const char DAT_0001133a[] = "RTTI: %u\n";
/* Pointer declarations - initialized to point to type_info structures */
struct type_info *PTR__RTTIBase_00021ed8;
struct type_info *PTR__RTTIBase_00021eec;

#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | (low))

/* Missing type declarations */
struct Base;
struct LifecycleClass;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int_;
struct Container_double_;

/* VTable structure for RTTI classes */
struct RTTIBase_vtable {
  const struct type_info *typeinfo;
  void (*destructor)(void *);
  unsigned int (*getType)(void);
};

struct Base {
  void **vtable;
};

struct LifecycleClass {
};

struct RTTIBase {
  struct RTTIBase_vtable *vtable;
};

struct RTTIDerivedA {
  struct RTTIBase_vtable *vtable;
};

struct RTTIDerivedB {
  struct RTTIBase_vtable *vtable;
};

struct type_info RTTIBase_typeinfo = {NULL, "RTTIBase"};
struct type_info RTTIDerivedA_typeinfo = {NULL, "RTTIDerivedA"};
struct type_info RTTIDerivedB_typeinfo = {NULL, "RTTIDerivedB"};

/* Initialize the type_info pointers */
struct type_info *PTR__RTTIBase_00021ed8 = &RTTIBase_typeinfo;
struct type_info *PTR__RTTIBase_00021eec = &RTTIDerivedA_typeinfo;

int LifecycleClass_instance_count = 0;

struct Container_int_ {
  int data[10];
  unsigned int size;
};

struct Container_double_ {
  double data[10];
  unsigned int size;
};

// Decompiled by BinaryAI
// SHA256: ebba8db9d7511e9144ea9497d96ad61e49c91b3c43c9aa14cbf07d925c17f9f1

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
 return malloc(param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}





// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
void __libc_start_main(void *main_ptr, int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 exit(((int (*)(int, char **, char **))main_ptr)(argc, ubp_av, 0));
}

// Function: <EXTERNAL>::abort @ 0x108b0
void abort(void)
{
 while (1) {}
}

// Function: <EXTERNAL>::operator.delete @ 0x108bc
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void *__dynamic_cast(const void *src, const struct type_info *src_type, const struct type_info *dst_type, ptrdiff_t src2dst_offset)
{
 return (void *)((uintptr_t)src);
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow(void)
{
 return;
}




// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw(void *obj, const struct type_info *tinfo, void (*dest)(void *))
{
 abort();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
int __aeabi_dcmpgt(double param_1, double param_2)
{
 return param_1 > param_2;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void _GLOBAL__sub_I_5_1_cpp(void)
{
 ios_base_init_Init(&__ioinit);
 __cxa_atexit((void (*)(void *))ios_base_init_Init,&__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x10994
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main((void *)main,(int)param_2,(char **)&stack0x00000004,(void (*)(void))0,(void (*)(void))0,(void (*)(void))0,(void *)param_1);
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
 (*(void (**)(void))**(void ***)param_1)();
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
 __cxa_throw(puVar1,(const struct type_info *)0,0);
}

// Function: test_cpp_smart_ptr @ 0x10ca4
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10cb0
int test_cpp_rtti(void)
{
 void *puVar1;
 void *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = operator_new(sizeof(unsigned int));
 *(void **)puVar1 = &PTR__RTTIBase_00021ed8;
 piVar2 = operator_new(4);
 *(void **)piVar2 = &PTR__RTTIBase_00021eec;
  iVar3 = (int)__dynamic_cast(puVar1,(const struct type_info *)&RTTIBase_typeinfo,(const struct type_info *)&RTTIDerivedA_typeinfo,0);
  iVar4 = (int)__dynamic_cast(piVar2,(const struct type_info *)&RTTIBase_typeinfo,(const struct type_info *)&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 ((void (*)(void *))(*(void ***)piVar2)[1])(piVar2);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10d7c
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
 puts(&DAT_00011358);
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
 printf(&DAT_00011201,sVar1 + 0x125c);
 printf(&DAT_0001121f,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(&DAT_0001123b,0x2a);
 printf(&DAT_00011257,0x47);
 printf(&DAT_00011273,0x28a);
 printf(&DAT_00011290,0x16);
 printf(&DAT_000112ac,0x27);
 printf(&DAT_000112c8,0x10);
 printf(&DAT_000112e4,0x55);
 test_cpp_exception();
 printf(&DAT_00011300,0x2a);
 printf(&DAT_0001131d,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *(void **)puVar3 = &PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *(void **)piVar4 = &PTR__RTTIBase_00021eec;
  iVar5 = (int)(intptr_t)__dynamic_cast(puVar3,(const struct type_info *)&RTTIBase_typeinfo,(const struct type_info *)&RTTIDerivedA_typeinfo,0);
  iVar6 = (int)(intptr_t)__dynamic_cast(piVar4,(const struct type_info *)&RTTIBase_typeinfo,(const struct type_info *)&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 operator_delete(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf(&DAT_0001133a,iVar7 + 0xe);
 return;
}

// Function: main @ 0x10fb8
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x10fcc
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10fd8
double template_max_double_(double param_1,double param_2)
{
 if (__aeabi_dcmpgt(param_1, param_2)) {
 return param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x1100c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11020
void Container_int_Constructor(Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x1102c
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11044
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < (int)this->size) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11064
unsigned int Container_int_getSize(Container_int_ *this)
{
 return this->size;
}

// Function: Container<double>::Container @ 0x1106c
void Container_double_Constructor(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x11078
void Container_double_push(Container_double_ *this,double param_1)
{
 int iVar2;
 iVar2 = this->size;
 if (iVar2 > 9) {
 return;
 }
 this->data[iVar2] = param_1;
 this->size = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x1109c
double Container_double_get(Container_double_ *this,int param_1)
{
 if (param_1 >= 0 && param_1 < (int)this->size) {
 return this->data[param_1];
 }
 return 0.0;
}

// Function: Container<double>::getSize @ 0x110c8
unsigned int Container_double_getSize(Container_double_ *this)
{
 return this->size;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x110d0
void RTTIDerivedA_destructor(void *obj)
{
 operator_delete(obj);
 return;
}

// Function: RTTIDerivedA::getType @ 0x110d4
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x110dc
void RTTIBase_destructor(void *obj)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x110e0
void RTTIDerivedB_destructor(void *obj)
{
 operator_delete(obj);
 return;
}

// Function: RTTIDerivedB::getType @ 0x110e4
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x110ec
void _fini(void)
{
 return;
}

