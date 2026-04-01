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
// SHA256: d9228abe9094275936bc73470b6488ce41f960738b83608d735965ea27aa77b2

// Missing type definitions
typedef struct LifecycleClass {
    int instance_count;
} LifecycleClass;

typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

struct Base {
    void *vtable;
};

struct Derived {
    void *vtable;
    int value;
};

struct MultiDerived {
    void *vtable;
    int a;
    int b;
};

struct VirtualBase {
    void *vtable;
    int value;
};

struct MiddleA {
    void *vtable;
    int value;
    void *ptr;
};

struct MiddleB {
    void *vtable;
    int value;
    void *ptr;
};

struct DiamondDerived {
    void *vtable;
    int value;
    MiddleA middle_a;
    MiddleB middle_b;
};

struct RTTIBase {
    void *vtable;
};

struct RTTIDerivedA {
    RTTIBase base;
};

struct RTTIDerivedB {
    RTTIBase base;
};

typedef struct Container_int {
    int data[10];
    int size;
} Container_int;

typedef struct Container_double {
    double data[10];
    int size;
} Container_double;

typedef struct unique_ptr_int_std__default_delete_int__ {
    void *ptr;
} unique_ptr_int_std__default_delete_int__;

typedef struct unique_ptr_int___std__default_delete_int____ {
    void *ptr;
} unique_ptr_int___std__default_delete_int____;

// External declarations for runtime type info
extern void *typeinfo_int;
extern void *typeinfo_RTTIBase;
extern void *typeinfo_RTTIDerivedA;
extern void *typeinfo_RTTIDerivedB;

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102160
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x102170
int __printf_chk(int flag, char *format, ...)
{
 return printf(format);
}

// Function: <EXTERNAL>::operator.new[] @ 0x102180
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102190
void * __cxa_begin_catch(void)
{
 void *result = __cxa_begin_catch();
 return result;
}

// Function: <EXTERNAL>::strlen @ 0x1021a0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1021b0
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x1021c0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1021d0
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1021e0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
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
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x102210
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102220
void operator_delete_arr(void *param_1)
{
 operator_delete(param_1, 0);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x102230
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x102240
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x102250
void std::ios_base::Init::Init(Init *this)
{
 Init(this);
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
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102280
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102290
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: test_cpp_exception @ 0x1022a0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,typeinfo_int,0);
}

// Function: main @ 0x102367
int main(void)
{
 char auVar1 [16];
 unsigned long in_RAX;
 test_cpp_oo_features();
 auVar1._8_8_ = 0;
 auVar1._0_8_ = in_RAX;
 return auVar1 << 0x40;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102375
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x1023a0
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
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
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x1024fe
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 char **local_28;
 char **local_20;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 3;
 local_28 = &PTR_virtual_func_001058a8;
 local_20 = &PTR_virtual_func_001058d8;
 iVar1 = call_virtual_func((Base *)&local_28,5);
 iVar2 = call_virtual_func((Base *)&local_20,5);
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

// Forward declarations for template functions
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int *, int *);

// Forward declarations for Container class methods
void Container_int_Container(Container_int *);
void Container_int_push(Container_int *, int);
unsigned int Container_int_get(Container_int *, int);
unsigned int Container_int_getSize(Container_int *);

void Container_double_Container(Container_double *);
void Container_double_push(Container_double *, double);
unsigned long long Container_double_get(Container_double *, int);
unsigned int Container_double_getSize(Container_double *);

// Forward declarations for test functions
void test_cpp_oo_features(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1, int param_2);
int test_cpp_virtual_func(void);
unsigned long long test_cpp_multiple_inheritance(void);
unsigned long long test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
unsigned long long test_cpp_lambda(void);
unsigned long long test_cpp_exception(void);
unsigned long long test_cpp_smart_ptr(void);
int test_cpp_diamond_inheritance(void);
unsigned long long test_cpp_rtti(void);

