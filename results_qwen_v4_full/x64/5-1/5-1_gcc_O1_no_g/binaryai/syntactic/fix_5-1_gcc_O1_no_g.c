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

// Forward declarations for classes
struct LifecycleClass { int instance_count; };
int LifecycleClass_instance_count = 0;

// Struct definitions
struct Base {
    void *vtable;
    int value;
};

struct Derived {
    void *vtable;
    int value;
    int derived_value;
};

struct MultiDerived {
    void *vtable;
    int value;
    int derived_value;
    int multi_a_value;
    int multi_b_value;
};

struct MiddleA {
    void *vtable;
    int value;
    int middle_a_value;
};

struct MiddleB {
    void *vtable;
    int value;
    int middle_b_value;
};

struct DiamondDerived {
    void *vtable;
    int value;
    int middle_a_value;
    int middle_b_value;
    int diamond_value;
};

struct RTTIBase {
    void *vtable;
    int type_info;
};

struct RTTIDerivedA {
    void *vtable;
    int type_info;
};

struct RTTIDerivedB {
    void *vtable;
    int type_info;
};

// Container struct definitions
struct Container_int {
    char padding[0x28];
    int size;
    int data[10];
};

struct Container_double {
    char padding[0x50];
    int size;
    double data[10];
};

typedef struct Container_int Container_int_;
typedef struct Container_double Container_double_;

// Forward declarations for functions
int main(void);
void __libc_start_main(void *main_fn, unsigned long long argc, void *argv, void *init, void *fini, unsigned long long rtld_fini, void *stack_end);
int DiamondDerived_func(DiamondDerived *self);
int DiamondDerived_func_2(DiamondDerived *self);
int DiamondDerived_func_3(DiamondDerived *self);
int MiddleA_func(MiddleA *self);
int MiddleA_func_2(MiddleA *self);
int MiddleB_func(MiddleB *self);
int MiddleB_func_2(MiddleB *self);
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);



// Global variables
static int completed_0 = 0;
static void *__dso_handle = (void*)0;
struct Init { int dummy; };
static struct Init std___ioinit;

// Missing pointer declarations
void *PTR_virtual_func_001059a0 = 0;
void *PTR_virtual_func_001059d0 = 0;
void *PTR__RTTIDerivedA_00105ba0 = 0;
void *PTR__RTTIDerivedB_00105bc8 = 0;

// Global data declarations
char DAT_00103004[] = "Base";
char DAT_00103018[] = "Testing C++ OO features";
char DAT_0010303c[] = "Member function: %u\n";
char DAT_0010305a[] = "Constructor: %u\n";
char DAT_00103076[] = "Virtual function: %u\n";
char DAT_00103092[] = "Multiple inheritance: %u\n";
char DAT_001030ae[] = "Diamond inheritance: %u\n";
char DAT_001030cb[] = "Operator overload: %u\n";
char DAT_001030e7[] = "Template function: %u\n";
char DAT_00103103[] = "Template class: %u\n";
char DAT_0010311f[] = "Lambda: %u\n";
char DAT_0010313b[] = "Exception: %u\n";
char DAT_00103158[] = "Smart pointer: %u\n";
char DAT_00103175[] = "RTTI: %u\n";

// Typeinfo pointers
void *int__typeinfo = 0;
void *RTTIBase__typeinfo = 0;
void *RTTIDerivedA__typeinfo = 0;
void *RTTIDerivedB__typeinfo = 0;

