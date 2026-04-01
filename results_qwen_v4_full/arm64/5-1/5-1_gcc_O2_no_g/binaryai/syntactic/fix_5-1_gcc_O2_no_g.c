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

// Calling convention macros
#define __thiscall

// Decompiled by BinaryAI
// SHA256: d64f3969c0f44f026bf6f0f3ba02a195c17afc8814e8da130296a2c793a2337c

// Type definitions for C++ classes
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Init Init;

// RTTI typeinfo structures
typedef struct typeinfo {
 void *vtable;
 char *name;
} typeinfo;

struct RTTIBase {
 typeinfo typeinfo_obj;
};

struct RTTIDerivedA {
 typeinfo typeinfo_obj;
};

struct RTTIDerivedB {
 typeinfo typeinfo_obj;
};

// Container_int_ struct: int array[10] + size at offset 0x28
typedef struct Container_int_ {
 int data[10];
 unsigned int size;
} Container_int_;

// Container_double_ struct: double array[10] + size at offset 0x50
typedef struct Container_double_ {
 double data[10];
 unsigned int size;
} Container_double_;

// MiddleA struct: vtable pointer + data members
typedef struct MiddleA {
 void *vtable;
 int data[5];
} MiddleA;

// MiddleB struct: vtable pointer + data members
typedef struct MiddleB {
 void *vtable;
 int data[5];
} MiddleB;

// DiamondDerived struct: vtable pointers + data members (diamond inheritance)
typedef struct DiamondDerived {
 void *vtable1;
 void *vtable2;
 int data[8];
} DiamondDerived;

// Forward declaration
void call_weak_fn(void);
void test_cpp_oo_features(void);
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

// Function: _init @ 0x100e90
int _init(void *ctx)
{
 int iVar1;
 iVar1 = (int)(uintptr_t)ctx;
 call_weak_fn();
 return iVar1;
}

