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
// SHA256: 67937badd5d9935278c48841e591931c047a112e17c0823fbcc67627d062121c

// Forward declarations
int call_weak_fn(int param_1);

// Function: _init @ 0x100e90
int _init(void)
{
 int iVar1;
 iVar1 = call_weak_fn(0);
 return iVar1;
}

// Function: FUN_00100eb0 @ 0x100eb0
void FUN_00100eb0(void)
{
 ((void (*)(void))*(void (**)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::puts @ 0x100ed0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x100ee0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100ef0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100f00
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
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
 __cxa_finalize(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100f30
void __libc_start_main(void *main, void *param_2, void *param_3, void *param_4, void *param_5, void *param_6)
{
 __libc_start_main(main, param_2, param_3, param_4, param_5, param_6);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x100f40
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x100f50
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x100f60
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}



// Function: <EXTERNAL>::__cxa_atexit @ 0x100f80
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x100f90
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100fa0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x100fb0
void std_ios_base_Init_Init(void *this_ptr)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x100fc0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100fd0
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100fe0
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100ff0
void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
 __cxa_throw(param_1, param_2, param_3);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101000
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}



// Function: <EXTERNAL>::__printf_chk @ 0x101010
int __printf_chk(int __flag, const char *__format, ...)
{
 (void)__flag;
 (void)__format;
 return 0;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101020
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: test_cpp_exception @ 0x101040
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)0,(void *)0);
}

// Forward declarations
void test_cpp_oo_features(void);

// Function: main @ 0x101120
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Global variables
void *__dso_handle = 0;
void *___stack_chk_guard = 0;
char completed_0 = 0;

// Forward declarations for classes
struct Base;
struct LifecycleClass;

// Global variable for LifecycleClass
int LifecycleClass_instance_count = 0;

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101140
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 return;
}

// Function: _start @ 0x101180
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack0x00000008 = 0;
 __libc_start_main((void *)main,(void *)param_9,stack0x00000008,0,0,(void *)param_1);
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
 local_8 = (long)___stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if (local_8 - (long)___stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
 return 0;
}

// Function: test_cpp_constructor @ 0x101310
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101330
void call_virtual_func(void *param_1,int param_2)
{
 (***(void (***)())param_1)(param_1,param_2);
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

// Forward declarations for template functions
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

// Forward declarations for destructor functions
void RTTIDerivedA_destructor(void);
void RTTIDerivedB_destructor(void);

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

// Extern declarations for RTTI typeinfo
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;
extern void *PTR__RTTIDerivedA_00112c28;
extern void *PTR__RTTIDerivedB_00112c50;

// Implementation for __dynamic_cast (RTTI support)
void *__dynamic_cast(void *src_ptr, void *src_type, void *dst_type, int flags)
{
 (void)src_type;
 (void)dst_type;
 (void)flags;
 return src_ptr;
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
 *plVar3 = (long)&PTR__RTTIDerivedA_00112c28;
 plVar4 = (long *)operator_new(8);
 lVar7 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar7 + -8) + 8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00112c50;
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
 lVar5 = (long)__dynamic_cast((void *)plVar3,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedA_typeinfo,0);
 iVar1 = iVar2 + 100;
 if (lVar5 == 0) {
 iVar1 = iVar2;
 }
 lVar5 = (long)__dynamic_cast((void *)plVar4,(void *)&RTTIBase_typeinfo,(void *)&RTTIDerivedB_typeinfo,0);
 iVar2 = iVar1 + 200;
 if (lVar5 == 0) {
 iVar2 = iVar1;
 }
 if (cVar8 == '*') {
 __s1 = __s1 + 1;
 }
sVar6 = strlen(__s1);
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
 puts("Test");
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar3 = strlen(acStack_2c);
 __printf_chk(1,"%d",(int)sVar3 + 0x125c);
 __printf_chk(1,"%d",15);
 __printf_chk(1,"%d",0x2a);
 __printf_chk(1,"%d",0x47);
 __printf_chk(1,"%d",0x28a);
 __printf_chk(1,"%d",0x16);
 iVar1 = template_max_int_(3,7);
 dVar4 = template_max_double_(2.5,1.5);
 local_38 = 10;
 aiStack_34[0] = 0x14;
 template_swap_int_(&local_38,aiStack_34);
 __printf_chk(1,"%d",((int)dVar4) + iVar1 + local_38 + aiStack_34[0]);
 __printf_chk(1,"%d",0x10);
 __printf_chk(1,"%d",0x55);
 uVar2 = 0;
 __printf_chk(1,"%d",uVar2);
 __printf_chk(1,"%d",0x2bf);
 uVar2 = 0;
 if (local_8 - (long)___stack_chk_guard == 0) {
 __printf_chk(1,"%d",0);
 return;
 }
 __stack_chk_fail();
}

// Function: Base_virtual_func @ 0x1017d0
int Base_virtual_func(void *this_ptr,int param_1)
{
 return param_1 + 1;
}

