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

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct type_info type_info;
typedef struct Init Init;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

struct Container_int_ {
 unsigned int data[10];
 unsigned int size;
};

struct Container_double_ {
 unsigned long long data[10];
 unsigned int size;
};

struct Base {
 int *vtable;
 int value;
};

struct Derived {
 int *vtable;
 int value;
};

struct MultiDerived {
 int *vtable;
 int value_a;
 int value_b;
};

struct MiddleA {
 int *vtable;
 int value;
};

struct MiddleB {
 int *vtable;
 int value;
};

struct DiamondDerived {
 int *vtable;
 int value;
};

struct RTTIDerivedA {
 int *vtable;
 int type;
};

struct RTTIDerivedB {
 int *vtable;
 int type;
};

struct type_info {
 char *name;
};

struct Init {
 int dummy;
};

// Decompiled by BinaryAI
// SHA256: d6d691cee1d75fe7dc5d11c56ff757a9a383d6d2a2760d38bd09c970c69ee27f

// Stub implementations for external functions
void call_weak_fn(void)
{
 return;
}

void * operator_new(size_t param_1)
{
 return (void*)0;
}

void operator_delete(void *param_1, unsigned int param_2)
{
 return;
}

void __cxa_throw(void *exc, void *type_info, void *dest)
{
 return;
}

long long __aeabi_d2iz(double param_1)
{
 return 0;
}

int __aeabi_dcmpgt(double param_1, double param_2)
{
 return 0;
}

void * __cxa_allocate_exception(unsigned int param_1)
{
 return (void*)0;
}

void __cxa_begin_catch(void)
{
 return;
}

void __cxa_end_catch(void)
{
 return;
}

void __cxa_end_cleanup(void)
{
 return;
}

void __cxa_rethrow(void)
{
 return;
}

void * __dynamic_cast(void *obj, void *src_type, void *dst_type, int src_type_idx)
{
 return (void*)0;
}

void __gxx_personality_v0(void)
{
 return;
}

void std_ios_base_Init_Init(Init *this_ptr)
{
 return;
}

int std_type_info_operator_eq(type_info *this_ptr, type_info *param_1)
{
 return 0;
}

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
extern void * operator_new(size_t param_1);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
extern void __cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
extern void * __cxa_allocate_exception(unsigned int param_1);

// Function: puts @ 0x10970
int puts(char *__s)
{
 (void)__s;
 return 0;
}

// Function: <EXTERNAL>::operator.delete @ 0x1097c
extern void operator_delete(void *param_1,unsigned int param_2);

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
extern void __libc_start_main(void *main_func,void *argc,void *argv,void *init,void *fini,void *rtld_fini,void *stack_end);

// Function: <EXTERNAL>::abort @ 0x10994
extern void abort(void);

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
extern int std_type_info_operator_eq(type_info *this_ptr,type_info *param_1);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
extern void __stack_chk_fail(void);

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
extern void __cxa_end_cleanup(void);

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
extern void * __dynamic_cast(void *obj,void *src_type,void *dst_type,int src_type_idx);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
extern void __cxa_rethrow(void);

// Function: strlen @ 0x109dc
size_t strlen(char *__s)
{
 size_t len = 0;
 if (__s) {
  while (__s[len] != 0) {
   len++;
  }
 }
 return len;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x109e8
extern void std_ios_base_Init_Init(Init *this_ptr);

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
extern long long __aeabi_d2iz(double param_1);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
extern void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
extern void __gxx_personality_v0(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x10a18
extern void __cxa_throw(void *exc,void *type_info,void *dest);

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
extern int __aeabi_dcmpgt(double param_1,double param_2);

// Function: strncpy @ 0x10a30
char * strncpy(char *__dest,char *__src,size_t __n)
{
 size_t i;
 if (__dest && __src) {
  for (i = 0; i < __n && __src[i] != 0; i++) {
   __dest[i] = __src[i];
  }
  for (; i < __n; i++) {
   __dest[i] = 0;
  }
 }
 return __dest;
}

// Function: __printf_chk @ 0x10a48
int __printf_chk(int flag,const char *format,...)
{
 (void)flag;
 (void)format;
 return 0;
}

// Function: test_cpp_exception @ 0x10a60
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw((void*)puVar1,(void*)0,(void*)0);
 return 0;
}

// Function: test_cpp_oo_features @ 0x10ec8
extern void test_cpp_oo_features(void);

// Function: main @ 0x10b18
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Global variables
extern Init std___ioinit;
extern void *__dso_handle;
extern void *PTR__RTTIDerivedA_0001162c;
extern void *PTR__RTTIDerivedB_00011640;
char DAT_00011450[] = "Test string";
char DAT_00011474[] = "Result: %d\n";
char DAT_00011494[] = "Constructor: %d\n";
char DAT_000114b0[] = "Virtual: %d\n";
char DAT_000114cc[] = "Multiple: %d\n";
char DAT_000114e8[] = "Diamond: %d\n";
char DAT_00011508[] = "Operator: %d\n";
char DAT_00011524[] = "Template: %d\n";
char DAT_00011540[] = "Template class: %d\n";
char DAT_0001155c[] = "Lambda: %d\n";
char DAT_00011578[] = "Exception: %d\n";
char DAT_00011598[] = "Smart ptr: %d\n";
char DAT_000115b8[] = "RTTI: %d\n";
char DAT_00011438[] = "Base";













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
 return 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10cdc
void call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(void))((void*)(*(int **)param_1)[0]))();
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

