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
// SHA256: ebba8db9d7511e9144ea9497d96ad61e49c91b3c43c9aa14cbf07d925c17f9f1

// Forward declarations
void call_weak_fn(void);
void *__cxa_allocate_exception(size_t param_1);
void __cxa_throw(void *param_1, void *param_2, void *param_3);
extern size_t strlen(char *__s);
int printf(const char *__format, ...);
int puts(char *__s);
void *operator_new(uint param_1);
void operator_delete(void *param_1);
int __dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4);
int __aeabi_dcmpgt(double param_1, double param_2);
typedef struct { int dummy; } Container_int_;
typedef struct { int dummy; } Container_double_;
typedef struct { int dummy; } RTTIDerivedA;
typedef struct { int dummy; } RTTIBase;
typedef struct { int dummy; } RTTIDerivedB;

// Function: _init @ 0x10848
int _init(void *ctx)
{
 int iVar1;
 call_weak_fn();
 iVar1 = 0;
 return iVar1;
}



// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
extern void __cxa_begin_catch(void *param_1);






// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
extern void __libc_start_main(int (*main)(int, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::abort @ 0x108b0
extern void abort(void);



// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
extern void __cxa_end_cleanup(void);



// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
extern void __cxa_rethrow(void);



// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
extern void std_ios_base_Init_Init(void *this_ptr);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
extern void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
extern void __gxx_personality_v0(void);





// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
extern void __cxa_finalize(void *param_1);

// Global declarations for std namespace
void *__dso_handle = 0;
void *std___ioinit = 0;
typedef struct { int dummy; } Init;
typedef struct { int dummy; } std_ios_base_Init;
typedef struct Base { void *vtable; } Base;
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
int completed_0;
int LifecycleClass_instance_count;

// Additional declarations
int main(void);
void __gmon_start__(void);
static void _fini(void);

char *DAT_00011358 = 0;
char *DAT_00011201 = 0;
char *DAT_0001121f = 0;
char *DAT_0001123b = 0;
char *DAT_00011257 = 0;
char *DAT_00011273 = 0;
char *DAT_00011290 = 0;
char *DAT_000112ac = 0;
char *DAT_000112c8 = 0;
char *DAT_000112e4 = 0;
char *DAT_00011300 = 0;
char *DAT_0001131d = 0;
char *DAT_0001133a = 0;
void *stack0x00000004 = 0;

// Typeinfo declarations
void *int_typeinfo = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
void *PTR__RTTIBase_00021ed8 = 0;
void *PTR__RTTIBase_00021eec = 0;













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
 void (*func_ptr)(void) = (void (*)(void))((void **)param_1)[0];
 func_ptr();
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
 __cxa_throw(puVar1,&int_typeinfo,0);
 return 0x2a;
}

// Function: test_cpp_smart_ptr @ 0x10ca4
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10cb0
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
 iVar3 = __dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = __dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 ((void (*)(void *))((int*)*piVar2)[1])(piVar2);
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
 puts(DAT_00011358);
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
 printf(DAT_00011201,sVar1 + 0x125c);
 printf(DAT_0001121f,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(DAT_0001123b,0x2a);
 printf(DAT_00011257,0x47);
 printf(DAT_00011273,0x28a);
 printf(DAT_00011290,0x16);
 printf(DAT_000112ac,0x27);
 printf(DAT_000112c8,0x10);
 printf(DAT_000112e4,0x55);
 uVar2 = test_cpp_exception();
 printf(DAT_00011300,uVar2);
 printf(DAT_0001131d,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = (unsigned int)&PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00021eec;
 iVar5 = __dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar6 = __dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 operator_delete(puVar3);
 ((void (*)(void *))((int*)*piVar4)[1])(piVar4);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf(DAT_0001133a,iVar7 + 0xe);
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
 if (__aeabi_dcmpgt(param_1,param_2) > 0) {
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

// Function: Container_int_Container @ 0x11020
void Container_int_Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x1102c
void Container_int_push(Container_int_ *this_ptr, int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x11044
unsigned int Container_int_get(Container_int_ *this_ptr, int param_1)
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

// Function: Container_int_getSize @ 0x11064
unsigned int Container_int_getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container_double_Container @ 0x1106c
void Container_double_Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x11078
void Container_double_push(Container_double_ *this_ptr, double param_1)
{
 int iVar2;
 iVar2 = *(int *)(this_ptr + 0x50);
 if (9 < iVar2) {
 return;
 }
 *(double *)(this_ptr + iVar2 * 8) = param_1;
 *(int *)(this_ptr + 0x50) = iVar2 + 1;
 return;
}

// Function: Container_double_get @ 0x1109c
double Container_double_get(Container_double_ *this_ptr, int param_1)
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
 return *(double *)&uVar1;
 }
 return 0.0;
}

// Function: Container_double_getSize @ 0x110c8
unsigned int Container_double_getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: RTTIDerivedA_destructor @ 0x110d0
void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedA_getType @ 0x110d4
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase_destructor @ 0x110dc
void RTTIBase_destructor(RTTIBase *this_ptr)
{
 return;
}

// Function: RTTIDerivedB_destructor @ 0x110e0
void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedB_getType @ 0x110e4
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x110ec
static void _fini(void)
{
 return;
}

// Stub implementations for external C++ runtime functions
void call_weak_fn(void)
{
 // Stub - do nothing
 return;
}















int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 // Stub - just return 0
 return 0;
}

void *__cxa_allocate_exception(size_t param_1)
{
 void *ptr = operator_new(param_1);
 return ptr;
}

void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
 // Stub - just return
 return;
}

void operator_delete(void *param_1)
{
 // Stub - just return
 return;
}

void *operator_new(uint param_1)
{
 // Stub - return a dummy pointer
 static char buffer[4096];
 static int offset = 0;
 void *ptr = buffer + offset;
 offset += param_1;
 return ptr;
}

int __aeabi_dcmpgt(double param_1, double param_2)
{
 if (param_1 > param_2) return 1;
 return 0;
}

// Stub implementations for missing external functions
void __gmon_start__(void)
{
 // Stub - do nothing
 return;
}