// Function: FUN_00100eb0 @ 0x100eb0
void FUN_00100eb0(void)
{
 ((void (*)())0)();
 return;
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
void *__cxa_allocate_exception(unsigned long size)
{
 void *pvVar1;
 pvVar1 = __cxa_allocate_exception(size);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100f20
void __cxa_finalize(void *param_1)
{
 __cxa_finalize(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100f30
void __libc_start_main(void *main, void *argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end)
{
 __libc_start_main(main, argc, argv, init, fini, rtld_fini, stack_end);
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

// Function: <EXTERNAL>::__dynamic_cast @ 0x100f70
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int flags)
{
 return obj;
}

// Function: <EXTERNAL>::puts @ 0x101030
int puts(const char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100f80
void __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 __cxa_atexit(func, arg, dso_handle);
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
void std__ios_base__Init__Init(Init *this_)
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
void __cxa_throw(void *exception, void *typeinfo, void *dest)
{
 __cxa_throw(exception, typeinfo, dest);
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101000
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__printf_chk @ 0x101010
void __printf_chk(int __flag, const char *__format, ...)
{
 __printf_chk(__flag, __format);
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101020
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: test_cpp_exception @ 0x101040
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,0,0);
 return 0x2a;
}

// Function: main @ 0x101120
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Global variables
void *__dso_handle = 0;
void *__stack_chk_guard = 0;
void *std___ioinit = 0;
void *PTR__RTTIDerivedA_00112c28 = 0;
void *PTR__RTTIDerivedB_00112c50 = 0;

// RTTI global instances
struct RTTIBase RTTIBase_instance = {0};
struct RTTIDerivedA RTTIDerivedA_instance = {0};
struct RTTIDerivedB RTTIDerivedB_instance = {0};
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
char completed_0 = 0;

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101140
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std__ios_base__Init__Init((Init *)&std___ioinit);
 __cxa_atexit((void (*)())std__ios_base__Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101180
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack_ptr = 0;
 __libc_start_main((void *)main,(void *)param_9,&stack_ptr,0,0,(void *)param_1,0);
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
 __cxa_finalize(&__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x101240
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(&__dso_handle);
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
 local_8 = (long)__stack_chk_guard;
 __s = strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(__s);
 if ((long)local_8 - (long)__stack_chk_guard == 0) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Global variable for LifecycleClass
int LifecycleClass_instance_count = 0;

// Function: test_cpp_constructor @ 0x101310
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x101330
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(Base *, int))**(void **)param_1)(param_1, param_2);
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
 local_8 = (long)__stack_chk_guard;
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_10 = 10;
 iStack_c = 0x14;
 template_swap_int_(&local_10,&iStack_c);
 if (local_8 == (long)__stack_chk_guard) {
 return (unsigned int)(dVar2 + iVar1 + local_10 + iStack_c);
 }
 __stack_chk_fail();
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
 uintptr_t temp_addr;
 uintptr_t func_addr;
 iVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)(uintptr_t)PTR__RTTIDerivedA_00112c28;
 plVar4 = (long *)operator_new(8);
 lVar8 = *plVar3;
 temp_addr = *(uintptr_t *)((char *)(uintptr_t)lVar8 + -8);
 __s1 = *(char **)((char *)(uintptr_t)temp_addr + 8);
 *plVar4 = (long)(uintptr_t)PTR__RTTIDerivedB_00112c50;
 cVar1 = __s1 != 0 ? *__s1 : 0;
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 if ((iVar2 != 0) && (iVar7 = 0, cVar1 != '*')) {
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 lVar5 = (long)__dynamic_cast(plVar3, &RTTIBase_instance.typeinfo_obj, &RTTIDerivedA_instance.typeinfo_obj, 0);
 iVar2 = iVar7 + 0x78;
 if (lVar5 == 0) {
 iVar2 = iVar7 + 0x14;
 }
 lVar5 = (long)__dynamic_cast(plVar4, &RTTIBase_instance.typeinfo_obj, &RTTIDerivedB_instance.typeinfo_obj, 0);
 iVar7 = iVar2 + 200;
 if (lVar5 == 0) {
 iVar7 = iVar2;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 {
  long *temp_ptr1 = (long *)((char *)(uintptr_t)lVar8 + 8);
  func_addr = (uintptr_t)*temp_ptr1;
 }
 ((void (*)(long *))func_addr)(plVar3);
 {
  long lVar9 = *plVar4;
  long *temp_ptr2 = (long *)((char *)(uintptr_t)lVar9 + 8);
  func_addr = (uintptr_t)temp_ptr2[0];
 }
 ((void (*)(long *))func_addr)(plVar4);
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
 local_8 = (long)__stack_chk_guard;
 puts((char *)DAT_00101b10);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar2 = strlen(acStack_2c);
 __printf_chk(1,(char *)DAT_00101b38,(int)sVar2 + 0x125c);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,(char *)DAT_00101b58,uVar1);
 __printf_chk(1,(char *)DAT_00101b78,0x2a);
 __printf_chk(1,(char *)DAT_00101b98,0x47);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,(char *)DAT_00101bb8,uVar1);
 __printf_chk(1,(char *)DAT_00101bd8,0x16);
 test_cpp_template_func();
 __printf_chk(1,(char *)DAT_00101c18,0x10);
 __printf_chk(1,(char *)DAT_00101c38,0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,(char *)DAT_00101c58,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,(char *)DAT_00101c78,uVar1);
 uVar1 = test_cpp_rtti();
 if ((long)local_8 - (long)__stack_chk_guard == 0) {
 __printf_chk(1,(char *)DAT_00101c98);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x101740
int Base__virtual_func(Base *this_,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101750
unsigned char * Base__getName(void)
{
 return (unsigned char *)DAT_00101af8;
}

// Function: Base::~Base @ 0x101760
void Base__Base(Base *this_)
{
 return;
}

// Derived struct: vtable pointer + data members
typedef struct Derived {
 void *vtable;
 int data;
} Derived;

// Function: Derived::virtual_func @ 0x101770
int Derived__virtual_func(Derived *this_,int param_1)
{
 return param_1 * *(int *)(this_ + 8);
}

// Function: Derived::getName @ 0x101780
char * Derived__getName(void)
{
 return "Derived";
}

// MultiDerived struct: vtable pointer + data members (multiple inheritance)
typedef struct MultiDerived {
 void *vtable1;
 void *vtable2;
 int data[8];
} MultiDerived;

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
unsigned long long __thiscall MultiDerived_funcB(MultiDerived *this_)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x1017c0
int MiddleA__func(MiddleA *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)this_ + -0x18) + 8) + 0x96;
}

// Function: MiddleA__func_2 @ 0x1017e0
int MiddleA__func_2(MiddleA *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)(this_ + *(long *)(*(long *)this_ + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101810
int MiddleB__func(MiddleB *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)this_ + -0x18) + 8) + 200;
}

// Function: MiddleB__func_2 @ 0x101830
int MiddleB__func_2(MiddleB *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)(this_ + *(long *)(*(long *)this_ + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x101860
int DiamondDerived__func(DiamondDerived *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)this_ + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived__func_2 @ 0x101880
int DiamondDerived__func_2(DiamondDerived *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)(this_ + *(long *)(*(long *)this_ + -0x18)) + -0x18) +
 *(long *)(*(long *)this_ + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived__func_3 @ 0x1018a4
int DiamondDerived__func_3(DiamondDerived *this_)
{
 return *(int *)(this_ + *(long *)(*(long *)(this_ + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x1018c0
unsigned long long RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x1018d0
unsigned long long RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1018e0
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1018f0
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101900
void DiamondDerived__DiamondDerived_1(DiamondDerived *this_)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101904
void DiamondDerived__DiamondDerived_2(DiamondDerived *this_)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x101910
void DiamondDerived__DiamondDerived_3(DiamondDerived *this_)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101920
void MultiDerived__MultiDerived_1(MultiDerived *this_)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101924
void MultiDerived__MultiDerived_2(MultiDerived *this_)
{
 return;
}

// Function: Derived::~Derived @ 0x101930
void Derived__Derived(Derived *this_)
{
 return;
}

// Function: Base::~Base @ 0x101940
void Base__Base_2(Base *this_)
{
 operator_delete(this_,8);
 return;
}

// Function: Derived::~Derived @ 0x101950
void Derived__Derived_2(Derived *this_)
{
 operator_delete(this_,0x10);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101960
void MultiDerived__MultiDerived_3(MultiDerived *this_)
{
 operator_delete(this_,0x20);
 return;
}

// Function: MultiDerived__MultiDerived @ 0x101970
void MultiDerived__MultiDerived_4(MultiDerived *this_)
{
 operator_delete(this_ + -0x10,0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101980
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *this_)
{
 operator_delete(this_,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101990
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *this_)
{
 operator_delete(this_,8);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x1019a0
void DiamondDerived__DiamondDerived_4(DiamondDerived *this_)
{
 operator_delete(this_,0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x1019b0
void DiamondDerived__DiamondDerived_5(DiamondDerived *this_)
{
 operator_delete(this_ + *(long *)(*(long *)this_ + -0x20),0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x1019c4
void DiamondDerived__DiamondDerived_6(DiamondDerived *this_)
{
 operator_delete(this_ + -0x10,0x30);
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

// Function: Container_int__Container @ 0x101a10
void Container_int__Container(Container_int_ *this_)
{
 *(unsigned int *)(this_ + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x101a20
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

// Function: Container_int__get @ 0x101a40
unsigned int Container_int__get(Container_int_ *this_,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ + 0x28))) {
 return *(unsigned int *)(this_ + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container_int__getSize @ 0x101a70
unsigned int Container_int__getSize(Container_int_ *this_)
{
 return *(unsigned int *)(this_ + 0x28);
}

// Function: Container_double__Container @ 0x101a80
void Container_double__Container(Container_double_ *this_)
{
 *(unsigned int *)(this_ + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x101a90
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

// Function: Container_double__get @ 0x101ab0
unsigned long long Container_double__get(Container_double_ *this_,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ + 0x50))) {
 return *(unsigned long long *)(this_ + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container_double__getSize @ 0x101ad0
unsigned int Container_double__getSize(Container_double_ *this_)
{
 return *(unsigned int *)(this_ + 0x50);
}

// Function: _fini @ 0x101ad8
void _fini(void)
{
 return;
}

