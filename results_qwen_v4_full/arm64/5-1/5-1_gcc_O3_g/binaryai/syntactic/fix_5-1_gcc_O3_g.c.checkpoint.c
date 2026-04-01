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
// SHA256: cf5590a46a5ddedc76f928100638d65f418d09e495c03bf48f54e01118778434

// Forward declaration
void call_weak_fn(void);

// Missing function declarations
void *operator_new(unsigned long);
void operator_delete(void*, unsigned long);
char *strncpy(char *, const char *, size_t);
void __stack_chk_fail(void);
void __cxa_finalize(void *);
void __libc_start_main(void*, void*, void*, void*, void*, void*, void*);
void abort(void);
int puts(const char *);
int __printf_chk(int, const char *, ...);
void __cxa_atexit(void*, void*, void*);
void std__ios_base__Init__Init(void *);
void __gmon_start__(void);

// Stub implementations for missing C++ runtime functions
void *__cxa_allocate_exception(unsigned long size) { return 0; }
void __cxa_throw(void *obj, void *type, void *dest) { }
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int flags) { return 0; }
size_t strlen(const char *s) { size_t len = 0; while (s[len]) len++; return len; }
int strcmp(const char *s1, const char *s2) { while (*s1 && (*s1 == *s2)) { s1++; s2++; } return *(unsigned char*)s1 - *(unsigned char*)s2; }
void __stack_chk_fail(void) { }
char *strncpy(char *dest, const char *src, size_t n) { size_t i; for (i = 0; i < n && src[i]; i++) dest[i] = src[i]; for (; i < n; i++) dest[i] = '\0'; return dest; }
int puts(const char *s) { return 0; }
int __printf_chk(int flag, const char *format, ...) { return 0; }
void call_weak_fn(void) { }
void *operator_new(unsigned long size) { return 0; }
void operator_delete(void *ptr, unsigned long size) { }

// Function: _init @ 0x100e90
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100eb0 @ 0x100eb0
void FUN_00100eb0(void)
{
 ((void(*)())(char *)0x0)();
 return;
}



















// Forward declaration for Init destructor
void Init__Init(void *param_1,void *param_2,void *param_3);

// Init struct definition (needed for proper typing)
struct Init {
 int dummy;
};



























// Forward declarations for C++ classes
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct Init Init;

// Forward declarations for template functions
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

// C++ class struct definitions
struct Base {
 void *vtable;
 int data;
};

struct Derived {
 void *vtable;
 int data;
 int derived_data;
};

struct MultiDerived {
 void *vtable;
 int data;
 int derived_data;
 int multi_data_a;
 int multi_data_b;
};

struct MiddleA {
 void *vtable;
 int data;
 int middle_a_data;
};

struct MiddleB {
 void *vtable;
 int data;
 int middle_b_data;
};

struct DiamondDerived {
 void *vtable;
 int data;
 int diamond_data;
};

struct RTTIBase {
 void *vtable;
 int data;
};

struct RTTIDerivedA {
 void *vtable;
 int data;
};

struct RTTIDerivedB {
 void *vtable;
 int data;
};

struct Container_int_ {
 int data[10];
 unsigned int size;
};

struct Container_double_ {
 double data[10];
 unsigned int size;
};

// Global variables
uintptr_t int_typeinfo = 0;
uintptr_t ___stack_chk_guard = 0;
uintptr_t std___ioinit = 0;
void *PTR__RTTIDerivedA_00112c28 = 0;
void *PTR__RTTIDerivedB_00112c50 = 0;
uintptr_t RTTIBase_typeinfo = 0;
uintptr_t RTTIDerivedA_typeinfo = 0;
uintptr_t RTTIDerivedB_typeinfo = 0;
const char *DAT_00101b88 = 0;
const char *DAT_00101ba0 = 0;
const char *DAT_00101bc8 = 0;
const char *DAT_00101be8 = 0;
const char *DAT_00101c08 = 0;
const char *DAT_00101c28 = 0;
const char *DAT_00101c48 = 0;
const char *DAT_00101c68 = 0;
const char *DAT_00101c88 = 0;
const char *DAT_00101ca8 = 0;
const char *DAT_00101cc8 = 0;
const char *DAT_00101ce8 = 0;
const char *DAT_00101d08 = 0;
const char *DAT_00101d28 = 0;