// Forward declarations for class member functions
int Base_virtual_func(Base *, int);
char * Base_getName(void);
void Base__Base(Base *);
int Derived_virtual_func(Derived *, int);
char * Derived_getName(void);
void Derived__Derived(Derived *);
unsigned long long MultiDerived_funcA(void);
unsigned long long MultiDerived_funcB(MultiDerived *);
unsigned long long VirtualBase_func(void);
void VirtualBase__VirtualBase(VirtualBase *);
int MiddleA_func(MiddleA *);
void MiddleA_func_void(MiddleA *);
int MiddleB_func(MiddleB *);
void MiddleB_func_void(MiddleB *);
int DiamondDerived_func(DiamondDerived *);
void DiamondDerived_func_void(DiamondDerived *);
void MiddleA__MiddleA(MiddleA *);
void MiddleB__MiddleB(MiddleB *);
unsigned long long RTTIDerivedA_getType(void);
unsigned long long RTTIDerivedB_getType(void);
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *);
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *);
void MultiDerived__MultiDerived(MultiDerived *);
void VirtualBase__VirtualBase_d(VirtualBase *);
void RTTIDerivedB__RTTIDerivedB_d(RTTIDerivedB *);
void RTTIDerivedA__RTTIDerivedA_d(RTTIDerivedA *);
void std_unique_ptr_int_std__default_delete_int___unique_ptr(unique_ptr_int_std__default_delete_int__ *);
void std_unique_ptr_int___std__default_delete_int_____unique_ptr(unique_ptr_int___std__default_delete_int____ *);
void DiamondDerived__DiamondDerived(DiamondDerived *);

// Additional destructor declarations
void MiddleA_Destroy(MiddleA *);
void MiddleB_Destroy(MiddleB *);
void DiamondDerived_Destroy(DiamondDerived *);

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
 return (int)dVar2 + iVar1 + local_18 + local_14;
}

// Function: test_cpp_template_class @ 0x102618
int test_cpp_template_class(void)
{
 int iVar1;
 long in_FS_OFFSET;
 Container_int local_3c;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = 1;
 local_3c.size = 0;
 Container_int_push(&local_3c,0x14);
 Container_int_push(&local_3c,0x1e);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c.data[0];
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
char * test_cpp_rtti(void)
{
 long lVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 unsigned long long in_RCX;
 uint uVar7;
 char *__s1;
 char auVar8 [16];
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105b98;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc0;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 iVar2 = uVar7 + 0x14;
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(void **)(lVar1 + 8))(plVar3);
 (**(void **)(*plVar4 + 8))(plVar4);
 auVar8._4_4_ = 0;
 auVar8._0_4_ = iVar2 + (int)sVar6;
 auVar8._8_8_ = in_RCX;
 return auVar8;
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
 local_28 = (unsigned long long *)operator_new__(0x14);
 *local_28 = 0x200000001;
 local_28[1] = 0x400000003;
 *(unsigned int *)(local_28 + 2) = 5;
 std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)&local_28);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_30);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_38);
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
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_30);
 local_28 = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&local_30);
 DiamondDerived::_DiamondDerived((DiamondDerived *)local_50);
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
 puts(&DAT_00103016);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0010303a,uVar1);
 test_cpp_constructor();
 puts("Test C++ constructor");
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00103074,uVar1);
 test_cpp_multiple_inheritance();
 puts("Test C++ multiple inheritance");
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_001030ac,uVar1);
 test_cpp_operator_overload();
 puts("Test C++ operator overload");
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_001030e5,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00103101,uVar1);
 test_cpp_lambda();
 puts("Test C++ lambda");
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00103139,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00103156,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00103173,uVar1,in_RAX);
 return;
}

// Function: Base::virtual_func @ 0x102a58
int Base_virtual_func(Base *param_1,int param_2)
{
 return param_2 + 1;
}

// Function: Base::getName @ 0x102a60
char * Base::getName(void)
{
 return &DAT_00103004;
}

// Function: Base::~Base @ 0x102a6c
void Base__Base(Base *param_1)
{
 return;
}

// Function: Derived::virtual_func @ 0x102a72
int Derived_virtual_func(Derived *param_1,int param_2)
{
 return *(int *)(param_1 + 8) * param_2;
}

// Function: Derived::getName @ 0x102a7e
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x102a8a
unsigned long long MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x102a94
unsigned long long MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x102a9e
unsigned long long MultiDerived_funcB(MultiDerived *param_1)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x102aa8
unsigned long long VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102ab2
void VirtualBase::_VirtualBase(VirtualBase *param_1)
{
 return;
}

