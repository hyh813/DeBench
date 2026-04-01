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

/* Global declarations for missing symbols */
void *__dso_handle = 0;
long ___stack_chk_guard = 0;
long __stack_chk_guard = 0;
int completed_0 = 0;
void *stack0x00000008 = 0;
void *PTR__RTTIDerivedA_00112c28 = 0;
void *PTR__RTTIDerivedB_00112c50 = 0;
void *DAT_00101b10 = 0;
void *DAT_00101b38 = 0;
void *DAT_00101b58 = 0;
void *DAT_00101b78 = 0;
void *DAT_00101b98 = 0;
void *DAT_00101bb8 = 0;
void *DAT_00101bd8 = 0;
void *DAT_00101c18 = 0;
void *DAT_00101c38 = 0;
void *DAT_00101c58 = 0;
void *DAT_00101c78 = 0;
void *DAT_00101c98 = 0;
void *DAT_00101af8 = 0;

/* Forward declarations */
int call_weak_fn(uintptr_t ctx);
void test_cpp_oo_features(void);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

/* Typeinfo declarations */
typedef struct typeinfo { void *vtable; } typeinfo;
typeinfo *int_typeinfo = 0;
typeinfo *RTTIBase_typeinfo = 0;
typeinfo *RTTIDerivedA_typeinfo = 0;
typeinfo *RTTIDerivedB_typeinfo = 0;

/* Type definitions for C++ classes */
typedef struct Init { int dummy; } Init;
typedef struct Base { void *vtable; int value; } Base;
typedef struct Derived { void *vtable; int value; } Derived;
typedef struct MultiDerived { void *vtable; int value; } MultiDerived;
typedef struct MiddleA { void *vtable; int value; } MiddleA;
typedef struct MiddleB { void *vtable; int value; } MiddleB;
typedef struct DiamondDerived { void *vtable; int value; } DiamondDerived;
typedef struct RTTIBase { void *vtable; } RTTIBase;
typedef struct RTTIDerivedA { void *vtable; } RTTIDerivedA;
typedef struct RTTIDerivedB { void *vtable; } RTTIDerivedB;
typedef struct Container_int_ { int data[10]; int size; } Container_int_;
typedef struct Container_double_ { double data[10]; int size; } Container_double_;
typedef struct LifecycleClass { int instance_count; } LifecycleClass;
int LifecycleClass_instance_count = 0;

/* Function pointer typedefs */
typedef void (*func_ptr_long)(long *);

/* namespace std removed for C compatibility */
Init std_ioinit;

// Decompiled by BinaryAI
// SHA256: 1c73fbcca3ab6a0ae44184b3cb35ec3d159d76a40bf89aad0bed99d24dc25fc8

// Function: _init @ 0x100e90
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((uintptr_t)ctx);
 return iVar1;
}