// Function: test_cpp_exception @ 0x101040
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)int_typeinfo,0);
 return;
}

// Forward declaration
void test_cpp_oo_features(void);

// Function: main @ 0x101120
int main(void)
{
 test_cpp_oo_features();
 return 0;
}



// Function: test_cpp_member_func @ 0x1012a0
int test_cpp_member_func(void)
{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = (long)___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - (long)___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Global variables
int LifecycleClass_instance_count = 0;

// Function: test_cpp_constructor @ 0x101310
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101330
void call_virtual_func(Base *param_1,int param_2)
{
 ((void(*)(Base*,int))(*(void(**)(Base*,int))param_1))(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101340
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101350
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101360
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x101370
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101380
void test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = (long)___stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int_(&local_10,&iStack_c);
 if (local_8 == (long)___stack_chk_guard) {
 return;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x101420
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101430
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x101440
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101450
int test_cpp_rtti(void)
{
 int iVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 char *__s1;
 long lVar7;
 char cVar8;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)(void *)&PTR__RTTIDerivedA_00112c28;
 plVar4 = (long *)operator_new(8);
 lVar7 = *plVar3;
 __s1 = *(char **)((char *)lVar7 + -8 + 8);
 *plVar4 = (long)(void *)&PTR__RTTIDerivedB_00112c50;
 if (__s1 == "12RTTIDerivedA") {
 cVar8 = '1';
 iVar2 = 0x1e;
 }
 else {
 cVar8 = *__s1;
 if (cVar8 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar1 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = 0x14;
 if (iVar1 == 0) {
 iVar2 = 0x1e;
 }
 }
 }
 lVar5 = (long)__dynamic_cast(plVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar1 = iVar2 + 100;
 if (lVar5 == 0) {
 iVar1 = iVar2;
 }
 lVar5 = (long)__dynamic_cast(plVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar2 = iVar1 + 200;
 if (lVar5 == 0) {
 iVar2 = iVar1;
 }
 if (cVar8 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 ((void(*)(void*))(*(void**)((char *)lVar7 + 8)))(plVar3);
 ((void(*)(void*))(*(void**)((char *)*plVar4 + 8)))(plVar4);
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x1015f0
void test_cpp_oo_features(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t sVar3;
 double dVar4;
 int local_38;
 int aiStack_34 [2];
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = (long)___stack_chk_guard;
 puts((char *)DAT_00101ba0);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar3 = strlen(acStack_2c);
 __printf_chk(1,DAT_00101bc8,(int)sVar3 + 0x125c);
 __printf_chk(1,DAT_00101be8,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,DAT_00101c08,0x2a);
 __printf_chk(1,DAT_00101c28,0x47);
 __printf_chk(1,DAT_00101c48,0x28a);
 __printf_chk(1,DAT_00101c68,0x16);
 iVar1 = template_max_int_(3,7);
 dVar4 = template_max_double_(2.5,1.5);
 local_38 = 10;
 aiStack_34[0] = 0x14;
 template_swap_int_(&local_38,aiStack_34);
 __printf_chk(1,DAT_00101c88,(int)dVar4 + iVar1 + local_38 + aiStack_34[0]);
 __printf_chk(1,DAT_00101ca8,0x10);
 __printf_chk(1,DAT_00101cc8,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_00101ce8,0);
 __printf_chk(1,DAT_00101d08,0x2bf);
 uVar2 = test_cpp_rtti();
 if ((long)local_8 - (long)___stack_chk_guard == 0) {
 __printf_chk(1,DAT_00101d28);
 return;
 }
 __stack_chk_fail();
}

// Function: Base_virtual_func @ 0x1017d0
int Base_virtual_func(Base *this_ptr,int param_1)
{
 return param_1 + 1;
}

// Function: Base_getName @ 0x1017e0
char * Base_getName(void)
{
 return (char *)DAT_00101b88;
}

// Function: Base_destructor @ 0x1017f0
void Base_destructor(Base *this_ptr)
{
 return;
}

// Function: Derived_virtual_func @ 0x101800
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 return param_1 * *(int *)(this_ptr + 8);
}

// Function: Derived_getName @ 0x101810
const char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x101820
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x101830
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB_this @ 0x101840
unsigned long long MultiDerived_funcB_this(MultiDerived *this_ptr)
{
 return 0x28;
}

// Function: MiddleA_func @ 0x101850
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}

// Function: MiddleA_func2 @ 0x101870
int MiddleA_func2(MiddleA *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}

// Function: MiddleB_func @ 0x1018a0
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}

// Function: MiddleB_func2 @ 0x1018c0
int MiddleB_func2(MiddleB *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}

// Function: DiamondDerived_func @ 0x1018f0
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func2 @ 0x101910
int DiamondDerived_func2(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ptr + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func3 @ 0x101934
int DiamondDerived_func3(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)((char *)this_ptr + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA_getType @ 0x101950
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x101960
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB_destructor @ 0x101970
void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)
{
 return;
}

// Function: RTTIDerivedA_destructor @ 0x101980
void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)
{
 return;
}

// Function: DiamondDerived_destructor @ 0x101990
void DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 return;
}

// Function: DiamondDerived_destructor2 @ 0x101994
void DiamondDerived_destructor2(DiamondDerived *this_ptr)
{
 return;
}

// Function: DiamondDerived_destructor3 @ 0x1019a0
void DiamondDerived_destructor3(DiamondDerived *this_ptr)
{
 return;
}

// Function: MultiDerived_destructor @ 0x1019b0
void MultiDerived_destructor(MultiDerived *this_ptr)
{
 return;
}

// Function: MultiDerived_destructor2 @ 0x1019b4
void MultiDerived_destructor2(MultiDerived *this_ptr)
{
 return;
}

// Function: Derived_destructor @ 0x1019c0
void Derived_destructor(Derived *this_ptr)
{
 return;
}

// Function: Base_destructor2 @ 0x1019d0
void Base_destructor2(Base *this_ptr)
{
 operator_delete((void*)this_ptr,8);
 return;
}

// Function: Derived_destructor2 @ 0x1019e0
void Derived_destructor2(Derived *this_ptr)
{
 operator_delete((void*)this_ptr,0x10);
 return;
}

// Function: MultiDerived_destructor3 @ 0x1019f0
void MultiDerived_destructor3(MultiDerived *this_ptr)
{
 operator_delete(this_ptr,0x20);
 return;
}

// Function: MultiDerived_destructor4 @ 0x101a00
void MultiDerived_destructor4(MultiDerived *this_ptr)
{
 operator_delete((void *)((char *)this_ptr + -0x10),0x20);
 return;
}

// Function: RTTIDerivedB_destructor2 @ 0x101a10
void RTTIDerivedB_destructor2(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr,8);
 return;
}

// Function: RTTIDerivedA_destructor2 @ 0x101a20
void RTTIDerivedA_destructor2(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr,8);
 return;
}

// Function: DiamondDerived_destructor4 @ 0x101a30
void DiamondDerived_destructor4(DiamondDerived *this_ptr)
{
 operator_delete(this_ptr,0x30);
 return;
}

// Function: DiamondDerived_destructor5 @ 0x101a40
void DiamondDerived_destructor5(DiamondDerived *this_ptr)
{
 operator_delete((char *)this_ptr + *(long *)((char *)this_ptr + -0x20),0x30);
 return;
}

// Function: DiamondDerived_destructor6 @ 0x101a54
void DiamondDerived_destructor6(DiamondDerived *this_ptr)
{
 operator_delete((char *)this_ptr + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x101a60
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x101a70
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101a80
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Constructor @ 0x101aa0
void Container_int_Constructor(Container_int_ *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x101ab0
void Container_int_push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ptr + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x101ad0
unsigned int Container_int_get(Container_int_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x28))) {
 return *(unsigned int *)((char *)this_ptr + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container_int_getSize @ 0x101b00
unsigned int Container_int_getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x28);
}

// Function: Container_double_Constructor @ 0x101b10
void Container_double_Constructor(Container_double_ *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x101b20
void Container_double_push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x50) = iVar1 + 1;
 *(double *)((char *)this_ptr + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x101b40
unsigned long long Container_double_get(Container_double_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x50))) {
 return *(unsigned long long *)((char *)this_ptr + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container_double_getSize @ 0x101b60
unsigned int Container_double_getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x50);
}

// Function: _fini @ 0x101b68
void _fini(void)
{
 return;
}

