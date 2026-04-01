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

// RTTI struct definitions
struct RTTIBase {
 void *typeinfo;
};

struct RTTIDerivedA {
 void *typeinfo;
};

struct RTTIDerivedB {
 void *typeinfo;
};

// Struct definitions
struct Base {
 void *vtable;
};

struct Derived {
 void *vtable;
 int data;
};

struct MiddleA {
 void *vtable;
 char padding[0x18];
 int data;
};

struct MiddleB {
 void *vtable;
 char padding[0x18];
 int data;
};

struct DiamondDerived {
 MiddleA middleA;
 MiddleB middleB;
 char padding[0x10];
};

struct Container_int_ {
 int data[10];
 unsigned int size;
 char padding[0x14];
};

struct Container_double_ {
 double data[10];
 unsigned int size;
 char padding[0x18];
};

// Global variables for stack protection
long ___stack_chk_guard;
long __stack_chk_guard;

// Global variables for C++ runtime
void *__dso_handle;
void *std___ioinit;

// Global variable for completion flag
char completed_0;

// Global pointer variables
char *PTR_func_001138e0;
char *PTR_func_00113918;
char *PTR_func_00113958;
char *PTR_func_00113990;
char *PTR_func_00113ac8;
char *PTR_func_00113af8;
char *PTR_func_00113b30;
char *PTR_virtual_func_00113868;
char *PTR_virtual_func_00113898;
void *PTR__RTTIDerivedA_00113b58;
void *PTR__RTTIDerivedB_00113b80;
void *RTTIDerivedA_typeinfo;
void *RTTIDerivedB_typeinfo;

// Decompiled by BinaryAI
// SHA256: 7e572efce9a9d351dd239448e317e9135c09e459c23cd8ad6c44e7afba2f2b9b

// Function: call_weak_fn - forward declaration
int call_weak_fn(int ctx);

// Function: _init @ 0x101638
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)(uintptr_t)ctx);
 return iVar1;
}

// Function: FUN_00101650 @ 0x101650
void FUN_00101650(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101670
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x101680
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x101690
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1016a0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1016b0
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1016c0
void *__cxa_allocate_exception(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = __cxa_allocate_exception(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1016d0
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1016e0
void __libc_start_main(void *main_fn,unsigned long long param_2,void *stack_ptr,void *param_4,void *param_5,unsigned long long param_6)
{
 __libc_start_main(main_fn,param_2,stack_ptr,param_4,param_5,param_6);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1016f0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x101700
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x101710
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x101720
void *__dynamic_cast(void *param_1,int param_2,void *param_3,int param_4)
{
 void *pvVar1;
 pvVar1 = __dynamic_cast(param_1,param_2,param_3,param_4);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101730
void __cxa_atexit(void (*param_1)(void *),void *param_2,void *param_3)
{
 __cxa_atexit(param_1,param_2,param_3);
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101740
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x101750
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101760
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101770
void std_ios_base_Init_Init(Init *this_)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x101780
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101790
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1017a0
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1017b0
void __cxa_throw(void *param_1,void *param_2,void *param_3)
{
 __cxa_throw(param_1,param_2,param_3);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x1017c0
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__printf_chk @ 0x1017d0
int __printf_chk(int __flag, char *__format, ...)
{
 int iVar1;
 iVar1 = __printf_chk(__flag, __format);
 return iVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1017e0
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: test_cpp_exception @ 0x101800
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
}

// Forward declarations
void test_cpp_oo_features(void);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void Container_int__push(Container_int_ *this_,int param_1);
int DiamondDerived_func(DiamondDerived *this_);
void DiamondDerived__DiamondDerived(DiamondDerived *this_);
void MiddleA__MiddleA(MiddleA *this_);
void MiddleB__MiddleB(MiddleB *this_);
void unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_);
void unique_ptr_int___std__default_delete_int_____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_);

// Function: main @ 0x1018d0
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x1018e8
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init_Init,&__dso_handle,(void *)0);
 return;
}

// Function: _start @ 0x101940
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack_ptr = (void *)0x8;
 __libc_start_main((void *)main,param_9,stack_ptr,0,0,param_1);
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
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
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
 return 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101ad8
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(Base *,int))(**(void ***)param_1))(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101ae8
void test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 char **local_20;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = &PTR_virtual_func_00113868;
 local_18 = &PTR_virtual_func_00113898;
 local_10 = 3;
 iVar1 = call_virtual_func((Base *)&local_20,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
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
 Container_int__push((Container_int_ *)local_38,0x14);
 Container_int__push((Container_int_ *)local_38,0x1e);
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
 lVar8 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 cVar1 = *__s1;
 if (__s1 == "12RTTIDerivedA") {
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
  lVar5 = (long)__dynamic_cast(plVar3,0,RTTIDerivedA_typeinfo,0);
  if (lVar5 != 0) {
   iVar2 = iVar7 + 0x78;
  }
  lVar5 = (long)__dynamic_cast(plVar4,0,RTTIDerivedB_typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
  sVar6 = strlen(__s1);
  operator_delete(plVar3,8);
  operator_delete(plVar4,8);
  iVar2 = iVar2 + (int)sVar6;
  return iVar2;
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
 unique_ptr_int___std__default_delete_int_____unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)&local_10);
 unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&puStack_18);
 unique_ptr_int_std__default_delete_int____unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_20);
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
 char **local_38 [2];
 char **local_28;
 char **local_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38[0] = &PTR_func_00113ac8;
 local_18 = &PTR_func_00113b30;
 local_28 = &PTR_func_00113af8;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_10 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_18);
 DiamondDerived__DiamondDerived((DiamondDerived *)local_38);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x101fa0
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
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
 puts(&DAT_001025b2);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,uVar1);
 test_cpp_virtual_func();
 __printf_chk(1,&DAT_00102610,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,uVar1);
 test_cpp_template_func();
 __printf_chk(1,&DAT_00102681,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,uVar1);
 test_cpp_exception();
 __printf_chk(1,&DAT_001026d5,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,uVar1);
 return;
}

