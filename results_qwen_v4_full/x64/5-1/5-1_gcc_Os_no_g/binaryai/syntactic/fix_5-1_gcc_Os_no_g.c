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
typedef unsigned int uint;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct LifecycleClass {
 int instance_count;
} LifecycleClass;
typedef struct RTTIBase RTTIBase;
typedef struct Init {
 int _dummy;
} Init;
extern Init std____ioinit;
/* Global variables */
extern int __dso_handle;
extern int completed_0;
extern Init std____ioinit;
extern int LifecycleClass_instance_count;
extern void *PTR_virtual_func_001058a8;
extern void *PTR_virtual_func_001058d8;
extern void *PTR__RTTIDerivedA_00105b98;
extern void *PTR__RTTIDerivedB_00105bc0;
extern LifecycleClass LifecycleClass_instance;
typedef struct Base {
 void *vtable;
} Base;
typedef struct Derived {
 int _dummy;
} Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;

// Decompiled by BinaryAI
// SHA256: d9228abe9094275936bc73470b6488ce41f960738b83608d735965ea27aa77b2

// Function: _init @ 0x102000
extern int __gmon_start__(void);
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
void __cxa_finalize(void *param_1)
{
 ((void (*)(void *))__cxa_finalize)(param_1);
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x102170
int __printf_chk(int param_1, char *param_2, ...)
{
 return __printf_chk(param_1, param_2);
}

// Function: <EXTERNAL>::operator.new[] @ 0x102180
void * operator_new_array(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new_array(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102190
void *__cxa_begin_catch(void *param_1)
{
 return ((void *(*)(void *))__cxa_begin_catch)(param_1);
}

// Function: <EXTERNAL>::strlen @ 0x1021a0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1021b0
void *__cxa_allocate_exception(unsigned long param_1)
{
 return __cxa_allocate_exception(param_1);
}

// Function: <EXTERNAL>::strncpy @ 0x1021c0
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1021d0
int __cxa_atexit(void (*param_1)(void), void *param_2, void *param_3)
{
 return __cxa_atexit(param_1, param_2, param_3);
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
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x102200
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x102210
void *__dynamic_cast(void *param_1, void *param_2, void *param_3, void *param_4)
{
 return ((void *(*)(void *, void *, void *, void *))__dynamic_cast)(param_1, param_2, param_3, param_4);
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102220
void operator_delete_array(void *param_1)
{
 operator_delete_array(param_1);
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
void std_ios_base_Init_Init(Init *this_ptr)
{
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
void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
 ((void (*)(void *, void *, void *))__cxa_throw)(param_1, param_2, param_3);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102290
void _Unwind_Resume(void *param_1)
{
 ((void (*)(void *))_Unwind_Resume)(param_1);
}

// Function: test_cpp_exception @ 0x1022a0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 ((void (*)(void *, void *, void *))__cxa_throw)(puVar1,(void *)0,(void *)0);
}

// Forward declaration
void test_cpp_oo_features(void);

// Function: main @ 0x102367
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102375
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std____ioinit);
 __cxa_atexit((void (*)(void))std_ios_base_Init_Init,&std____ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x1023a0
extern int __libc_start_main(int (*main)(void), int argc, void *argv, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,(int)param_2,auStack_8,0,0,(void *)param_1,auStack_8);
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
 return LifecycleClass_instance.instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1024f5
void call_virtual_func(Base *param_1)
{
 ((void (*)(void))(*(void **)param_1))();
 return;
}

// Function: test_cpp_virtual_func @ 0x1024fe
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 Base *local_28;
 Base *local_20;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 3;
 local_28 = (Base *)PTR_virtual_func_001058a8;
 local_20 = (Base *)PTR_virtual_func_001058d8;
 call_virtual_func(local_28);
 call_virtual_func(local_20);
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

// Forward declarations for template functions
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);
void Container_int__push(void);

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
 int local_3c [10];
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_14 = 1;
 local_3c[0] = 10;
 Container_int__push();
 Container_int__push();
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c[0];
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
unsigned long long test_cpp_rtti(void)
{
 void *lVar1;
 int iVar2;
 void **plVar3;
 void **plVar4;
 long lVar5;
 size_t sVar6;
 unsigned long long in_RCX;
 uint uVar7;
 char *__s1;
 unsigned long long auVar8;
 uVar7 = 10;
 plVar3 = (void **)operator_new(8);
 *plVar3 = PTR__RTTIDerivedA_00105b98;
 plVar4 = (void **)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = PTR__RTTIDerivedB_00105bc0;
 __s1 = *(char **)((long)lVar1 + (-8 + 8));
 if ((__s1 != (char *)"12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 iVar2 = uVar7 + 0x14;
 lVar5 = (long)__dynamic_cast((void *)plVar3,(void *)0,(void *)0,(void *)0);
 if (lVar5 != 0) {
  iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast((void *)plVar4,(void *)0,(void *)0,(void *)0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 ((void (*)(void *))(*(long *)((long)lVar1 + 8)))(plVar3);
 ((void (*)(void *))(*(long *)(*plVar4 + 8)))(plVar4);
 auVar8 = (unsigned long long)(iVar2 + (int)sVar6);
 return auVar8;
}

// Forward declarations for smart pointer functions
void std__unique_ptr_int____std__default_delete_int_____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_ptr);
void std__unique_ptr_int_std__default_delete_int__unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_ptr);

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
 local_28 = (unsigned long long *)operator_new_array(0x14);
 *local_28 = 0x200000001;
 local_28[1] = 0x400000003;
 *(unsigned int *)(local_28 + 2) = 5;
  std__unique_ptr_int____std__default_delete_int_____unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)local_28);
 std__unique_ptr_int_std__default_delete_int__unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)local_30);
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0x2bf;
}

// Forward declaration
int DiamondDerived_func(void);
void DiamondDerived__DiamondDerived(void);

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
 iVar1 = DiamondDerived_func();
 local_28 = 100;
 iVar2 = DiamondDerived_func();
 DiamondDerived__DiamondDerived();
 if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Forward declaration
void test_cpp_oo_features(void);

// Function: test_cpp_oo_features @ 0x10290d
extern char DAT_00103016[];
extern char DAT_0010303a[];
extern char DAT_0010305a[];
extern char DAT_00103074[];
extern char DAT_00103090[];
extern char DAT_001030ac[];
extern char DAT_001030c8[];
extern char DAT_001030e5[];
extern char DAT_00103101[];
extern char DAT_0010311e[];
extern char DAT_00103139[];
extern char DAT_00103156[];
extern char DAT_00103173[];
extern char DAT_00103004[];
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 puts(DAT_00103016);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303a,uVar1);
 test_cpp_constructor();
 __printf_chk(1,DAT_0010305a);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103074,uVar1);
 test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00103090);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ac,uVar1);
 test_cpp_operator_overload();
 __printf_chk(1,DAT_001030c8);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e5,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,DAT_00103101,uVar1);
 test_cpp_lambda();
 __printf_chk(1,DAT_0010311e);
 test_cpp_exception();
 __printf_chk(1,DAT_00103139,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103156,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103173,uVar1,in_RAX);
 return;
}

