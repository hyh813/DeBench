#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
// int64_t already defined in stdlib.h
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations and type definitions */
struct Init {
    char _dummy;
};

struct Base {
    char _dummy;
};

struct Derived {
    char _dummy;
};

struct MultiDerived {
    char _dummy;
};

struct VirtualBase {
    char _dummy;
};

struct MiddleA {
    char _dummy;
};

struct MiddleB {
    char _dummy;
};

struct DiamondDerived {
    char _dummy;
};

struct RTTIBase {
    static void *typeinfo;
};

struct RTTIDerivedA {
    static void *typeinfo;
};

struct RTTIDerivedB {
    static void *typeinfo;
};

struct Container_int_ {
    char _dummy;
};

struct Container_double_ {
    char _dummy;
};

struct LifecycleClass {
    static int instance_count;
};

/* Global variables */
extern void *__dso_handle;
struct Init std___ioinit;
void *int_typeinfo;
char completed_0 = 0;
extern char DAT_00103016[];
extern char DAT_0010303a[];
extern char DAT_00103074[];
extern char DAT_001030ac[];
extern char DAT_001030e5[];
extern char DAT_00103101[];
extern char DAT_00103139[];
extern char DAT_00103156[];
extern char DAT_00103173[];
extern char DAT_00103004[];

/* Forward declarations for structs used in function declarations */
struct unique_ptr_int_std__default_delete_int__;
struct unique_ptr_int___std__default_delete_int____;

