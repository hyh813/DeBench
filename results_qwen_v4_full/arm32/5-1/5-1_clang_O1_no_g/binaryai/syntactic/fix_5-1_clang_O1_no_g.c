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

// External symbols from decompilation
extern void *stack0x00000004;
extern void __gmon_start__(void);
extern void *PTR_virtual_func_00022cf0;
extern void *PTR_virtual_func_00022d10;
extern void *DAT_00022d4c;
extern void *DAT_00022df0;
extern void *PTR__RTTIBase_00022ed8;
extern void *PTR__RTTIBase_00022eec;
extern char DAT_00011c71;
extern char DAT_00011b0d;
extern char DAT_00011b2b;
extern char DAT_00011b47;
extern char DAT_00011b63;
extern char DAT_00011b7f;
extern char DAT_00011b9c;
extern char DAT_00011bb8;
extern char DAT_00011bd4;
extern char DAT_00011bf0;
extern char DAT_00011c0c;
extern char DAT_00011c29;
extern char DAT_00011c46;
extern char DAT_00011c64;
extern void *PTR_funcA_00022d34;
extern void *PTR_func_00022dbc;
extern void *PTR_func_00022dd4;

// Forward declarations for C++ classes
struct MultiDerived;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Base;
struct Derived;
struct Container_int_;
struct Container_double_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// RTTI typeinfo declarations
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

// Function forward declarations
int Base_virtual_func(Base *this_ptr, int param_1);
unsigned int MultiDerived_funcA(void);
unsigned int MultiDerived_funcB(MultiDerived *this);
int DiamondDerived_func(DiamondDerived *this);
void test_cpp_oo_features(void);

// Decompiled by BinaryAI
// SHA256: 77e35323010a14117418c4aee6a0b640089759629ae1f42e6a51e6f3926abdb7

