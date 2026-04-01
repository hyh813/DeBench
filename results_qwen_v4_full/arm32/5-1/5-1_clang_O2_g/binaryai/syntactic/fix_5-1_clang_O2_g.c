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
typedef unsigned int uint;

#define NULL ((void*)0)
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))

// Decompiled by BinaryAI
// SHA256: 67e796735b89b4870cd1557a2847a12ac5c8011e7939a28ea8d0c1ba5772acab

// Function: _init @ 0x10848
int call_weak_fn(void)
{
 return 0;
}
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10868
void * operator_new(uint param_1)
{
 return (void*)0;
}
void * operator_new_wrapper(uint param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
void __cxa_begin_catch(void *param_1)
{
 return;
}
void __cxa_begin_catch_wrapper(void *param_1)
{
 __cxa_begin_catch(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
void *__cxa_allocate_exception(size_t param_1)
{
 return operator_new(param_1);
}
void *__cxa_allocate_exception_wrapper(size_t param_1)
{
 return __cxa_allocate_exception(param_1);
}

// Function: <EXTERNAL>::printf @ 0x1088c
int printf(const char *__format, ...)
{
 return 0;
}
int printf_wrapper(const char *__format, ...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10898
int puts(char *__s)
{
 return 0;
}
int puts_wrapper(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
extern int __libc_start_main(int (*main)(int, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void *stack_end);
void __libc_start_main_stub(void)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x108b0
void abort(void)
{
 while(1);
}
void abort_wrapper(void)
{
 abort();
}

// Function: <EXTERNAL>::operator.delete @ 0x108bc
void operator_delete(void *param_1)
{
 return;
}
void operator_delete_wrapper(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup(void)
{
 return;
}
void __cxa_end_cleanup_wrapper(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags)
{
 return obj;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow(void)
{
 return;
}
void __cxa_rethrow_wrapper(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x108f8
size_t strlen(const char *__s)
{
 size_t len = 0;
 while (__s[len] != 0) { len++; }
 return len;
}
size_t strlen_wrapper(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
typedef struct { int _Init; } Init;
void ios_base_Init_Init(Init *this_)
{
 return;
}





// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw(void *exception, void *tinfo, void *dest)
{
 return;
}
void __cxa_throw_wrapper(void *exception, void *tinfo, void *dest)
{
 __cxa_throw(exception, tinfo, dest);
 return;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
int __aeabi_dcmpgt(double param_1, double param_2)
{
 return 0;
}
int __aeabi_dcmpgt_wrapper(double param_1, double param_2)
{
 return __aeabi_dcmpgt(param_1, param_2);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
void __cxa_finalize(void *dso_handle)
{
 return;
}
void __cxa_finalize_wrapper(void *dso_handle)
{
 __cxa_finalize(dso_handle);
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
extern Init std___ioinit;
extern void *__dso_handle;
extern void ios_base_Init_Init(Init *this_);
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 return 0;
}
void _GLOBAL__sub_I_5_1_cpp(void)
{
 ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void))NULL,&std___ioinit,__dso_handle);
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
typedef struct { int instance_count; } LifecycleClass_t;
LifecycleClass_t LifecycleClass = {0};
int test_cpp_constructor(void)
{
 return LifecycleClass.instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10b80
typedef struct Base { void **vtable; } Base;
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(void))*(param_1->vtable))();
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
void *int_typeinfo = (void*)0;
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw((void *)puVar1,int_typeinfo,(void *)0);
}

// Function: test_cpp_smart_ptr @ 0x10c98
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10ca4
typedef struct { void *typeinfo; } RTTIBase;
typedef struct { void *typeinfo; } RTTIDerivedA;
typedef struct { void *typeinfo; } RTTIDerivedB;
void *PTR__RTTIBase_00021ed8 = (void*)0;
void *PTR__RTTIBase_00021eec = (void*)0;
extern RTTIBase RTTIBase_typeinfo;
extern RTTIDerivedA RTTIDerivedA_typeinfo;
extern RTTIDerivedB RTTIDerivedB_typeinfo;
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
 ((void (*)(int *))(void *)(*piVar2 + 4))(piVar2);
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
extern int LifecycleClass_instance_count;
void *DAT_0001134c = (void*)"Test";
void *DAT_000111f5 = (void*)"%d\n";
void *DAT_00011213 = (void*)"%d\n";
void *DAT_0001122f = (void*)"%d\n";
void *DAT_0001124b = (void*)"%d\n";
void *DAT_00011267 = (void*)"%d\n";
void *DAT_00011284 = (void*)"%d\n";
void *DAT_000112a0 = (void*)"%d\n";
void *DAT_000112bc = (void*)"%d\n";
void *DAT_000112d8 = (void*)"%d\n";
void *DAT_000112f4 = (void*)"%d\n";
void *DAT_00011311 = (void*)"%d\n";
void *DAT_0001132e = (void*)"%d\n";
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
 puts((char *)&DAT_0001134c);
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
 printf((const char *)&DAT_000111f5,sVar1 + 0x125c);
 printf((const char *)&DAT_00011213,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf((const char *)&DAT_0001122f,0x2a);
 printf((const char *)&DAT_0001124b,0x47);
 printf((const char *)&DAT_00011267,0x28a);
 printf((const char *)&DAT_00011284,0x16);
 printf((const char *)&DAT_000112a0,0x27);
 printf((const char *)&DAT_000112bc,0x10);
 printf((const char *)&DAT_000112d8,0x55);
 test_cpp_exception();
 uVar2 = 0;
 printf((const char *)&DAT_000112f4,uVar2);
 printf((const char *)&DAT_00011311,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = (unsigned int)&PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00021eec;
 iVar5 = (int)__dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = (int)__dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 ((void (*)(int *))(void *)(*piVar4 + 4))(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf((const char *)&DAT_0001132e,iVar7 + 0xe);
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
extern int __aeabi_dcmpgt(double param_1, double param_2);
double template_max_double_(double param_1, double param_2)
{
 double extraout_d0;
 if (__aeabi_dcmpgt(param_1, param_2)) {
  extraout_d0 = param_1;
 } else {
  extraout_d0 = param_2;
 }
 return extraout_d0;
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
typedef struct { char data[0x54]; } Container_int_;
void Container_int__Container(Container_int_ *this_)
{
 *(unsigned int *)(this_ + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11020
void Container_int__push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ + 0x28) = iVar1 + 1;
 *(int *)(this_ + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11038
unsigned int Container_int__get(Container_int_ *this_,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < *(int *)(this_ + 0x28)) {
 uVar1 = *(unsigned int *)(this_ + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11058
unsigned int Container_int__getSize(Container_int_ *this_)
{
 return *(unsigned int *)(this_ + 0x28);
}

// Function: Container<double>::Container @ 0x11060
typedef struct { char data[0x54]; } Container_double_;
void Container_double__Container(Container_double_ *this__)
{
 *(unsigned int *)(this__ + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1106c
void Container_double__push(Container_double_ *this__, double param_1)
{
 int iVar2;
 double *pdVar1;
 iVar2 = *(int *)(this__ + 0x50);
 if (9 < iVar2) {
 return;
 }
 pdVar1 = (double *)(this__ + iVar2 * 8);
 *pdVar1 = param_1;
 *(int *)(this__ + 0x50) = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x11090
unsigned long long Container_double__get(Container_double_ *this__,int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this__ + 0x50)) {
 uVar1 = *(unsigned int *)((char *)this__ + param_1 * 8);
 uVar2 = *(unsigned int *)((char *)this__ + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x110bc
unsigned int Container_double__getSize(Container_double_ *this__)
{
 return *(unsigned int *)((char *)this__ + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x110c4
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 operator_delete(this_);
 return;
}

// Function: RTTIDerivedA::getType @ 0x110c8
unsigned int RTTIDerivedA__getType(RTTIDerivedA *this_)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x110d0
void RTTIBase__RTTIBase(RTTIBase *this_)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x110d4
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 operator_delete(this_);
 return;
}

// Function: RTTIDerivedB::getType @ 0x110d8
unsigned int RTTIDerivedB__getType(RTTIDerivedB *this_)
{
 return 2;
}

// Function: _fini @ 0x110e0
void _fini(void)
{
 return;
}

