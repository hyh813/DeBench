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

// Define std namespace for ios_base::Init (converted to C struct)
struct std_ios_base_Init {
 void *_Init;
};

// Forward declarations for incomplete types
struct Base;
struct LifecycleClass;
int LifecycleClass_instance_count = 0;

// Macro for concatenating two 32-bit values into 64-bit
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (lo))
struct RTTIBase {
};
struct RTTIDerivedA {
};
struct RTTIDerivedB {
};
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;
struct Container_int_ {
 char data[100];
};
struct Container_double_ {
 char data[200];
};

// External data declarations - now defined
const char DAT_00011294[] = "Testing C++ OO Features";
const char DAT_0001113d[] = "test_cpp_member_func: %d\n";
const char DAT_0001115b[] = "test_cpp_constructor: %d\n";
const char DAT_00011177[] = "test_cpp_virtual_func: %d\n";
const char DAT_00011193[] = "test_cpp_multiple_inheritance: %d\n";
const char DAT_000111af[] = "test_cpp_diamond_inheritance: %d\n";
const char DAT_000111cc[] = "test_cpp_operator_overload: %d\n";
const char DAT_000111e8[] = "test_cpp_template_func: %d\n";
const char DAT_00011204[] = "test_cpp_template_class: %d\n";
const char DAT_00011220[] = "test_cpp_lambda: %d\n";
const char DAT_0001123c[] = "test_cpp_exception: %d\n";
const char DAT_00011259[] = "test_cpp_smart_ptr: %d\n";
const char DAT_00011276[] = "test_cpp_rtti: %d\n";

// External function declarations
extern void __cxa_finalize(void *dso_handle);
extern int __libc_start_main(int (*main)(void), int argc, void *argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);
extern void *__cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
extern void *__cxa_allocate_exception(size_t size);
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr);
extern void *__dynamic_cast(void *src_ptr, void *src_type, void *dst_type, int flags);

// Stub implementations for standard library functions
static void abort(void)
{
 // Stub - infinite loop
 while(1);
}

static size_t strlen(const char *s)
{
 size_t len = 0;
 while (s[len] != 0) {
  len++;
 }
 return len;
}

static int puts(const char *s)
{
 // Stub - no-op
 return 0;
}

static int printf(const char *format, ...)
{
 // Stub - no-op
 return 0;
}



static void *__cxa_throw(void *exc, void *tinfo, void *dest)
{
 // Stub - abort on exception
 abort();
 return 0;
}

static void *operator_new(size_t size)
{
 // Stub - return null
 return 0;
}

static void operator_delete(void *ptr)
{
 // Stub - no-op
 return;
}

static void *__cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 // Stub - no-op
 return 0;
}

static void *__cxa_allocate_exception(size_t size)
{
 // Stub - return null
 return 0;
}

static void *__dynamic_cast(void *src_ptr, void *src_type, void *dst_type, int flags)
{
 // Stub - return null
 return 0;
}

// Decompiled by BinaryAI
// SHA256: b5e26cc077e0fa4cfa29f586c352e3f58e7d17e83d547fb7d554567e0e5829cc

// Function: _init @ 0x10848
int _init(void *ctx)
{
 return 0;
}

// Function: <EXTERNAL>::operator.new @ 0x10868
// External operator new - declared but not defined here

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
// External __cxa_begin_catch - declared but not defined here

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
// External __cxa_allocate_exception - declared but not defined here

// Function: <EXTERNAL>::printf @ 0x1088c
// External printf - declared but not defined here

// Function: <EXTERNAL>::puts @ 0x10898
// External puts - declared but not defined here

// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
// External __libc_start_main - declared but not defined here

// Function: <EXTERNAL>::abort @ 0x108b0
// External abort - declared but not defined here

// Function: <EXTERNAL>::operator.delete @ 0x108bc
// External operator delete - declared but not defined here

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
// External __cxa_end_cleanup - declared but not defined here

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
// External __dynamic_cast - declared but not defined here

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
// External __cxa_rethrow - declared but not defined here

// Function: <EXTERNAL>::strlen @ 0x108f8
// External strlen - declared but not defined here

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
void std_ios_base_Init_Init(struct std_ios_base_Init *this_ptr)
{
 this_ptr->_Init = (void *)0;
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
// External __cxa_end_catch - declared but not defined here

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
// External __gxx_personality_v0 - declared but not defined here

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
// External __cxa_throw - declared but not defined here

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
// External __aeabi_dcmpgt - declared but not defined here

// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
// External __cxa_finalize - declared but not defined here

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void *__dso_handle = 0;
void *__ioinit = 0;
char completed_0 = 0;
void std_ios_base_Init__Init(void)
{
 return;
}
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((struct std_ios_base_Init *)&__ioinit);
 __cxa_atexit(std_ios_base_Init__Init, &__ioinit, &__dso_handle);
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
 (*(void (**)(void))param_1)();
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
 __cxa_throw(puVar1,0,0);
}

// Function: test_cpp_smart_ptr @ 0x10c98
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10ca4
void *PTR__RTTIBase_00021ed8 = 0;
void *PTR__RTTIBase_00021eec = 0;
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
 iVar3 = (int)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (*(void (**)(void *))(*piVar2 + 4))(piVar2);
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
 puts(DAT_00011294);
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
 printf(DAT_0001113d,sVar1 + 0x125c);
 printf(DAT_0001115b,LifecycleClass_instance_count * 0x3e9 + 0x15);
 printf(DAT_00011177,0x2a);
 printf(DAT_00011193,0x47);
 printf(DAT_000111af,0x28a);
 printf(DAT_000111cc,0x16);
 printf(DAT_000111e8,0x27);
 printf(DAT_00011204,0x10);
 printf(DAT_00011220,0x55);
 test_cpp_exception();
 printf(DAT_0001123c,0);
 printf(DAT_00011259,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(DAT_00011276,uVar2);
 return;
}

// Function: main @ 0x10ef4
int main(void)
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

// Function: Container<int>::Container @ 0x10f5c
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x10f68
void Container_int__push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x10f80
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

// Function: Container<int>::getSize @ 0x10fa0
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container<double>::Container @ 0x10fa8
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x10fb4
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar2;
 unsigned int *puVar1;
 iVar2 = *(int *)(this_ptr + 0x50);
 if (9 < iVar2) {
 return;
 }
 puVar1 = (unsigned int *)((char *)this_ptr + iVar2 * 8);
 *(double *)puVar1 = param_1;
 *(int *)(this_ptr + 0x50) = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x10fd8
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
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11004
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1100c
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11010
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x11018
void RTTIBase__RTTIBase(RTTIBase *this_ptr)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1101c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedB::getType @ 0x11020
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x11028
void _fini(void)
{
 return;
}

