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
typedef struct type_info type_info;
typedef struct Init Init;
typedef struct LifecycleClass LifecycleClass;

// Global variables
static int completed_0 = 0;
static int std___ioinit = 0;
struct LifecycleClass { int instance_count; };
static struct LifecycleClass g_LifecycleClass = {0};
static int PTR__RTTIBase_000116a0 = 0;
static int PTR__RTTIDerivedA_000116b4 = 0;
static int PTR__RTTIDerivedB_000116c8 = 0;
static char DAT_000114d8 = 0;
static char DAT_000114fc = 0;
static char DAT_0001151c = 0;
static char DAT_00011538 = 0;
static char DAT_00011554 = 0;
static char DAT_00011570 = 0;
static char DAT_00011590 = 0;
static char DAT_000115ac = 0;
static char DAT_000115c8 = 0;
static char DAT_000115e4 = 0;
static char DAT_00011600 = 0;
static char DAT_00011620 = 0;
static char DAT_00011640 = 0;
static char DAT_000114c0 = 0;
static int stack0x00000004 = 0;

// External function declarations
void *malloc(unsigned long size);
void free(void *ptr);
void __gmon_start__(void);

// Macro definitions
#define CONCAT44(a,b) ((unsigned long long)(a) << 32 | (unsigned int)(b))

// Forward declarations
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);
void call_weak_fn(void);
void test_cpp_oo_features(void);

// Decompiled by BinaryAI
// SHA256: a29c7b093f703bf8ac9e895ddf3d476d71c279c690821901c3573f900a7c056c