// Function: Base::virtual_func @ 0x102a58
int Base_virtual_func(Base *this_ptr)
{
 return 1;
}

// Function: Base::getName @ 0x102a60
char * Base_getName(void)
{
 return DAT_00103004;
}

// Function: Base::~Base @ 0x102a6c
void Base__Base(Base *this_ptr)
{
 return;
}

// Function: Derived::virtual_func @ 0x102a72
int Derived_virtual_func(Derived *this_ptr)
{
 return *(int *)(this_ptr + 8);
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
unsigned long long MultiDerived_funcB_thiscall(MultiDerived *this_ptr)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x102aa8
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102ab2
void VirtualBase__VirtualBase(VirtualBase *this_ptr)
{
 return;
}

// Function: MiddleA::func @ 0x102ab8
int MiddleA_func(void)
{
 return 0x96;
}

// Function: MiddleA::func @ 0x102acd
void MiddleA_func_helper(void)
{
 MiddleA_func();
 return;
}

// Function: MiddleB::func @ 0x102ada
int MiddleB_func(void)
{
 return 200;
}

// Function: MiddleB::func @ 0x102aef
void MiddleB_func_helper(void)
{
 MiddleB_func();
 return;
}

// Function: DiamondDerived::func @ 0x102afc
int DiamondDerived_func(void)
{
 return 0xfa;
}

// Function: DiamondDerived::func @ 0x102b11
void DiamondDerived_func_helper(void)
{
 DiamondDerived_func();
 return;
}

// Function: DiamondDerived::func @ 0x102b1e
void DiamondDerived_func_helper2(void)
{
 DiamondDerived_func();
 return;
}

// Function: MiddleA::~MiddleA @ 0x102b28
void MiddleA__MiddleA(void)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x102b5e
void MiddleB__MiddleB(void)
{
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
void RTTIDerivedB__RTTIDerivedB(void)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102bae
void RTTIDerivedA__RTTIDerivedA(void)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb4
void MultiDerived__MultiDerived(void)
{
 return;
}

// Function: Derived::~Derived @ 0x102bbe
void Derived__Derived(void)
{
 return;
}







// Function: MultiDerived::~MultiDerived @ 0x102bee
void MultiDerived__MultiDerived_wrapper(void)
{
 MultiDerived__MultiDerived();
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102bf8
void VirtualBase__VirtualBase(void)
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

// Function: Container<int>::Container @ 0x102d20
void Container_int__Container(void)
{
 return;
}

// Function: Container<int>::push @ 0x102d2c
void Container_int__push(void)
{
 return;
}

// Function: Container<int>::get @ 0x102d44
unsigned int Container_int__get(void)
{
 return 0;
}

// Function: Container<int>::getSize @ 0x102d5a
unsigned int Container_int__getSize(void)
{
 return 0;
}

// Function: Container<double>::Container @ 0x102d62
void Container_double__Container(void)
{
 return;
}

// Function: Container<double>::push @ 0x102d6e
void Container_double__push(void)
{
 return;
}

// Function: Container<double>::get @ 0x102d88
unsigned long long Container_double__get(void)
{
 return 0;
}

// Function: Container<double>::getSize @ 0x102da2
unsigned int Container_double__getSize(void)
{
 return 0;
}

// Function: std__unique_ptr_int_std__default_delete_int__::~unique_ptr @ 0x102daa
void std__unique_ptr_int_std__default_delete_int___unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 return;
}

// Function: std__unique_ptr_int____std__default_delete_int____::~unique_ptr @ 0x102dc2
void std__unique_ptr_int____std__default_delete_int_____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102dd4
void DiamondDerived__DiamondDerived(void)
{
 MiddleB__MiddleB();
 MiddleA__MiddleA();
 return;
}

// Function: _fini @ 0x102ed0
void _fini(void)
{
 return;
}

