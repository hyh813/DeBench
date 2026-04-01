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
// SHA256: 86a094d4a776a4afb7d86ac9d863cba1a699d28a1b98bde0c69c9bd03d738f25

// Forward declarations for C++ classes
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
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct Init Init;

// Forward declarations for functions
void test_cpp_oo_features(void);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void unique_ptr_int_std__default_delete_int____unique_ptr(unique_ptr_int_std__default_delete_int__ *self);
void unique_ptr_int___std__default_delete_int________unique_ptr(unique_ptr_int___std__default_delete_int____ *self);
int DiamondDerived_func(DiamondDerived *self);
void DiamondDerived__DiamondDerived(DiamondDerived *self);

// External symbols
extern void *__dso_handle;
extern char _ZNSi8__ioinitE;
extern void *PTR_virtual_func_001058a8;
extern void *PTR_virtual_func_001058d8;
extern void *PTR__RTTIDerivedA_00105b98;
extern void *PTR__RTTIDerivedB_00105bc0;
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern char DAT_00103004[];
extern char DAT_00103016[];
extern char DAT_0010303a[];
extern char DAT_00103074[];
extern char DAT_001030ac[];
extern char DAT_001030e5[];
extern char DAT_00103101[];
extern char DAT_00103139[];
extern char DAT_00103156[];
extern char DAT_00103173[];
int LifecycleClass_instance_count = 0;
int completed_0 = 0;
char DAT_00103004[] = "Base";
void *PTR_virtual_func_001058a8 = (void *)0x1058a8;
void *PTR_virtual_func_001058d8 = (void *)0x1058d8;
void *PTR__RTTIDerivedA_00105b98 = (void *)0x105b98;
void *PTR__RTTIDerivedB_00105bc0 = (void *)0x105bc0;
void *RTTIBase_typeinfo = (void *)0x105b00;
void *RTTIDerivedA_typeinfo = (void *)0x105b98;
void *RTTIDerivedB_typeinfo = (void *)0x105bc0;
char DAT_00103016[] = "Testing C++ OO features\n";
char DAT_0010303a[] = "Result: %d\n";
char DAT_00103074[] = "Virtual func result: %d\n";
char DAT_001030ac[] = "Diamond inheritance result: %d\n";
char DAT_001030e5[] = "Template func result: %d\n";
char DAT_00103101[] = "Template class result: %d\n";
char DAT_00103139[] = "Exception result: %d\n";
char DAT_00103156[] = "Smart ptr result: %d\n";
char DAT_00103173[] = "RTTI result: %d\n";

// Function: _init @ 0x102000
int _init(void *ctx)
{
 (void)ctx;
 return 0;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102160
void __cxa_finalize(void *param_1)
{
 (void)param_1;
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x102170
int __printf_chk(int __flag, const char *__format, ...)
{
 return __printf_chk(__flag, __format);
}

// Function: <EXTERNAL>::operator.new[] @ 0x102180
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102190
void *__cxa_begin_catch(void *param_1)
{
 (void)param_1;
 return (void *)0;
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
 (void)param_1;
 return (void *)0;
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
 __cxa_atexit(func, arg, dso_handle);
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
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x102200
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x102210
void *__dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4)
{
 (void)param_1;
 (void)param_2;
 (void)param_3;
 (void)param_4;
 return (void *)0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102220
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
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
void std_ios_base_Init_Init(Init *param_1)
{
 (void)param_1;
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
 (void)param_1;
 (void)param_2;
 (void)param_3;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102290
void _Unwind_Resume(void *param_1)
{
 (void)param_1;
}

// Function: test_cpp_exception @ 0x1022a0
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)0x1234;
 *puVar1 = 0x2a;
 return *puVar1;
}

// Function: main @ 0x102367
int main(void)
{
 unsigned long long auVar1 [2];
 unsigned long in_RAX;
 test_cpp_oo_features();
 auVar1[1] = 0;
 auVar1[0] = in_RAX;
 return (int)auVar1[0];
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102375
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&_ZNSi8__ioinitE);
 __cxa_atexit((void (*)(void))std_ios_base_Init_Init,(void *)&_ZNSi8__ioinitE,&__dso_handle);
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
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1024f5
int call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(void))**(void ***)param_1)();
 return param_2;
}