// Forward declarations for template functions
extern int template_max_int_(int param_1,int param_2);
extern double template_max_double_(double param_1,double param_2);
extern void template_swap_int_(int *param_1,int *param_2);

// Function: test_cpp_template_func @ 0x10d0c
unsigned int test_cpp_template_func(void)
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
 int stack_ffffffe4;
 int stack_ffffffe8;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 ((double)((unsigned long long)in_stack_ffffffe4 << 32 | in_stack_ffffffe0),
 (double)((unsigned long long)iVar3 << 32 | in_stack_ffffffe8));
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&stack_ffffffe4,&stack_ffffffe8);
 uVar4 = __aeabi_d2iz(uVar2);
 if (iVar3 == 0) {
 return 0;
 }
 __stack_chk_fail();
 return 0;
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
 type_info *ptVar1;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)(uintptr_t)&PTR__RTTIDerivedA_0001162c;
 piVar2 = (int *)operator_new(4);
 ptVar1 = *(type_info **)((char*)piVar1 + -4);
 *piVar2 = (int)(uintptr_t)&PTR__RTTIDerivedB_00011640;
 iVar3 = std_type_info_operator_eq(ptVar1,(type_info *)&PTR__RTTIDerivedA_0001162c);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_eq
 (*(type_info **)((char*)piVar2 + -4),(type_info *)&PTR__RTTIDerivedB_00011640);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)(uintptr_t)__dynamic_cast(piVar1,(void*)0,(void*)0,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)(uintptr_t)__dynamic_cast(piVar2,(void*)0,(void*)0,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)((char*)(uintptr_t)iVar6 + -4 + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(int*))((char*)(uintptr_t)iVar6 + 4))(piVar1);
 ((void (*)(int*))((char*)(uintptr_t)*piVar2 + 4))(piVar2);
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
 __printf_chk(1,DAT_00011474,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 __printf_chk(1,DAT_00011494,uVar2);
 __printf_chk(1,DAT_000114b0,0x2a);
 __printf_chk(1,DAT_000114cc,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000114e8,uVar2);
 __printf_chk(1,DAT_00011508,0x16);
 uVar2 = test_cpp_template_func();
 __printf_chk(1,DAT_00011524,uVar2);
 __printf_chk(1,DAT_00011540,0x10);
 __printf_chk(1,DAT_0001155c,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,DAT_00011578,uVar2);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00011598,uVar2);
 uVar2 = test_cpp_rtti();
 if (local_c == 0) {
 __printf_chk(1,DAT_000115b8,uVar2);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x11048
int Base_virtual_func(Base *this_ptr,int param_1)
{
 (void)this_ptr;
 return param_1 + 1;
}

// Function: Base::getName @ 0x11050
unsigned char * Base_getName(void)
{
 return (unsigned char *)DAT_00011438;
}

// Function: Base::~Base @ 0x1105c
void Base__Base(Base *this_ptr)
{
 return;
}

// Function: Derived::virtual_func @ 0x11060
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 return param_1 * *(int *)((char *)this_ptr + 4);
}

// Function: Derived::getName @ 0x1106c
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11078
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11080
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11088
unsigned int MultiDerived_funcB2(MultiDerived *this_ptr)
{
 (void)this_ptr;
 return 0x28;
}