// Function: MiddleA::func @ 0x102ab8
int MiddleA_func(MiddleA *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x102acd
void MiddleA_func_void(MiddleA *param_1)
{
 MiddleA_func_void(param_1 + *(long *)(*(long *)param_1 + -0x18));
 return;
}

// Function: MiddleB::func @ 0x102ada
int MiddleB_func(MiddleB *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x102aef
void MiddleB_func_void(MiddleB *param_1)
{
 MiddleB_func_void(param_1 + *(long *)(*(long *)param_1 + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x102afc
int DiamondDerived_func(DiamondDerived *param_1)
{
 return *(int *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102b11
void DiamondDerived_func_void(DiamondDerived *param_1)
{
 DiamondDerived_func_void(param_1 + *(long *)(*(long *)param_1 + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x102b1e
void DiamondDerived_func_void2(DiamondDerived *param_1)
{
 DiamondDerived_func_void2(param_1 + -0x10);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102b28
void MiddleA_Destroy(MiddleA *param_1)
{
 *(unsigned long long *)param_1 = 0x105920;
 *(unsigned long long *)(param_1 + 0x10) = 0x105958;
 return;
}

// Function: MiddleA::~MiddleA @ 0x102b3f
void MiddleA::__MiddleA(MiddleA *param_1)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)param_1 + -0x20);
 *(unsigned long long *)(param_1 + lVar1) = 0x105920;
 *(unsigned long long *)((long)(param_1 + lVar1) + 0x10) = 0x105958;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102b5e
void MiddleB__MiddleB(MiddleB *param_1)
{
 *(unsigned long long *)param_1 = 0x105998;
 *(unsigned long long *)(param_1 + 0x10) = 0x1059d0;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102b75
void MiddleB__MiddleB(MiddleB *param_1)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)param_1 + -0x20);
 *(unsigned long long *)(param_1 + lVar1) = 0x105998;
 *(unsigned long long *)((long)(param_1 + lVar1) + 0x10) = 0x1059d0;
 return;
}

// Function: RTTIDerivedA::getType @ 0x102b94
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x102b9e
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102ba8
void RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *param_1)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102bae
void RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *param_1)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb4
void MultiDerived::_MultiDerived(MultiDerived *param_1)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb9
void MultiDerived::_MultiDerived(MultiDerived *param_1)
{
 return;
}

// Function: Derived::~Derived @ 0x102bbe
void Derived::_Derived(Derived *param_1)
{
 return;
}

// Function: Base::~Base @ 0x102bc4
void Base::_Base(Base *param_1)
{
 operator_delete(param_1,8);
 return;
}

// Function: Derived::~Derived @ 0x102bd2
void Derived::_Derived(Derived *param_1)
{
 operator_delete(param_1,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102be0
void MultiDerived::_MultiDerived(MultiDerived *param_1)
{
 operator_delete(param_1,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bee
void MultiDerived::_MultiDerived(MultiDerived *param_1)
{
 _MultiDerived(param_1 + -0x10);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102bf8
void VirtualBase_d(VirtualBase *param_1)
{
 operator_delete(param_1,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102c06
void RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *param_1)
{
 operator_delete(param_1,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102c14
void RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *param_1)
{
 operator_delete(param_1,8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c22
void MiddleA::_MiddleA(MiddleA *param_1)
{
 *(unsigned long long *)param_1 = 0x105920;
 *(unsigned long long *)(param_1 + 0x10) = 0x105958;
 operator_delete(param_1,0x20);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c42
void MiddleA::_MiddleA(MiddleA *param_1)
{
 _MiddleA(param_1 + *(long *)(*(long *)param_1 + -0x20));
 return;
}

// Function: MiddleB::~MiddleB @ 0x102c50
void MiddleB::_MiddleB(MiddleB *param_1)
{
 *(unsigned long long *)param_1 = 0x105998;
 *(unsigned long long *)(param_1 + 0x10) = 0x1059d0;
 operator_delete(param_1,0x20);
 return;
}

// Function: MiddleB::~MiddleB @ 0x102c70
void MiddleB::_MiddleB(MiddleB *param_1)
{
 _MiddleB(param_1 + *(long *)(*(long *)param_1 + -0x20));
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c7e
void MiddleA::_MiddleA(MiddleA *param_1)
{
 long lVar1;
 long lVar2;
 long *in_RDX;
 int in_ESI;
 long lVar3;
 lVar1 = 0x105920;
 if (in_ESI == 0) {
 lVar1 = *in_RDX;
 }
 *(long *)param_1 = lVar1;
 lVar3 = 0x105958;
 lVar2 = 0x10;
 if (in_ESI == 0) {
 lVar3 = in_RDX[1];
 lVar2 = *(long *)(lVar1 + -0x18);
 }
 *(long *)(param_1 + lVar2) = lVar3;
 return;
}

// Function: MiddleA::~MiddleA @ 0x102cb0
void MiddleA::_MiddleA(MiddleA *param_1)
{
 _MiddleA(param_1);
 return;
}

// Function: MiddleB::~MiddleB @ 0x102cbe
void MiddleB::_MiddleB(MiddleB *param_1)
{
 long lVar1;
 long lVar2;
 long *in_RDX;
 int in_ESI;
 long lVar3;
 lVar1 = 0x105998;
 if (in_ESI == 0) {
 lVar1 = *in_RDX;
 }
 *(long *)param_1 = lVar1;
 lVar3 = 0x1059d0;
 lVar2 = 0x10;
 if (in_ESI == 0) {
 lVar3 = in_RDX[1];
 lVar2 = *(long *)(lVar1 + -0x18);
 }
 *(long *)(param_1 + lVar2) = lVar3;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102cf0
void MiddleB::_MiddleB(MiddleB *param_1)
{
 _MiddleB(param_1);
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

// Function: Container<int>::Container @ 0x102d20
void Container_int__Container(Container_int *param_1)
{
 *(unsigned int *)(param_1 + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x102d2c
void Container_int_push(Container_int *param_1,int param_2)
{
 int iVar1;
 iVar1 = *(int *)(param_1 + 0x28);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x28) = iVar1 + 1;
 *(int *)(param_1 + (long)iVar1 * 4) = param_2;
 }
 return;
}

// Function: Container<int>::get @ 0x102d44
int Container_int_get(Container_int *param_1, int param_2)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_2) && (*(int *)(param_1 + 0x28) != param_2 && param_2 <= *(int *)(param_1 + 0x28))) {
 uVar1 = *(unsigned int *)(param_1 + (long)param_2 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x102d5a
unsigned int Container_int_getSize(Container_int *param_1)
{
 return *(unsigned int *)(param_1 + 0x28);
}

// Function: Container<double>::Container @ 0x102d62
void Container_double_Container(Container_double *param_1)
{
 *(unsigned int *)(param_1 + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102d6e
void Container_double_push(Container_double *param_1, double param_2)
{
 int iVar1;
 iVar1 = *(int *)(param_1 + 0x50);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x50) = iVar1 + 1;
 *(double *)(param_1 + (long)iVar1 * 8) = param_2;
 }
 return;
}

// Function: Container<double>::get @ 0x102d88
unsigned long long Container_double_get(Container_double *param_1, int param_2)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_2) && (*(int *)(param_1 + 0x50) != param_2 && param_2 <= *(int *)(param_1 + 0x50))) {
 uVar1 = *(unsigned long long *)(param_1 + (long)param_2 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102da2
unsigned int Container_double_getSize(Container_double *param_1)
{
 return *(unsigned int *)(param_1 + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x102daa
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete(*(void **)this,4);
 return;
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x102dc2
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 return;
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102dd4
void DiamondDerived_Destroy(DiamondDerived *param_1)
{
 long lVar1;
 long lVar2;
 long *in_RDX;
 long lVar3;
 int in_ESI;
 lVar1 = 0x105b08;
 if (in_ESI == 0) {
 lVar1 = *in_RDX;
 }
 *(long *)param_1 = lVar1;
 lVar2 = 0x105b70;
 lVar3 = 0x20;
 if (in_ESI == 0) {
 lVar2 = in_RDX[5];
 lVar3 = *(long *)(lVar1 + -0x18);
 }
 *(long *)(param_1 + lVar3) = lVar2;
 lVar1 = 0x105b38;
 if (in_ESI == 0) {
 lVar1 = in_RDX[6];
 }
 *(long *)(param_1 + 0x10) = lVar1;
 MiddleB::_MiddleB((MiddleB *)(param_1 + 0x10));
 MiddleA::_MiddleA((MiddleA *)param_1);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e5e
void DiamondDerived_Destroy2(DiamondDerived *param_1)
{
 DiamondDerived_Destroy(param_1);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e6e
void DiamondDerived_Destroy3(DiamondDerived *param_1)
{
 DiamondDerived_Destroy(param_1 + -0x10);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e78
void DiamondDerived_Destroy4(DiamondDerived *param_1)
{
 DiamondDerived_Destroy(param_1 + *(long *)(*(long *)param_1 + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e86
void DiamondDerived_Destroy5(DiamondDerived *param_1)
{
 DiamondDerived_Destroy(param_1);
 operator_delete(param_1,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eab
void DiamondDerived_Destroy6(DiamondDerived *param_1)
{
 DiamondDerived_Destroy(param_1 + -0x10);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eb5
void DiamondDerived_Destroy7(DiamondDerived *param_1)
{
 DiamondDerived_Destroy(param_1 + *(long *)(*(long *)param_1 + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ec2
void DiamondDerived_Destroy8(DiamondDerived *param_1)
{
 DiamondDerived_Destroy(param_1);
 return;
}

// Function: _fini @ 0x102ed0
void _fini(void)
{
 return;
}