// Function: test_cpp_virtual_func @ 0x1024fe
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 void **local_28;
 void **local_20;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 3;
 local_28 = &PTR_virtual_func_001058a8;
 local_20 = &PTR_virtual_func_001058d8;
 iVar1 = call_virtual_func((Base *)local_28,5);
 iVar2 = call_virtual_func((Base *)local_20,5);
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
 return (int)dVar2 + iVar1 + local_18 + local_14;
}

// Function: Container<int>::Container @ 0x102d20
void Container_int__Container(Container_int_ *self)
{
 *(unsigned int *)((char *)self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x102d2c
void Container_int__push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x28) = iVar1 + 1;
 *(int *)((char *)self + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x102d44
unsigned int Container_int__get(Container_int_ *self,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)self + 0x28) != param_1 && param_1 <= *(int *)((char *)self + 0x28))) {
 uVar1 = *(unsigned int *)((char *)self + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x102d5a
unsigned int Container_int__getSize(Container_int_ *self)
{
 return *(unsigned int *)((char *)self + 0x28);
}

// Function: Container<double>::Container @ 0x102d62
void Container_double__Container(Container_double_ *self)
{
 *(unsigned int *)((char *)self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102d6e
void Container_double__push(Container_double_ *self,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x50) = iVar1 + 1;
 *(double *)((char *)self + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x102d88
unsigned long long Container_double__get(Container_double_ *self,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)self + 0x50) != param_1 && param_1 <= *(int *)((char *)self + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)self + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102da2
unsigned int Container_double__getSize(Container_double_ *self)
{
 return *(unsigned int *)((char *)self + 0x50);
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
 Container_int__push((Container_int_ *)local_3c,0x14);
 Container_int__push((Container_int_ *)local_3c,0x1e);
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
 char *lVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 unsigned long long in_RCX;
 unsigned int uVar7;
 char *__s1;
 unsigned int auVar8 [4];
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105b98;
 plVar4 = (long *)operator_new(8);
 lVar1 = (char *)*plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc0;
 __s1 = *(char **)((char *)lVar1);
 if ((__s1 != (char *)"12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(unsigned int)(iVar2 == 0) & 10;
 }
 iVar2 = uVar7 + 0x14;
 lVar5 = (long)__dynamic_cast((void *)plVar3,(void *)RTTIBase_typeinfo,(void *)RTTIDerivedA_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast((void *)plVar4,(void *)RTTIBase_typeinfo,(void *)RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (*__s1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (*(void (*)(void))((char *)lVar1 + 8))();
 lVar1 = (char *)*plVar4;
 (*(void (*)(void))((char *)lVar1 + 8))();
 auVar8[1] = 0;
 auVar8[0] = iVar2 + (int)sVar6;
 return (unsigned long long)(iVar2 + (int)sVar6);
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
 unique_ptr_int___std__default_delete_int________unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)local_28);
 unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)local_30);
 unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_38);
 (void)local_38;
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
 DiamondDerived__DiamondDerived((DiamondDerived *)local_50);
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
 (void)test_cpp_constructor();
 __printf_chk(1,DAT_0010303a,0);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103074,uVar1);
 (void)test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00103074,0);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ac,uVar1);
 (void)test_cpp_operator_overload();
 __printf_chk(1,DAT_001030ac,0);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e5,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,DAT_00103101,uVar1);
 (void)test_cpp_lambda();
 __printf_chk(1,DAT_00103101,0);
 uVar1 = test_cpp_exception();
 __printf_chk(1,DAT_00103139,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103156,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103173,uVar1,in_RAX);
 return;
}

// Function: Base::virtual_func @ 0x102a58
int Base_virtual_func(Base *self,int param_1)
{
 (void)self;
 return param_1 + 1;
}

// Function: Base::getName @ 0x102a60
char * Base_getName(Base *self)
{
 (void)self;
 return DAT_00103004;
}

// Function: Base::~Base @ 0x102a6c
void Base__Base(Base *self)
{
 (void)self;
 return;
}

// Function: Derived::virtual_func @ 0x102a72
int Derived_virtual_func(Derived *self,int param_1)
{
 return *(int *)((char *)self + 8) * param_1;
}