// Function: Base::virtual_func @ 0x1020d8
int Base_virtual_func(Base *this_,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1020e0
char * Base_getName(void)
{
 extern char DAT_001025a0;
 return &DAT_001025a0;
}

// Function: Base::~Base @ 0x1020ec
void Base__Base(Base *this_)
{
 return;
}

// Function: Derived::virtual_func @ 0x1020f0
int Derived_virtual_func(Derived *this_,int param_1)
{
 return param_1 * *(int *)(this_ + 8);
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
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x102118
unsigned long long MultiDerived_funcB_thiscall(MultiDerived *this_)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x102120
unsigned long long VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x102128
void VirtualBase__VirtualBase(VirtualBase *this_)
{
 return;
}

// Function: MiddleA::func @ 0x10212c
int MiddleA_func(MiddleA *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)this_ + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x102144
void MiddleA_func_thiscall(MiddleA *this_)
{
 MiddleA_func(this_ + *(long *)(*(long *)this_ + -0x18));
 return;
}

// Function: MiddleB::func @ 0x102154
int MiddleB_func(MiddleB *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)this_ + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x10216c
void MiddleB_func_thiscall(MiddleB *this_)
{
 MiddleB_func(this_ + *(long *)(*(long *)this_ + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x10217c
int DiamondDerived_func(DiamondDerived *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)this_ + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102194
void DiamondDerived_func_thiscall(DiamondDerived *this_)
{
 DiamondDerived_func(this_ + *(long *)(*(long *)this_ + -0x18));
 return;
}

// Function: DiamondDerived::func @ 0x1021a4
void DiamondDerived_func_thiscall2(DiamondDerived *this_)
{
 DiamondDerived_func(this_ + -0x10);
 return;
}

// Function: MiddleA::~MiddleA @ 0x1021ac
void MiddleA__MiddleA(MiddleA *this_)
{
 *(char ***)this_ = &PTR_func_001138e0;
 *(char ***)(this_ + 0x10) = &PTR_func_00113918;
 return;
}

// Function: MiddleA::~MiddleA @ 0x1021c8
void MiddleA__MiddleA_thiscall(MiddleA *this_)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)this_ + -0x20);
 *(char ***)(this_ + lVar1) = &PTR_func_001138e0;
 *(char ***)(this_ + lVar1 + 0x10) = &PTR_func_00113918;
 return;
}

// Function: MiddleB::~MiddleB @ 0x1021f0
void MiddleB__MiddleB(MiddleB *this_)
{
 *(char ***)this_ = &PTR_func_00113958;
 *(char ***)(this_ + 0x10) = &PTR_func_00113990;
 return;
}

// Function: MiddleB::~MiddleB @ 0x10220c
void MiddleB__MiddleB_thiscall(MiddleB *this_)
{
 long lVar1;
 lVar1 = *(long *)(*(long *)this_ + -0x20);
 *(char ***)(this_ + lVar1) = &PTR_func_00113958;
 *(char ***)(this_ + lVar1 + 0x10) = &PTR_func_00113990;
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
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102248
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x10224c
void MultiDerived__MultiDerived(MultiDerived *this_)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102250
void MultiDerived__MultiDerived_thiscall(MultiDerived *this_)
{
 return;
}

// Function: Derived::~Derived @ 0x102254
void Derived__Derived(Derived *this_)
{
 return;
}

// Function: Base::~Base @ 0x102258
void Base__Base_destructor(Base *this_)
{
 operator_delete(this_,8);
 return;
}

// Function: Derived::~Derived @ 0x102260
void Derived__Derived_destructor(Derived *this_)
{
 operator_delete(this_,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102268
void MultiDerived__MultiDerived_destructor(MultiDerived *this_)
{
 operator_delete(this_,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102270
void MultiDerived__MultiDerived_destructor2(MultiDerived *this_)
{
 MultiDerived__MultiDerived((MultiDerived *)((char *)this_ + -0x10));
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x102278
void VirtualBase__VirtualBase_destructor(VirtualBase *this_)
{
 operator_delete(this_,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102280
void RTTIDerivedB__RTTIDerivedB_destructor(RTTIDerivedB *this_)
{
 operator_delete(this_,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102288
void RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *this_)
{
 operator_delete(this_,8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x102290
void MiddleA__MiddleA_destructor(MiddleA *this_)
{
 *(char ***)this_ = &PTR_func_001138e0;
 *(char ***)(this_ + 0x10) = &PTR_func_00113918;
 operator_delete(this_,0x20);
 return;
}

// Function: MiddleA::~MiddleA @ 0x1022b0
void MiddleA__MiddleA_destructor2(MiddleA *this_)
{
 MiddleA__MiddleA(this_ + *(long *)(*(long *)this_ + -0x20));
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022c0
void MiddleB__MiddleB_destructor(MiddleB *this_)
{
 *(char ***)this_ = &PTR_func_00113958;
 *(char ***)(this_ + 0x10) = &PTR_func_00113990;
 operator_delete(this_,0x20);
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022e0
void MiddleB__MiddleB_destructor2(MiddleB *this_)
{
 MiddleB__MiddleB(this_ + *(long *)(*(long *)this_ + -0x20));
 return;
}

// Function: MiddleA::~MiddleA @ 0x1022f0
void MiddleA__MiddleA_destructor3(MiddleA *this_)
{
 int in_w1;
 char **ppuVar1;
 unsigned long long *in_x2;
 char *puVar2;
 char **ppuVar3;
 if (in_w1 == 0) {
 ppuVar3 = (char **)*in_x2;
 }
 else {
 ppuVar3 = (char **)&PTR_func_001138e0;
 }
 *(char ***)this_ = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (char **)in_x2[1];
 puVar2 = ppuVar3[-3];
 }
 else {
 puVar2 = (char *)0x10;
 ppuVar1 = (char **)&PTR_func_00113918;
 }
 *(char ***)((char *)this_ + (uintptr_t)puVar2) = ppuVar1;
 return;
}

// Function: MiddleA::~MiddleA @ 0x10232c
void MiddleA__MiddleA_destructor4(MiddleA *this_)
{
 MiddleA__MiddleA(this_);
 return;
}

// Function: MiddleB::~MiddleB @ 0x102338
void MiddleB__MiddleB_destructor3(MiddleB *this_)
{
 int in_w1;
 char **ppuVar1;
 unsigned long long *in_x2;
 char *puVar2;
 char **ppuVar3;
 if (in_w1 == 0) {
 ppuVar3 = (char **)*in_x2;
 }
 else {
 ppuVar3 = (char **)&PTR_func_00113958;
 }
 *(char ***)this_ = ppuVar3;
 if (in_w1 == 0) {
 ppuVar1 = (char **)in_x2[1];
 puVar2 = ppuVar3[-3];
 }
 else {
 puVar2 = (char *)0x10;
 ppuVar1 = (char **)&PTR_func_00113990;
 }
 *(char ***)((char *)this_ + (uintptr_t)puVar2) = ppuVar1;
 return;
}

// Function: MiddleB::~MiddleB @ 0x102374
void MiddleB__MiddleB_destructor4(MiddleB *this_)
{
 MiddleB__MiddleB(this_);
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

// Function: Container_int_::Container @ 0x1023ac
void Container_int__Container(Container_int_ *this_)
{
 *(unsigned int *)(this_ + 0x28) = 0;
 return;
}

// Function: Container_int_::push @ 0x1023b4
void Container_int__push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ + 0x28) = iVar1 + 1;
 *(int *)(this_ + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_::get @ 0x1023d0
unsigned int Container_int__get(Container_int_ *this_,int param_1)
{
 unsigned int uVar1;
 if ((param_1 < 0) || (*(int *)(this_ + 0x28) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned int *)(this_ + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int_::getSize @ 0x1023f0
unsigned int Container_int__getSize(Container_int_ *this_)
{
 return *(unsigned int *)(this_ + 0x28);
}

// Function: Container_double_::Container @ 0x1023f8
void Container_double__Container(Container_double_ *this_)
{
 *(unsigned int *)(this_ + 0x50) = 0;
 return;
}

// Function: Container_double_::push @ 0x102400
void Container_double__push(Container_double_ *this_,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ + 0x50) = iVar1 + 1;
 *(double *)(this_ + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_::get @ 0x10241c
unsigned long long Container_double__get(Container_double_ *this_,int param_1)
{
 unsigned long long uVar1;
 if ((param_1 < 0) || (*(int *)(this_ + 0x50) <= param_1)) {
 uVar1 = 0;
 }
 else {
 uVar1 = *(unsigned long long *)(this_ + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double_::getSize @ 0x10243c
unsigned int Container_double__getSize(Container_double_ *this_)
{
 return *(unsigned int *)(this_ + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x102444
void unique_ptr_int_std__default_delete_int____unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this_)
{
 if (*(void **)this_ != (void *)0x0) {
 operator_delete(*(void **)this_,4);
 }
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x102458
void unique_ptr_int___std__default_delete_int_____unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this_)
{
 if (*(void **)this_ != (void *)0x0) {
 operator_delete__(*(void **)this_);
 }
}

// Function: DiamondDerived::~DiamondDerived @ 0x102468
void DiamondDerived__DiamondDerived(DiamondDerived *this_)
{
 char **ppuVar1;
 char *puVar2;
 int in_w1;
 unsigned long long *in_x2;
 if (in_w1 == 0) {
 ppuVar1 = (char **)*in_x2;
 }
 else {
 ppuVar1 = (char **)&PTR_func_00113ac8;
 }
 *(char ***)this_ = ppuVar1;
 if (in_w1 == 0) {
 puVar2 = ppuVar1[-3];
 ppuVar1 = (char **)in_x2[5];
 }
 else {
 puVar2 = (char *)0x20;
 ppuVar1 = (char **)&PTR_func_00113b30;
 }
 *(char ***)((char *)this_ + (uintptr_t)puVar2) = ppuVar1;
 if (in_w1 == 0) {
 ppuVar1 = (char **)in_x2[6];
 }
 else {
 ppuVar1 = (char **)&PTR_func_00113af8;
 }
 *(char ***)((char *)this_ + 0x10) = ppuVar1;
  MiddleB__MiddleB((MiddleB *)((char *)this_ + 0x10));
  MiddleA__MiddleA((MiddleA *)this_);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102518
void DiamondDerived__DiamondDerived2(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102524
void DiamondDerived__DiamondDerived3(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_ + -0x10);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10252c
void DiamondDerived__DiamondDerived4(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_ + *(long *)(*(long *)this_ + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10253c
void DiamondDerived__DiamondDerived5(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_);
 operator_delete(this_,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102564
void DiamondDerived__DiamondDerived6(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_ + -0x10);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10256c
void DiamondDerived__DiamondDerived7(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_ + *(long *)(*(long *)this_ + -0x20));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x10257c
void DiamondDerived__DiamondDerived8(DiamondDerived *this_)
{
 DiamondDerived__DiamondDerived(this_);
 return;
}

// Function: _fini @ 0x102588
void _fini(void)
{
 return;
}

