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
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Init Init;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

struct type_info {
 char *name;
};

// Global typeinfo variables
static type_info RTTIBase_typeinfo;
static type_info RTTIDerivedA_typeinfo;
static type_info RTTIDerivedB_typeinfo;

// Struct definitions for C++ classes
struct Base {
 void *vtable;
};

struct Derived {
 void *vtable;
 int value;
};

struct MultiDerived {
 void *vtable;
 int valueA;
 int valueB;
};

struct MiddleA {
 void *vtable;
 int value;
};

struct MiddleB {
 void *vtable;
 int value;
};

struct DiamondDerived {
 void *vtable;
 int value;
 int padding[5];
};

struct RTTIDerivedA {
 void *vtable;
};

struct RTTIDerivedB {
 void *vtable;
};

struct RTTIBase {
 void *vtable;
};

struct Container_int_ {
 int data[10];
 unsigned int size;
};

struct Container_double_ {
 double data[10];
 unsigned int size;
};

struct Init {
 int dummy;
};

struct LifecycleClass {
 static int instance_count;
};

int LifecycleClass::instance_count = 0;

// Decompiled by BinaryAI
// SHA256: 2fe63e63c0b1898b82d05f8607ec83b83a6a5e3ac53489d6b02ada9a63ab6597

// Forward declaration
void call_weak_fn(void);