// Function: Derived::getName @ 0x102a7e
char * Derived_getName(Derived *self)
{
 (void)self;
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x102a8a
unsigned long long MultiDerived_funcA(MultiDerived *self)
{
 (void)self;
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x102a94
unsigned long long MultiDerived_funcB(MultiDerived *self)
{
 (void)self;
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x102a9e
unsigned long long MultiDerived_funcB_thiscall(MultiDerived *self)
{
 (void)self;
 return 0x28;
}

// Function: VirtualBase::func @ 0x102aa8
unsigned long long VirtualBase_func(VirtualBase *self)
{
 (void)self;
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102ab2
void VirtualBase__VirtualBase(VirtualBase *self)
{
 (void)self;
 return;
}

// Function: MiddleA::func @ 0x102ab8
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x102acd
void MiddleA_func_thiscall(MiddleA *self)
{
 MiddleA_func((MiddleA *)((char *)self + *(long *)(*(long *)self + -0x18)));
 return;
}

// Function: MiddleB::func @ 0x102ada
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x102aef
void MiddleB_func_thiscall(MiddleB *self)
{
 MiddleB_func((MiddleB *)((char *)self + *(long *)(*(long *)self + -0x18)));
 return;
}

// Function: DiamondDerived::func @ 0x102afc
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102b11
void DiamondDerived_func_thiscall(DiamondDerived *self)
{
 DiamondDerived_func((DiamondDerived *)((char *)self + *(long *)(*(long *)self + -0x18)));
 return;
}

// Function: DiamondDerived::func @ 0x102b1e
void DiamondDerived_func_thiscall2(DiamondDerived *self)
{
 DiamondDerived_func((DiamondDerived *)((char *)self + -0x10));
 return;
}

// Function: MiddleA::~MiddleA @ 0x102b28
void MiddleA__MiddleA(MiddleA *self)
{
 *(unsigned long long *)self = 0x105920;
 *(unsigned long long *)((char *)self + 0x10) = 0x105958;
 return;
}

// Function: MiddleA::~MiddleA @ 0x102b3f
void MiddleA__MiddleA_thiscall(MiddleA *self)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)self + -0x20);
 *(unsigned long long *)((char *)self + lVar1) = 0x105920;
 *(unsigned long long *)((char *)self + lVar1 + 0x10) = 0x105958;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102b5e
void MiddleB__MiddleB(MiddleB *self)
{
 *(unsigned long long *)self = 0x105998;
 *(unsigned long long *)((char *)self + 0x10) = 0x1059d0;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102b75
void MiddleB__MiddleB_thiscall(MiddleB *self)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)self + -0x20);
 *(unsigned long long *)((char *)self + lVar1) = 0x105998;
 *(unsigned long long *)((char *)self + lVar1 + 0x10) = 0x1059d0;
 return;
}

