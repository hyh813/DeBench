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

// Decompiled by BinaryAI
// SHA256: 47db35a19a9c2e173afe6996b4695ef08a58e9b4da2438c85d6aacd7eb188555

// Forward declarations
struct Base { void *vtable; };
struct RTTIBase { void *vtable; };
struct RTTIDerivedA { void *vtable; };
struct RTTIDerivedB { void *vtable; };
struct LifecycleClass { int dummy; };
struct Container_int_ { unsigned int data[10]; unsigned int size; };
struct Container_double_ { double data[10]; unsigned int size; };
int LifecycleClass_instance_count = 0;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *PTR__RTTIBase_00021ed8;
extern void *PTR__RTTIBase_00021eec;
void *int_typeinfo = 0;
extern char DAT_0001134c;
extern char DAT_000111f5;
extern char DAT_00011213;
extern char DAT_0001122f;
extern char DAT_0001124b;
extern char DAT_00011267;
extern char DAT_00011284;
extern char DAT_000112a0;
extern char DAT_000112bc;
extern char DAT_000112d8;
extern char DAT_000112f4;
extern char DAT_00011311;
extern char DAT_0001132e;

// External function declarations
int main(int argc, char **argv, char **envp);
void __gmon_start__(void);

int __libc_start_main(int (*main)(int, char **, char **), unsigned int argc, void *ubp_start, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);

// Function: call_weak_fn @ 0x10848
int call_weak_fn(void)
{
 return 0;
}

// Function: _init @ 0x10848
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10868
void * operator_new(uint param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
void __cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
void *__cxa_allocate_exception(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = 0;
 return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x1088c
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10898
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}



// Function: <EXTERNAL>::abort @ 0x108b0
void abort(void);

// Function: <EXTERNAL>::operator.delete @ 0x108bc
void operator_delete(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup(void);

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void *__dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow(void);

// Function: <EXTERNAL>::strlen @ 0x108f8
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
void std_ios_base_Init_Init(void *this_ptr)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
void __gxx_personality_v0(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
int __aeabi_dcmpgt(double param_1, double param_2)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
void __cxa_finalize(void *param_1);













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
void call_virtual_func(struct Base *param_1,int param_2)
{
 ((void (*)(void))**((void ***)param_1))();
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
 __cxa_throw(puVar1,int_typeinfo,0);
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
 iVar3 = (int)__dynamic_cast((void*)puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = (int)__dynamic_cast((void*)piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 { void **vtable; void (*func)(void*); vtable = (void **)(uintptr_t)*piVar2; func = (void (*)(void*))vtable[1]; func(piVar2); }
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
 uVar2 = 0;
 printf(&DAT_000112f4,uVar2);
 printf(&DAT_00011311,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = (unsigned int)&PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00021eec;
 iVar5 = (int)__dynamic_cast((void*)puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = (int)__dynamic_cast((void*)piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 { void **vtable; void (*func)(void*); vtable = (void **)(uintptr_t)*piVar4; func = (void (*)(void*))vtable[1]; func(piVar4); }
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
int main(int argc, char **argv, char **envp)
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
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
}

// Function: Container<int>::push @ 0x11020
void Container_int__push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
}

// Function: Container<int>::get @ 0x11038
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < *(int *)(this_ptr + 0x28)) {
 uVar1 = *(unsigned int *)(this_ptr + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11058
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container<double>::Container @ 0x11060
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
}

// Function: Container<double>::push @ 0x1106c
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar2;
 unsigned int *puVar1;
 iVar2 = *(int *)(this_ptr + 0x50);
 if (9 < iVar2) {
 return;
 }
 puVar1 = (unsigned int *)(this_ptr + iVar2 * 8);
 *puVar1 = 0;
 puVar1[1] = 0;
 *(int *)(this_ptr + 0x50) = iVar2 + 1;
}

// Function: Container<double>::get @ 0x11090
unsigned long long Container_double__get(Container_double_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this_ptr + 0x50)) {
 uVar1 = *(unsigned int *)(this_ptr + param_1 * 8);
 uVar2 = *(unsigned int *)((int)(this_ptr + param_1 * 8) + 4);
 }
 return ((unsigned long long)uVar2 << 32) | uVar1;
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x110bc
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x110c4
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr);
}

// Function: RTTIDerivedA::getType @ 0x110c8
unsigned int RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x110d0
void RTTIBase__RTTIBase(RTTIBase *this_ptr)
{
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x110d4
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr);
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

