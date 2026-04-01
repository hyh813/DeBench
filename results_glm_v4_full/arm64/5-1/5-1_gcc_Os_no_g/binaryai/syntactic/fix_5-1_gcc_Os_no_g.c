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

#include <stdarg.h>
#include <stdio.h>

/* External function declarations */
extern int printf(const char *__format, ...);
extern int vprintf(const char *__format, va_list __arg);
extern int puts(const char *__s);

/* Forward declarations for C++ types */
struct Base;
typedef struct Base Base;
struct Derived;
typedef struct Derived Derived;
struct MultiDerived;
typedef struct MultiDerived MultiDerived;

/* Definition of MultiDerived struct */
struct MultiDerived {
    void *vtable;
    void *vtable2;
    char padding[0x20 - 2 * sizeof(void *)];
};
struct VirtualBase;
typedef struct VirtualBase VirtualBase;
struct MiddleA;
typedef struct MiddleA MiddleA;
struct MiddleB;
typedef struct MiddleB MiddleB;
struct DiamondDerived;
typedef struct DiamondDerived DiamondDerived;
struct RTTIBase;
typedef struct RTTIBase RTTIBase;
struct RTTIDerivedA;
typedef struct RTTIDerivedA RTTIDerivedA;
struct RTTIDerivedB;
typedef struct RTTIDerivedB RTTIDerivedB;
struct Init;
struct Container_int_;
struct Container_double_;
struct unique_ptr_int_std__default_delete_int__;
struct unique_ptr_int___std__default_delete_int____;
struct LifecycleClass;

/* Definition of MiddleA struct */
struct MiddleA {
    void *vtable;
    void *vtable_VirtualBase;
    char padding[0x20 - 2 * sizeof(void *)];
};

/* Definition of MiddleB struct */
struct MiddleB {
    void *vtable;
    void *vtable_VirtualBase;
    char padding[0x20 - 2 * sizeof(void *)];
};





/* Definition of DiamondDerived struct */
struct DiamondDerived {
    void *vtable;
    void *vtable_MiddleA;
    void *vtable_MiddleB;
    char padding[0x30 - 3 * sizeof(void *)];
};





/* Definition of VirtualBase struct */
struct VirtualBase {
    void *vtable;
    char padding[0x10 - sizeof(void *)];
};



/* Definition of Derived struct */
struct Derived {
    void *vtable;
    char padding[0x10 - sizeof(void *)];
};

/* Definition of RTTIDerivedA struct */
struct RTTIDerivedA {
    void *vtable;
    char padding[8 - sizeof(void *)];
};

/* Definition of RTTIDerivedB struct */
struct RTTIDerivedB {
    void *vtable;
    char padding[8 - sizeof(void *)];
};

/* Definition of Base struct (C++ class compatibility) */
struct Base {
    void **vtable;
};

/* Definition of Container<int> struct (C++ class compatibility) */
struct Container_int_ {
    int data[10];
    int size;
    char padding[8];
};

/* C++ namespace simulation - C compatible structs */
struct std_ios_base_Init {
    void (*_Init)(void);
};

/* Definition of Init struct (std::ios_base::Init) */
struct Init {
    void (*_Init)(void);
};

struct std_default_delete_int {
    char placeholder;
};

struct std_unique_ptr_int_std__default_delete_int__ {
    void *ptr;
    struct std_default_delete_int deleter;
};

struct std_unique_ptr_int___std__default_delete_int____ {
    void *ptr;
    struct std_default_delete_int deleter;
};
typedef struct std_unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;

/* Forward declarations for functions used in virtual tables */
int Base_virtual_func(Base *this, int param_1);
int Derived_virtual_func(Derived *this, int param_1);
void DiamondDerived__DiamondDerived(struct DiamondDerived *this);
int MiddleB_func(struct MiddleB *this);
int MiddleA_func(struct MiddleA *this);
void MiddleA__MiddleA(struct MiddleA *this);
void MiddleB__MiddleB(struct MiddleB *this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);

