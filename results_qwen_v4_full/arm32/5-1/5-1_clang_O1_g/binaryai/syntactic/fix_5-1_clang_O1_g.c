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
typedef unsigned int uint;

#define CONCAT44(hi,lo) (((unsigned long long)(hi) << 32) | (lo))

// Forward declarations and global variables
struct Base { void *vtable; };
struct Init;
struct Derived { void *vtable; };
struct MultiDerived { void *vtable; };
struct DiamondDerived { void *vtable; };
struct BaseA { void *vtable; };
struct BaseB { void *vtable; };
struct MiddleA { void *vtable; };
struct MiddleB { void *vtable; };
struct VirtualBase { void *vtable; };
struct RTTIBase { void *vtable; };
struct RTTIDerivedA { void *vtable; };
struct RTTIDerivedB { void *vtable; };
struct Container_int_ {
 int data[10];
 int size;
};
struct Container_double_ {
 double data[10];
 int size;
};
int LifecycleClass_instance_count;
char completed_0;
void __gmon_start__(void);
void *PTR_virtual_func_00022cf0;
void *PTR_virtual_func_00022d10;
void *DAT_00022d4c;
void *DAT_00022df0;
void *PTR__RTTIBase_00022ed8;
void *PTR__RTTIBase_00022eec;
void *PTR_RTTIBase_typeinfo;
void *PTR_RTTIDerivedA_typeinfo;
void *PTR_RTTIDerivedB_typeinfo;
void *DAT_00011c71;
void *DAT_00011b0d;
void *DAT_00011b2b;
void *DAT_00011b47;
void *DAT_00011b63;
void *DAT_00011b7f;
void *DAT_00011b9c;
void *DAT_00011bb8;
void *DAT_00011bd4;
void *DAT_00011bf0;
void *DAT_00011c0c;
void *DAT_00011c29;
void *DAT_00011c46;
void *DAT_00011c64;
void *PTR_funcA_00022d34;
void *PTR_func_00022dbc;
void *PTR_func_00022dd4;
int Base_virtual_func(Base *param_1,int param_2);
unsigned int MultiDerived_funcA(void);
int MultiDerived_funcB(MultiDerived *param_1);
int DiamondDerived_func(DiamondDerived *param_1);
int Derived_virtual_func(Derived *param_1,int param_2);
void Base_destructor(Base *param_1);
void MultiDerived_destructor(MultiDerived *param_1);
void DiamondDerived_destructor(DiamondDerived *param_1);
void Base_destructor2(Base *param_1);
void Derived_destructor(Derived *param_1);
void BaseA_destructor(BaseA *param_1);
char *Base_getName(void);
char *Derived_getName(void);
void BaseB_destructor(BaseB *param_1);
void MiddleA_destructor(MiddleA *param_1);
void MiddleB_destructor(MiddleB *param_1);
int DiamondDerived_func2(DiamondDerived *param_1);
void DiamondDerived_destructor2(DiamondDerived *param_1);
void VirtualBase_destructor(VirtualBase *param_1);
void RTTIDerivedA_destructor(RTTIDerivedA *param_1);
void RTTIDerivedB_destructor(RTTIDerivedB *param_1);
void *__dynamic_cast(void *param_1,void *param_2,void *param_3,int param_4);
unsigned int BaseA_funcA(void);
unsigned int BaseB_funcB(void);
int MiddleA_func(MiddleA *param_1);
int MiddleB_func(MiddleB *param_1);
unsigned int VirtualBase_func(void);
unsigned int RTTIDerivedA_getType(void);
unsigned int RTTIDerivedB_getType(void);

// Decompiled by BinaryAI
// SHA256: 85e9ecac6d8b6ebe519049785e008d18be08b73b581943e7dd3c6b273f7f1be0