// Function: MiddleA::func @ 0x11090
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x110a8
int MiddleA_func2(MiddleA *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x110cc
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x110e4
int MiddleB_func2(MiddleB *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11108
int DiamondDerived__func(DiamondDerived *this_ptr)
{
 return *(int *)((char *)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11120
int DiamondDerived__func2(DiamondDerived *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc)) + -0xc) +
 *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11144
int DiamondDerived__func3(DiamondDerived *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)(this_ptr + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x1115c
unsigned int RTTIDerivedA_getType(RTTIDerivedA *this_ptr)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11164
unsigned int RTTIDerivedB_getType(RTTIDerivedB *this_ptr)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1116c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this_ptr)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11170
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this_ptr)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11174
void DiamondDerived__DiamondDerived(DiamondDerived *this_ptr)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11178
DiamondDerived * DiamondDerived__DiamondDerived2(DiamondDerived *this_ptr)
{
 return this_ptr + *(int *)(*(int *)this_ptr + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11188
DiamondDerived * DiamondDerived__DiamondDerived3(DiamondDerived *this_ptr)
{
 return this_ptr + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11190
void MultiDerived__MultiDerived(MultiDerived *this_ptr)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11194
MultiDerived * MultiDerived__MultiDerived2(MultiDerived *this_ptr)
{
 return (MultiDerived *)((char *)this_ptr + -8);
}

// Function: Derived::~Derived @ 0x1119c
void Derived__Derived(Derived *this_ptr)
{
 return;
}

// Function: Base::~Base @ 0x111a0
Base * Base__Base2(Base *this_ptr)
{
 operator_delete((void*)this_ptr,4);
 return this_ptr;
}

// Function: Derived::~Derived @ 0x111b8
Derived * Derived__Derived2(Derived *this_ptr)
{
 operator_delete((void*)this_ptr,8);
 return this_ptr;
}

// Function: MultiDerived::~MultiDerived @ 0x111d0
MultiDerived * MultiDerived__MultiDerived3(MultiDerived *this_ptr)
{
 operator_delete((void*)this_ptr,0x10);
 return this_ptr;
}

// Function: MultiDerived::~MultiDerived @ 0x111e8
MultiDerived * MultiDerived__MultiDerived4(MultiDerived *this_ptr)
{
 operator_delete((void*)((char *)this_ptr + -8),0x10);
 return (MultiDerived *)((char *)this_ptr + -8);
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11204
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB2(RTTIDerivedB *this_ptr)
{
 operator_delete((void*)this_ptr,4);
 return this_ptr;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1121c
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA2(RTTIDerivedA *this_ptr)
{
 operator_delete((void*)this_ptr,4);
 return this_ptr;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11234
DiamondDerived * DiamondDerived__DiamondDerived4(DiamondDerived *this_ptr)
{
 operator_delete((void*)this_ptr,0x18);
 return this_ptr;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1124c
DiamondDerived * DiamondDerived__DiamondDerived5(DiamondDerived *this_ptr)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 operator_delete((void*)((char*)this_ptr + iVar1),0x18);
 return (DiamondDerived*)((char*)this_ptr + iVar1);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11270
DiamondDerived * DiamondDerived__DiamondDerived6(DiamondDerived *this_ptr)
{
 operator_delete((void*)((char*)this_ptr + -8),0x18);
 return (DiamondDerived*)((char*)this_ptr + -8);
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
 double extraout_d0;
 __aeabi_dcmpgt(param_1, param_2);
 return extraout_d0;
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

// Function: Container<int>::Container @ 0x112dc
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x112e8
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

// Function: Container<int>::get @ 0x11300
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x28))) {
 return *(unsigned int *)(this_ptr + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11324
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container<double>::Container @ 0x1132c
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11338
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 unsigned long long *puVar2;
 iVar1 = *(int *)((char*)this_ptr + 0x50);
 if (iVar1 < 10) {
 puVar2 = (unsigned long long *)((char*)this_ptr + iVar1 * 8);
 *(int *)((char*)this_ptr + 0x50) = iVar1 + 1;
 *puVar2 = *(unsigned long long*)&param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x11368
unsigned long long Container_double__get(Container_double_ *this_ptr,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 return *(unsigned long long *)(this_ptr + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11394
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: _fini @ 0x1139c
void _fini(void)
{
 return;
}