// Function: _init @ 0x10b84
int call_weak_fn(void);
int _init(void)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10ba4
extern void *malloc(size_t size);
void * operator_new(uint param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10bb0
void __cxa_begin_catch(void *exc)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10bbc
void *__cxa_allocate_exception(size_t size)
{
 void *pvVar1;
 pvVar1 = malloc(size);
 return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x10bc8
extern int printf(const char *__format, ...);
int printf_wrapper(const char *__format, int arg)
{
 int iVar1;
 iVar1 = printf(__format, arg);
 return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x10bd4
extern int puts(const char *__s);
int puts_wrapper(const char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10be0
extern int __libc_start_main(int (*main)(int, char **), int argc, char **ubp_start, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end);
int __libc_start_main_wrapper(int (*main)(int, char **), int argc, char **ubp_start, void (*init)(void), void (*fini)(void), void *rtld_fini, void *stack_end)
{
 (void)main;
 (void)argc;
 (void)ubp_start;
 (void)init;
 (void)fini;
 (void)rtld_fini;
 (void)stack_end;
 return 0;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10bec
void * operator_new__(uint param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10bf8
extern void abort(void);
void abort_wrapper(void)
{
 abort();
}

// Function: <EXTERNAL>::operator.delete @ 0x10c04
extern void free(void *ptr);
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10c10
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10c1c
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src_ptrtype)
{
 return src;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x10c28
void __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10c34
void operator_delete__(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10c40
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x10c4c
extern size_t strlen(const char *__s);
size_t strlen_wrapper(const char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10c58
void std_ios_base_Init_Init(void *this)
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
extern int strcmp(const char *__s1, const char *__s2);
int strcmp_wrapper(const char *__s1,const char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10c88
void __cxa_throw(void *exc, void *tinfo, void *dest)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10c94
int __aeabi_dcmpgt(double a, double b)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x10cac
void __cxa_finalize(void *d)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10cb8
void *__dso_handle;
void *std___ioinit;
void std___ioinit_Init(void)
{
 return;
}
void std___ioinit__Init(void)
{
 return;
}
int completed_0;
struct LifecycleClass { int instance_count; };
int LifecycleClass_instance_count;
int main(void);
struct Base;
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std___ioinit_Init();
 __cxa_atexit((void (*)(void))std___ioinit__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x10cf8
void _fini(void);
int main_wrapper(int argc, char **argv);
void _start(void)
{
 __libc_start_main_wrapper((int (*)(int, char **))main_wrapper, 1, 0, _init, _fini, 0, 0);
 abort();
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
void call_virtual_func(void *param_1,int param_2)
{
 void *vfunc = *(void **)param_1;
 ((void (*)(void *, int))vfunc)(param_1, param_2);
 return;
}

// Function: main_wrapper @ 0x10cf8
int main_wrapper(int argc, char **argv)
{
 (void)argc;
 (void)argv;
 test_cpp_oo_features();
 return 0;
}

// Function: test_cpp_virtual_func @ 0x10f64
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 void **local_c;
 local_c = (void **)&PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = (void **)&PTR_virtual_func_00022d10;
 iVar1 = Base_virtual_func((Base *)local_c, 5);
 iVar2 = ((int (*)(void **, int))(*local_14))(local_14, 5);
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
 iVar2 = ((int (*)(void **))(*local_18))(local_18);
 return iVar1 + iVar2 + 1;
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
 iVar1 = DiamondDerived_func((DiamondDerived *)local_18);
 local_14 = 100;
 iVar2 = ((int (*)(void **))(*local_18))(local_18);
 return iVar2 + iVar1;
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
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
 return 0x2a;
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
 *piVar1 = (int)(uintptr_t)&PTR__RTTIBase_00022ed8;
 piVar2 = (int *)operator_new(4);
 uVar7 = 0;
 *piVar2 = 0;
 *piVar2 = (int)(uintptr_t)&PTR__RTTIBase_00022eec;
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
 iVar3 = (int)__dynamic_cast(piVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar5 = (int)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 (*(void (*)(int *))(*piVar1 + 4))(piVar1);
 (*(void (*)(int *))(*piVar2 + 4))(piVar2);
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
 void *local_3c [4];
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned short local_20;
 char local_1e;
 char local_1d;
 void **local_1c;
 puts(&DAT_00011c71);
 local_3c[0] = (void *)0x74736554;
 local_3c[1] = (void *)0x0;
 local_3c[2] = (void *)0x0;
 local_3c[3] = (void *)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar6 = 0;
 local_1d = 0;
 local_40 = (void **)0xa;
 sVar2 = strlen((char *)local_3c);
 printf(&DAT_00011b0d,sVar2 + 0x125c);
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
 printf(&DAT_00011b2b,LifecycleClass_instance_count * 1000 + iVar6 + iVar5);
  local_1c = (void **)&PTR_virtual_func_00022cf0;
  local_3c[0] = (void *)0x3;
  local_40 = (void **)&PTR_virtual_func_00022d10;
  iVar5 = Base_virtual_func((Base *)local_1c, 5);
  iVar6 = ((int (*)(void **, int))(*local_40))(local_40, 5);
 printf(&DAT_00011b47,iVar5 + iVar6 + 0x15);
 local_3c[1] = (void *)DAT_00022d4c;
 local_3c[2] = (void *)0xc8;
 local_3c[0] = (void *)0x64;
 local_40 = (void **)&PTR_funcA_00022d34;
 iVar5 = MultiDerived_funcB((MultiDerived *)(local_3c + 1));
 printf(&DAT_00011b63,iVar5 + 0x1f);
 local_3c[3] = (void *)DAT_00022df0;
 local_2c = 0x32;
 local_40 = (void **)&PTR_func_00022dbc;
 local_3c[1] = (void *)PTR_func_00022dd4;
 iVar5 = DiamondDerived_func((DiamondDerived *)(local_3c + 3));
 ppcVar1 = (void **)local_3c[3];
 *(unsigned int *)((int)local_3c + (int)(intptr_t)local_40[-3]) = 100;
 iVar6 = ((int (*)(void **))(*ppcVar1))(local_3c + 3);
 printf(&DAT_00011b7f,iVar6 + iVar5);
 printf(&DAT_00011b9c,0x16);
 printf(&DAT_00011bb8,0x27);
 printf(&DAT_00011bd4,0x10);
 printf(&DAT_00011bf0,0x55);
 uVar4 = test_cpp_exception();
 printf(&DAT_00011c0c,uVar4);
 printf(&DAT_00011c29,0x2bf);
 uVar4 = test_cpp_rtti();
 printf(&DAT_00011c46,uVar4);
 return;
}



// Function: Base::virtual_func @ 0x1165c
struct Base { void **vtable; };
int Base_virtual_func(Base *this_ptr,int param_1)
{
 (void)this_ptr;
 (void)param_1;
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11664
struct Derived { void **vtable; int value; };
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 (void)this_ptr;
 (void)param_1;
 return param_1;
}

// Function: Base::~Base @ 0x11670
void Base__Base(struct Base *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11674
void MultiDerived__MultiDerived(struct MultiDerived *this)
{
 (void)this;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11678
void DiamondDerived__DiamondDerived(struct DiamondDerived *this)
{
 (void)this;
 return;
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
 if (__aeabi_dcmpgt(param_1, param_2)) {
  return param_1;
 }
 return param_2;
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

// Function: Container_int::Container @ 0x116d0
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)((int)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x116dc
void Container_int__push(struct Container_int_ *this, int param_1)
{
 int iVar1;
 iVar1 = *(int *)((int)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((int)this + 0x28) = iVar1 + 1;
 *(int *)((int)this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x116f4
unsigned int Container_int__get(struct Container_int_ *this, int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < *(int *)((int)this + 0x28)) {
 uVar1 = *(unsigned int *)((int)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11714
unsigned int Container_int__getSize(struct Container_int_ *this)
{
 return *(unsigned int *)((int)this + 0x28);
}

// Function: Container_double::Container @ 0x1171c
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((int)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11728
void Container_double__push(struct Container_double_ *this, double param_1)
{
 int iVar2;
 iVar2 = *(int *)((int)this + 0x50);
 if (iVar2 < 10) {
 *(double *)((int)this + iVar2 * 8) = param_1;
 *(int *)((int)this + 0x50) = iVar2 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x1174c
unsigned long long Container_double__get(struct Container_double_ *this, int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar2 = 0;
 uVar1 = 0;
 if (param_1 > -1) {
 if (param_1 < *(int *)((int)this + 0x50)) {
 uVar1 = *(unsigned int *)((int)this + param_1 * 8);
 uVar2 = *(unsigned int *)((int)this + param_1 * 8 + 4);
 }
 return ((unsigned long long)uVar2 << 32) | uVar1;
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11778
unsigned int Container_double__getSize(struct Container_double_ *this)
{
 return *(unsigned int *)((int)this + 0x50);
}

// Function: Base::getName @ 0x11780
char * Base_getName(struct Base *this_ptr)
{
 (void)this_ptr;
 return &DAT_00011c64;
}

// Function: Base::~Base @ 0x11790
void Base__Base(struct Base *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: Derived::getName @ 0x117a0
char * Derived_getName(struct Derived *this_ptr)
{
 (void)this_ptr;
 return "Derived";
}

// Function: Derived::~Derived @ 0x117b0
void Derived__Derived(struct Derived *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MultiDerived::funcA @ 0x117c0
struct MultiDerived { void **vtable; };
unsigned int MultiDerived_funcA(MultiDerived *param_1)
{
 (void)param_1;
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x117c8
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: MultiDerived::funcB @ 0x117d8
unsigned int MultiDerived_funcB_wrapper(MultiDerived *param_1)
{
 (void)param_1;
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x117e0
unsigned int MultiDerived_funcB(MultiDerived *param_1)
{
 (void)param_1;
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x117e8
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x117ec
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 (void)this_ptr;
 operator_delete((void *)((int)this_ptr + -8));
 return;
}

// Function: BaseA::funcA @ 0x11800
unsigned int BaseA_funcA(BaseA *this_ptr)
{
 (void)this_ptr;
 return 10;
}

// Function: BaseA::~BaseA @ 0x11808
void BaseA__BaseA(BaseA *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: BaseA::~BaseA @ 0x1180c
void BaseA__BaseA(BaseA *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: BaseB::funcB @ 0x1181c
unsigned int BaseB_funcB(BaseB *this_ptr)
{
 (void)this_ptr;
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x11824
void BaseB__BaseB(BaseB *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: BaseB::~BaseB @ 0x11828
void BaseB__BaseB(BaseB *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: MiddleA::func @ 0x11838
int MiddleA_func(MiddleA *this_ptr)
{
 (void)this_ptr;
 return 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11850
void MiddleA__MiddleA(MiddleA *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MiddleA::~MiddleA @ 0x11854
void MiddleA__MiddleA(MiddleA *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: MiddleA::func @ 0x11864
int MiddleA_func(MiddleA *this_ptr)
{
 (void)this_ptr;
 return 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11884
void MiddleA__MiddleA(MiddleA *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MiddleA::~MiddleA @ 0x11888
void MiddleA__MiddleA(MiddleA *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: MiddleB::func @ 0x118a4
int MiddleB_func(MiddleB *this_ptr)
{
 (void)this_ptr;
 return 200;
}

// Function: MiddleB::~MiddleB @ 0x118bc
void MiddleB__MiddleB(MiddleB *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MiddleB::~MiddleB @ 0x118c0
void MiddleB__MiddleB(MiddleB *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: MiddleB::func @ 0x118d0
int MiddleB_func(MiddleB *this_ptr)
{
 (void)this_ptr;
 return 200;
}

// Function: MiddleB::~MiddleB @ 0x118f0
void MiddleB__MiddleB(MiddleB *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MiddleB::~MiddleB @ 0x118f4
void MiddleB__MiddleB(MiddleB *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: DiamondDerived::func @ 0x11910
struct DiamondDerived { void **vtable; };
int DiamondDerived_func(DiamondDerived *this)
{
 (void)this;
 return 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11928
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 (void)this;
 operator_delete(this);
 return;
}

// Function: DiamondDerived::func @ 0x11938
int DiamondDerived_func(DiamondDerived *this)
{
 (void)this;
 return 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11950
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 (void)this;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11954
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 (void)this;
 operator_delete((void *)((int)this + -8));
 return;
}

// Function: DiamondDerived::func @ 0x11968
int DiamondDerived_func(DiamondDerived *this)
{
 (void)this;
 return 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11988
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 (void)this;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1198c
void DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 (void)this;
 operator_delete(this);
 return;
}

// Function: VirtualBase::func @ 0x119a8
unsigned int VirtualBase_func(VirtualBase *this_ptr)
{
 (void)this_ptr;
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x119b0
void VirtualBase__VirtualBase(VirtualBase *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x119b4
void VirtualBase__VirtualBase(VirtualBase *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x119c4
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedA::getType @ 0x119d4
unsigned int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)
{
 (void)this_ptr;
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x119dc
void RTTIBase__RTTIBase(RTTIBase *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x119e0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 (void)this_ptr;
 operator_delete(this_ptr);
 return;
}

// Function: RTTIDerivedB::getType @ 0x119f0
unsigned int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)
{
 (void)this_ptr;
 return 2;
}

// Function: _fini @ 0x119f8
void _fini(void)
{
 return;
}

