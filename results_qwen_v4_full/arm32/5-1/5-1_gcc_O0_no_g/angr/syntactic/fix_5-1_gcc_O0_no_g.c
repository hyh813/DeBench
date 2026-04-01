// Angr Decompilation of 5-1_gcc_O0_no_g
// Platform: ARMEL

#ifndef NULL
#define NULL 0
#endif

#ifndef uintptr_t
typedef unsigned int uintptr_t;
#endif

/* CRT stub function _init removed by preprocessor */



// Function: sub_10a68 at 0x10a68
extern unsigned int g_25008;
extern void* operatornew(unsigned int size);
extern void abort(void);
extern void operatordelete(void* ptr, unsigned int size);
extern void* operatornew_array(unsigned int size);
extern void operatordelete_array(void* ptr);
extern void __stack_chk_fail(void);
extern void __cxa_end_cleanup(void);
extern void __cxa_bad_typeid(void);
extern void* __cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void* ptr, void* tinfo, void* dest);
extern void* __cxa_begin_catch(unsigned int v6);
extern void __cxa_end_catch(void* p, unsigned int a1, unsigned int v9, unsigned int v10);
extern void __cxa_rethrow(unsigned int v6, unsigned int a1, unsigned int v0, unsigned int v1);
extern void __cxa_throw_bad_array_new_length(void);
extern void* __dynamic_cast(void* result, unsigned int a, unsigned int b, void* c);
extern unsigned int strlen(int name);
extern int __aeabi_d2iz(unsigned int a, unsigned int b);

// Forward declarations
int armg_calculate_condition(unsigned int cond, unsigned int val1, unsigned int val2, unsigned int val3);
int SimpleClass_SimpleClass(char *ptr, int a1, int a2);
int SimpleClass_setValue(unsigned int *ptr, unsigned int v1);
int SimpleClass_getValue(unsigned int *this_ptr);
int SimpleClass_compute(unsigned int *v0, unsigned int v2);
int SimpleClass_getClassID(void* this_ptr, unsigned int a1, unsigned int a2, unsigned int a3);
int LifecycleClass_LifecycleClass(unsigned int *ptr, unsigned int v2);
int LifecycleClass_getData(unsigned int *v0, unsigned int v1);
int LifecycleClass_getInstanceCount(void* this_ptr, unsigned int a1, unsigned int a2, unsigned int a3);

// Additional forward declarations
int Derived_Derived(unsigned int *ptr, unsigned int v1);
int Base_Base(void* ptr);
int Base_virtual_func(void* this_ptr, int arg_0);
int Derived_virtual_func(void* this_ptr, int arg_0);
int BaseA_BaseA(void* ptr);
int BaseB_BaseB(void* ptr);
int MultiDerived_MultiDerived(void* ptr);
void VirtualBase_VirtualBase(void* ptr);
void MiddleA_MiddleA(void* ptr);
void MiddleB_MiddleB(void* ptr);
void DiamondDerived_DiamondDerived(void* ptr);
int RTTIBase_RTTIBase(void* ptr);
int RTTIDerivedA_RTTIDerivedA(void* ptr);
int RTTIDerivedB_RTTIDerivedB(void* ptr);
int Point_Point(void* ptr, int arg_0, int arg_1);
int Point_operator_plus(char *a0, char *a1, char *a2);
int Point_operator_equals(char *a0, char *a1, char *a2);
int Point_operator_plus_plus(void* ptr);
int template_max_int(int arg_0, int arg_1);
double template_max_double(double arg_0, double arg_1);
int template_swap_int(unsigned int *ptr, unsigned int *p, unsigned int *a2);
int Container_int_Container(void* ptr);
int Container_int_push(void* ptr, int arg_0);
int Container_int_get(void* this_ptr, unsigned int idx);
int Container_int_getSize(void* this_ptr);
int Container_double_Container(void* ptr);
int Container_double_push(char *ptr, unsigned int v2, unsigned int v3);
int Container_double_get(void* this_ptr, unsigned int idx);
int Container_double_getSize(void* this_ptr);