// Decompiled by BinaryAI
// SHA256: da4f897e564b424c59aa78cb325dfd688a2cabdabec03a89c0318597841d4cc1

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102150
void __cxa_finalize(void *dso_handle)
{
 (void)dso_handle;
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x102160
int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::operator.new[] @ 0x102170
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = (void*)0;
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102180
void *__cxa_begin_catch(void *exception_object)
{
 return exception_object;
}

// Function: <EXTERNAL>::strlen @ 0x102190
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = 0;
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1021a0
void *__cxa_allocate_exception(unsigned long size)
{
 void *pvVar1;
 pvVar1 = (void*)0;
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1021b0
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::operator.new @ 0x1021c0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = (void*)0;
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1021d0
void operator_delete(void *param_1,unsigned long param_2)
{
 (void)param_1;
 (void)param_2;
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1021e0
void __stack_chk_fail(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1021f0
void *__dynamic_cast(void *obj, void *src_type, void *dest_type, int flags)
{
 (void)src_type;
 (void)dest_type;
 (void)flags;
 return obj;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102200
void operator_delete__(void *param_1)
{
 (void)param_1;
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x102210
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = 0;
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x102220
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x102230
void std_ios_base_Init_Init(struct Init *self)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x102240
int puts(char *__s)
{
 (void)__s;
 return 0;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102250
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102260
void __cxa_throw(void *exception, void *typeinfo, void *dest)
{
 (void)exception;
 (void)typeinfo;
 (void)dest;
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102270
void _Unwind_Resume(void)
{
 return;
}









// Function: test_cpp_member_func @ 0x102369
int test_cpp_member_func(void)
{
 size_t sVar1;
 long in_FS_OFFSET;
 unsigned long long local_34;
 unsigned long long local_2c;
 unsigned long long local_24;
 unsigned int local_1c;
 unsigned short local_18;
 char local_16;
 char local_15;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_16 = 0;
 local_15 = 0;
 sVar1 = strlen((char *)&local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x1023de
int test_cpp_constructor(void)
{
 int iVar1;
 void *pvVar2;
 pvVar2 = operator_new__(0x14);
 *(unsigned int *)((long)pvVar2 + 4) = 10;
 *(unsigned int *)((long)pvVar2 + 8) = 0x14;
 *(unsigned int *)((long)pvVar2 + 0xc) = 0x1e;
 *(unsigned int *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 operator_delete__(pvVar2);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar1;
}

// Function: call_virtual_func @ 0x10243c
int call_virtual_func(Base *param_1,int param_2)
{
 ((void (*)(void))**(void ***)param_1)();
 return param_2;
}

// Function: test_cpp_virtual_func @ 0x10244e
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 void **local_30;
 void **local_28;
 unsigned int local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = &PTR_virtual_func_001059a0;
 local_28 = &PTR_virtual_func_001059d0;
 local_20 = 3;
 iVar1 = call_virtual_func((Base *)&local_30,5);
 iVar2 = call_virtual_func((Base *)&local_28,5);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + 0x15 + iVar2;
 }
 __stack_chk_fail();
}

// Function: test_cpp_multiple_inheritance @ 0x1024c6
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1024d0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned long long local_38;
 unsigned int local_30;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_38 = 0x105b78;
 local_30 = 0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_38);
 local_30 = 100;
 iVar2 = DiamondDerived_func((DiamondDerived *)&local_38);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + iVar1;
 }
 __stack_chk_fail();
}

// Function: test_cpp_operator_overload @ 0x10254c
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x102556
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
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x1025e5
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1025ef
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1025f9
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int__typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x1026d1
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1026db
int test_cpp_rtti(void)
{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 unsigned int uVar7;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)PTR__RTTIDerivedA_00105ba0;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)PTR__RTTIDerivedB_00105bc8;
 lVar1 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 uVar7 = 10;
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(unsigned int)(iVar2 == 0) & 10;
 }
 lVar5 = (long)__dynamic_cast((void*)plVar3,RTTIBase__typeinfo,RTTIDerivedA__typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = (long)__dynamic_cast((void*)plVar4,RTTIBase__typeinfo,RTTIDerivedB__typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (*(void (*)(long*))(lVar1 + 8))(plVar3);
 (*(void (*)(long*))(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x102801
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(DAT_00103018);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,DAT_0010303c,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,DAT_0010305a,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,DAT_00103076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,DAT_00103092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_001030ae,uVar1);
 __printf_chk(1,DAT_001030cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,DAT_001030e7,uVar1);
 __printf_chk(1,DAT_00103103,0x10);
 __printf_chk(1,DAT_0010311f,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_0010313b,0);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00103158,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,DAT_00103175,uVar1);
 return;
}

// Function: main @ 0x102970
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102987
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void*))std_ios_base_Init_Init,&std___ioinit,__dso_handle);
 return;
}

// Function: Base_virtual_func @ 0x1029b4
int Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base_getName @ 0x1029bc
char * Base_getName(void)
{
 return DAT_00103004;
}

// Function: Base__Base @ 0x1029c8
void Base__Base(Base *self)
{
 return;
}

// Function: Derived_virtual_func @ 0x1029ce
int Derived_virtual_func(Derived *self,int param_1)
{
 return param_1 * *(int *)((char *)self + 8);
}

// Function: Derived_getName @ 0x1029da
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived_funcA @ 0x1029e6
unsigned long long MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived_funcB @ 0x1029f0
unsigned long long MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MultiDerived_funcB_thiscall @ 0x1029fa
unsigned long long MultiDerived_funcB_thiscall(MultiDerived *self)
{
 return 0x28;
}

// Function: MiddleA_func @ 0x102a04
int MiddleA_func(MiddleA *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 0x96;
}

// Function: MiddleA_func_2 @ 0x102a19
int MiddleA_func_2(MiddleA *self)
{
 return *(int *)((long)((char *)self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)((char *)self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0x96;
}

// Function: MiddleB_func @ 0x102a36
int MiddleB_func(MiddleB *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 200;
}

// Function: MiddleB_func_2 @ 0x102a4b
int MiddleB_func_2(MiddleB *self)
{
 return *(int *)((long)((char *)self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)((char *)self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 200;
}

// Function: DiamondDerived_func @ 0x102a68
int DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)self + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func_2 @ 0x102a7d
int DiamondDerived_func_2(DiamondDerived *self)
{
 return *(int *)((long)((char *)self + *(long *)(*(long *)self + -0x18)) +
 *(long *)(*(long *)((char *)self + *(long *)(*(long *)self + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived_func_3 @ 0x102a99
int DiamondDerived_func_3(DiamondDerived *self)
{
 return *(int *)((char *)self + *(long *)(*(long *)((char *)self + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA_getType @ 0x102ab0
unsigned long long RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x102aba
unsigned long long RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB__RTTIDerivedB @ 0x102ac4
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA @ 0x102aca
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *self)
{
 return;
}

// Function: DiamondDerived__DiamondDerived @ 0x102ad0
void DiamondDerived__DiamondDerived(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_2 @ 0x102ad5
void DiamondDerived__DiamondDerived_2(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived__DiamondDerived_3 @ 0x102ada
void DiamondDerived__DiamondDerived_3(DiamondDerived *self)
{
 return;
}

// Function: MultiDerived__MultiDerived @ 0x102ae0
void MultiDerived__MultiDerived(MultiDerived *self)
{
 return;
}

// Function: MultiDerived__MultiDerived_2 @ 0x102ae5
void MultiDerived__MultiDerived_2(MultiDerived *self)
{
 return;
}

// Function: Derived__Derived @ 0x102aea
void Derived__Derived(Derived *self)
{
 return;
}

// Function: Base__Base_2 @ 0x102af0
void Base__Base_2(Base *self)
{
 operator_delete(self,8);
 return;
}

// Function: Derived__Derived_2 @ 0x102b08
void Derived__Derived_2(Derived *self)
{
 operator_delete(self,0x10);
 return;
}

// Function: MultiDerived__MultiDerived_3 @ 0x102b20
void MultiDerived__MultiDerived_3(MultiDerived *self)
{
 operator_delete(self,0x20);
 return;
}

// Function: MultiDerived__MultiDerived_4 @ 0x102b37
void MultiDerived__MultiDerived_4(MultiDerived *self)
{
 operator_delete((char *)self + -0x10,0x20);
 return;
}

// Function: RTTIDerivedA__RTTIDerivedA_2 @ 0x102b52
void RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *self)
{
 operator_delete(self,8);
 return;
}

// Function: RTTIDerivedB__RTTIDerivedB_2 @ 0x102b6a
void RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *self)
{
 operator_delete(self,8);
 return;
}

// Function: DiamondDerived__DiamondDerived_4 @ 0x102b82
void DiamondDerived__DiamondDerived_4(DiamondDerived *self)
{
 operator_delete(self,0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived_5 @ 0x102b99
void DiamondDerived__DiamondDerived_5(DiamondDerived *self)
{
 operator_delete((char *)self + *(long *)(*(long *)self + -0x20),0x30);
 return;
}

// Function: DiamondDerived__DiamondDerived_6 @ 0x102bb7
void DiamondDerived__DiamondDerived_6(DiamondDerived *self)
{
 operator_delete((char *)self + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x102bd2
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x102bde
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102be7
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int__Container @ 0x102bf4
void Container_int__Container(Container_int_ *self)
{
 *(unsigned int *)((char *)self + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x102c00
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

// Function: Container_int__get @ 0x102c18
unsigned int Container_int__get(Container_int_ *self,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)self + 0x28) != param_1 && param_1 <= *(int *)((char *)self + 0x28))) {
 uVar1 = *(unsigned int *)((char *)self + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x102c34
unsigned int Container_int__getSize(Container_int_ *self)
{
 return *(unsigned int *)((char *)self + 0x28);
}

// Function: Container_double__Container @ 0x102c3c
void Container_double__Container(Container_double_ *self)
{
 *(unsigned int *)((char *)self + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x102c48
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

// Function: Container_double__get @ 0x102c62
unsigned long long Container_double__get(Container_double_ *self,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)((char *)self + 0x50) != param_1 && param_1 <= *(int *)((char *)self + 0x50))) {
 uVar1 = *(unsigned long long *)((char *)self + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container_double__getSize @ 0x102c7e
unsigned int Container_double__getSize(Container_double_ *self)
{
 return *(unsigned int *)((char *)self + 0x50);
}

// Function: _fini @ 0x102c88
void _fini(void)
{
 return;
}