/* External data and function pointer references */
/* Virtual table function pointers - defined as external symbols */
void *PTR_virtual_func_00113868 = (void *)Base_virtual_func;
void *PTR_virtual_func_00113898 = (void *)Derived_virtual_func;
void *PTR_func_00113ac8 = (void *)DiamondDerived__DiamondDerived;
void *PTR_func_00113af8 = (void *)MiddleB_func;
void *PTR_func_00113b30 = (void *)MiddleA_func;
void *PTR_func_001138e0 = (void *)MiddleA__MiddleA;
void *PTR_func_00113918 = (void *)MiddleA_func;
void *PTR_func_00113958 = (void *)MiddleB__MiddleB;
void *PTR_func_00113990 = (void *)MiddleB_func;
void *PTR__RTTIDerivedA_00113b58 = (void *)RTTIDerivedA_getType;
void *PTR__RTTIDerivedB_00113b80 = (void *)RTTIDerivedB_getType;
extern void stack0x00000008;
extern struct Init std___ioinit;
extern void *int_typeinfo;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern char DAT_001025a0;
extern char DAT_001025b2;
extern char DAT_001025d6;
extern char DAT_001025f4;
extern char DAT_00102610;
extern char DAT_0010262c;
extern char DAT_00102648;
extern char DAT_00102665;
extern char DAT_00102681;
extern char DAT_0010269d;
extern char DAT_001026b9;
extern char DAT_001026d5;
extern char DAT_001026f2;
extern char DAT_0010270f;
extern char DAT_001025b2;
extern char DAT_001025d6;
extern char DAT_001025f4;
extern char DAT_00102610;
extern char DAT_0010262c;
extern char DAT_00102648;
extern char DAT_00102665;
extern char DAT_00102681;
extern char DAT_0010269d;
extern char DAT_001026b9;
extern char DAT_001026d5;
extern char DAT_001026f2;
extern char DAT_0010270f;
extern char DAT_001025a0;

/* Global declarations */
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;
extern char completed_0;
extern void *__dso_handle;

/* Forward declarations for C++ types (as structs for C compatibility) */
struct Init;

/* Definition of Container<double> struct (C++ class compatibility) */
struct Container_double_ {
    double data[10];
    int size;
};

/* Definition of LifecycleClass struct (C++ class compatibility) */
struct LifecycleClass {
    int placeholder;
};

/* Static member of LifecycleClass (C doesn't support static struct members) */
int LifecycleClass_instance_count = 0;

/* Forward declarations for C++ types (as structs for C compatibility) */
struct RTTIBase;

/* Forward function declarations */
void call_weak_fn(void);
void _init(void *ctx);
void test_cpp_oo_features(void);
int call_virtual_func(struct Base *param_1, int param_2);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void Container_int__push(struct Container_int_ *this, int param_1);
void std__unique_ptr_int___std__default_delete_int_____unique_ptr(struct unique_ptr_int___std__default_delete_int____ *this);
void std__unique_ptr_int_std__default_delete_int____unique_ptr(struct unique_ptr_int_std__default_delete_int__ *this);
int DiamondDerived_func(struct DiamondDerived *this);
void DiamondDerived__DiamondDerived(struct DiamondDerived *this);
int MiddleA_func(struct MiddleA *this);
int MiddleB_func(struct MiddleB *this);
int Base_virtual_func(Base *this, int param_1);
int Derived_virtual_func(Derived *this, int param_1);
void MiddleA__MiddleA(struct MiddleA *this);
void MiddleB__MiddleB(struct MiddleB *this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);
void _init(void *ctx);
void * operator_new__(unsigned long param_1);
size_t strlen(char *__s);
void __stack_chk_fail(void);
void __cxa_begin_catch(void *param_1);
void *__cxa_allocate_exception(size_t param_1);
void __cxa_finalize(void *param_1);
void __libc_start_main(int (*)(int, char **, char **), int, char **, void (*)(void), void (*)(void), void *, void *);
void * operator_new(unsigned long param_1);
void operator_delete(void *param_1);
void operator_delete_sized(void *param_1, unsigned long param_2);
char * strncpy(char *__dest, char *__src, size_t __n);
void *__dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, int src2dst);
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
void operator_delete__(void *param_1);
int strcmp(char *__s1, char *__s2);
void __cxa_rethrow(void);
void Init_Init(struct Init *this);
void abort(void);
void __cxa_end_catch(void);
void __gxx_personality_v0(void);
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
void _Unwind_Resume(void);
int __printf_chk(int __flag, const char *__format, ...);
void __gmon_start__(void);
void test_cpp_virtual_func(void);
unsigned long long test_cpp_multiple_inheritance(void);
unsigned long long test_cpp_operator_overload(void);
int test_cpp_diamond_inheritance(void);
void test_cpp_template_func(void);
int test_cpp_template_class(void);
unsigned long long test_cpp_lambda(void);
void test_cpp_exception(void);
unsigned long long test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);