/* Function declarations */
void __gmon_start__(void);
void test_cpp_oo_features(void);
void LifecycleClass_constructor(void);
int DiamondDerived_func(DiamondDerived *_this);
void DiamondDerived__DiamondDerived(DiamondDerived *_this, long *in_RDX, int in_ESI);
void MiddleA__MiddleA(MiddleA *_this);
void MiddleB__MiddleB(MiddleB *_this);
void unique_ptr_int_std__default_delete_int____unique_ptr(struct unique_ptr_int_std__default_delete_int__ *_this);
void unique_ptr_int___std__default_delete_int_____unique_ptr(struct unique_ptr_int___std__default_delete_int____ *_this);
int Base_virtual_func(Base *_this, int param_2);
char * Base_getName(void);
void Base__Base(Base *_this);
int Derived_virtual_func(Derived *_this, int param_2);
char * Derived_getName(void);
unsigned long long MultiDerived_funcA(void);
unsigned long long MultiDerived_funcB(void);
unsigned long long MultiDerived_funcB_this(MultiDerived *param_1);
unsigned long long VirtualBase_func(void);
void VirtualBase__VirtualBase(VirtualBase *_this);
int MiddleA_func(MiddleA *_this);
void MiddleA_func_void(MiddleA *_this);
int MiddleB_func(MiddleB *_this);
void MiddleB_func_void(MiddleB *_this);
int DiamondDerived_func_int(DiamondDerived *_this);
void DiamondDerived_func_void(DiamondDerived *_this);
void DiamondDerived_func_void2(DiamondDerived *_this);
void MiddleA__MiddleA_1(MiddleA *_this);
void MiddleB__MiddleB_1(MiddleB *_this);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *_this);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *_this);
void MultiDerived__MultiDerived(MultiDerived *_this);
void MultiDerived__MultiDerived_1(MultiDerived *_this);
void Derived__Derived(Derived *_this);
void Base__Base_destructor(Base *_this);
void Derived__Derived_destructor(Derived *_this);
void MultiDerived__MultiDerived_destructor(MultiDerived *_this);
void MultiDerived__MultiDerived_adjustor(MultiDerived *_this);
void VirtualBase__VirtualBase_destructor(VirtualBase *_this);
void RTTIDerivedB__RTTIDerivedB_destructor(RTTIDerivedB *_this);
void RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *_this);
void MiddleA__MiddleA_2(MiddleA *_this);
void MiddleA__MiddleA_3(MiddleA *_this);
void MiddleB__MiddleB_2(MiddleB *_this);
void MiddleB__MiddleB_3(MiddleB *_this);
long MiddleA__MiddleA_4(MiddleA *_this, long *in_RDX, int in_ESI);
void MiddleA__MiddleA_5(MiddleA *_this);
void MiddleB__MiddleB_4(MiddleB *_this, long *in_RDX, int in_ESI);
void MiddleB__MiddleB_5(MiddleB *_this);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void Container_int_Constructor(Container_int_ *_this);
void Container_int_push(Container_int_ *_this,int param_1);
unsigned int Container_int_get(Container_int_ *_this,int param_1);
unsigned int Container_int_getSize(Container_int_ *_this);
void Container_double_Constructor(Container_double_ *_this);
void Container_double_push(Container_double_ *_this,double param_1);
unsigned long long Container_double_get(Container_double_ *_this,int param_1);
unsigned int Container_double_getSize(Container_double_ *_this);
void DiamondDerived__DiamondDerived_1(DiamondDerived *_this);
void DiamondDerived__DiamondDerived_2(DiamondDerived *_this);
void DiamondDerived__DiamondDerived_3(DiamondDerived *_this);
void DiamondDerived__DiamondDerived_4(DiamondDerived *_this);
void DiamondDerived__DiamondDerived_5(DiamondDerived *_this);
void DiamondDerived__DiamondDerived_6(DiamondDerived *_this);
void DiamondDerived__DiamondDerived_7(DiamondDerived *_this);
int __libc_start_main(int (*main)(void), unsigned long long argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

/* Type info pointers */
void *PTR__RTTIBase_typeinfo;
void *PTR__RTTIDerivedA_typeinfo;
void *PTR__RTTIDerivedB_typeinfo;
void *PTR_virtual_func_001058a8;
void *PTR_virtual_func_001058d8;

/* Unique ptr type definitions */
struct unique_ptr_int_std__default_delete_int__ {
    void *ptr;
};

struct unique_ptr_int___std__default_delete_int____ {
    void *ptr;
};

// Decompiled by BinaryAI
// SHA256: d9228abe9094275936bc73470b6488ce41f960738b83608d735965ea27aa77b2

// Function: _init @ 0x102000
int _init(void *ctx)
{
 __gmon_start__();
 return 0;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102160
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x102170
int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::operator.new[] @ 0x102180
void * operator_new__(unsigned long param_1)
{
 /* array new - actual implementation omitted */
 return 0;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102190
void __cxa_begin_catch(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x1021a0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1021b0
void *__cxa_allocate_exception(size_t size)
{
 return 0;
}

// Function: <EXTERNAL>::strncpy @ 0x1021c0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1021d0
void __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1021e0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1021f0
void operator_delete(void *param_1,unsigned long param_2)
{
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x102200
void __stack_chk_fail(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x102210
void *__dynamic_cast(const void *src, const void *from, const void *to, int offset)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102220
void operator_delete__(void *param_1)
{
 /* array delete - actual implementation omitted */
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x102230
int strcmp(char *__s1,char *__s2)
{
 while (*__s1 && (*__s1 == *__s2)) {
 __s1++;
 __s2++;
 }
 return *(unsigned char *)__s1 - *(unsigned char *)__s2;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x102240
void __cxa_rethrow(void)
{
 return;
}

// Function: std_ios_base_Init_Init @ 0x102250
void std_ios_base_Init_Init(Init *_this)
{
 /* Constructor body - no-op for this decompiled version */
 return;
}

// Function: <EXTERNAL>::puts @ 0x102260
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102270
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102280
void __cxa_throw(void *exception_obj, void *tinfo, void *dest)
{
 /* throw exception - actual implementation omitted */
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102290
void _Unwind_Resume(void)
{
 return;
}

// Function: test_cpp_exception @ 0x1022a0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo,0);
}

// Function: main @ 0x102367
int main(void)
{
 unsigned long long auVar1;
 unsigned long in_RAX;
 test_cpp_oo_features();
 auVar1 = 0;
 return (int)(auVar1 >> 0x40);
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102375
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)())std_ios_base_Init_Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x1023a0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&auStack_8[0],0,0,param_1,&auStack_8[0]);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1023d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x102400
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102440
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x102489
int test_cpp_member_func(void)
{
 char *__s;
 size_t sVar1;
 long in_FS_OFFSET;
 char local_30 [31];
 char local_11;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __s = strncpy(local_30,"Test",0x1f);
 local_11 = 0;
 sVar1 = strlen(__s);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x1024e3
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1024f5
void * call_virtual_func(Base *param_1,int param_2)
{
 return ((void *(*)(Base *,int))(*((void **)param_1)))(param_1,param_2);
}

// Function: test_cpp_virtual_func @ 0x1024fe
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 void *local_28;
 void *local_20;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 3;
 local_28 = PTR_virtual_func_001058a8;
 local_20 = PTR_virtual_func_001058d8;
 call_virtual_func((Base *)local_28,5);
 call_virtual_func((Base *)local_20,5);
 iVar1 = 0;
 iVar2 = 0;
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + 0x15 + iVar2;
}

// Function: test_cpp_multiple_inheritance @ 0x102571
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x10257b
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x102585
int test_cpp_template_func(void)
{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int_(&local_18,&local_14);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return (int)(intptr_t)dVar2 + iVar1 + local_18 + local_14;
}

// Function: test_cpp_template_class @ 0x102618
int test_cpp_template_class(void)
{
 int iVar1;
 long in_FS_OFFSET;
 struct { int data[13]; } local_3c;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = 1;
 local_3c.data[0] = 10;
 Container_int_push((Container_int_ *)&local_3c,0x14);
 Container_int_push((Container_int_ *)&local_3c,0x1e);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = ((int *)&local_3c)[0];
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_14 + 3 + iVar1;
}

// Function: test_cpp_lambda @ 0x10268d
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x102697
int test_cpp_rtti(void)
{
 long lVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 unsigned long long in_RCX;
 unsigned int uVar7;
 char *__s1;
 unsigned long long auVar8;
 unsigned int uVar8_local;
 uVar8_local = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_typeinfo;
 plVar4 = (long *)operator_new(8);
 lVar1 = (long)PTR__RTTIDerivedA_typeinfo;
 *plVar4 = (long)&PTR__RTTIDerivedB_typeinfo;
 __s1 = *(char **)(void *)PTR__RTTIDerivedA_typeinfo;
 if ((__s1 != "12RTTIDerivedA") && (uVar8_local = 0, __s1[0] != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar8_local = -(unsigned int)(iVar2 == 0) & 10;
 }
 iVar2 = uVar8_local + 0x14;
 lVar5 = (long)__dynamic_cast(plVar3,PTR__RTTIBase_typeinfo,PTR__RTTIDerivedA_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = uVar8_local + 0x78;
 }
 lVar5 = (long)__dynamic_cast(plVar4,PTR__RTTIBase_typeinfo,PTR__RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (*(void (**)(void))((char *)lVar1 + 8))();
 (*(void (**)(void))((char *)*plVar4 + 8))();
 auVar8 = 0;
 auVar8 = (iVar2 + (int)sVar6) & 0xFFFFFFFF;
 return (int)auVar8;
}

// Function: test_cpp_smart_ptr @ 0x1027ac
unsigned long long test_cpp_smart_ptr(void)
{
 long in_FS_OFFSET;
 unsigned long long local_38;
 unsigned int *local_30;
 unsigned long long *local_28;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = (unsigned int *)operator_new(4);
 local_38 = 0;
 *local_30 = 200;
 local_28 = (unsigned long long *)(void *)operator_new__(0x14);
 *local_28 = 0x200000001;
 *(unsigned long long *)((char *)local_28 + 8) = 0x400000003;
 *(unsigned int *)(local_28 + 2) = 5;
 /* unique_ptr destructor calls - skipped for compilation */
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x10287c
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned long long local_50 [2];
 unsigned long long local_40;
 unsigned long long local_30;
 unsigned int local_28;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = 0x32;
 local_50[0] = 0x105b08;
 local_30 = 0x105b70;
 local_40 = 0x105b38;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_30);
 local_28 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_30);
 DiamondDerived__DiamondDerived((DiamondDerived *)local_50, 0, 1);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x10290d
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 puts(DAT_00103016);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303a,uVar1);
 test_cpp_constructor();
 __printf_chk(1,"%s","");
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103074,uVar1);
 test_cpp_multiple_inheritance();
 __printf_chk(1,"%s","");
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ac,uVar1);
 test_cpp_operator_overload();
 __printf_chk(1,"%s","");
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e5,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,DAT_00103101,uVar1);
 test_cpp_lambda();
 __printf_chk(1,"%s","");
 uVar1 = test_cpp_exception();
 __printf_chk(1,DAT_00103139,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103156,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103173,uVar1);
 return;
}

// Function: Base::virtual_func @ 0x102a58
int Base_virtual_func(Base *_this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x102a60
char * Base_getName(void)
{
 return (char *)&DAT_00103004;
}

// Function: Base::~Base @ 0x102a6c
void Base__Base(Base *_this)
{
 return;
}

// Function: Derived::virtual_func @ 0x102a72
int Derived_virtual_func(Derived *_this,int param_1)
{
 return *(int *)(_this + 8) * param_1;
}

// Function: Derived::getName @ 0x102a7e
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x102a8a
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x102a94
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x102a9e
unsigned long long MultiDerived_funcB(MultiDerived *_this)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x102aa8
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102ab2
void VirtualBase__VirtualBase(VirtualBase *_this)
{
 return;
}

// Function: MiddleA::func @ 0x102ab8
int MiddleA_func(MiddleA *_this)
{
 return *(int *)(_this + *(long *)(*(long *)_this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x102acd
void MiddleA_func_void(MiddleA *_this)
{
 MiddleA_func((MiddleA *)(_this + *(long *)(*(long *)_this + -0x18)));
 return;
}

// Function: MiddleB::func @ 0x102ada
int MiddleB_func(MiddleB *_this)
{
 return *(int *)(_this + *(long *)(*(long *)_this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x102aef
void MiddleB_func_void(MiddleB *_this)
{
 MiddleB_func((MiddleB *)(_this + *(long *)(*(long *)_this + -0x18)));
 return;
}

// Function: DiamondDerived::func @ 0x102afc
int DiamondDerived_func_int(DiamondDerived *_this)
{
 return *(int *)(_this + *(long *)(*(long *)_this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102b11
void DiamondDerived_func_void(DiamondDerived *_this)
{
 DiamondDerived_func_int((DiamondDerived *)(_this + *(long *)(*(long *)_this + -0x18)));
 return;
}

// Function: DiamondDerived::func @ 0x102b1e
void DiamondDerived_func_void2(DiamondDerived *_this)
{
 DiamondDerived_func_int(_this + -0x10);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102b28
void MiddleA__MiddleA(MiddleA *_this)
{
 *(unsigned long long *)_this = 0x105920;
 *(unsigned long long *)(_this + 0x10) = 0x105958;
 return;
}

// Function: MiddleA::~MiddleA @ 0x102b3f
void MiddleA__MiddleA_1(MiddleA *_this)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)_this + -0x20);
 *(unsigned long long *)(_this + lVar1) = 0x105920;
 *(unsigned long long *)((long)(_this + lVar1) + 0x10) = 0x105958;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102b5e
void MiddleB__MiddleB(MiddleB *_this)
{
 *(unsigned long long *)_this = 0x105998;
 *(unsigned long long *)(_this + 0x10) = 0x1059d0;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102b75
void MiddleB__MiddleB_1(MiddleB *_this)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)_this + -0x20);
 *(unsigned long long *)(_this + lVar1) = 0x105998;
 *(unsigned long long *)((long)(_this + lVar1) + 0x10) = 0x1059d0;
 return;
}

// Function: RTTIDerivedA::getType @ 0x102b94
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x102b9e
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102ba8
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *_this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102bae
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb4
void MultiDerived__MultiDerived(MultiDerived *_this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb9
void MultiDerived__MultiDerived_1(MultiDerived *_this)
{
 return;
}

// Function: Derived::~Derived @ 0x102bbe
void Derived__Derived(Derived *_this)
{
 return;
}

// Function: Base::~Base @ 0x102bc4
void Base__Base_destructor(Base *_this)
{
 operator_delete(_this,8);
 return;
}

// Function: Derived::~Derived @ 0x102bd2
void Derived__Derived_destructor(Derived *_this)
{
 operator_delete(_this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102be0
void MultiDerived__MultiDerived_destructor(MultiDerived *_this)
{
 operator_delete(_this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bee
void MultiDerived__MultiDerived_adjustor(MultiDerived *_this)
{
 MultiDerived__MultiDerived_destructor(_this + -0x10);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102bf8
void VirtualBase__VirtualBase_destructor(VirtualBase *_this)
{
 operator_delete(_this,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102c06
void RTTIDerivedB__RTTIDerivedB_destructor(RTTIDerivedB *_this)
{
 operator_delete(_this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102c14
void RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *_this)
{
 operator_delete(_this,8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c22
void MiddleA__MiddleA_2(MiddleA *_this)
{
 *(unsigned long long *)_this = 0x105920;
 *(unsigned long long *)(_this + 0x10) = 0x105958;
 operator_delete(_this,0x20);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c42
void MiddleA__MiddleA_3(MiddleA *_this)
{
 MiddleA__MiddleA((MiddleA *)(_this + *(long *)(*(long *)_this + -0x20)));
 return;
}

// Function: MiddleB::~MiddleB @ 0x102c50
void MiddleB__MiddleB_2(MiddleB *_this)
{
 *(unsigned long long *)_this = 0x105998;
 *(unsigned long long *)(_this + 0x10) = 0x1059d0;
 operator_delete(_this,0x20);
 return;
}

// Function: MiddleB::~MiddleB @ 0x102c70
void MiddleB__MiddleB_3(MiddleB *_this)
{
 MiddleB__MiddleB((MiddleB *)(_this + *(long *)(*(long *)_this + -0x20)));
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c7e
long MiddleA__MiddleA_4(MiddleA *_this, long *in_RDX, int in_ESI)
{
 long lVar1;
 long lVar2;
 long lVar3;
 lVar1 = 0x105920;
 if (in_ESI == 0) {
 lVar1 = *in_RDX;
 }
 *(long *)_this = lVar1;
 lVar3 = 0x105958;
 lVar2 = 0x10;
 if (in_ESI == 0) {
 lVar3 = in_RDX[1];
 lVar2 = *(long *)(lVar1 + -0x18);
 }
 *(long *)(_this + lVar2) = lVar3;
 return lVar1;
}

// Function: MiddleA::~MiddleA @ 0x102cb0
void MiddleA__MiddleA_5(MiddleA *_this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x102cbe
void MiddleB__MiddleB_4(MiddleB *_this, long *in_RDX, int in_ESI)
{
 long lVar1;
 long lVar2;
 long lVar3;
 lVar1 = 0x105998;
 if (in_ESI == 0) {
 lVar1 = *in_RDX;
 }
 *(long *)_this = lVar1;
 lVar3 = 0x1059d0;
 lVar2 = 0x10;
 if (in_ESI == 0) {
 lVar3 = in_RDX[1];
 lVar2 = *(long *)(lVar1 + -0x18);
 }
 *(long *)(_this + lVar2) = lVar3;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102cf0
void MiddleB__MiddleB_5(MiddleB *_this)
{
 return;
}

// Function: template_max<int> @ 0x102cfe
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x102d0a
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102d13
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Constructor @ 0x102d20
void Container_int_Constructor(Container_int_ *_this)
{
 *(unsigned int *)(_this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x102d2c
void Container_int_push(Container_int_ *_this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)_this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)_this + 0x28) = iVar1 + 1;
 *(int *)((char *)_this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x102d44
unsigned int Container_int_get(Container_int_ *_this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(_this + 0x28) != param_1 && param_1 <= *(int *)(_this + 0x28))) {
 uVar1 = *(unsigned int *)(_this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x102d5a
unsigned int Container_int_getSize(Container_int_ *_this)
{
 return *(unsigned int *)(_this + 0x28);
}

// Function: Container<double>::Constructor @ 0x102d62
void Container_double_Constructor(Container_double_ *_this)
{
 *(unsigned int *)(_this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102d6e
void Container_double_push(Container_double_ *_this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(_this + 0x50);
 if (iVar1 < 10) {
 *(int *)(_this + 0x50) = iVar1 + 1;
 *(double *)(_this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x102d88
unsigned long long Container_double_get(Container_double_ *_this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(_this + 0x50) != param_1 && param_1 <= *(int *)(_this + 0x50))) {
 uVar1 = *(unsigned long long *)(_this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102da2
unsigned int Container_double_getSize(Container_double_ *_this)
{
 return *(unsigned int *)(_this + 0x50);
}

// Function: unique_ptr_int_std__default_delete_int_____unique_ptr @ 0x102daa
void
unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *_this)
{
 if (*(void **)_this != (void *)0x0) {
 operator_delete(*(void **)_this,4);
 }
 return;
}

// Function: unique_ptr_int___std__default_delete_int_____unique_ptr @ 0x102dc2
void
unique_ptr_int___std__default_delete_int_____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *_this)
{
 void *pvVar1;
 pvVar1 = *(void **)_this;
 *(void **)_this = (void *)0x0;
 if (pvVar1 != (void *)0x0) {
 operator_delete__(pvVar1);
 pvVar1 = (void *)0x0;
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102dd4
void DiamondDerived__DiamondDerived(DiamondDerived *_this, long *in_RDX, int in_ESI)
{
 long lVar1;
 long lVar2;
 long lVar3;
 lVar1 = 0x105b08;
 if (in_ESI == 0) {
 lVar1 = *in_RDX;
 }
 *(long *)_this = lVar1;
 lVar2 = 0x105b70;
 lVar3 = 0x20;
 if (in_ESI == 0) {
 lVar2 = in_RDX[5];
 lVar3 = *(long *)(lVar1 + -0x18);
 }
 *(long *)(_this + lVar3) = lVar2;
 lVar1 = 0x105b38;
 if (in_ESI == 0) {
 lVar1 = in_RDX[6];
 }
 *(long *)(_this + 0x10) = lVar1;
 MiddleB__MiddleB((MiddleB *)(_this + 0x10));
 MiddleA__MiddleA((MiddleA *)_this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e5e
void DiamondDerived__DiamondDerived_1(DiamondDerived *_this)
{
 long _in_RDX[] = {0};
 DiamondDerived__DiamondDerived(_this, _in_RDX, 1);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e6e
void DiamondDerived__DiamondDerived_2(DiamondDerived *_this)
{
 long _in_RDX[] = {0};
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)_this - 0x10), _in_RDX, 1);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e78
void DiamondDerived__DiamondDerived_3(DiamondDerived *_this)
{
 long _in_RDX[] = {0};
 DiamondDerived__DiamondDerived((DiamondDerived *)(_this + *(long *)(*(long *)_this + -0x20)), _in_RDX, 1);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e86
void DiamondDerived__DiamondDerived_4(DiamondDerived *_this)
{
 long _in_RDX[] = {0};
 DiamondDerived__DiamondDerived(_this, _in_RDX, 1);
 operator_delete(_this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eab
void DiamondDerived__DiamondDerived_5(DiamondDerived *_this)
{
 long _in_RDX[] = {0};
 DiamondDerived__DiamondDerived(_this + -0x10, _in_RDX, 1);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eb5
void DiamondDerived__DiamondDerived_6(DiamondDerived *_this)
{
 long _in_RDX[] = {0};
 DiamondDerived__DiamondDerived((DiamondDerived *)(_this + *(long *)(*(long *)_this + -0x20)), _in_RDX, 1);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ec2
void DiamondDerived__DiamondDerived_7(DiamondDerived *_this)
{
 long _in_RDX[] = {0};
 DiamondDerived__DiamondDerived(_this, _in_RDX, 1);
 return;
}

// Function: _fini @ 0x102ed0
void _fini(void)
{
 return;
}