// Function: _init @ 0x10920
int _init(void *ctx)
{
 (void)ctx;
 call_weak_fn();
 return 0;
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x10940
void * operator_new(uint param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
void *__cxa_begin_catch(void *param_1)
{
 return param_1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
void *__cxa_allocate_exception(uint param_1)
{
 void *pvVar1;
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x10970
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::operator.delete @ 0x1097c
void operator_delete(void *param_1,uint param_2)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
void __libc_start_main(void *main_fn,void *arg2,void *arg3,void *arg4,void *arg5,void *arg6)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x10994
void abort(void)
{
 while(1);
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
int std_type_info_operator_eq(type_info *this_ptr,type_info *param_1)
{
 (void)this_ptr;
 return 0;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
void __stack_chk_fail(void)
{
 while(1);
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
void *__dynamic_cast(void *param_1,void *param_2,void *param_3,int param_4)
{
 return param_1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x109dc
size_t strlen(char *__s)
{
 size_t len = 0;
 while (__s[len] != 0) len++;
 return len;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x109e8
void std_ios_base_Init_Init(Init *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
unsigned long long __aeabi_d2iz(double param_1,unsigned int param_2)
{
 return (unsigned long long)param_1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10a18
void __cxa_throw(void *param_1,void *param_2,void *param_3)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
int __aeabi_dcmpgt(double param_1,double param_2)
{
 if (param_1 > param_2) return 1;
 return 0;
}

// Function: <EXTERNAL>::strncpy @ 0x10a30
char * strncpy(char *__dest,char *__src,size_t __n)
{
 size_t i;
 for (i = 0; i < __n && __src[i] != 0; i++) {
  __dest[i] = __src[i];
 }
 for (; i < __n; i++) {
  __dest[i] = 0;
 }
 return __dest;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10a48
int __printf_chk(int param_1,char *param_2,...)
{
 return 0;
}

// Function: test_cpp_exception @ 0x10a60
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void*)0,(void*)0);
 return 0x2a;
}

// Function: main @ 0x10b18
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10b28
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init((Init *)&std___ioinit);
 return;
}

// Function: _start @ 0x10b58
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,(void*)param_2,&stack0x00000004,(void*)0,(void*)0,(void*)param_1);
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
 return 0;
}

// Function: test_cpp_constructor @ 0x10cbc
int test_cpp_constructor(void)
{
 return g_LifecycleClass.instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10cdc
void call_virtual_func(void *param_1,int param_2)
{
 void **vtable = (void **)*(void **)param_1;
 void (*func)(void) = (void (*)(void))vtable[0];
 func();
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
 unsigned long long uVar4;
 unsigned int in_stack_ffffffe0;
 int in_stack_ffffffe4;
 int iVar5;
 int in_stack_ffffffe8;
 int iVar6;
 int stack_ffe4;
 int stack_ffe8;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 ((double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0),
 (double)CONCAT44(iVar3,in_stack_ffffffe8));
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&stack_ffe4,&stack_ffe8);
 uVar4 = __aeabi_d2iz(uVar2,extraout_r1);
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
 type_info *local_this;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_000116b4;
 piVar2 = (int *)operator_new(4);
 local_this = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_000116c8;
 iVar3 = std_type_info_operator_eq(local_this,(type_info *)&PTR__RTTIDerivedA_000116b4);
 if (iVar3 == 0) {
 iVar3 = 0x14;
 iVar6 = 0;
 }
 else {
 iVar6 = 10;
 iVar3 = 0x1e;
 }
 iVar4 = std_type_info_operator_eq
 (*(type_info **)(*piVar2 + -4),(type_info *)&PTR__RTTIDerivedB_000116c8);
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
 void *temp_cast = __dynamic_cast((void*)piVar1,(void*)(uintptr_t)(uintptr_t)&PTR__RTTIBase_000116a0,(void*)(uintptr_t)(uintptr_t)&PTR__RTTIDerivedA_000116b4,0);
 iVar3 = (int)(uintptr_t)temp_cast;
 if (iVar3 != 0) {
  iVar6 = iVar6 + 100;
 }
temp_cast = __dynamic_cast((void*)piVar2,(void*)(uintptr_t)(uintptr_t)&PTR__RTTIBase_000116a0,(void*)(uintptr_t)(uintptr_t)&PTR__RTTIDerivedB_000116c8,0);
iVar3 = (int)(uintptr_t)temp_cast;
 iVar4 = *(int*)piVar1;
if (iVar3 != 0) {
 iVar6 = iVar6 + 200;
 }
 __s = *(char **)((char *)(*(int *)((char *)(uintptr_t)iVar4 + -4)) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void*))(*(void**)((char *)iVar4 + 4)))(piVar1);
 ((void (*)(void*))(*(void**)((char *)*piVar2 + 4)))(piVar2);
 return iVar6 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ed4
void test_cpp_oo_features(void)
{
 size_t sVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 unsigned int extraout_r1;
 int in_stack_ffffffc0;
 int iVar5;
 int in_stack_ffffffc4;
 int iVar6;
 double in_stack_ffffffc8;
 char stack0xffffffcc[32];
 int stack0xffffffc0;
 int stack0xffffffc4;
 puts((char*)&DAT_000114d8);
 strncpy(stack0xffffffcc,"Test",0x1f);
 sVar1 = strlen(stack0xffffffcc);
 __printf_chk(1,&DAT_000114fc,sVar1 + 0x125c);
 __printf_chk(1,(char*)&DAT_0001151c,g_LifecycleClass.instance_count * 0x3e9 + 0x15);
 __printf_chk(1,(char*)&DAT_00011538,0x2a);
 __printf_chk(1,(char*)&DAT_00011554,0x47);
 __printf_chk(1,(char*)&DAT_00011570,0x28a);
 __printf_chk(1,(char*)&DAT_00011590,0x16);
 iVar2 = template_max_int_(3,7);
 uVar3 = 0;
 template_max_double_((double)CONCAT44(in_stack_ffffffc4,in_stack_ffffffc0),in_stack_ffffffc8);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_((int *)&stack0xffffffc0,(int *)&stack0xffffffc4);
 iVar4 = __aeabi_d2iz(uVar3,extraout_r1);
 __printf_chk(1,(char*)&DAT_000115ac,iVar4 + iVar2 + iVar5 + iVar6);
 __printf_chk(1,(char*)&DAT_000115c8,0x10);
 __printf_chk(1,(char*)&DAT_000115e4,0x55);
 uVar3 = test_cpp_exception();
 __printf_chk(1,(char*)&DAT_00011600,uVar3);
 __printf_chk(1,(char*)&DAT_00011620,0x2bf);
 uVar3 = test_cpp_rtti();
 __printf_chk(1,(char*)&DAT_00011640,uVar3);
 return;
}

// Function: Base::virtual_func @ 0x110d0
int Base_virtual_func(void *this_ptr,int param_1)
{
 (void)this_ptr;
 return param_1 + 1;
}

// Function: Base::getName @ 0x110d8
unsigned char * Base_getName(void *this_ptr)
{
 (void)this_ptr;
 return (unsigned char *)&DAT_000114c0;
}

// Function: Base::~Base @ 0x110e4
void Base__Base(void *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: Derived::virtual_func @ 0x110e8
int Derived_virtual_func(void *this_ptr,int param_1)
{
 (void)this_ptr;
 return param_1 * *(int *)((char *)this_ptr + 4);
}

// Function: Derived::getName @ 0x110f4
char * Derived_getName(void *this_ptr)
{
 (void)this_ptr;
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11100
unsigned int MultiDerived_funcA(void *this_ptr)
{
 (void)this_ptr;
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11108
unsigned int MultiDerived_funcB(void *this_ptr)
{
 (void)this_ptr;
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11110
unsigned int MultiDerived_funcB_1(void *this_ptr)
{
 (void)this_ptr;
 return 0x28;
}

// Function: MiddleA::func @ 0x11118
int MiddleA_func(void *this_ptr)
{
 (void)this_ptr;
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11130
int MiddleA_func_1(void *this_ptr)
{
 (void)this_ptr;
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11154
int MiddleB_func(void *this_ptr)
{
 (void)this_ptr;
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x1116c
int MiddleB_func_1(void *this_ptr)
{
 (void)this_ptr;
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11190
int DiamondDerived__func(void *this_ptr)
{
 (void)this_ptr;
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111a8
int DiamondDerived__func_1(void *this_ptr)
{
 (void)this_ptr;
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111cc
int DiamondDerived__func_2(void *this_ptr)
{
 (void)this_ptr;
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x111e4
unsigned int RTTIDerivedA_getType(void *this_ptr)
{
 (void)this_ptr;
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x111ec
unsigned int RTTIDerivedB_getType(void *this_ptr)
{
 (void)this_ptr;
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x111f4
void RTTIDerivedB__RTTIDerivedB(void *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x111f8
void RTTIDerivedA__RTTIDerivedA(void *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x111fc
void DiamondDerived__DiamondDerived(void *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11200
void * DiamondDerived__DiamondDerived_1(void *this_ptr)
{
 (void)this_ptr;
 return (char *)this_ptr + *(int *)(*(int *)this_ptr + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11210
void * DiamondDerived__DiamondDerived_2(void *this_ptr)
{
 (void)this_ptr;
 return (char *)this_ptr + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11218
void MultiDerived__MultiDerived(void *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1121c
void * MultiDerived__MultiDerived_1(void *this_ptr)
{
 (void)this_ptr;
 return (char *)this_ptr + -8;
}

// Function: Derived::~Derived @ 0x11224
void Derived__Derived(void *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: Base::~Base @ 0x11228
void * Base__Base_1(void *this_ptr)
{
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: Derived::~Derived @ 0x11240
void * Derived__Derived_1(void *this_ptr)
{
 operator_delete(this_ptr,8);
 return this_ptr;
}

// Function: MultiDerived::~MultiDerived @ 0x11258
void * MultiDerived__MultiDerived_2(void *this_ptr)
{
 operator_delete(this_ptr,0x10);
 return this_ptr;
}

// Function: MultiDerived::~MultiDerived @ 0x11270
void * MultiDerived__MultiDerived_3(void *this_ptr)
{
 operator_delete((char *)this_ptr + -8,0x10);
 return (char *)this_ptr + -8;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1128c
void * RTTIDerivedB__RTTIDerivedB_1(void *this_ptr)
{
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x112a4
void * RTTIDerivedA__RTTIDerivedA_1(void *this_ptr)
{
 operator_delete(this_ptr,4);
 return this_ptr;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112bc
void * DiamondDerived__DiamondDerived_3(void *this_ptr)
{
 operator_delete(this_ptr,0x18);
 return this_ptr;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112d4
void * DiamondDerived__DiamondDerived_4(void *this_ptr)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 operator_delete((char *)this_ptr + iVar1,0x18);
 return (char *)this_ptr + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112f8
void * DiamondDerived__DiamondDerived_5(void *this_ptr)
{
 operator_delete((char *)this_ptr + -8,0x18);
 return (char *)this_ptr + -8;
}

// Function: template_max<int> @ 0x11314
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11320
double template_max_double_(double param_1,double param_2)
{
 if (__aeabi_dcmpgt(param_1,param_2)) {
 return param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x11350
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11364
void Container_int__Container(void *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11370
void Container_int__push(void *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11388
unsigned int Container_int__get(void *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x28))) {
 return *(unsigned int *)((char *)this_ptr + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x113ac
unsigned int Container_int__getSize(void *this_ptr)
{
 (void)this_ptr;
 return *(unsigned int *)((char *)this_ptr + 0x28);
}

// Function: Container<double>::Container @ 0x113b4
void Container_double__Container(void *this_ptr)
{
 *(unsigned int *)((char *)this_ptr + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x113c0
void Container_double__push(void *this_ptr,double param_1)
{
 int iVar1;
 unsigned int *puVar2;
 iVar1 = *(int *)((char *)this_ptr + 0x50);
 if (iVar1 < 10) {
 puVar2 = (unsigned int *)((char *)this_ptr + iVar1 * 8);
 *(int *)((char *)this_ptr + 0x50) = iVar1 + 1;
 *puVar2 = 0;
 puVar2[1] = 0;
 }
 (void)param_1;
 return;
}

// Function: Container<double>::get @ 0x113f0
unsigned long long Container_double__get(void *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)this_ptr + 0x50))) {
 return *(unsigned long long *)((char *)this_ptr + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x1141c
unsigned int Container_double__getSize(void *this_ptr)
{
 (void)this_ptr;
 return *(unsigned int *)((char *)this_ptr + 0x50);
}

// Function: _fini @ 0x11424
void _fini(void)
{
 return;
}

