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

// Global declarations for undeclared identifiers
static char completed_0 = 0;
static void *__dso_handle = 0;
static void *main_ptr = 0;
static void *stack0x00000008 = 0;
typedef unsigned long long undefined7;

// Forward declarations
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));

// C++ class/struct definitions
struct Base {
 void **vtable;
};

struct LifecycleClass {
 int instance_count;
};
int LifecycleClass_instance_count = 0;

// C++ std namespace objects
struct Init { void *_Init; };
struct ios_base { struct Init Init; void *_Init; };
struct std_obj { void *__ioinit; };
void *std___ioinit = 0;

// Helper functions for std namespace (C compatibility)
void std_ios_base_Init_Init(Init *this_ptr) { this_ptr->_Init = 0; }
void std_ios_base_Init__Init(void) { }

// Decompiled by BinaryAI
// SHA256: 6114fd641e1e4a9548f1fff963f9e0542d4d06f047f847c2767a5f3429a836ed

// Forward declaration for call_weak_fn
static int call_weak_fn(intptr_t ctx);

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((intptr_t)ctx);
 return iVar1;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}



// C++ runtime stub implementations
static void __cxa_finalize(void *param_1) { }
static int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle) { return 0; }

// Stub for call_weak_fn
static int call_weak_fn(intptr_t ctx) { return 0; }

// Stub implementations for external functions
static void *operator_new(unsigned long param_1) {
 static char heap[4096];
 static unsigned long offset = 0;
 void *ptr = heap + offset;
 offset += param_1;
 offset = (offset + 7) & ~7; // Align to 8 bytes
 return ptr;
}

static void operator_delete(void *param_1) {
 // Stub - no-op for simple heap
}

static void __cxa_throw(void *exception, void *tinfo, void *dest) {
 // Stub - just return, exception handling not fully implemented
}

static int printf(const char *__format, ...) {
 // Stub implementation
 return 0;
}

static size_t strlen(char *__s) {
 size_t len = 0;
 while (__s[len] != 0) {
  len++;
 }
 return len;
}

static int puts(char *__s) {
 // Stub implementation
 return 0;
}

static void *__cxa_begin_catch(void *exception) {
 return exception;
}

static void *__cxa_allocate_exception(unsigned long size) {
 static char exception_buffer[256];
 return exception_buffer;
}

static void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags) {
 // Stub - return non-null to simulate successful cast
 return obj;
}

static void __cxa_rethrow(void *exception) {
 // Stub
}

static void abort(void) {
 // Stub
}

static void __cxa_end_catch(void) {
 // Stub
}

static int __gxx_personality_v0(int version, int actions, long exception_class, void *ue_header, void *context) {
 return 0;
}

static void _Unwind_Resume(void *exception) {
 // Stub
}

// Container struct definitions
struct Container_int_ {
 unsigned int data[10];
 unsigned int size;
};

struct Container_double_ {
 double data[10];
 unsigned int size;
};

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init((Init *)std___ioinit);
 __cxa_atexit(std_ios_base_Init__Init,std___ioinit,&__dso_handle);
 return;
}













// Function: test_cpp_member_func @ 0x101014
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
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
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
 void (*func_ptr)(Base *, int) = (void (*)(Base *, int))(*(void **)param_1);
 func_ptr(param_1, param_2);
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
 __cxa_throw(puVar1,0,0);
}

// Function: test_cpp_smart_ptr @ 0x1011bc
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Global RTTI declarations
void *PTR__RTTIBase_00111d58 = 0;
void *PTR__RTTIBase_00111d80 = 0;
struct typeinfo { void *vtable; const char *name; };
struct typeinfo RTTIBase_typeinfo = {0, "RTTIBase"};
struct typeinfo RTTIDerivedA_typeinfo = {0, "RTTIDerivedA"};
struct typeinfo RTTIDerivedB_typeinfo = {0, "RTTIDerivedB"};

// Missing data declarations
char DAT_00101734[] = "Testing C++ OO features:\n";
char DAT_001015dd[] = "Member function: %d\n";
char DAT_001015fb[] = "Constructor: %d\n";
char DAT_00101617[] = "Virtual function: %d\n";
char DAT_00101633[] = "Multiple inheritance: %d\n";
char DAT_0010164f[] = "Diamond inheritance: %d\n";
char DAT_0010166c[] = "Operator overload: %d\n";
char DAT_00101688[] = "Template function: %d\n";
char DAT_001016a4[] = "Template class: %d\n";
char DAT_001016c0[] = "Lambda: %d\n";
char DAT_001016dc[] = "Exception: %d\n";
char DAT_001016f9[] = "Smart pointer: %d\n";
char DAT_00101716[] = "RTTI: %d\n";

// RTTI class definitions
struct RTTIBase {
 void **vtable;
};

struct RTTIDerivedA {
 void **vtable;
};

struct RTTIDerivedB {
 void **vtable;
};

// Function: test_cpp_rtti @ 0x1011c4
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = (unsigned long long)(uintptr_t)PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)(uintptr_t)PTR__RTTIBase_00111d80;
 lVar3 = (long)(uintptr_t)__dynamic_cast(puVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)(uintptr_t)__dynamic_cast(plVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 operator_delete(plVar2);
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101284
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long uVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 unsigned int local_58;
 unsigned long long local_54;
 undefined7 uStack_4c;
 char uStack_45;
 undefined7 uStack_44;
 unsigned long long uStack_3d;
 char local_35;
 puts(DAT_00101734);
 local_35 = 0;
 local_58 = 10;
 uStack_4c = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44 = 0;
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf(DAT_001015dd,(unsigned long)((int)sVar2 + 0x125c));
 printf(DAT_001015fb,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_00101617,0x2a);
 printf(DAT_00101633,0x47);
 printf(DAT_0010164f,0x28a);
 printf(DAT_0010166c,0x16);
 printf(DAT_00101688,0x27);
 printf(DAT_001016a4,0x10);
 printf(DAT_001016c0,0x55);
 test_cpp_exception();
 printf(DAT_001016dc,0);
 printf(DAT_001016f9,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)PTR__RTTIBase_00111d80;
 lVar6 = (long)(uintptr_t)__dynamic_cast(puVar4,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)(uintptr_t)__dynamic_cast(plVar5,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 operator_delete(plVar5);
 iVar1 = printf(DAT_00101716,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x101458
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101470
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10147c
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101488
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Constructor @ 0x10149c
void Container_int_Constructor(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x1014a4
void Container_int_push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x1014c0
unsigned int Container_int_get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 uVar1 = *(unsigned int *)(this_ptr + (unsigned long)(unsigned int)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_getSize @ 0x1014e0
unsigned int Container_int_getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container_double_Constructor @ 0x1014e8
void Container_double_Constructor(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x1014f0
void Container_double_push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(double *)(this_ptr + (long)iVar1 * 8) = param_1;
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container_double_get @ 0x10150c
unsigned long long Container_double_get(Container_double_ *this_ptr,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 uVar1 = *(unsigned long long *)(this_ptr + (unsigned long)(unsigned int)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_getSize @ 0x101528
unsigned int Container_double_getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x101530
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedA_getType @ 0x101534
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIBase__RTTIBase @ 0x10153c
void RTTIBase__RTTIBase(RTTIBase *this_ptr)
{
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x101540
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedB_getType @ 0x101544
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x10154c
void _fini(void)
{
 return;
}