// Function: Base_getName @ 0x1017e0
unsigned char * Base_getName(void)
{
 return (unsigned char *)"Base";
}

// Function: Base_destructor @ 0x1017f0
void Base_destructor(void *this_ptr)
{
 return;
}

// Function: Derived_virtual_func @ 0x101800
int Derived_virtual_func(void *this_ptr,int param_1)
{
 return param_1 * *(int *)((char *)this_ptr + 8);
}

// Function: Derived_getName @ 0x101810
char * Derived_getName(void)
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
unsigned long long MultiDerived_funcB_this(void *this_ptr)
{
 return 0x28;
}

// Function: MiddleA_func @ 0x101850
int MiddleA_func(void *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}

// Function: MiddleA_func2 @ 0x101870
int MiddleA_func2(void *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ptr + -0x18) + 8) + 0x96;
}

// Function: MiddleB_func @ 0x1018a0
int MiddleB_func(void *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}

// Function: MiddleB_func2 @ 0x1018c0
int MiddleB_func2(void *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ptr + -0x18) + 8) + 200;
}

// Function: DiamondDerived_func @ 0x1018f0
int DiamondDerived_func(void *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func2 @ 0x101910
int DiamondDerived_func2(void *this_ptr)
{
 return *(int *)((char *)this_ptr + *(long *)(*(long *)((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ptr + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func3 @ 0x101934
int DiamondDerived_func3(void *this_ptr)
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
void RTTIDerivedB_destructor(void)
{
 return;
}

// Function: RTTIDerivedA_destructor @ 0x101980
void RTTIDerivedA_destructor(void)
{
 return;
}

// Function: DiamondDerived_destructor @ 0x101990
void DiamondDerived_destructor(void *this_ptr)
{
 return;
}

// Function: DiamondDerived_destructor2 @ 0x101994
void DiamondDerived_destructor2(void *this_ptr)
{
 return;
}

// Function: DiamondDerived_destructor3 @ 0x1019a0
void DiamondDerived_destructor3(void *this_ptr)
{
 return;
}

// Function: MultiDerived_destructor @ 0x1019b0
void MultiDerived_destructor(void *this_ptr)
{
 return;
}

// Function: MultiDerived_destructor2 @ 0x1019b4
void MultiDerived_destructor2(void *this_ptr)
{
 return;
}

// Function: Derived_destructor @ 0x1019c0
void Derived_destructor(void *this_ptr)
{
 return;
}

// Function: Base_destructor2 @ 0x1019d0
void Base_destructor2(void *this_ptr)
{
 operator_delete((void *)this_ptr,8);
 return;
}

// Function: Derived_destructor2 @ 0x1019e0
void Derived_destructor2(void *this_ptr)
{
 operator_delete((void *)this_ptr,0x10);
 return;
}

// Function: MultiDerived_destructor3 @ 0x1019f0
void MultiDerived_destructor3(void *this_ptr)
{
 operator_delete((void *)this_ptr,0x20);
 return;
}

// Function: MultiDerived_destructor4 @ 0x101a00
void MultiDerived_destructor4(void *this_ptr)
{
 operator_delete((char *)this_ptr + -0x10,0x20);
 return;
}

// Function: RTTIDerivedB_destructor2 @ 0x101a10
void RTTIDerivedB_destructor2(void *this_ptr)
{
 operator_delete((void *)this_ptr,8);
 return;
}

// Function: RTTIDerivedA_destructor2 @ 0x101a20
void RTTIDerivedA_destructor2(void *this_ptr)
{
 operator_delete((void *)this_ptr,8);
 return;
}

// Function: DiamondDerived_destructor4 @ 0x101a30
void DiamondDerived_destructor4(void *this_ptr)
{
 operator_delete((void *)this_ptr,0x30);
 return;
}

// Function: DiamondDerived_destructor5 @ 0x101a40
void DiamondDerived_destructor5(void *this_ptr)
{
 operator_delete((char *)this_ptr + *(long *)(*(long *)this_ptr + -0x20),0x30);
 return;
}

// Function: DiamondDerived_destructor6 @ 0x101a54
void DiamondDerived_destructor6(void *this_ptr)
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
void Container_int_Constructor(void *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int_push @ 0x101ab0
void Container_int_push(void *this_ptr,int param_1)
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
unsigned int Container_int_get(void *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x28))) {
 return *(unsigned int *)((char *)this_ptr + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container_int_getSize @ 0x101b00
unsigned int Container_int_getSize(void *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x28);
}

// Function: Container_double_Constructor @ 0x101b10
void Container_double_Constructor(void *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double_push @ 0x101b20
void Container_double_push(void *this_ptr,double param_1)
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
double Container_double_get(void *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x50))) {
 return *(double *)((char *)this_ptr + (long)param_1 * 8);
 }
 return 0.0;
}

// Function: Container_double_getSize @ 0x101b60
unsigned int Container_double_getSize(void *this_ptr)
{
 return *(unsigned int *)((char *)this_ptr + 0x50);
}

// Function: _fini @ 0x101b68
void _fini(void)
{
 return;
}