// Decompiled by BinaryAI
// SHA256: c4331c64b356430ec1150a97c14ac7209fed64f7a62838844a0fc172c0a0a979

// Function: _init @ 0x101638
void _init(void *ctx)
{
 call_weak_fn();
}

// Function: FUN_00101650 @ 0x101650
void FUN_00101650(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101670
void * operator_new__(unsigned long param_1)
{
    /* Simple allocation using malloc-like behavior */
    void *ptr;
    extern void *malloc(unsigned long size);
    ptr = malloc(param_1);
    return ptr;
}

// Function: <EXTERNAL>::strlen @ 0x101690
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1016a0
extern void __stack_chk_fail(void);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1016b0
void __cxa_begin_catch(void *param_1)
{
    /* Exception handling - stub implementation */
    return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1016c0
void *__cxa_allocate_exception(size_t param_1)
{
    /* Allocate exception object */
    return operator_new(param_1);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1016d0
void __cxa_finalize(void *param_1)
{
    /* Finalization stub */
    return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1016e0
extern void __libc_start_main(int (*)(int, char **, char **), int, char **, void (*)(void), void (*)(void), void *, void *);

// Function: <EXTERNAL>::operator.new @ 0x1016f0
void * operator_new(unsigned long param_1)
{
    /* Simple allocation using malloc-like behavior */
    void *ptr;
    extern void *malloc(unsigned long size);
    ptr = malloc(param_1);
    return ptr;
}

// Function: <EXTERNAL>::operator.delete @ 0x101700
void operator_delete_sized(void *param_1,unsigned long param_2)
{
    /* Simple deallocation with size */
    extern void free(void *ptr);
    if (param_1 != (void *)0) {
        free(param_1);
    }
    return;
}

// Function: <EXTERNAL>::operator.delete (1 param) @ 0x101708
void operator_delete(void *param_1)
{
    /* Simple deallocation without size */
    extern void free(void *ptr);
    if (param_1 != (void *)0) {
        free(param_1);
    }
    return;
}

// Function: <EXTERNAL>::strncpy @ 0x101710
extern char * strncpy(char *__dest,char *__src,size_t __n);

// Function: <EXTERNAL>::__dynamic_cast @ 0x101720
void *__dynamic_cast(const void *src_ptr, const void *src_type, const void *dst_type, int src2dst)
{
    /* Simple RTTI cast stub */
    if (src_ptr == (void *)0) {
        return (void *)0;
    }
    return (void *)src_ptr;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101730
int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
    /* Registration of exit handler - stub implementation */
    return 0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101740
void operator_delete__(void *param_1)
{
 operator_delete_sized(param_1, 0);
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101760
void __cxa_rethrow(void)
{
 // __cxa_rethrow is external - this is a stub
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101770
void Init_Init(struct Init *this)
{
    /* std::ios_base::Init constructor stub */
    return;
}

// Function: <EXTERNAL>::abort @ 0x101780
extern void abort(void);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101790
void __cxa_end_catch(void)
{
    /* End exception handling - stub implementation */
    return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1017a0
void __gxx_personality_v0(void)
{
 /* placeholder for personality function */
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1017b0
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest)
{
    /* Throw exception - stub implementation */
    /* In a real implementation, this would unwind the stack */
    extern void abort(void);
    abort();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x1017c0
void _Unwind_Resume(void)
{
    /* Resume unwinding - stub implementation */
    extern void abort(void);
    abort();
}

// Function: <EXTERNAL>::__printf_chk @ 0x1017d0
int __printf_chk(int __flag, const char *__format, ...)
{
    /* Printf with format checking - delegate to standard printf */
    int result;
    va_list args;
    extern int printf(const char *__format, ...);
    va_start(args, __format);
    result = vprintf(__format, args);
    va_end(args);
    return result;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1017e0
extern void __gmon_start__(void);

// Function: test_cpp_exception @ 0x101800
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = __cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo,0);
}

// Function: main @ 0x1018d0
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x1018e8
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 Init_Init((struct Init *)&std___ioinit);
 __cxa_atexit((void (*)(void))0, (void *)0, (void *)0);
 return;
}

// Function: _start @ 0x101940
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main((int (*)(int, char **, char **))main,0,(char **)param_9,0,0,0,0);
 abort();
}

// Function: call_weak_fn @ 0x101974
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x101990
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1019c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001019fc @ 0x1019fc
void FUN_001019fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101a54
int test_cpp_member_func(void)
{
 char *__s;
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101ac0
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101ad8
int call_virtual_func(struct Base *param_1,int param_2)
{
 return (*(int (**)(struct Base *, int))(*param_1->vtable))(param_1,param_2);
}

// Function: test_cpp_virtual_func @ 0x101ae8
void test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_20;
 void **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113868;
 local_18 = &PTR_virtual_func_00113898;
 local_10 = 3;
 iVar1 = call_virtual_func((struct Base *)&local_20,5);
 iVar2 = call_virtual_func((struct Base *)&local_18,5);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: test_cpp_multiple_inheritance @ 0x101b78
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x101b80
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101b88
void test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 local_c = 0x14;
 template_swap_int_(&local_10,&local_c);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: test_cpp_template_class @ 0x101c30
int test_cpp_template_class(void)
{
 int iVar1;
 int local_38 [10];
 int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_10 = 1;
 local_38[0] = 10;
 Container_int__push((struct Container_int_ *)local_38,0x14);
 Container_int__push((struct Container_int_ *)local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_10 + iVar1 + 3;
}

// Function: test_cpp_lambda @ 0x101cc0
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x101cc8
int test_cpp_rtti(void)
{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar4 = (long *)operator_new(8);
 lVar8 = (long)*plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 cVar1 = *__s1;
 if ((char *)__s1 == "12RTTIDerivedA") {
 iVar7 = 10;
 }
 else if (cVar1 == '*') {
 iVar7 = 0;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 iVar2 = iVar7 + 0x14;
 lVar5 = (long)__dynamic_cast(plVar3,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 ((void (*)(void *))(*(void **)(lVar8 + 8)))(plVar3);
 ((void (*)(void *))(*(void **)(*plVar4 + 8)))(plVar4);
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_smart_ptr @ 0x101e24
unsigned long long test_cpp_smart_ptr(void)
{
 unsigned long long local_20;
 unsigned int *puStack_18;
 unsigned long long *local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 puStack_18 = (unsigned int *)operator_new(4);
 local_20 = 0;
 *puStack_18 = 200;
 local_10 = (unsigned long long *)operator_new__(0x14);
 *local_10 = 0x200000001;
 local_10[1] = 0x400000003;
 *(unsigned int *)(local_10 + 2) = 5;
 std__unique_ptr_int___std__default_delete_int_____unique_ptr
 ((struct unique_ptr_int___std__default_delete_int____ *)&local_10);
 std__unique_ptr_int_std__default_delete_int____unique_ptr
 ((struct unique_ptr_int_std__default_delete_int__ *)&puStack_18);
 std__unique_ptr_int_std__default_delete_int____unique_ptr
 ((struct unique_ptr_int_std__default_delete_int__ *)&local_20);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x101ef8
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_38 [2];
 void **local_28;
 void **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38[0] = &PTR_func_00113ac8;
 local_18 = &PTR_func_00113b30;
 local_28 = &PTR_func_00113af8;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((struct DiamondDerived *)&local_18);
 local_10 = 100;
 iVar2 = DiamondDerived_func((struct DiamondDerived *)&local_18);
 DiamondDerived__DiamondDerived((struct DiamondDerived *)local_38);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x101fa0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(&DAT_001025b2);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,uVar1);
 test_cpp_virtual_func();
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,uVar1);
 test_cpp_template_func();
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,uVar1);
 test_cpp_exception();
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,uVar1);
 return;
}

// Function: Base::virtual_func @ 0x1020d8
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1020e0
char * Base_getName(void)
{
 return &DAT_001025a0;
}



// Function: Derived::virtual_func @ 0x1020f0
int Derived_virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived::getName @ 0x1020fc
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x102108
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x102110
unsigned long long MultiDerived_funcB(struct MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x102118
unsigned long long MultiDerived_funcB_2(struct MultiDerived *this)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x102120
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102128
void VirtualBase__VirtualBase(struct VirtualBase *this)
{
 return;
}

// Function: MiddleA::func @ 0x10212c
int MiddleA_func(struct MiddleA *this)
{
    return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x102144
void MiddleA_func_void(struct MiddleA *this)
{
 MiddleA_func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: MiddleB::func @ 0x102154
int MiddleB_func(struct MiddleB *this)
{
    return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x10216c
void MiddleB_func_void(struct MiddleB *this)
{
 MiddleB_func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x10217c
int DiamondDerived_func(struct DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102194
void DiamondDerived_func_2(struct DiamondDerived *this)
{
 DiamondDerived_func(this + *(long *)(*(long *)this + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x1021a4
void DiamondDerived_func_3(struct DiamondDerived *this)
{
 DiamondDerived_func(this + -0x10);
 return;
}

// Function: MiddleA::~MiddleA @ 0x1021ac
void MiddleA__MiddleA(struct MiddleA *this)
{
 *(void **)this = &PTR_func_001138e0;
 *(void **)(this + 0x10) = &PTR_func_00113918;
 return;
}

// Function: MiddleA::~MiddleA @ 0x1021c8
void MiddleA__MiddleA_1(struct MiddleA *this)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(void **)(this + lVar1) = &PTR_func_001138e0;
 *(void **)(this + lVar1 + 0x10) = &PTR_func_00113918;
 return;
}

// Function: MiddleB::~MiddleB @ 0x1021f0
void MiddleB__MiddleB(struct MiddleB *this)
{
 *(void **)this = &PTR_func_00113958;
 *(void **)(this + 0x10) = &PTR_func_00113990;
 return;
}

// Function: MiddleB::~MiddleB @ 0x10220c
void MiddleB__MiddleB_1(struct MiddleB *this)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)this + -0x20);
 *(void **)(this + lVar1) = &PTR_func_00113958;
 *(void **)(this + lVar1 + 0x10) = &PTR_func_00113990;
 return;
}

// Function: RTTIDerivedA::getType @ 0x102234
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x10223c
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102244
void RTTIDerivedB__RTTIDerivedB(struct RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102248
void RTTIDerivedA__RTTIDerivedA(struct RTTIDerivedA *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x10224c
void MultiDerived__MultiDerived(struct MultiDerived *this)
{
 return;
}



// Function: Base::~Base @ 0x102258
void Base__Base(Base *this)
{
 operator_delete_sized(this,8);
 return;
}

// Function: Derived::~Derived @ 0x102260
void Derived__Derived(Derived *this)
{
 operator_delete_sized(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102268
void MultiDerived__MultiDerived_2(struct MultiDerived *this)
{
 operator_delete_sized(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102270
void MultiDerived__MultiDerived_3(struct MultiDerived *this)
{
 MultiDerived__MultiDerived_2(this + -0x10);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102278
void VirtualBase__VirtualBase_2(VirtualBase *this)
{
 operator_delete_sized(this,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102280
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this)
{
 operator_delete_sized(this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102288
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this)
{
 operator_delete_sized(this,8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102290
void MiddleA__MiddleA_2(MiddleA *this)
{
 *(void **)this = &PTR_func_001138e0;
 *(void **)(this + 0x10) = &PTR_func_00113918;
 operator_delete_sized(this,0x20);
 return;
}

// Function: MiddleA::~MiddleA @ 0x1022b0
void MiddleA__MiddleA_3(MiddleA *this)
{
 MiddleA__MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022c0
void MiddleB__MiddleB_2(MiddleB *this)
{
 *(void **)this = &PTR_func_00113958;
 *(void **)(this + 0x10) = &PTR_func_00113990;
 operator_delete_sized(this,0x20);
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022e0
void MiddleB__MiddleB_3(MiddleB *this)
{
 MiddleB__MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleA::~MiddleA @ 0x1022f0
void MiddleA__MiddleA_4(MiddleA *this, int in_w1, void *in_x2)
{
 void **ppuVar1;
 char *puVar2;
 void **ppuVar3;
 if (in_w1 == 0) {
 ppuVar3 = (void **)*(void **)in_x2;
 }
 else {
 ppuVar3 = (void **)&PTR_func_001138e0;
 }
 *(void **)this = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (void **)((void **)in_x2)[1];
 puVar2 = (char *)((char *)ppuVar3 + -3 * sizeof(void *));
 }
 else {
 puVar2 = (char *)0x10;
 ppuVar1 = (void **)&PTR_func_00113918;
 }
 *(void **)(this + (long)puVar2) = ppuVar1;
 return;
}

// Function: MiddleA::~MiddleA @ 0x10232c
void MiddleA__MiddleA_5(MiddleA *this, int in_w1, void *in_x2)
{
 MiddleA__MiddleA_4(this, in_w1, in_x2);
 return;
}

// Function: MiddleB::~MiddleB @ 0x102338
void MiddleB__MiddleB_4(MiddleB *this, int in_w1, void *in_x2)
{
 void **ppuVar1;
 char *puVar2;
 void **ppuVar3;
 if (in_w1 == 0) {
 ppuVar3 = (void **)*(void **)in_x2;
 }
 else {
 ppuVar3 = (void **)&PTR_func_00113958;
 }
 *(void **)this = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (void **)((void **)in_x2)[1];
 puVar2 = (char *)((char *)ppuVar3 + -3 * sizeof(void *));
 }
 else {
 puVar2 = (char *)0x10;
 ppuVar1 = (void **)&PTR_func_00113990;
 }
 *(void **)(this + (long)puVar2) = ppuVar1;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102374
void MiddleB__MiddleB_5(MiddleB *this, int in_w1, void *in_x2)
{
 MiddleB__MiddleB_4(this, in_w1, in_x2);
 return;
}

// Function: template_max<int> @ 0x102380
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10238c
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102398
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1023ac
void Container_int__Container(struct Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1023b4
void Container_int__push(struct Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1023d0
unsigned int Container_int__get(struct Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1023f0
unsigned int Container_int__getSize(struct Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1023f8
void Container_double__Container(struct Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102400
void Container_double__push(struct Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x10241c
unsigned long long Container_double__get(struct Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x10243c
unsigned int Container_double__getSize(struct Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x102444
void
std__unique_ptr_int_std__default_delete_int____unique_ptr
 (struct unique_ptr_int_std__default_delete_int__ *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete_sized(*(void **)this,4);
 return;
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x102458
void
std__unique_ptr_int___std__default_delete_int_____unique_ptr
 (struct unique_ptr_int___std__default_delete_int____ *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 return;
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102468
void DiamondDerived__DiamondDerived_3(struct DiamondDerived *this, int in_w1, void *in_x2)
{
 void **ppuVar1;
 char *puVar2;
 if (in_w1 == 0) {
 ppuVar1 = (void **)*(void **)in_x2;
 }
 else {
 ppuVar1 = (void **)&PTR_func_00113ac8;
 }
 *(void **)this = ppuVar1;
 if (in_w1 == 0) {
 puVar2 = (char *)((char *)ppuVar1 + -3 * sizeof(void *));
 ppuVar1 = (void **)((void **)in_x2)[5];
 }
 else {
 puVar2 = (char *)0x20;
 ppuVar1 = (void **)&PTR_func_00113b30;
 }
 *(void **)(this + (long)puVar2) = ppuVar1;
 if (in_w1 == 0) {
 ppuVar1 = (void **)((void **)in_x2)[6];
 }
 else {
 ppuVar1 = (void **)&PTR_func_00113af8;
 }
 *(void **)(this + 0x10) = ppuVar1;
 MiddleB__MiddleB_1((struct MiddleB *)(this + 0x10));
 MiddleA__MiddleA_1((struct MiddleA *)this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102518
void DiamondDerived__DiamondDerived_4(struct DiamondDerived *this)
{
 DiamondDerived__DiamondDerived_3(this, 1, (void *)0);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102524
void DiamondDerived__DiamondDerived_5(struct DiamondDerived *this)
{
 DiamondDerived__DiamondDerived_3(this + -0x10, 1, (void *)0);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10252c
void DiamondDerived__DiamondDerived_6(struct DiamondDerived *this)
{
 DiamondDerived__DiamondDerived_3(this + *(long *)(*(long *)this + -0x20), 1, (void *)0);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10253c
void DiamondDerived__DiamondDerived_7(struct DiamondDerived *this)
{
 DiamondDerived__DiamondDerived_3(this, 1, (void *)0);
 operator_delete_sized(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102564
void DiamondDerived__DiamondDerived_8(struct DiamondDerived *this)
{
 DiamondDerived__DiamondDerived_3(this + -0x10, 1, (void *)0);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10256c
void DiamondDerived__DiamondDerived_9(struct DiamondDerived *this)
{
 DiamondDerived__DiamondDerived_3(this + *(long *)(*(long *)this + -0x20), 1, (void *)0);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10257c
void DiamondDerived__DiamondDerived_10(struct DiamondDerived *this)
{
 DiamondDerived__DiamondDerived_3(this, 1, (void *)0);
 return;
}

// Function: DiamondDerived::DiamondDerived @ 0x102000
void DiamondDerived__DiamondDerived(struct DiamondDerived *this)
{
 *(void **)this = &PTR_func_00113ac8;
 *(void **)(this + 0x10) = &PTR_func_00113af8;
 *(void **)(this + 0x20) = &PTR_func_00113b30;
 return;
}

// Function: _fini @ 0x102588
void _fini(void)
{
 return;
}