// Function: RTTIDerivedA::getType @ 0x102b94
unsigned long long RTTIDerivedA_getType(RTTIDerivedA *self)
{
 (void)self;
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x102b9e
unsigned long long RTTIDerivedB_getType(RTTIDerivedB *self)
{
 (void)self;
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102ba8
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *self)
{
 (void)self;
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102bae
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *self)
{
 (void)self;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bb4
void MultiDerived__MultiDerived(MultiDerived *self)
{
 (void)self;
 return;
}



// Function: Derived::~Derived @ 0x102bbe
void Derived__Derived(Derived *self)
{
 (void)self;
 return;
}

// Function: Base::~Base @ 0x102bc4
void Base__Base_thiscall(Base *self)
{
 operator_delete(self,8);
 return;
}

// Function: Derived::~Derived @ 0x102bd2
void Derived__Derived_thiscall(Derived *self)
{
 operator_delete(self,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102be0
void MultiDerived__MultiDerived_thiscall(MultiDerived *self)
{
 operator_delete(self,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102bee
void MultiDerived__MultiDerived_thiscall2(MultiDerived *self)
{
 MultiDerived__MultiDerived((MultiDerived *)((char *)self + -0x10));
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102bf8
void VirtualBase__VirtualBase_thiscall(VirtualBase *self)
{
 operator_delete(self,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102c06
void RTTIDerivedB__RTTIDerivedB_thiscall(RTTIDerivedB *self)
{
 operator_delete(self,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102c14
void RTTIDerivedA__RTTIDerivedA_thiscall(RTTIDerivedA *self)
{
 operator_delete(self,8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c22
void MiddleA__MiddleA_thiscall2(MiddleA *self)
{
 *(unsigned long long *)self = 0x105920;
 *(unsigned long long *)((char *)self + 0x10) = 0x105958;
 operator_delete(self,0x20);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c42
void MiddleA__MiddleA_thiscall3(MiddleA *self)
{
 MiddleA__MiddleA((MiddleA *)((char *)self + *(long *)(*(long *)self + -0x20)));
 return;
}

// Function: MiddleB::~MiddleB @ 0x102c50
void MiddleB__MiddleB_thiscall2(MiddleB *self)
{
 *(unsigned long long *)self = 0x105998;
 *(unsigned long long *)((char *)self + 0x10) = 0x1059d0;
 operator_delete(self,0x20);
 return;
}

// Function: MiddleB::~MiddleB @ 0x102c70
void MiddleB__MiddleB_thiscall3(MiddleB *self)
{
 MiddleB__MiddleB((MiddleB *)((char *)self + *(long *)(*(long *)self + -0x20)));
 return;
}

// Function: MiddleA::~MiddleA @ 0x102c7e
void MiddleA__MiddleA_thiscall4(MiddleA *self)
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
 *(long *)self = lVar1;
 lVar3 = 0x105958;
 lVar2 = 0x10;
 if (in_ESI == 0) {
 lVar3 = in_RDX[1];
 lVar2 = *(long *)(lVar1 + -0x18);
 }
 *(long *)((char *)self + lVar2) = lVar3;
 return;
}

// Function: MiddleA::~MiddleA @ 0x102cb0
void MiddleA__MiddleA_thiscall5(MiddleA *self)
{
 MiddleA__MiddleA(self);
 return;
}

// Function: MiddleB::~MiddleB @ 0x102cbe
void MiddleB__MiddleB_thiscall4(MiddleB *self)
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
 *(long *)self = lVar1;
 lVar3 = 0x1059d0;
 lVar2 = 0x10;
 if (in_ESI == 0) {
 lVar3 = in_RDX[1];
 lVar2 = *(long *)(lVar1 + -0x18);
 }
 *(long *)((char *)self + lVar2) = lVar3;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102cf0
void MiddleB__MiddleB_thiscall5(MiddleB *self)
{
 MiddleB__MiddleB(self);
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



// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x102daa
void unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *self)
{
 if (*(void **)((char *)self) != 0) {
 operator_delete(*(void **)((char *)self),4);
 return;
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x102dc2
void unique_ptr_int___std__default_delete_int________unique_ptr
 (unique_ptr_int___std__default_delete_int____ *self)
{
 if (*(void **)((char *)self) != 0) {
 operator_delete__(*(void **)((char *)self));
 return;
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102dd4
void DiamondDerived__DiamondDerived(DiamondDerived *self)
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
 *(long *)self = lVar1;
 lVar2 = 0x105b70;
 lVar3 = 0x20;
 if (in_ESI == 0) {
 lVar2 = in_RDX[5];
 lVar3 = *(long *)(lVar1 + -0x18);
 }
 *(long *)((char *)self + lVar3) = lVar2;
 lVar1 = 0x105b38;
 if (in_ESI == 0) {
 lVar1 = in_RDX[6];
 }
 *(long *)((char *)self + 0x10) = lVar1;
 MiddleB__MiddleB((MiddleB *)((char *)self + 0x10));
 MiddleA__MiddleA((MiddleA *)self);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e5e
void DiamondDerived__DiamondDerived_thiscall(DiamondDerived *self)
{
 DiamondDerived__DiamondDerived(self);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e6e
void DiamondDerived__DiamondDerived_thiscall2(DiamondDerived *self)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)self + -0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e78
void DiamondDerived__DiamondDerived_thiscall3(DiamondDerived *self)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)self + *(long *)(*(long *)self + -0x20)));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102e86
void DiamondDerived__DiamondDerived_thiscall4(DiamondDerived *self)
{
 DiamondDerived__DiamondDerived(self);
 operator_delete(self,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eab
void DiamondDerived__DiamondDerived_thiscall5(DiamondDerived *self)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)self + -0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102eb5
void DiamondDerived__DiamondDerived_thiscall6(DiamondDerived *self)
{
 DiamondDerived__DiamondDerived((DiamondDerived *)((char *)self + *(long *)(*(long *)self + -0x20)));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ec2
void DiamondDerived__DiamondDerived_thiscall7(DiamondDerived *self)
{
 DiamondDerived__DiamondDerived(self);
 return;
}

// Function: _fini @ 0x102ed0
void _fini(void)
{
 return;
}