// Function: _init @ 0x10920
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x10940
void * operator_new(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
void *__cxa_allocate_exception(size_t param_1)
{
 void *pvVar1;
 pvVar1 = __cxa_allocate_exception(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x10970
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1097c
void operator_delete(void *param_1,unsigned int param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
void __libc_start_main(int (*main)(int, char **, char **), int argc, void *argv, void (*init)(void), void (*fini)(void), void *stack)
{
 __libc_start_main(main, argc, argv, init, fini, stack);
 return;
}

// Function: <EXTERNAL>::abort @ 0x10994
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
int std_type_info_operator__(type_info *this_ptr,type_info *param_1)
{
 return (this_ptr->name == param_1->name);
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
void __cxa_end_cleanup(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
void *__dynamic_cast(void *param_1,void *param_2,void *param_3,int param_4)
{
 void *pvVar1;
 pvVar1 = __dynamic_cast(param_1,param_2,param_3,param_4);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x109dc
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x109e8
void std_ios_base_Init_Init(Init *this_ptr)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
void __aeabi_d2iz(void)
{
 __aeabi_d2iz();
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10a18
void __cxa_throw(void *param_1,void *param_2,void *param_3)
{
 __cxa_throw(param_1,param_2,param_3);
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
void __aeabi_dcmpgt(void)
{
 __aeabi_dcmpgt();
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x10a30
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10a48
int __printf_chk(int flag, const char *format)
{
 return 0;
}

// Forward declarations
void __gmon_start__(void);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

// Function: test_cpp_exception @ 0x10a60
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&RTTIBase_typeinfo,0);
 return 0x2a;
}

// Forward declaration
void test_cpp_oo_features(void);

// Function: main @ 0x10b18
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Global variable for std::ios_base::Init
static Init std___ioinit;

// Global variable for __dso_handle
static void *__dso_handle;

// Forward declaration for __aeabi_atexit
void __aeabi_atexit(void *object, void (*dtor)(void *), void *dso_handle);

// Forward declaration for malloc
void *malloc(size_t size);

// Global variables referenced in code
static void *PTR__RTTIDerivedA_0001162c;
static void *PTR__RTTIDerivedB_00011640;
static char *DAT_00011450;
static char *DAT_00011474;
static char *DAT_00011494;
static char *DAT_000114b0;
static char *DAT_000114cc;
static char *DAT_000114e8;
static char *DAT_00011508;
static char *DAT_00011524;
static char *DAT_00011540;
static char *DAT_0001155c;
static char *DAT_00011578;
static char *DAT_00011598;
static char *DAT_000115b8;
static char *DAT_00011438;

// Forward declaration for __libc_start_main
void __libc_start_main(int (*main)(int, char **, char **), int argc, void *argv, void (*init)(void), void (*fini)(void), void *stack);

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10b28
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init(&std___ioinit);
 __aeabi_atexit(&std___ioinit,(void (*)(void *))std_ios_base_Init_Init,&__dso_handle);
 return;
}

// Function: _start @ 0x10b58
void _start(unsigned int param_1,unsigned int param_2)
{
 void *stack_ptr = &param_1;
 __libc_start_main((int (*)(int, char **, char **))main,param_2,stack_ptr,0,0,(void*)param_1);
 abort();
}

// Function: call_weak_fn @ 0x10b9c
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10bc0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10bec
void register_tm_clones(void)
{
 return;
}

// Global variable for __do_global_dtors_aux
static int completed_0 = 0;

// Function: __do_global_dtors_aux @ 0x10c24
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10c50
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x10cbc
int test_cpp_constructor(void)
{
 return 0x15;
}

// Function: call_virtual_func @ 0x10cdc
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(void))(*(void **)param_1))();
 return;
}

// Function: test_cpp_virtual_func @ 0x10ce8
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10cf0
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10cf8
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10d04
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10d0c
void test_cpp_template_func(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int extraout_r1;
 int iVar3;
 int iVar5;
 int in_stack_ffffffe8;
 int in_stack_ffffffe4;
 int in_stack_ffffffe0;
 int iVar6;
 int stack_ffe4;
 int stack_ffe8;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 ((double)in_stack_ffffffe4,
 (double)in_stack_ffffffe0);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&stack_ffe4,&stack_ffe8);
 __aeabi_d2iz();
 if (iVar3 == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x10db4
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10dbc
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x10dc4
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10dd0
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 type_info *ptiVar1;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)malloc(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001162c;
 piVar2 = (int *)malloc(4);
 ptiVar1 = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011640;
 std_type_info_operator__(ptiVar1,(type_info *)&RTTIDerivedA_typeinfo);
 iVar3 = 0;
 iVar4 = std_type_info_operator__
 (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void))(*(void **)(iVar6 + 4)))(piVar1);
 ((void (*)(void))(*(void **)(*piVar2 + 4)))(piVar2);
 return iVar3 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ec8
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 puts(DAT_00011450);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 __printf_chk(1,DAT_00011474);
 uVar2 = test_cpp_constructor();
puts(DAT_00011494);
puts(DAT_000114b0);
puts(DAT_000114cc);
uVar2 = test_cpp_diamond_inheritance();
 puts(DAT_000114e8);
 puts(DAT_00011508);
 test_cpp_template_func();
 __printf_chk(1,DAT_00011524);
 puts(DAT_00011540);
 puts(DAT_00011540);
 __printf_chk(1,DAT_0001155c);
 test_cpp_template_func();
 uVar2 = test_cpp_exception();
 __printf_chk(1,DAT_00011578);
 test_cpp_smart_ptr();
 __printf_chk(1,DAT_00011598);
 uVar2 = test_cpp_rtti();
 if (local_c == 0) {
 __printf_chk(1,DAT_000115b8);
 return;
 }
 __stack_chk_fail();
}

// Function: Base_virtual_func @ 0x11048
int Base_virtual_func(Base *this_ptr,int param_1)
{
 return param_1 + 1;
}

// Function: Base_getName @ 0x11050
unsigned char * Base_getName(void)
{
 return (unsigned char *)DAT_00011438;
}

// Function: Base__Base @ 0x1105c
void Base__Base(Base *this_ptr)
{
 return;
}

// Function: Derived_virtual_func @ 0x11060
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 return param_1 * *(int *)(this_ptr + 4);
}

// Function: Derived_getName @ 0x1106c
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x11078
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x11080
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB @ 0x11088
unsigned int MultiDerived_funcB_inst(MultiDerived *this_ptr)
{
 return 0x28;
}

// Function: MiddleA_func @ 0x11090
int MiddleA_func_inst(MiddleA *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleA_func @ 0x110a8
int MiddleA_func_inst2(MiddleA *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleB_func @ 0x110cc
int MiddleB_func_inst(MiddleB *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB_func @ 0x110e4
int MiddleB_func_inst2(MiddleB *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: DiamondDerived_func @ 0x11108
int DiamondDerived_func_inst(DiamondDerived *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func @ 0x11120
int DiamondDerived_func_inst2(DiamondDerived *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func @ 0x11144
int DiamondDerived_func_inst3(DiamondDerived *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA_getType @ 0x1115c
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x11164
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x1116c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x11170
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x11174
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x11178
DiamondDerived * DiamondDerived__DiamondDerived_adj(DiamondDerived *this_ptr)
{
 return this_ptr + *(int *)(*(int *)this_ptr + -0x10);
}

// Function: DiamondDerived__DiamondDerived @ 0x11188
DiamondDerived * DiamondDerived__DiamondDerived_adj2(DiamondDerived *this_ptr)
{
 return this_ptr + -8;
}

// Function: MultiDerived__MultiDerived @ 0x11190
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x11194
MultiDerived * MultiDerived__MultiDerived_adj(MultiDerived *this_ptr)
{
 return this_ptr + -8;
}

// Function: Derived__Derived @ 0x1119c
void Derived__Derived(Derived *this_ptr)
{
 return;
}

// Function: Base__Base_destructor @ 0x111a0
Base * Base__Base_destructor(Base *this_ptr)
{
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: Derived__Derived_destructor @ 0x111b8
Derived * Derived__Derived_destructor(Derived *this_ptr)
{
 operator_delete(this_ptr,8);
 return this_ptr;
}

// Function: MultiDerived__MultiDerived_destructor @ 0x111d0
MultiDerived * MultiDerived__MultiDerived_destructor(MultiDerived *this_ptr)
{
 operator_delete(this_ptr,0x10);
 return this_ptr;
}

// Function: MultiDerived__MultiDerived @ 0x111e8
MultiDerived * MultiDerived__MultiDerived_adj2(MultiDerived *this_ptr)
{
 operator_delete(this_ptr + -8,0x10);
 return this_ptr + -8;
}

// Function: RTTIDerivedB__RTTIDerivedB_destructor @ 0x11204
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)
{
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: RTTIDerivedA__RTTIDerivedA_destructor @ 0x1121c
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)
{
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: DiamondDerived__DiamondDerived_destructor @ 0x11234
DiamondDerived * DiamondDerived__DiamondDerived_destructor(DiamondDerived *this_ptr)
{
 operator_delete(this_ptr,0x18);
 return this_ptr;
}

// Function: DiamondDerived__DiamondDerived @ 0x1124c
DiamondDerived * DiamondDerived__DiamondDerived_adj3(DiamondDerived *this_ptr)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 operator_delete(this_ptr + iVar1,0x18);
 return this_ptr + iVar1;
}

// Function: DiamondDerived__DiamondDerived @ 0x11270
DiamondDerived * DiamondDerived__DiamondDerived_adj4(DiamondDerived *this_ptr)
{
 operator_delete(this_ptr + -8,0x18);
 return this_ptr + -8;
}

// Function: template_max<int> @ 0x1128c
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11298
double template_max_double_(double param_1,double param_2)
{
 double dVar1;
 if (param_1 > param_2) {
 dVar1 = param_1;
 } else {
 dVar1 = param_2;
 }
 return dVar1;
}

// Function: template_swap<int> @ 0x112c8
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int__Container @ 0x112dc
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x112e8
void Container_int__push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x11300
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 return *(unsigned int *)(this_ptr + param_1 * 4);
 }
 return 0;
}

// Function: Container_int__getSize @ 0x11324
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container_double__Container @ 0x1132c
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x11338
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 unsigned int *puVar2 = (unsigned int *)(this_ptr + iVar1 * 8);
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *puVar2 = 0;
 puVar2[1] = 0;
 }
 return;
}

// Function: Container_double__get @ 0x11368
unsigned long long Container_double__get(Container_double_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 return *(unsigned long long *)(this_ptr + param_1 * 8);
 }
 return 0;
}

// Function: Container_double__getSize @ 0x11394
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: _fini @ 0x1139c
void _fini(void)
{
 return;
}