// Function: _init @ 0x10b84
void call_weak_fn(void);
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: <EXTERNAL>::operator.new @ 0x10ba4
void * operator_new(uint param_1)
{
 void *pvVar1;
 pvVar1 = (void *)0;
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10bb0
void __cxa_begin_catch(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10bbc
void *__cxa_allocate_exception(size_t param_1)
{
 void *pvVar1;
 pvVar1 = (void *)0;
 return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x10bc8
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10bd4
int puts(char *__s)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10be0
int __libc_start_main(int (*main_fn)(int, char **, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 return 0;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10bec
void * operator_new__(uint param_1)
{
 void *pvVar1;
 pvVar1 = (void *)0;
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10bf8
void abort(void)
{
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x10c04
void operator_delete(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10c10
void __cxa_end_cleanup(void)
{
 return;
}



// Function: <EXTERNAL>::__cxa_atexit @ 0x10c28
int __cxa_atexit(void (*param_1)(void *),void *param_2,void *param_3)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10c34
void operator_delete__(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10c40
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x10c4c
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = 0;
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10c58
void Init_Init(struct Init *param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10c64
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10c70
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x10c7c
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10c88
void __cxa_throw(void *param_1,void *param_2,void *param_3)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10c94
void __aeabi_dcmpgt(double param_1,double param_2)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x10cac
void __cxa_finalize(void *param_1)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10cb8
void *__dso_handle;
void *std___ioinit;
void _GLOBAL__sub_I_5_1_cpp(void)
{
 Init_Init((struct Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))Init_Init,&std___ioinit,__dso_handle);
 return;
}

// Function: _start @ 0x10cf8
int main(int argc, char **argv, char **envp);
void *_stack0x00000004;
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,(int)param_2,(char **)&_stack0x00000004,(void (*)(void))0,(void (*)(void))0,(void (*)(void))0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x10d3c
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10d60
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10da4
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10df4
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: test_cpp_member_func @ 0x10e60
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

// Function: test_cpp_constructor @ 0x10ed0
int test_cpp_constructor(void)
{
 void *pvVar1;
 int iVar2;
 int iVar3;
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 iVar2 = LifecycleClass_instance_count + 1;
 iVar3 = *(int *)((int)pvVar1 + 8);
 LifecycleClass_instance_count = iVar2;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3 + iVar2;
}

// Function: call_virtual_func @ 0x10f48
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(void *))(*(void **)param_1))(param_1);
 return;
}

// Function: test_cpp_virtual_func @ 0x10f64
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void *local_14;
 unsigned int local_10;
 void *local_c;
 local_c = (void *)&PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = (void *)&PTR_virtual_func_00022d10;
 iVar1 = Base_virtual_func((Base *)&local_c,5);
 iVar2 = ((int (*)(void *,int))local_14)(local_14,5);
 return iVar1 + iVar2 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x10fdc
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_18;
 unsigned int local_14;
 local_14 = 200;
 local_18 = (void **)&DAT_00022d4c;
 iVar1 = MultiDerived_funcA();
 iVar2 = ((int (*)(void *))*local_18)(local_18);
 return iVar1 + iVar2 + 1;
}

// Function: MultiDerived_funcA @ 0x117c0
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: test_cpp_diamond_inheritance @ 0x1104c
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_18;
 unsigned int local_14;
 local_14 = 0x32;
 local_18 = (void **)&DAT_00022df0;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_14 = 100;
 iVar2 = ((int (*)(void *))*local_18)(local_18);
 return iVar2 + iVar1;
}

// Function: DiamondDerived_func @ 0x11910
int DiamondDerived_func(DiamondDerived *param_1)
{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0xfa;
}

// Function: test_cpp_operator_overload @ 0x110d0
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x110d8
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x110e0
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x110e8
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x110f0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)0,0);
}

// Function: test_cpp_smart_ptr @ 0x111c0
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x111cc
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 uint uVar7;
 bool bVar8;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00022ed8;
 piVar2 = (int *)operator_new(4);
 uVar7 = 0;
 *piVar2 = 0;
 *piVar2 = (int)&PTR__RTTIBase_00022eec;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 0;
 if (iVar3 == 0) {
 uVar7 = 10;
 }
 }
 pcVar4 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (pcVar4 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else {
 bVar8 = false;
 if (*pcVar4 != '*') {
 iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
 bVar8 = iVar3 == 0;
 }
 }
 iVar3 = (int)__dynamic_cast(piVar1,PTR_RTTIBase_typeinfo,PTR_RTTIDerivedA_typeinfo,0);
 iVar5 = (int)__dynamic_cast(piVar2,PTR_RTTIBase_typeinfo,PTR_RTTIDerivedB_typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 ((void (*)(void *))((void **)*piVar1)[1])(piVar1);
 ((void (*)(void *))((void **)*piVar2)[1])(piVar2);
 if (bVar8) {
 uVar7 = uVar7 | 0x14;
 }
 if (iVar3 != 0) {
 uVar7 = uVar7 + 100;
 }
 if (iVar5 != 0) {
 uVar7 = uVar7 + 200;
 }
 return uVar7 + sVar6;
}

// Function: test_cpp_oo_features @ 0x1136c
void test_cpp_oo_features(void)
{
 void **ppcVar1;
 size_t sVar2;
 void *pvVar3;
 unsigned int uVar4;
 int iVar5;
 int iVar6;
 void **local_40;
 void **local_3c [4];
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned short local_20;
 char local_1e;
 char local_1d;
 char **local_1c;
 puts("test");
 local_3c[0] = (void **)0x74736554;
 local_3c[1] = (void **)0x0;
 local_3c[2] = (void **)0x0;
 local_3c[3] = (void **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar6 = 0;
 local_1d = 0;
 local_40 = (void **)0xa;
 sVar2 = strlen((char *)local_3c);
 printf("%d",sVar2 + 0x125c);
 pvVar3 = operator_new__(0x14);
 iVar5 = 0;
 do {
 *(int *)((int)pvVar3 + iVar5 * -4) = iVar6;
 iVar6 = iVar6 + 10;
 iVar5 = iVar5 + -1;
 } while (iVar5 != -5);
 iVar5 = LifecycleClass_instance_count + 1;
 iVar6 = *(int *)((int)pvVar3 + 8);
 LifecycleClass_instance_count = iVar5;
 operator_delete__(pvVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf("%d",LifecycleClass_instance_count * 1000 + iVar6 + iVar5);
 local_1c = (char **)&PTR_virtual_func_00022cf0;
 local_3c[0] = (void **)0x3;
 local_40 = (void **)&PTR_virtual_func_00022d10;
 iVar5 = Base_virtual_func((Base *)&local_1c,5);
 iVar6 = ((int (*)(void *,int))(*local_40))(local_40,5);
 printf("%d",iVar5 + iVar6 + 0x15);
 local_3c[1] = (void **)&DAT_00022d4c;
 local_3c[2] = (void **)0xc8;
 local_3c[0] = (void **)0x64;
 local_40 = (void **)&PTR_funcA_00022d34;
 iVar5 = MultiDerived_funcB((MultiDerived *)(local_3c + 1));
 printf("%d",iVar5 + 0x1f);
 local_3c[3] = (void **)&DAT_00022df0;
 local_2c = 0x32;
 local_40 = (void **)&PTR_func_00022dbc;
 local_3c[1] = (void **)&PTR_func_00022dd4;
 iVar5 = DiamondDerived_func((DiamondDerived *)(local_3c + 3));
 ppcVar1 = local_3c[3];
 *(unsigned int *)((int)local_3c + (int)local_40[-3]) = 100;
 iVar6 = ((int (*)(void *))(*ppcVar1))(local_3c + 3);
 printf("%d",iVar6 + iVar5);
 printf("%d",0x16);
 printf("%d",0x27);
 printf("%d",0x10);
 printf("%d",0x55);
 test_cpp_exception();
 printf("%d",0);
 printf("%d",0x2bf);
 uVar4 = test_cpp_rtti();
 printf("%d",uVar4);
 return;
}

// Function: main @ 0x11648
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x1165c
int Base_virtual_func(Base *param_1,int param_2)
{
 return param_2 + 1;
}

// Function: Derived::virtual_func @ 0x11664
int Derived_virtual_func(Derived *param_1,int param_2)
{
 return *(int *)(param_1 + 4) * param_2;
}







// Function: template_max<int> @ 0x1167c
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11688
double template_max_double_(double param_1,double param_2)
{
 double extraout_d0;
 if (param_1 > param_2) {
  extraout_d0 = param_1;
 } else {
  extraout_d0 = param_2;
 }
 return extraout_d0;
}

// Function: template_swap<int> @ 0x116bc
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x116d0
void Container_int_Constructor(Container_int_ *param_1)
{
 *(unsigned int *)(param_1 + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x116dc
void Container_int_push(Container_int_ *param_1,int param_2)
{
 int iVar1;
 iVar1 = *(int *)(param_1 + 0x28);
 if (iVar1 < 10) {
 *(int *)(param_1 + 0x28) = iVar1 + 1;
 *(int *)(param_1 + iVar1 * 4) = param_2;
 }
 return;
}

// Function: Container<int>::get @ 0x116f4
unsigned int Container_int_get(Container_int_ *param_1,int param_2)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_2 < 0) {
 return uVar1;
 }
 if (param_2 < *(int *)(param_1 + 0x28)) {
 uVar1 = *(unsigned int *)(param_1 + param_2 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11714
unsigned int Container_int_getSize(Container_int_ *param_1)
{
 return *(unsigned int *)(param_1 + 0x28);
}

// Function: Container<double>::Container @ 0x1171c
void Container_double_Constructor(Container_double_ *param_1)
{
 *(unsigned int *)(param_1 + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11728
void Container_double_push(Container_double_ *param_1,double param_2)
{
 int iVar2;
 unsigned int *puVar1;
 iVar2 = *(int *)(param_1 + 0x50);
 if (9 < iVar2) {
 return;
 }
 puVar1 = (unsigned int *)(param_1 + iVar2 * 8);
 *puVar1 = 0;
 puVar1[1] = 0;
 *(int *)(param_1 + 0x50) = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x1174c
unsigned long long Container_double_get(Container_double_ *param_1,int param_2)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_2) {
 if (param_2 < *(int *)(param_1 + 0x50)) {
 uVar1 = *(unsigned int *)(param_1 + param_2 * 8);
 uVar2 = *(unsigned int *)((int)(param_1 + param_2 * 8) + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11778
unsigned int Container_double_getSize(Container_double_ *param_1)
{
 return *(unsigned int *)(param_1 + 0x50);
}

// Function: Base_getName @ 0x11780
char *Base_getName(void)
{
 return (char *)&DAT_00011c64;
}

// Function: Derived_getName @ 0x117a0
char *Derived_getName(void)
{
 return "Derived";
}









// Function: BaseA::funcA @ 0x11800
unsigned int BaseA_funcA(void)
{
 return 10;
}

// Function: BaseB::funcB @ 0x1181c
unsigned int BaseB_funcB(void)
{
 return 0x14;
}

// Function: MiddleA::func @ 0x11838
int MiddleA_func(MiddleA *param_1)
{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x118a4
int MiddleB_func(MiddleB *param_1)
{
 return *(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 4) + 200;
}

// Function: VirtualBase::func @ 0x119a8
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: RTTIDerivedA::getType @ 0x119d4
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x119f0
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x119f8
void _fini(void)
{
 return;
}