int sub_10a68()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10c04 at 0x10c04
void sub_10c04()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10cc4
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_member_func()
{
 unsigned int v5; // r1
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int v0; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int ch; // [bp-0x34]
 char v3; // [bp-0x30]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 SimpleClass_SimpleClass(&v3, 5, (int)"Test");
 SimpleClass_setValue((unsigned int*)&v3, 10);
 v0 = SimpleClass_getValue((unsigned int*)&v3);
 v1 = SimpleClass_compute((unsigned int*)&v3, 3);
 ch = SimpleClass_getClassID(&v3, v1, v5, v6);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x10d74
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_constructor()
{
 unsigned int v4; // r0
 unsigned int v5; // r1
 unsigned int v6; // r0
 unsigned int v7; // r2
 unsigned int v8; // r3
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x18]
 char v2; // [bp-0x14]
 unsigned int v3; // [bp-0xc]

 v3 = __glibc___stack_chk_guard;
 v0 = 0;
 LifecycleClass_LifecycleClass((unsigned int*)&v2, 5);
 v4 = LifecycleClass_getData((unsigned int*)&v2, 2);
 v1 = v0 + v4;
 v0 = v1 + LifecycleClass_getInstanceCount((void*)&v2, v4, v5, v4);
 v0 += LifecycleClass_getInstanceCount((void*)&v2, v6, v5, v7) * 1000;
 (void)v0;
 if (!(v3 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x10e48
void call_virtual_func(void *arg_0, int arg_1)
{
 char v0; // [bp-0xc]

 ((void (*)(void*, int))(*((int *)*((int *)*((int *)&v0)))))(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x10e84
extern unsigned int __glibc___stack_chk_guard;
extern char g_145f0;

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 void *v3; // [bp-0x2c]
 void *v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 char v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x14]

 v8 = __glibc___stack_chk_guard;
 Derived_Derived((unsigned int*)&v7, 3);
 Base_virtual_func(&v0, 5);
 Derived_virtual_func(&v7, 5);
 v3 = (void*)&v0;
 v4 = (void*)&v7;
 call_virtual_func(v3, 5);
 call_virtual_func(v4, 5);
 if (!(v8 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_10f6c at 0x10f6c
int sub_10f6c()
{
 __cxa_end_cleanup();
 return 0;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10fa0

extern unsigned int __glibc___stack_chk_guard;

typedef struct MultiDerived_struct {
 unsigned int field_0;
 struct struct_1 *field_4;
} MultiDerived_struct;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

typedef struct struct_0 {
 unsigned int field_0;
} struct_0;

void test_cpp_multiple_inheritance()
{
 struct_1 **v10; // r3
 struct_1 **v12; // r3
 struct_1 **v0; // [bp-0x38]
 struct_1 **v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 char v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 char v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]

 v9 = __glibc___stack_chk_guard;
 MultiDerived_MultiDerived((void*)&v5);
 v6 = 100;
 v8 = 200;
 v0 = (struct_1**)&v5;
 v1 = (struct_1**)&v7;
((void (*)(struct_1**))((unsigned int*)v0)[0])(v0);
((void (*)(struct_1**))((unsigned int*)v1)[0])(v1);
v10 = v1;
 if (v0 != v10)
 {
 v12 = (struct_1**)0x1;
 if (!armg_calculate_condition(2, (unsigned int)v0, (unsigned int)v10, 0))
 goto LABEL_11036;
LABEL_11035:
 v12 = NULL;
 }
 else
 {
 v12 = v10;
 if (armg_calculate_condition(2, (unsigned int)v0, (unsigned int)v12, 0))
 goto LABEL_11035;
LABEL_11036:
 }
 v4 = (unsigned int)(uintptr_t)v12;
 (void)v4;
 if (!(v9 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_11080 at 0x11080
int sub_11080()
{
 __cxa_end_cleanup();
 return 0;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x110a4

extern unsigned int __glibc___stack_chk_guard;

void test_cpp_diamond_inheritance()
{
 struct_1 **v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 char v3; // [bp-0x2c]
 struct_0 **v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x18]
 unsigned int v6; // [bp-0x14]

 v6 = __glibc___stack_chk_guard;
 DiamondDerived_DiamondDerived((void*)&v3);
 v5 = 50;
 v0 = (struct_1**)&v3;
 ((void (*)(struct_1**))((unsigned int*)v0)[0])(v0);
 v5 = 100;
 ((void (*)(struct_1**))((unsigned int*)v0)[0])(v0);
 if (!(v6 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_11158 at 0x11158
int sub_11158()
{
 __cxa_end_cleanup();
 return 0;
}


// Function: _Z26test_cpp_operator_overloadv at 0x1117c
extern unsigned int __glibc___stack_chk_guard;

typedef struct Point {
 int x;
 int y;
} Point;

void test_cpp_operator_overload()
{
 char result; // [bp-0x25]
 char v1; // [bp-0x24]
 char v2; // [bp-0x1c]
 char v3; // [bp-0x14]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 Point_Point(&v1, 1, 2);
 Point_Point(&v2, 3, 4);
 Point_operator_plus(&v3, &v1, &v2);
 Point_operator_equals(&v1, &v2, &v2);
 Point_operator_plus_plus(&v3);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z22test_cpp_template_funcv at 0x11250
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_func()
{
 unsigned int v5; // r1
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 template_max_int(3, 7);
 template_max_double(3.0, 7.0);
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1, &v1);
 __aeabi_d2iz(v3, v5);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x11324
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_class()
{
 unsigned int v6; // r1
 unsigned int v0; // [bp-0xb0]
 unsigned int size; // [bp-0xac]
 unsigned int v2; // [bp-0xa8]
 char v3; // [bp-0x9c]
 char v4; // [bp-0x70]
 unsigned int v5; // [bp-0x14]

 v5 = __glibc___stack_chk_guard;
 Container_int_Container(&v3);
 Container_int_push(&v3, 10);
 Container_int_push(&v3, 20);
 Container_int_push(&v3, 30);
 Container_int_get(&v3, 0);
 Container_int_getSize(&v3);
 Container_double_Container(&v4);
 Container_double_push(&v4, 1374389535, 1074339512);
 Container_double_get(&v4, 0);
 __aeabi_d2iz(v2, v6);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x1143c

int test_cpp_lambda_lambda_operator(MultiDerived_struct *idx, unsigned int a1)
{
 idx->field_4->field_0 = idx->field_4->field_0 + 5;
 return idx->field_0 * a1 + idx->field_4->field_0;
}


// Function: _Z15test_cpp_lambdav at 0x1149c
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_lambda()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int *v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]

 v6 = __glibc___stack_chk_guard;
 v1 = 10;
 v0 = 20;
 v4 = v1;
 v5 = &v0;
 test_cpp_lambda_lambda_operator((MultiDerived_struct*)&v4, 3);
 v3 = 30;
 if (!(v6 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z18test_cpp_exceptionv at 0x1152c
extern unsigned int _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // r3
 unsigned int result; // [bp-0x24]

 result = 0;
 ptr = (unsigned int*)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw((void*)ptr, (void*)0x24e70, (void*)0);
 return;
}


// Function: sub_1156c at 0x1156c
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_1156c(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // r2
 unsigned int result; // r3
 unsigned int *ptr; // r0
 unsigned int v9; // r2
 unsigned int v10; // r3
 unsigned int v11; // r1
 unsigned int *p; // r0
 unsigned int ptr2; // r0
 unsigned int v14; // r2
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 v6 = a0;
 if (a1 != 1)
 {
 result = a1;
 }
 else
 {
 ptr = (unsigned int*)__cxa_begin_catch(v6);
 v2 = *(ptr);
 v1 = v0 + v2;
 __cxa_rethrow((void*)ptr, a1, v0, v0 + v2);
 __cxa_end_catch((void*)ptr, a1, v9, v10);
 result = v11;
 }
 if (result != 1)
 __cxa_end_cleanup();
 p = (unsigned int*)__cxa_begin_catch(v6);
 v3 = *(p);
 v0 = v1 + v3 * 2;
 __cxa_end_catch((void*)p, a1, v1, v1 + v3 * 2);
 ptr = (unsigned int*)__cxa_allocate_exception(1);
 __cxa_throw((void*)ptr, (void*)0x14450, (void*)0);
 if (v11 != 2)
 {
 if (v11 != 3)
 {
 __cxa_end_cleanup();
 }
 else
 {
 v4 = (unsigned int)__cxa_begin_catch(v14);
 v1 = v0 + 200;
 __cxa_end_catch((void*)v4, a1, v9, v0 + 200);
 }
 }
 v5 = (unsigned int)__cxa_begin_catch(v14);
 v1 = v0 + 100;
 __cxa_end_catch((void*)v5, a1, v9, v0 + 100);
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x1169c
unsigned int test_cpp_smart_ptr_lambda_operator(unsigned int a0, unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 *(ptr) = 4294967295;
 if (ptr)
 a0 = operatordelete(ptr, 4);
 return a0;
}


// Function: _Z18test_cpp_smart_ptrv at 0x116e0
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_smart_ptr()
{
 unsigned int *p; // r3
 unsigned int v10; // r0
 unsigned int *ptr3; // r3
 unsigned int *ptr4; // r3
 unsigned int *ptr5; // r3
 unsigned int *ptr; // r3
 unsigned int *addr; // r3
 char v0; // [bp-0x34]
 char v1; // [bp-0x30]
 char v2; // [bp-0x2c]
 char v3; // [bp-0x28]
 char v4; // [bp-0x24]
 unsigned int v5; // [bp-0x20]
 unsigned int v6; // [bp-0x1c]
 unsigned int v7; // [bp-0x18]
 unsigned int v8; // [bp-0x14]

 v8 = __glibc___stack_chk_guard;
 p = (unsigned int*)operatornew(4);
 *p = 100;
 std_unique_ptr_C2(&v1, p);
 (void)std_unique_ptr_operator_deref(&v1);
 std_move_unique_ptr();
 std_unique_ptr_C1(&v2, 0);
 std_unique_ptr_operator_deref(&v2);
 ptr3 = (unsigned int*)operatornew_array(20);
 ptr3[0] = 1;
 ptr4 = &ptr3[1];
 ptr4[0] = 2;
 ptr5 = &ptr4[1];
 ptr5[0] = 3;
 ptr = &ptr5[1];
 ptr[0] = 4;
 ptr[1] = 5;
 std_unique_ptr_array_C2(&v3, ptr3);
 std_unique_ptr_array_operator_index(&v3, 0);
 addr = (unsigned int*)operatornew(4);
 *addr = 500;
 std_unique_ptr_C2(&v4, addr);
 (void)std_unique_ptr_operator_deref(&v4);
 if (!(v8 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_11884 at 0x11884
int sub_11884()
{
 __cxa_end_cleanup();
 return 0;
}


// Function: _Z13test_cpp_rttiv at 0x118c4
extern char _ZTI12RTTIDerivedA;
extern char _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;

void test_cpp_rtti()
{
 void* *ptr; // r4
 void* *p; // r4
 void* *flag2; // r3
 unsigned int cur; // [bp-0x24]
 void* *result; // [bp-0x20]
 void* *flag1; // [bp-0x1c]
 unsigned int flag3; // [bp-0x18]
 unsigned int flag4; // [bp-0x14]

 ptr = (void**)operatornew(4);
 *ptr = NULL;
 RTTIDerivedA_RTTIDerivedA(ptr);
 result = ptr;
 p = (void**)operatornew(4);
 *p = NULL;
 RTTIDerivedB_RTTIDerivedB(p);
 flag1 = p;
 cur = 0;
 if (!result)
 {
 __cxa_bad_typeid();
 }
 (void)cur;
 cur = 10;
 if (!flag1)
 {
 __cxa_bad_typeid();
 }
 cur = 30;
 flag3 = (unsigned int)(!result ? 0 : (unsigned int)__dynamic_cast((void*)result, 0x14638, 0x1461c, NULL));
 if (flag3)
 RTTIDerivedA_derivedA_data((void*)flag3);
 flag4 = (unsigned int)(!flag1 ? 0 : (unsigned int)__dynamic_cast((void*)flag1, 0x14638, 0x14600, NULL));
 if (flag4)
 RTTIDerivedB_derivedB_data((void*)flag4);
 if (result)
 {
 flag2 = result;
 if (!flag2)
 goto LABEL_11aa0;
 }
 else
 {
 __cxa_bad_typeid();
 }
LABEL_11aa0:
 if (flag1)
 ;
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x11adc
extern char g_1426c;
extern char g_14290;
extern char g_142b0;
extern char g_142cc;
extern char g_142e8;
extern char g_14304;
extern char g_14324;
extern char g_14340;
extern char g_1435c;
extern char g_14378;
extern char g_14394;
extern char g_143b4;
extern int puts(int s);
extern int printf(int format, ...);

void test_cpp_oo_features()
{
 puts((int)0x1426c);
 test_cpp_member_func();
 test_cpp_constructor();
 test_cpp_virtual_func();
 test_cpp_multiple_inheritance();
 test_cpp_diamond_inheritance();
 test_cpp_operator_overload();
 test_cpp_template_func();
 test_cpp_template_class();
 test_cpp_lambda();
 test_cpp_exception();
 test_cpp_smart_ptr();
 test_cpp_rtti();
 return;
}


// Function: main at 0x11c18
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ at 0x11c30
// Forward declaration

// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ at 0x11c6c
// Forward declaration

// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev at 0x11ca8
// Forward declaration

// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv at 0x11d1c
void std_unique_ptr_operator_deref(void* this_ptr);

// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ at 0x11d4c
// Forward declaration

// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x11d94
// Forward declaration

// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv at 0x11dc0
// Forward declaration

// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv at 0x11dec
// Forward declaration

// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE at 0x11e18
// Forward declaration

// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x11e3c
// Forward declaration

// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x11e90
// Forward declaration

// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv at 0x11ebc
// Forward declaration

// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x11ee8
// Forward declaration

// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x11f18
// Forward declaration

// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x11f74
// Forward declaration

// Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x11f9c
// Forward declaration

// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x11fc4
// Forward declaration

// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ at 0x11ff0
// Forward declaration

// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ at 0x12020
// Forward declaration

// Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x1204c
// Forward declaration

// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x12074
// Forward declaration

// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ at 0x1209c
// Forward declaration

// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ at 0x120c4
// Forward declaration

// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ at 0x120ec
// Forward declaration

// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ at 0x12118
// Forward declaration

// Forward declarations for smart ptr functions
int std_uniq_ptr_impl_array_M_ptr(void* this_ptr);
int std_Head_base_0_C1(unsigned int a0);
int std_Head_base_0_M_head(unsigned int a0);
int std_Head_base_0_M_head_const(unsigned int a0);
int std_unique_ptr_get_deleter(void* this_ptr);
int std_move_int_ptr(void);
void std_default_delete_operator(void* this_ptr, int *arg_0);
int std_unique_ptr_C1(char *a0, unsigned int a1);
int std_unique_ptr_C2(char *a0, unsigned int *a1);
void std_unique_ptr_operator_deref(void* this_ptr);
int std_move_unique_ptr(void);

int std_unique_ptr_array_C2(void* a0, unsigned int *a1);
int std_unique_ptr_array_operator_index(void* this_ptr, unsigned int idx);
int std_uniq_ptr_impl_M_ptr(void* this_ptr);
int std_uniq_ptr_impl_C1(void* a0, void* a1);
int std_uniq_ptr_impl_C2(void* a0, int *a1);
int std_uniq_ptr_impl_array_C2(void* a0, int *a1);
int std_tuple_C1(void* this_ptr, void* arg_0);
int std_tuple_C1_true_true(void);
int std_tuple_array_C1_true_true(void);
int std_Tuple_impl_0_C1(void* this_ptr);
int std_Tuple_impl_0_C2(void* ptr, void* arg_0);
int std_Tuple_impl_1_C1(unsigned int a0);
int std_Tuple_impl_1_C2(void);
int std_Tuple_impl_0_array_C2(void* this_ptr);
int std_Tuple_impl_1_array_C1(unsigned int a0);
int std_Tuple_impl_1_array_C2(unsigned int a0);
void* std_move_tuple(void* this_ptr, void* arg_0);
int std_get_0_tuple(void* this_ptr, void* arg_0);
int std_get_1_tuple(void);
int std_get_0_tuple_const(void);
int std_get_1_tuple_array(void);
int std_get_helper_0_tuple(void* this_ptr, void* arg_0);
int std_get_helper_1_tuple(void* this_ptr, void* arg_0);
int std_get_helper_0_tuple_const(void* this_ptr, void* arg_0);
int std_get_helper_0_tuple_array(void* this_ptr, void* arg_0);
int std_get_helper_1_tuple_array(void* this_ptr, void* arg_0);
int std_get_helper_0_tuple_array_const(void* this_ptr, void* arg_0);
int std_Head_base_1_C1(unsigned int this_ptr);
int std_Head_base_1_array_C2(void* this_ptr);
void std_Tuple_impl_0_M_head(void* this_ptr, void* arg_0);
void std_Tuple_impl_0_M_head_const(void* this_ptr, void* arg_0);
void std_Tuple_impl_1_M_head(void* this_ptr, void* arg_0);
void std_Tuple_impl_0_array_M_head(void* this_ptr, void* arg_0);
void std_Tuple_impl_0_array_M_head_const(void* this_ptr, void* arg_0);
void std_Tuple_impl_1_array_M_head(void* this_ptr, void* arg_0);
int std_Head_base_0_M_head(unsigned int a0);
int std_Head_base_0_M_head_const(unsigned int a0);
int std_Head_base_1_M_head(unsigned int a0);
int std_Head_base_1_array_M_head(unsigned int a0);
int std_unique_ptr_array_get_deleter(void);
int std_unique_ptr_get(void);


// Function: _Z41__static_initialization_and_destruction_0ii at 0x1213c
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;
extern int __aeabi_atexit(unsigned int a, void* b, unsigned int c);

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
 if (arg_0 != 1)
 {
 return;
 }
 else if (arg_1 == 65535)
 {
 return;
 }
 else
 {
 return;
 }
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x121a0
int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 v0 = (unsigned int)__static_initialization_and_destruction_0(1, 65535);
 return (unsigned int)__static_initialization_and_destruction_0(1, 65535);
}


// Function: _ZNKSt9type_info4nameEv at 0x121bc
int type_info_name(void* this_ptr)
{
 if (*((char *)(int)((unsigned int*)this_ptr)[4]) != 42)
 return 0;
 return 0;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x12208
int SimpleClass_SimpleClass(char *ptr, int a1, int a2)
{
 *((int *)ptr) = a1;
 strncpy(ptr + 4, (char*)a2, 31);
 ptr[35] = 0;
 return 0;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x12260
int SimpleClass_getValue(unsigned int *this_ptr)
{
 return *(this_ptr);
}


// Function: _ZN11SimpleClass8setValueEi at 0x12288
int SimpleClass_setValue(unsigned int *ptr, unsigned int v1)
{
 *(ptr) = v1;
 return (int)ptr;
}


// Function: _ZNK11SimpleClass7computeEi at 0x122b8
int SimpleClass_compute(unsigned int *v0, unsigned int v2)
{
 unsigned int len;
 len = strlen((char*)(v0 + 1));
 return v2 * *(v0) + len;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x12304
int SimpleClass_getClassID(void* this_ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 0;
}


// Function: _ZN14LifecycleClassC1Ej at 0x12324
extern unsigned int LifecycleClass_instance_countE;

int LifecycleClass_LifecycleClass(unsigned int v2)
{
 unsigned int *ptr;
 unsigned int i;
 unsigned int arr[2];

 ptr = arr;
 ptr[1] = v2;
 if (!((char)armg_calculate_condition(129, v2, 3758096386, 0)))
 {
 ptr[0] = (unsigned int)(void*)operatornew_array(v2 * 4);
 i = 0;
 }
 else
 {
 __cxa_throw_bad_array_new_length();
 }
 for (; i < v2; i += 1)
 {
 *((unsigned int *)(ptr[0] + i * 4)) = i * 10;
 }
 LifecycleClass_instance_countE = LifecycleClass_instance_countE + 1;
 return 0;
}


// Function: _ZN14LifecycleClassD1Ev at 0x123f4
extern unsigned int LifecycleClass_instance_countE;

int LifecycleClass_LifecycleClass_destructor(void* this_ptr)
{
 if (*((int *)this_ptr))
 operatordelete_array((void*)*((int *)this_ptr));
 LifecycleClass_instance_countE = LifecycleClass_instance_countE - 1;
 return 0;
}


// Function: _ZNK14LifecycleClass7getDataEj at 0x1244c
int LifecycleClass_getData(unsigned int *v0, unsigned int v1)
{
 return (v0[1] <= v1 ? 4294967295 : *((int *)(v0[0] + v1 * 4)));
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x124a4
int LifecycleClass_getInstanceCount(void* this_ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x124c8
int Base_virtual_func(void* this_ptr, int arg_0)
{
 unsigned int v0 = 0; // r1

 return v0 + 1;
}


// Function: _ZNK4Base7getNameEv at 0x124f4
int Base_getName(void* this_ptr)
{
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x1251c
extern char g_145f0;

int Base_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83440;
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x12550
int Base_destructor_v(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN4BaseC2Ev at 0x12584
extern char g_145f0;

int Base_Base(void* ptr)
{
 *((unsigned int *)ptr) = 83440;
 return 0;
}


// Function: _ZN7DerivedC1Ei at 0x125b8
typedef struct Derived_struct {
 char padding_0[4];
 unsigned int field_4;
} Derived_struct;

extern char g_145d8;

int Derived_Derived(unsigned int *ptr, unsigned int v1)
{
 Base_Base((void*)ptr);
 ptr[0] = 83416;
 ptr[1] = v1;
 return (int)ptr;
}


// Function: _ZN7Derived12virtual_funcEi at 0x12604

int Derived_virtual_func(void* this_ptr, int arg_0)
{
 unsigned int v0; // r1
 Derived_struct *v1; // r0

 return v0 * v1->field_4;
}


// Function: _ZNK7Derived7getNameEv at 0x12638
int Derived_getName(void* this_ptr)
{
 return 0;
}


// Function: _ZN5BaseA5funcAEv at 0x12660
int BaseA_funcA(void* this_ptr)
{
 return 0;
}


// Function: _ZN5BaseAD2Ev at 0x12684
extern char g_145c4;

int BaseA_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83396;
 return 0;
}


// Function: _ZN5BaseAD0Ev at 0x126b8
int BaseA_destructor_v(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: _ZN5BaseB5funcBEv at 0x126ec
int BaseB_funcB(void* this_ptr)
{
 return 0;
}


// Function: _ZN5BaseBD1Ev at 0x12710
extern char g_145b0;

int BaseB_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83376;
 return 0;
}


// Function: _ZN5BaseBD0Ev at 0x12744
int BaseB_destructor_v(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}


// Function: _ZN12MultiDerived5funcAEv at 0x12778
int MultiDerived_funcA(void* this_ptr)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcBEv at 0x1279c
int MultiDerived_funcB(void* this_ptr)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x127c0
int non_virtual_thunk_to_MultiDerived_funcB(void* a0)
{
 unsigned int v0; // r0

 MultiDerived_funcB((char*)a0 - 8);
 return 0;
}


// Function: _ZN5BaseAC1Ev at 0x127c8
extern char g_145c4;

int BaseA_BaseA(void* ptr)
{
 *((unsigned int *)ptr) = 83396;
 return 0;
}


// Function: _ZN5BaseBC2Ev at 0x127fc
extern char g_145b0;

int BaseB_BaseB(void* ptr)
{
 *((unsigned int *)ptr) = 83376;
 return 0;
}


// Function: _ZN12MultiDerivedC2Ev at 0x12830
extern char g_14584;
extern char g_1459c;

int MultiDerived_MultiDerived(void* ptr)
{
 BaseA_BaseA((void*)ptr);
 BaseB_BaseB((char*)ptr + 8);
 ((unsigned int *)ptr)[0] = 83332;
 ((unsigned int *)((char*)ptr + 8))[0] = 83356;
 return (int)ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x1288c
int VirtualBase_func(void* this_ptr)
{
 return 0;
}


// Function: _ZN11VirtualBaseD2Ev at 0x128b0
extern char g_14570;

void VirtualBase_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83312;
}


// Function: _ZN11VirtualBaseD0Ev at 0x128e4
void VirtualBase_destructor_v(void* this_ptr)
{
 operatordelete(this_ptr, 8);
}


// Function: _ZN7MiddleA4funcEv at 0x12918
int MiddleA_func(void* this_ptr)
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1295c
int thunk_to_MiddleA_func(void* *a0)
{
 unsigned int v0; // r0

 MiddleA_func((char *)a0 + ((int*)(*(a0)))[12]);
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x12970
int MiddleB_func(void* this_ptr)
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x129b4
int thunk_to_MiddleB_func(void* *a0)
{
 unsigned int v0; // r0

 MiddleB_func((char *)a0 + ((int*)(*(a0)))[12]);
 return 0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x129c8
int DiamondDerived_func(void* this_ptr)
{
 return 0;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x12a0c
int thunk_to_DiamondDerived_func(void* *a0)
{
 unsigned int v0; // r0

 DiamondDerived_func((char *)a0 + ((int*)(*(a0)))[12]);
 return 0;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x12a20
int non_virtual_thunk_to_DiamondDerived_func(void* a0)
{
 unsigned int v0; // r0

 DiamondDerived_func((char*)a0 - 8);
 return 0;
}


// Function: _ZN11VirtualBaseC1Ev at 0x12a28
extern char g_14570;

void VirtualBase_VirtualBase(void* ptr)
{
 ((unsigned int *)ptr)[0] = 83312;
}


// Function: _ZN7MiddleAC2Ev at 0x12a5c
void MiddleA_MiddleA(void* ptr)
{
 unsigned int idx[2] = {0, 0}; // r1

 ((unsigned int *)ptr)[0] = idx[0];
 ((unsigned int *)((char *)ptr + ((int *)(*((int *)ptr) - 12))[0]))[0] = idx[1];
}


// Function: _ZN7MiddleAD2Ev at 0x12abc
void MiddleA_destructor(void* ptr)
{
 unsigned int idx[2] = {0, 0}; // r1

 ((unsigned int *)ptr)[0] = idx[0];
 ((unsigned int *)((char *)ptr + ((int *)(*((int *)ptr) - 12))[0]))[0] = idx[1];
}


// Function: _ZN7MiddleBC2Ev at 0x12b1c
void MiddleB_MiddleB(void* ptr)
{
 unsigned int idx[2] = {0, 0}; // r1

 ((unsigned int *)ptr)[0] = idx[0];
 ((unsigned int *)((char *)ptr + ((int *)(*((int *)ptr) - 12))[0]))[0] = idx[1];
}


// Function: _ZN7MiddleBD2Ev at 0x12b7c
void MiddleB_destructor(void* ptr)
{
 unsigned int idx[2] = {0, 0}; // r1

 ((unsigned int *)ptr)[0] = idx[0];
 ((unsigned int *)((char *)ptr + ((int *)(*((int *)ptr) - 12))[0]))[0] = idx[1];
}


// Function: _ZN14DiamondDerivedC1Ev at 0x12bdc
extern char g_144a4;
extern char g_144bc;
extern char g_144d8;

void DiamondDerived_DiamondDerived(void* ptr)
{
 VirtualBase_VirtualBase((void*)((char*)ptr + 16));
 MiddleA_MiddleA((void*)ptr);
 MiddleB_MiddleB((void*)((char*)ptr + 8));
 ((unsigned int *)ptr)[0] = 83108;
 ((unsigned int *)((char*)ptr + 16))[0] = 83160;
 ((unsigned int *)((char*)ptr + 8))[0] = 83132;
}


// Function: _ZN5PointC1Eii at 0x12c74
int Point_Point(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)((char*)ptr + 4)) = arg_1;
 return 0;
}


// Function: _ZNK5PointplERKS_ at 0x12cb8
int Point_operator_plus(char *a0, char *a1, char *a2)
{
 Point_Point(a0, *((int *)a1) + *((int *)a2), *((int *)(a1 + 4)) + *((int *)(a2 + 4)));
 return (int)a0;
}


// Function: _ZNK5PointeqERKS_ at 0x12d10
int Point_operator_equals(char *a0, char *a1, char *a2)
{
 if (*((int *)a0) == *((int *)a1) && *((int *)(a0 + 4)) == *((int *)(a1 + 4)))
 return 1;
 return 0;
}


// Function: _ZN5PointppEv at 0x12d70
int Point_operator_plus_plus(void* ptr)
{
 ((int*)ptr)[0] = ((int*)ptr)[0] + 1;
 ((int*)ptr)[1] = ((int*)ptr)[1] + 1;
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x12dbc
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x12dfc
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 > arg_1)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x12e5c
int template_swap_int(unsigned int *ptr, unsigned int *p, unsigned int *a2)
{
 unsigned int v0; // [bp-0xc]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return (int)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x12ea8
typedef struct Container_int_struct {
 char padding_0[40];
 unsigned int field_28;
} Container_int_struct;

int Container_int_Container(Container_int_struct *ptr)
{
 ptr->field_28 = 0;
 return (int)ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x12ed8
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3

 if (9 >= (int)((unsigned int*)ptr)[10])
 {
 index = ((unsigned int*)ptr)[10];
 ((unsigned int*)ptr)[10] = index + 1;
 ((int *)((char *)ptr + 4 * index)) = arg_0;
 }
}


// Function: _ZNK9ContainerIiE3getEi at 0x12f2c
int Container_int_get(void* this_ptr, unsigned int idx)
{
 unsigned int v0; // r1
 unsigned int *v1; // r0

 if (idx >= 0 && ((unsigned int*)this_ptr)[10] > idx)
 return ((unsigned int*)this_ptr)[idx];
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x12f84

int Container_int_getSize(void* this_ptr)
{
 Container_int_struct *v0; // r0

 return ((Container_int_struct*)this_ptr)->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x12fac
typedef struct Container_double_struct {
 char padding_0[80];
 unsigned int field_50;
} Container_double_struct;

int Container_double_Container(Container_double_struct *ptr)
{
 ptr->field_50 = 0;
 return (int)ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x12fdc
int Container_double_push(char *ptr, unsigned int v2, unsigned int v3)
{
 unsigned int v0; // r1

 if (9 >= *((int *)&ptr[80]))
 {
 v0 = *((int *)&ptr[80]);
 *((unsigned int *)&ptr[80]) = v0 + 1;
 *((unsigned int *)&ptr[8 * v0]) = v2;
 *((unsigned int *)&ptr[4 + 8 * v0]) = v3;
 }
 return (int)ptr;
}


// Function: _ZNK9ContainerIdE3getEi at 0x13040
int Container_double_get(void* this_ptr, unsigned int idx)
{
 unsigned int v0; // r1
 unsigned int *v1; // r0

 if (idx >= 0 && ((unsigned int*)this_ptr)[20] > idx)
 return ((unsigned int*)this_ptr)[2 * idx];
 return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x130a8
int Container_double_getSize(void* this_ptr)
{
 return ((unsigned int*)this_ptr)[20];
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x130d0
int std_uniq_ptr_data_C2(void* this_ptr, void* arg_0)
{
 std_uniq_ptr_impl_C1(this_ptr, arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x13108
int std_unique_ptr_C1(char *a0, void* a1)
{
 std_uniq_ptr_data_C2(a0, a1);
 return (int)a0;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x13140
int RTTIBase_getType(void* this_ptr)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x13164
int RTTIDerivedA_getType(void* this_ptr)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x13188
int RTTIDerivedA_derivedA_data(void* this_ptr)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x131ac
int RTTIDerivedB_getType(void* this_ptr)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x131d0
int RTTIDerivedB_derivedB_data(void* this_ptr)
{
 return 0;
}


// Function: _ZN8RTTIBaseC1Ev at 0x131f4
extern char g_1448c;

int RTTIBase_RTTIBase(void* ptr)
{
 ((unsigned int *)ptr)[0] = 83084;
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x13228
extern char g_1448c;

int RTTIBase_destructor_2(void* ptr)
{
 *((unsigned int *)ptr) = 83084;
 return 0;
}


// Function: _ZN8RTTIBaseD0Ev at 0x1325c
int RTTIBase_destructor_0(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x13290
extern char g_14478;

int RTTIDerivedA_RTTIDerivedA(void* ptr)
{
 RTTIBase_RTTIBase((void*)ptr);
 ((unsigned int *)ptr)[0] = 83064;
 return (int)ptr;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x132cc
extern char g_14464;

int RTTIDerivedB_RTTIDerivedB(void* ptr)
{
 RTTIBase_RTTIBase((void*)ptr);
 ((unsigned int *)ptr)[0] = 83044;
 return (int)ptr;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x13308
int std_uniq_ptr_data_CI2(void* this_ptr, int *arg_0)
{
 std_uniq_ptr_impl_C2(this_ptr, arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x13340
int std_unique_ptr_C2(char *a0, unsigned int *a1)
{
 std_uniq_ptr_data_CI2(a0, (int*)a1);
 return (int)a0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x13374
int std_unique_ptr_D1(void* this_ptr)
{
 unsigned int v1; // r4
 unsigned int *v2; // r0
 unsigned int *ptr; // [bp-0x14]

 ptr = (unsigned int*)std_uniq_ptr_impl_M_ptr(this_ptr);
 if (ptr && *ptr)
 {
 v1 = (unsigned int)std_unique_ptr_get_deleter(this_ptr);
 v2 = (unsigned int*)std_move_int_ptr();
 std_default_delete_operator((void*)v1, (int*)v2);
 }
 if (ptr) *ptr = 0;
 return 0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x133e8
void std_unique_ptr_operator_deref_impl(void* this_ptr)
{
 (void)std_unique_ptr_get();
 return;
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x13418
int std_move_unique_ptr()
{
 return 0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x1343c
int std_Tuple_impl_0_C2(void* ptr, void* arg_0)
{
 std_Tuple_impl_1_C2();
 if (ptr && arg_0) *((int *)ptr) = *((int *)arg_0);
 return 0;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x1347c
int std_tuple_C1(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_0_C2(this_ptr, arg_0);
 return 0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x134b4
int std_uniq_ptr_impl_C1(void* a0, void* a1)
{
 std_tuple_C1(a0, std_move_tuple(a0, a1));
 return 0;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x1350c
int std_uniq_ptr_data_array_CI1(void* this_ptr, int *arg_0)
{
 std_uniq_ptr_impl_array_C2(this_ptr, arg_0);
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x13544
int std_unique_ptr_array_C2(char *a0, unsigned int *a1, int a2)
{
 std_uniq_ptr_data_array_CI1(a0, (int*)a1);
 return (int)a0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x13578
int std_unique_ptr_array_D2(void* this_ptr)
{
 unsigned int v1; // r0
 unsigned int *ptr; // [bp-0xc]

 ptr = (unsigned int*)std_uniq_ptr_impl_array_M_ptr(this_ptr);
 if (ptr && *ptr)
 {
 v1 = std_unique_ptr_array_get_deleter();
 operatordelete_array((void*)v1);
 }
 if (ptr) *ptr = 0;
 return 0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj at 0x135e4
int std_unique_ptr_array_operator_index(void* this_ptr, unsigned int idx)
{
 unsigned int *ptr;
 ptr = (unsigned int*)std_uniq_ptr_impl_array_M_ptr(this_ptr);
 return ptr[idx];
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x13624
int std_uniq_ptr_impl_C2(void* a0, int *a1)
{
 std_tuple_C1_true_true();
 return 0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x13668
int std_uniq_ptr_impl_M_ptr_impl()
{
 return 0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x13694
int std_unique_ptr_get_deleter_impl()
{
 return 0;
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x136c0
int std_move_int_ptr()
{
 return 0;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x136e4
void std_default_delete_operator(void* this_ptr, int *arg_0)
{
 if (arg_0)
 operatordelete(arg_0, 4);
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x1371c
int std_unique_ptr_get()
{
 return 0;
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x13748
void* std_move_tuple(void* this_ptr, void* arg_0)
{
 return this_ptr;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ at 0x1376c
int std_Tuple_impl_1_C2()
{
 return 0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x13794
int std_uniq_ptr_impl_array_C2(void* a0, int *a1)
{
 std_tuple_array_C1_true_true();
 return 0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x137d8
int std_uniq_ptr_impl_array_M_ptr(void* this_ptr)
{
 return 0;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x13804
unsigned int std_unique_ptr_array_get_deleter(void)
{
 return 0;
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x13830
unsigned int _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(unsigned int a0, void* a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 if (a1)
 operatordelete_array(a1);
 return a0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x13864
int std_unique_ptr_array_get(void* this_ptr)
{
 return (int)std_uniq_ptr_impl_array_M_ptr(this_ptr);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x13890
int std_tuple_C1_true_true()
{
 std_Tuple_impl_0_C1(NULL);
 return 0;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x138bc
void* std_get_0_tuple(void* this_ptr, void* arg_0)
{
 return std_get_helper_0_tuple(this_ptr, arg_0);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x138e8
int std_uniq_ptr_impl_M_deleter_impl(void* this_ptr)
{
 return std_get_1_tuple();
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x13914
int std_uniq_ptr_impl_M_ptr_const_impl(void* this_ptr)
{
 return std_get_0_tuple(this_ptr, NULL);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x13944
int std_tuple_array_C2_true_true()
{
 std_Tuple_impl_0_array_C2(NULL);
 return 0;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x13970
void* std_get_0_tuple_array(void* this_ptr, void* arg_0)
{
 return std_get_helper_0_tuple_array(this_ptr, arg_0);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x1399c
int std_uniq_ptr_impl_array_M_deleter_impl(void* this_ptr)
{
 return std_get_1_tuple_array();
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x139c8
int std_uniq_ptr_impl_array_M_ptr_const_impl(void)
{
 return 0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC1Ev at 0x139f8
int std_Tuple_impl_0_C1(void* this_ptr)
{
 std_Tuple_impl_1_C1(0);
 std_Head_base_0_C1((uintptr_t)this_ptr);
 return 0;
}

// Function: std_Head_base_0_C1
int std_Head_base_0_C1(uintptr_t a0)
{
 if (a0) *(unsigned int*)a0 = 0;
 return a0;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13a2c
int* std_get_helper_0_tuple(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_0_M_head(this_ptr, arg_0);
 return (int*)this_ptr;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x13a54
int std_get_1_tuple()
{
 return std_get_helper_1_tuple(NULL, NULL);
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x13a7c
int std_get_0_tuple_const()
{
 return std_get_helper_0_tuple_const(NULL, NULL);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev at 0x13aa8
int std_Tuple_impl_0_array_C2(void* this_ptr)
{
 std_Tuple_impl_1_array_C2(0);
 std_Head_base_0_C1((uintptr_t)this_ptr);
 return 0;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x13adc
int* std_get_helper_0_tuple_array(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_0_array_M_head(this_ptr, arg_0);
 return (int*)this_ptr;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x13b04
int std_get_1_tuple_array()
{
 return std_get_helper_1_tuple_array(NULL, NULL);
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x13b2c
void* std_get_0_tuple_array_const(void* this_ptr, void* arg_0)
{
 return std_get_helper_0_tuple_array_const(this_ptr, arg_0);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x13b58
int std_forward_int_ptr()
{
 return 0;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC1Ev at 0x13b7c
int std_Tuple_impl_1_C1(unsigned int a0)
{
 std_Head_base_1_C1(a0);
 return 0;
}





// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x13bd4
void std_Tuple_impl_0_M_head(void* this_ptr, void* arg_0)
{
 std_Head_base_0_M_head((unsigned int)this_ptr);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x13c00
void* std_get_helper_1_tuple(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_1_M_head(this_ptr, arg_0);
 return this_ptr;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13c28
int* std_get_helper_0_tuple_const(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_0_M_head_const(this_ptr, arg_0);
 return (int*)this_ptr;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC1Ev at 0x13c50
int std_Tuple_impl_1_array_C1(unsigned int a0)
{
 std_Head_base_1_array_C1(a0);
 return 0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x13c78
void std_Tuple_impl_0_array_M_head(void* this_ptr, void* arg_0)
{
 std_Head_base_0_M_head((unsigned int)this_ptr);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13ca4
void* std_get_helper_1_tuple_array(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_1_array_M_head(this_ptr, arg_0);
 return this_ptr;
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x13ccc
int* std_get_helper_0_tuple_array_const(void* this_ptr, void* arg_0)
{
 std_Tuple_impl_0_array_M_head_const(this_ptr, arg_0);
 return (int*)this_ptr;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ at 0x13cf4
int std_Head_base_0_C2(void* ptr, int *arg_0)
{
 if (ptr && arg_0) *((int *)ptr) = *arg_0;
 return 0;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC1Ev at 0x13d30
int std_Head_base_1_C1(unsigned int this_ptr)
{
 return 0;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ at 0x13d54
int std_Head_base_0_M_head(unsigned int a0)
{
 return a0;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x13d78
void std_Tuple_impl_1_M_head(void* this_ptr, void* arg_0)
{
 std_Head_base_1_M_head((unsigned int)this_ptr);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x13da0
void std_Tuple_impl_0_M_head_const(void* this_ptr, void* arg_0)
{
 std_Head_base_0_M_head_const((unsigned int)this_ptr);
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev at 0x13dcc
int std_Head_base_1_array_C2(void* this_ptr)
{
 return 0;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x13df0
void std_Tuple_impl_1_array_M_head(void* this_ptr, void* arg_0)
{
 std_Head_base_1_array_M_head((unsigned int)this_ptr);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x13e18
void std_Tuple_impl_0_array_M_head_const(void* this_ptr, void* arg_0)
{
 std_Head_base_0_M_head_const((unsigned int)this_ptr);
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x13e44
int std_Head_base_1_M_head(unsigned int a0)
{
 return a0;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ at 0x13e68
int std_Head_base_0_M_head_const(unsigned int a0)
{
 return a0;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x13e8c
int std_Head_base_1_array_M_head(unsigned int a0)
{
 return a0;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x13eb0
extern char g_14464;

int RTTIDerivedB_destructor_1(void* ptr)
{
 *((unsigned int *)ptr) = 83044;
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x13eec
int RTTIDerivedB_destructor_0(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x13f20
extern char g_14478;

int RTTIDerivedA_destructor_1(void* ptr)
{
 *((unsigned int *)ptr) = 83064;
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x13f5c
int RTTIDerivedA_destructor_0(void* this_ptr)
{
 operatordelete(this_ptr, 4);
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x13f90
extern char g_144a4;
extern char g_144bc;
extern char g_144d8;

int DiamondDerived_destructor_1(void* ptr)
{
 *((unsigned int *)ptr) = 83108;
 *((unsigned int *)((char*)ptr + 16)) = 83160;
 *((unsigned int *)((char*)ptr + 8)) = 83132;
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x14028
int non_virtual_thunk_to_DiamondDerived_destructor_1(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x14030
int thunk_to_DiamondDerived_destructor_1(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x14044
int DiamondDerived_destructor_0(void* this_ptr)
{
 operatordelete(this_ptr, 24);
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x14078
int non_virtual_thunk_to_DiamondDerived_destructor_0(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x14080
int thunk_to_DiamondDerived_destructor_0(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x14094
extern char g_14584;
extern char g_1459c;

int MultiDerived_destructor_1(void* ptr)
{
 *((unsigned int *)ptr) = 83332;
 *((unsigned int *)((char*)ptr + 8)) = 83356;
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x140f0
int non_virtual_thunk_to_MultiDerived_destructor_1(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x140f8
int MultiDerived_destructor_0(void* this_ptr)
{
 operatordelete(this_ptr, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x1412c
int non_virtual_thunk_to_MultiDerived_destructor_0(unsigned int a0)
{
 unsigned int v0; // r0

 return v0;
}


// Function: _ZN7DerivedD2Ev at 0x14134
extern char g_145d8;

int Derived_destructor_2(void* ptr)
{
 *((unsigned int *)ptr) = 83416;
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x14170
int Derived_destructor_0(void* this_ptr)
{
 operatordelete(this_ptr, 8);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