// Function: FUN_00100eb0 @ 0x100eb0
void FUN_00100eb0(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100ed0
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::strlen @ 0x100ee0
size_t strlen(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100ef0
void __stack_chk_fail(long param_1, long *param_2, unsigned int param_3, long param_4)
{
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100f00
void __cxa_begin_catch(void *param_1)
{
 __cxa_begin_catch(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100f10
void *__cxa_allocate_exception(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = __cxa_allocate_exception(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100f20
void __cxa_finalize(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100f30
void __libc_start_main(void *param_1, unsigned long long param_2, void *param_3, void *param_4, void *param_5, unsigned long long param_6)
{
 __libc_start_main(param_1, param_2, param_3, param_4, param_5, param_6);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x100f40
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = (void *)0;
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x100f50
void operator_delete(void *param_1,unsigned long param_2)
{
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x100f60
char * strncpy(char *__dest,char *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100f70
void *__dynamic_cast(void *param_1, void *param_2, void *param_3, int param_4)
{
 return param_1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100f80
void __cxa_atexit(void *param_1, void *param_2, void *param_3)
{
 __cxa_atexit(param_1, param_2, param_3);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x100f90
int strcmp(char *__s1,char *__s2)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100fa0
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100fb0
void std_ios_base_Init_Init(Init *this_)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x100fc0
void abort(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100fd0
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100fe0
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100ff0
void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
 __cxa_throw(param_1, param_2, param_3);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101000
void _Unwind_Resume(void *param_1)
{
 _Unwind_Resume(param_1);
}

// Function: <EXTERNAL>::__printf_chk @ 0x101010
void __printf_chk(int param_1, void *param_2, ...)
{
 __printf_chk(param_1, param_2);
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101020
void __gmon_start__(void)
{
 return;
}

// Function: test_cpp_exception @ 0x101040
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int_typeinfo,0);
 return 0x2a;
}

// Function: main @ 0x101120
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101140
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std_ioinit);
 __cxa_atexit((void *)std_ios_base_Init_Init,&std_ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101180
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main((void *)main,param_9,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x1011b4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x1011d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101200
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010123c @ 0x10123c
void FUN_0010123c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101240
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x1012a0
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
 if (local_8 - ___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail(sVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: test_cpp_constructor @ 0x101310
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101330
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
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
unsigned int test_cpp_template_func(void)
{
 int iVar1;
 double dVar2;
 int local_10;
 int iStack_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int_(&local_10,&iStack_c);
 if (local_8 == ___stack_chk_guard) {
 return 0;
 }
 __stack_chk_fail((int)dVar2 + iVar1 + local_10 + iStack_c, &__stack_chk_guard, 0, local_8 - ___stack_chk_guard);
 return 0;
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
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 iVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = (long *)operator_new(8);
 lVar8 = *plVar3;
 __s1 = (char *)((uintptr_t)(*(long *)((uintptr_t)lVar8 - 8)) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
 cVar1 = *__s1;
 if ((__s1 != "12RTTIDerivedA") && (iVar7 = 0, cVar1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 lVar5 = (long)__dynamic_cast((void *)plVar3, 0, 0, 0);
 iVar2 = iVar7 + 0x78;
 if (lVar5 == 0) {
 iVar2 = iVar7 + 0x14;
 }
 lVar5 = (long)__dynamic_cast((void *)plVar4, 0, 0, 0);
 iVar7 = iVar2 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar2;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 ((func_ptr_long)((char *)((uintptr_t)lVar8 + 8)))(plVar3);
 ((func_ptr_long)((char *)((uintptr_t)*plVar4 + 8)))(plVar4);
 return iVar7 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x1015b0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 size_t sVar2;
 char acStack_2c [31];
 char local_d;
 long local_8;
 local_8 = ___stack_chk_guard;
 puts((char *)&DAT_00101b10);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar2 = strlen(acStack_2c);
 __printf_chk(1,&DAT_00101b38,(int)sVar2 + 0x125c);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_00101b58,uVar1);
 __printf_chk(1,&DAT_00101b78,0x2a);
 __printf_chk(1,&DAT_00101b98,0x47);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00101bb8,uVar1);
 __printf_chk(1,&DAT_00101bd8,0x16);
 test_cpp_template_func();
 __printf_chk(1,&DAT_00101c18,0x10);
 __printf_chk(1,&DAT_00101c38,0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00101c58,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00101c78,uVar1);
 uVar1 = test_cpp_rtti();
 if (local_8 - ___stack_chk_guard == 0) {
 __printf_chk(1,&DAT_00101c98);
 return;
 }
 __stack_chk_fail(local_8 - ___stack_chk_guard,&__stack_chk_guard,uVar1,0);
}

// Function: Base::virtual_func @ 0x101740
int Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101750
unsigned char * Base_getName(Base *self)
{
 return (unsigned char *)&DAT_00101af8;
}

// Function: Base::~Base @ 0x101760
void Base__Base(Base *self)
{
 return;
}

// Function: Derived::virtual_func @ 0x101770
int Derived_virtual_func(Derived *self,int param_1)
{
 return param_1 * *(int *)((char *)self + 8);
}

// Function: Derived::getName @ 0x101780
char * Derived_getName(Derived *self)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x101790
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x1017a0
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x1017b0
unsigned long long MultiDerived_funcB_3(MultiDerived *self)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x1017c0
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x1017e0
int MiddleA_func_2(MiddleA *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)((char *)self + *(long *)(*(long *)self + -0x18)) + -0x18) +
 *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101810
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x101830
int MiddleB_func_2(MiddleB *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)((char *)self + *(long *)(*(long *)self + -0x18)) + -0x18) +
 *(long *)(*(long *)self + -0x18) + 8) + 200;
}

// Function: DiamondDerived_func @ 0x101860
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func @ 0x101880
int DiamondDerived_func_2(DiamondDerived *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)((char *)self + *(long *)(*(long *)self + -0x18)) + -0x18) +
 *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func @ 0x1018a4
int DiamondDerived_func_3(DiamondDerived *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)((char *)self + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x1018c0
unsigned long long RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x1018d0
unsigned long long RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1018e0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1018f0
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *self)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101900
void DiamondDerived__DiamondDerived(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101904
void DiamondDerived__DiamondDerived_2(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101910
void DiamondDerived__DiamondDerived_3(DiamondDerived *self)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101920
void MultiDerived__MultiDerived(MultiDerived *self)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101924
void MultiDerived__MultiDerived_2(MultiDerived *self)
{
 return;
}

// Function: Derived::~Derived @ 0x101930
void Derived__Derived(Derived *self)
{
 return;
}

// Function: Base::~Base @ 0x101940
void Base__Base_2(Base *self)
{
 operator_delete(self,8);
 return;
}

// Function: Derived::~Derived @ 0x101950
void Derived__Derived_2(Derived *self)
{
 operator_delete(self,0x10);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101960
void MultiDerived__MultiDerived_3(MultiDerived *self)
{
 operator_delete(self,0x20);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101970
void MultiDerived__MultiDerived_4(MultiDerived *self)
{
 operator_delete((char *)self + -0x10,0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101980
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *self)
{
 operator_delete(self,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101990
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *self)
{
 operator_delete(self,8);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x1019a0
void DiamondDerived__DiamondDerived_4(DiamondDerived *self)
{
 operator_delete(self,0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x1019b0
void DiamondDerived__DiamondDerived_5(DiamondDerived *self)
{
 operator_delete((char *)self + *(long *)(*(long *)((char *)self) + -0x20),0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x1019c4
void DiamondDerived__DiamondDerived_6(DiamondDerived *self)
{
 operator_delete((char *)self + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x1019d0
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x1019e0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1019f0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_Container @ 0x101a10
void Container_int_Container(Container_int_ *self)
{
 *(unsigned int *)((char *)self + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x101a20
void Container_int_push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x28) = iVar1 + 1;
 *(int *)((char *)self + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_get @ 0x101a40
unsigned int Container_int_get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)self + 0x28))) {
 return *(unsigned int *)((char *)self + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container_int_getSize @ 0x101a70
unsigned int Container_int_getSize(Container_int_ *self)
{
 return *(unsigned int *)((char *)self + 0x28);
}

// Function: Container_double_Container @ 0x101a80
void Container_double_Container(Container_double_ *self)
{
 *(unsigned int *)((char *)self + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x101a90
void Container_double_push(Container_double_ *self,double param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x50);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x50) = iVar1 + 1;
 *(double *)((char *)self + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_get @ 0x101ab0
unsigned long long Container_double_get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)self + 0x50))) {
 return *(unsigned long long *)((char *)self + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container_double_getSize @ 0x101ad0
unsigned int Container_double_getSize(Container_double_ *self)
{
 return *(unsigned int *)((char *)self + 0x50);
}

// Function: _fini @ 0x101ad8
void _fini(void)
{
 return;
}

