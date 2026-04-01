// Angr Decompilation of 5-1_gcc_O0_g
// Platform: ARMEL

// Class declarations
class Base {
public:
 virtual int virtual_func(int a1);
 virtual int getName();
};

class Derived : public Base {
public:
 int field_4;
 Derived(int v1);
 int virtual_func(int a1);
 int getName();
};

class Point {
public:
 int x;
 int y;
 Point();
 Point(int x, int y);
 void operator+(const Point& other);
 int operator==(const Point& other);
 void operator++();
};

class SimpleClass {
public:
 int value;
 char name[32];
 SimpleClass(int v, const char* n);
 void setValue(int v);
 int getValue();
 int compute(int v);
 int getClassID();
};

class LifecycleClass {
public:
 unsigned int* data;
 unsigned int size;
 static unsigned int instance_count;
 LifecycleClass(unsigned int sz);
 ~LifecycleClass();
 int getData(unsigned int index);
 static int getInstanceCount();
};

// Function declarations
int armg_calculate_condition(int, void*, void*, int);
void __cxa_end_cleanup(void);
void __cxa_bad_typeid(void);
void __cxa_allocate_exception(unsigned int size);
void __cxa_throw(void*, unsigned int, void*, void*);
void* __cxa_begin_catch(void*);
void __cxa_end_catch(void);
void __cxa_rethrow(void*, int, void*, int);
void* __dynamic_cast(void*, unsigned int, unsigned int, int);
int __aeabi_dcmpgt(unsigned int, unsigned int, unsigned int, unsigned int);
int __aeabi_d2iz(unsigned int, unsigned int);
int std_type_info_operator_equal(int, unsigned int);
void* operatornew(unsigned int size);
void operatordelete(void* ptr, unsigned int size);

/* CRT stub function _init removed by preprocessor */
void operatordelete(void* ptr, unsigned int size);
void operatordelete[](void* ptr);
void* operatornew(unsigned int size);
void* operatornew[](unsigned int size);
void __stack_chk_fail(void);

/* CRT stub function _init removed by preprocessor */



// Function: sub_10a68 at 0x10a68
extern unsigned int g_25008;

int sub_10a68()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 goto g_25008;
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
 SimpleClass::SimpleClass(&v3, 5, "Test", &v3);
 SimpleClass::setValue(&v3, 10);
 v0 = SimpleClass::getValue(&v3);
 v1 = SimpleClass::compute(&v3, 3);
 ch = SimpleClass::getClassID(&v3);
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
 LifecycleClass::LifecycleClass(&v2, 5);
 v4 = LifecycleClass::getData(&v2, 2);
 v1 = v0 + v4;
 v0 = v1 + LifecycleClass::getInstanceCount(v4, v5, v4, v0 + v4);
 v0 += LifecycleClass::getInstanceCount(v6, v5, v7, v8) * 1000;
 if (!(v3 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x10e48

void call_virtual_func(class Base *arg_0, int arg_1)
{
 (*((void (**)(class Base *, int))(*(unsigned int **)(arg_0))))(arg_0, arg_1);
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
 Base *v3; // [bp-0x2c]
 Base *v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 char v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x14]

 v8 = __glibc___stack_chk_guard;
 v0 = 83440;
 Derived::Derived(&v7, 3);
 v1 = Base_virtual_func(&v0, 5);
 v2 = Derived_virtual_func(&v7, 5);
 v3 = &v0;
 v4 = &v7;
 call_virtual_func(v3, 5);
 call_virtual_func(v4, 5);
 if (!(v8 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_10f6c at 0x10f6c
int sub_10f6c()
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3

 __cxa_end_cleanup();
 return 0;
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10fa0
typedef struct struct_1 {
 struct multi_struct_0 *field_0;
} struct_1;

typedef struct multi_struct_0 {
 unsigned int field_0;
} multi_struct_0;

extern unsigned int __glibc___stack_chk_guard;

void test_cpp_multiple_inheritance()
{
 struct_1 **v10; // r3
 struct_1 **v12; // r3
 struct_1 *v0; // [bp-0x38]
 struct_1 *v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 char v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 char v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]

 v9 = __glibc___stack_chk_guard;
 MultiDerived::MultiDerived(&v5);
 v6 = 100;
 v8 = 200;
 v0 = (struct_1 *)&v5;
 v1 = (struct_1 *)&v7;
 v2 = (unsigned int)v0->field_0;
 v3 = (unsigned int)v1->field_0;
 v10 = v1;
 if (v0 != v10)
 {
 v12 = (unsigned int)0x1;
 if (!armg_calculate_condition(2, v0, v10, 0))
 goto LABEL_11036;
LABEL_11035:
 v12 = NULL;
 }
 else
 {
 v12 = v10;
 if (armg_calculate_condition(2, v0, v12, 0))
 goto LABEL_11035;
LABEL_11036:
 }
 v4 = v12 & 255;
 if (!(v9 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_11080 at 0x11080
void sub_11080()
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3

 __cxa_end_cleanup();
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x110a4
typedef struct struct_0 {
 unsigned int field_0;
 struct struct_0 *field_4;
} struct_0;

typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

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
 DiamondDerived::DiamondDerived(&v3);
 v5 = 50;
 v0 = &v4;
 v1 = (unsigned int)(*v0)->field_0;
 v5 = 100;
 v2 = (unsigned int)(*v0)->field_0;
 if (!(v6 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_11158 at 0x11158
int sub_11158()
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3

 __cxa_end_cleanup();
 return 0;
}


// Function: _Z26test_cpp_operator_overloadv at 0x1117c
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_operator_overload()
{
 char v1; // [bp-0x24]
 char v2; // [bp-0x1c]
 char v3; // [bp-0x14]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 Point_Point(&v1, 1, 2);
 Point_Point(&v2, 3, 4);
 Point_Point(&v3, *((int *)&v1) + *((int *)&v2), *((int *)&v1[4]) + *((int *)&v2[4]));
 Point::operator++(&v3);
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
 v2 = template_max_int(3, 7);
 v3 = template_max_double(0, 0x40040000, 0, 0x3ff80000);
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1, &v1, &v0);
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
 v0 = Container_int_get(&v3, 0);
 size = Container_int_getSize(&v3);
 Container_double_Container(&v4);
 Container_double_push(&v4, &v4, 1374389535, 1074339512);
 v2 = Container_double_get(&v4, 0);
 __aeabi_d2iz(v2, v6, v0, size);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x1143c
typedef struct lambda_struct_0 {
 unsigned int field_0;
 struct lambda_struct_1 *field_4;
} lambda_struct_0;

typedef struct lambda_struct_1 {
 unsigned int field_0;
} lambda_struct_1;

int test_cpp_lambda_operator_call(lambda_struct_0 *idx, unsigned int a1)
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
 char *v5; // [bp-0x10]
 unsigned int v6; // [bp-0xc]

 v6 = __glibc___stack_chk_guard;
 v1 = 10;
 v0 = 20;
 v4 = v1;
 v5 = &v0;
 v2 = test_cpp_lambda_operator_call(&v4, 3);
 v3 = 30;
 if (!(v6 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z18test_cpp_exceptionv at 0x1152c
extern unsigned int CXXABI_1_3::_ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // r3
 unsigned int result; // [bp-0x24]

 result = 0;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, 0x24e70, 0, ptr);
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
 unsigned int *ptr2; // r0
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
 ptr = __cxa_begin_catch(v6);
 v2 = *(ptr);
 v1 = v0 + v2;
 __cxa_rethrow(ptr, a1, v0, v0 + v2);
 v2 = v1;
 __cxa_end_catch();
 result = v11;
 }
 if (result != 1)
 __cxa_end_cleanup();
 p = __cxa_begin_catch(v6);
 v3 = *(p);
 v0 = v1 + v3 * 2;
 __cxa_end_catch();
 ptr2 = (unsigned int *)__cxa_allocate_exception(1);
 __cxa_throw(ptr2, 0x14450, 0, ptr2);
 if (v11 != 2)
 {
 if (v11 != 3)
 {
 __cxa_end_cleanup();
 }
 else
 {
 v4 = __cxa_begin_catch(v14);
 v1 = v0 + 200;
 __cxa_end_catch();
 }
 }
 v5 = __cxa_begin_catch(v14);
 v1 = v0 + 100;
 __cxa_end_catch();
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x1169c
unsigned int test_cpp_smart_ptr_deleter(unsigned int a0, unsigned int *ptr)
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
 unsigned int *ptr3;
 unsigned int *ptr4;
 unsigned int *ptr5;
 unsigned int *ptr;
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
 *(p) = 100;
 std_unique_ptr_int_default_unique_ptr(&v1, p);
 *((int*)std_unique_ptr_int_default_operator_deref(&v1)) = 200;
 (void)std_move_unique_ptr(&v1);
 std_unique_ptr_int_default_unique_ptr2(&v2, &v1);
 v5 = *((int*)std_unique_ptr_int_default_operator_deref(&v2));
 ptr3 = (unsigned int*)operatornew(20);
 ptr3[0] = 1;
 ptr4 = &ptr3[1];
 ptr4[0] = 2;
 ptr5 = &ptr4[1];
 ptr5[0] = 3;
 ptr = &ptr5[1];
 ptr[0] = 4;
 ptr[1] = 5;
 std_unique_ptr_int_array_unique_ptr(&v3, (unsigned int*)ptr3);
 v6 = *((int *)std_unique_ptr_int_array_operator_index(&v3, 2));
 v6 = *((int *)std_unique_ptr_int_array_operator_index(&v3, 2));
 addr = (unsigned int*)operatornew(4);
 *(addr) = 500;
 std_unique_ptr_int_lambda_unique_ptr(&v4, addr);
 (void)std_unique_ptr_int_lambda_operator_deref(&v4);
 v7 = *((int*)&v4);
 if (!(v8 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_11884 at 0x11884
int sub_11884()
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3

 __cxa_end_cleanup();
 return 0;
}


// Function: _Z13test_cpp_rttiv at 0x118c4
extern char _ZTI12RTTIDerivedA;
extern char _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;

void test_cpp_rtti()
{
 void **ptr; // r4
 void **p; // r4
 void **flag2; // r3
 unsigned int cur; // [bp-0x24]
 void **result; // [bp-0x20]
 void **flag1; // [bp-0x1c]
 unsigned int flag3; // [bp-0x18]
 unsigned int flag4; // [bp-0x14];

 ptr = (void **)operatornew(4);
 *(ptr) = 0;
 RTTIDerivedA_RTTIDerivedA(ptr);
 result = ptr;
 p = (void **)operatornew(4);
 *(p) = 0;
 RTTIDerivedB_RTTIDerivedB(p);
 flag1 = p;
 cur = 0;
 if (!result)
 {
 __cxa_bad_typeid();
 }
 else if (!(unsigned int)std_type_info_operator_equal((int)*((unsigned int **)result + 1), 0x1461c))
 {
 goto LABEL_11960;
 }
 cur += 10;
LABEL_11960:
 if (!flag1)
 {
 __cxa_bad_typeid();
 }
 else if (!(unsigned int)std_type_info_operator_equal((int)*((unsigned int **)flag1 + 1), 0x14600))
 {
 goto LABEL_119a0;
 }
 cur += 20;
LABEL_119a0:
 flag3 = (unsigned int)(!result ? 0 : __dynamic_cast(result, 0x14638, 0x1461c, 0));
 if (flag3)
 cur += RTTIDerivedA_derivedA_data(flag3);
 flag4 = (unsigned int)(!flag1 ? 0 : __dynamic_cast(flag1, 0x14638, 0x14600, 0));
 if (flag4)
 cur += RTTIDerivedB_derivedB_data(flag4);
 if (result)
 {
 cur += strlen(std_type_info_name((void *)(*(result))));
 flag2 = result;
 if (!flag2)
 goto LABEL_11aa0;
 }
 else
 {
 __cxa_bad_typeid();
 }
 flag2;
LABEL_11aa0:
 if (flag1)
 flag1;
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

void test_cpp_oo_features()
{
 puts(g_1426c);
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


// Function: _ZNSt15__uniq_ptr_data_int_lambda___uniq_ptr_data at 0x11c30
void std___uniq_ptr_data_int_lambda___uniq_ptr_data(void* a0, void* a1, void* a2)
{
 std___uniq_ptr_impl_int_lambda___uniq_ptr_impl((unsigned int)a0, (unsigned int)a1, (unsigned int)a2, (unsigned int)a0);
}


// Function: _ZNSt10unique_ptr_int_lambda_unique_ptr at 0x11c6c
void std_unique_ptr_int_lambda_unique_ptr(void* a0, void* a1)
{
 std___uniq_ptr_data_int_lambda___uniq_ptr_data(a0, a1, a0);
}


// Function: _ZNSt10unique_ptr_int_lambda_destructor at 0x11ca8
void std_unique_ptr_int_lambda_destructor(unsigned int a0)
{
 unsigned int v1; // r4
 unsigned int *ptr; // [bp-0x14]
 unsigned int *ptr_val;

 ptr = (unsigned int*)(std___uniq_ptr_impl_int_lambda__M_ptr(a0));
 ptr_val = (unsigned int*)*(ptr);
 if (ptr_val)
 {
 v1 = std_unique_ptr_int_lambda_get_deleter(a0);
 test_cpp_smart_ptr_deleter(v1, ptr_val);
 }
 *(ptr) = 0;
}


// Function: _ZNKSt10unique_ptr_int_lambda_operator_deref at 0x11d1c
unsigned int std_unique_ptr_int_lambda_operator_deref(void* self)
{
 return std_unique_ptr_int_lambda_get((unsigned int)self);
}


// Function: _ZNSt15__uniq_ptr_impl_int_lambda___uniq_ptr_impl at 0x11d4c
void std___uniq_ptr_impl_int_lambda___uniq_ptr_impl(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x1c]

 v0 = a1;
 std_forward_lambda(a2);
 std_tuple_int_lambda_tuple(a0, &v0, (int)a2, &v0);
}


// Function: _ZNSt15__uniq_ptr_impl_int_lambda__M_ptr at 0x11d94
unsigned int std___uniq_ptr_impl_int_lambda__M_ptr(unsigned int a0)
{
 return std_get_0_int_lambda(a0);
}


// Function: _ZNSt10unique_ptr_int_lambda_get_deleter at 0x11dc0
unsigned int std_unique_ptr_int_lambda_get_deleter(unsigned int a0)
{
 return std___uniq_ptr_impl_int_lambda__M_deleter(a0);
}


// Function: _ZNKSt10unique_ptr_int_lambda_get at 0x11dec
unsigned int std_unique_ptr_int_lambda_get(unsigned int a0)
{
 return std___uniq_ptr_impl_int_lambda__M_ptr_const(a0);
}


// Function: _ZSt7forward_lambda at 0x11e18
void std_forward_lambda(unsigned int a0)
{
 (void)a0;
}


// Function: _ZNSt5tuple_int_lambda_tuple at 0x11e3c
void std_tuple_int_lambda_tuple(void* a0, void* a1, void* a2)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = (unsigned int)std_forward_int_ptr(a1);
 v1 = (unsigned int)std_forward_lambda(a2);
 std__Tuple_impl_0_int_lambda__Tuple_impl((unsigned int)a0, v0, v1);
}


// Function: _ZSt3get_0_int_lambda at 0x11e90
unsigned int std_get_0_int_lambda(unsigned int a0)
{
 return std___get_helper_0_int_lambda(a0);
}


// Function: _ZNSt15__uniq_ptr_impl_int_lambda__M_deleter at 0x11ebc
unsigned int std___uniq_ptr_impl_int_lambda__M_deleter(unsigned int a0)
{
 return std_get_1_int_lambda(a0);
}


// Function: _ZNKSt15__uniq_ptr_impl_int_lambda__M_ptr_const at 0x11ee8
unsigned int std___uniq_ptr_impl_int_lambda__M_ptr_const(unsigned int a0)
{
 return std_get_0_int_lambda_const(a0);
}


// Function: _ZNSt11_Tuple_impl_0_int_lambda__Tuple_impl at 0x11f18
void std__Tuple_impl_0_int_lambda__Tuple_impl(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0;
 unsigned int v1;
 v0 = std_forward_lambda(a2);
 v1 = std_forward_int_ptr(a1);
 v0 = std__Tuple_impl_1_lambda__Tuple_impl(a0, v0);
 std__Head_base_0_int_ptr__Head_base(a0, v1);
}


// Function: _ZSt12__get_helper_0_int_lambda at 0x11f74
unsigned int std___get_helper_0_int_lambda(unsigned int a0)
{
 return std__Tuple_impl_0_int_lambda__M_head(a0);
}


// Function: _ZSt3get_1_int_lambda at 0x11f9c
unsigned int std_get_1_int_lambda(unsigned int a0)
{
 return (unsigned int)std___get_helper_1_lambda(a0);
}


// Function: _ZSt3get_0_int_lambda_const at 0x11fc4
unsigned int std_get_0_int_lambda_const(unsigned int a0)
{
 return std___get_helper_0_int_lambda_const(a0);
}


// Function: _ZNSt11_Tuple_impl_1_lambda__Tuple_impl at 0x11ff0
void std__Tuple_impl_1_lambda__Tuple_impl(unsigned int a0, unsigned int a1)
{
 std__Head_base_1_lambda__Head_base(a0, a1);
}


// Function: _ZNSt11_Tuple_impl_0_int_lambda__M_head at 0x12020
unsigned int std__Tuple_impl_0_int_lambda__M_head(unsigned int a0)
{
 return std__Head_base_0_int_ptr__M_head(a0);
}


// Function: _ZSt12__get_helper_1_lambda at 0x1204c
unsigned int std___get_helper_1_lambda(unsigned int a0)
{
 return std__Tuple_impl_1_lambda__M_head(a0);
}


// Function: _ZSt12__get_helper_0_int_lambda_const at 0x12074
unsigned int std___get_helper_0_int_lambda_const(unsigned int a0)
{
 return std__Tuple_impl_0_int_lambda__M_head_const(a0);
}


// Function: _ZNSt10_Head_base_1_lambda__Head_base at 0x1209c
void std__Head_base_1_lambda__Head_base(unsigned int a0, unsigned int a1)
{
 *((unsigned int*)a0) = a1;
}


// Function: _ZNSt11_Tuple_impl_1_lambda__M_head at 0x120c4
unsigned int std__Tuple_impl_1_lambda__M_head(unsigned int a0)
{
 return std__Head_base_1_lambda__M_head(a0);
}


// Function: _ZNSt11_Tuple_impl_0_int_lambda__M_head_const at 0x120ec
unsigned int std__Tuple_impl_0_int_lambda__M_head_const(unsigned int a0)
{
 return std__Head_base_0_int_ptr__M_head(a0);
}


// Function: _ZNSt10_Head_base_1_lambda__M_head at 0x12118
unsigned int std__Head_base_1_lambda__M_head(unsigned int a0)
{
 return a0;
}


// Function: _Z41__static_initialization_and_destruction_0ii at 0x1213c
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
 if (arg_0 != 1)
 {
 return;
 }
 else if (arg_1 == 65535)
 {
 (void)std::ios_base::Init::Init(0x250a0);
 (void)__aeabi_atexit(0x250a0, std::ios_base::Init::~Init, 0x25094);
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
const char* std_type_info_name(void* self)
{
 return 0;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x12208
void SimpleClass::SimpleClass(char *ptr, int a1, int a2)
{
 *((int *)&ptr) = a1;
 strncpy(ptr + 4, a2, 31);
 ptr[35] = 0;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x12260
int SimpleClass_getValue(void* self)
{
 unsigned int *v0 = (unsigned int *)self;

 return *(v0);
}


// Function: _ZN11SimpleClass8setValueEi at 0x12288
void SimpleClass_setValue(void* self, int v)
{
 *(int*)self = v;
}


// Function: _ZNK11SimpleClass7computeEi at 0x122b8
int SimpleClass_compute(void* self)
{
 unsigned int *v0 = (unsigned int *)self;
 unsigned int len;
 unsigned int v2 = *(v0);

 len = strlen((char*)(v0 + 1));
 return v2 * *(v0) + len;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x12304
int SimpleClass_getClassID(void* self)
{
 return 0;
}


// Function: _ZN14LifecycleClassC1Ej at 0x12324
extern unsigned int _ZN14LifecycleClass14instance_countE;

void LifecycleClass_LifecycleClass(void* self)
{
 unsigned int ptr[2]; // r0
 unsigned int v2; // r1
 unsigned int i; // [bp-0xc]

 ptr[1] = v2;
 if (!((char)armg_calculate_condition(129, v2, 3758096386, 0)))
 {
 ptr[0] = (unsigned int)operatornew(v2 * 4);
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
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
}


// Function: _ZN14LifecycleClassD1Ev at 0x123f4
extern unsigned int _ZN14LifecycleClass14instance_countE;

void LifecycleClass_destructor(void* self)
{
 if (*((int *)self))
 operatordelete[](*((int *)self));
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
}


// Function: _ZNK14LifecycleClass7getDataEj at 0x1244c
int LifecycleClass_getData(void* self, unsigned int v1)
{
 unsigned int** v0 = (unsigned int**)self;

 return (v0[1] <= v1 ? -1 : *((int *)((char*)v0[0] + v1 * 4)));
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x124a4
int LifecycleClass_getInstanceCount(void* self)
{
 return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x124c8
int Base_virtual_func(void* self, int a1)
{
 return a1 + 1;
}


// Function: _ZNK4Base7getNameEv at 0x124f4
int Base_getName(void* self)
{
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x1251c
extern char g_145f0;

void Base_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83440;
}


// Function: _ZN4BaseD0Ev at 0x12550
int Base_deleting_destructor(void* self)
{
 operatordelete((void*)self, 4);
 return 0;
}


// Function: _ZN4BaseC2Ev at 0x12584
extern char g_145f0;

void Base_Base(void* ptr)
{
 *((unsigned int *)ptr) = 83440;
}


// Function: _ZN7DerivedC1Ei at 0x125b8
typedef struct derived_struct_0 {
 char padding_0[4];
 unsigned int field_4;
} derived_struct_0;

extern char g_145d8;

void Derived_Derived(void* self)
{
 struct_0 *ptr; // r0
 unsigned int v1; // r1

 Base_Base(ptr);
 *((unsigned int *)&ptr->padding_0[0]) = 83416;
 ptr->field_4 = v1;
}


// Function: _ZN7Derived12virtual_funcEi at 0x12604
typedef struct derived_struct_0 {
 char padding_0[4];
 unsigned int field_4;
} derived_struct_0;

int Derived_virtual_func(void* self, int a1)
{
 struct_0 *v1; // r0

 return a1 * v1->field_4;
}


// Function: _ZNK7Derived7getNameEv at 0x12638
int Derived_getName(void* self)
{
 return 0;
}


// Function: _ZN5BaseA5funcAEv at 0x12660
void BaseA_funcA(void* self)
{
}


// Function: _ZN5BaseAD2Ev at 0x12684
extern char g_145c4;

void BaseA_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83396;
}


// Function: _ZN5BaseAD0Ev at 0x126b8
int BaseA_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: _ZN5BaseB5funcBEv at 0x126ec
void BaseB_funcB(void* self)
{
}


// Function: _ZN5BaseBD1Ev at 0x12710
extern char g_145b0;

void BaseB_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83376;
}


// Function: _ZN5BaseBD0Ev at 0x12744
int BaseB_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: _ZN12MultiDerived5funcAEv at 0x12778
void MultiDerived_funcA(void* self)
{
}


// Function: _ZN12MultiDerived5funcBEv at 0x1279c
void MultiDerived_funcB(void* self)
{
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x127c0
int MultiDerived_funcB_nonvirtual_thunk(void* a0)
{
 return MultiDerived_funcB((char*)a0 - 8);
}


// Function: _ZN5BaseAC1Ev at 0x127c8
extern char g_145c4;

void BaseA_BaseA(void* ptr)
{
 *((unsigned int *)ptr) = 83396;
}


// Function: _ZN5BaseBC2Ev at 0x127fc
extern char g_145b0;

void BaseB_BaseB(void* ptr)
{
 *((unsigned int *)ptr) = 83376;
}


// Function: _ZN12MultiDerivedC2Ev at 0x12830
extern char g_14584;
extern char g_1459c;

void MultiDerived_MultiDerived(void* self)
{
 void* ptr; // r0

 ptr = self;
 BaseA_BaseA(ptr);
 BaseB_BaseB((char*)ptr + 8);
 *((unsigned int *)ptr) = 83332;
 *((unsigned int *)&ptr[8]) = 83356;
}


// Function: _ZN11VirtualBase4funcEv at 0x1288c
void VirtualBase_func(void* self)
{
}


// Function: _ZN11VirtualBaseD2Ev at 0x128b0
extern char g_14570;

void VirtualBase_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83312;
}


// Function: _ZN11VirtualBaseD0Ev at 0x128e4
int VirtualBase_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: _ZN7MiddleA4funcEv at 0x12918
void MiddleA_func(void* self)
{
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1295c
int MiddleA_func_thunk(void* *a0)
{
 return MiddleA_func((char *)a0 + ((unsigned int **)(a0))[0][12]);
}


// Function: _ZN7MiddleB4funcEv at 0x12970
void MiddleB_func(void* self)
{
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x129b4
int MiddleB_func_thunk(void* *a0)
{
 return MiddleB_func((char *)a0 + ((unsigned int **)(a0))[0][12]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x129c8
void DiamondDerived_func(void* self)
{
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x12a0c
int DiamondDerived_func_thunk(void* *a0)
{
 return DiamondDerived_func((char *)a0 + ((unsigned int **)(a0))[0][12]);
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x12a20
int DiamondDerived_func_nonvirtual_thunk(void* a0)
{
 return DiamondDerived_func((char*)a0 - 8);
}


// Function: _ZN11VirtualBaseC1Ev at 0x12a28
extern char g_14570;

void VirtualBase_VirtualBase(void* ptr)
{
 *((unsigned int *)ptr) = 83312;
}


// Function: _ZN7MiddleAC2Ev at 0x12a5c
void MiddleA_MiddleA(void* ptr)
{
 *((unsigned int *)ptr) = 0;
 *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = 0;
}


// Function: _ZN7MiddleAD2Ev at 0x12abc
void MiddleA_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 0;
 *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = 0;
}


// Function: _ZN7MiddleBC2Ev at 0x12b1c
void MiddleB_MiddleB(void* ptr)
{
 *((unsigned int *)ptr) = 0;
 *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = 0;
}


// Function: _ZN7MiddleBD2Ev at 0x12b7c
void MiddleB_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 0;
 *((unsigned int *)((char *)ptr + *((int *)(*((int *)ptr) - 12)))) = 0;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x12bdc
extern char g_144a4;
extern char g_144bc;
extern char g_144d8;

void DiamondDerived_DiamondDerived(void* self)
{
 void* ptr; // r0

 ptr = self;
 VirtualBase_VirtualBase((char*)ptr + 16);
 MiddleA_MiddleA(ptr);
 MiddleB_MiddleB((char*)ptr + 8);
 *((unsigned int *)ptr) = 83108;
 *((unsigned int *)&ptr[16]) = 83160;
 *((unsigned int *)&ptr[8]) = 83132;
}


// Function: _ZN5PointC1Eii at 0x12c74
void Point_Point(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)&ptr[4]) = arg_1;
}


// Function: _ZNK5PointplERKS_ at 0x12cb8
void Point::operator+(char *a0, char *a1, char *a2)
{
 Point::Point(a0, *((int *)&a1[0]) + *((int *)&a2[0]), *((int *)&a1[4]) + *((int *)&a2[4]));
}

// Function: _ZNK5PointeqERKS_ at 0x12d10
int Point::operator==(char *a0, char *a1, char *a2)
{
 if (*((int *)a0) == *((int *)a1) && *((int *)(a0 + 4)) == *((int *)(a1 + 4)))
 return 1;
 return 0;
}

// Function: _ZN5PointppEv at 0x12d70
void Point::operator++(void *self)
{
 unsigned int *ptr = (unsigned int *)self;

 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
}
{
 if (*((int *)a0) == *((int *)a1) && *((int *)(a0 + 4)) == *((int *)(a1 + 4)))
 return 1;
 return 0;
}


// Function: _ZN5PointppEv at 0x12d70
void Point::operator++(void *self)
{
 unsigned int *ptr = (unsigned int *)self;

 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x12dbc
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x12dfc
double template_max_double()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r3

 if (!__aeabi_dcmpgt(v2, v3, v4, v5))
 return 0.0;
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x12e5c
void template_swap_int(unsigned int *ptr, unsigned int *p, unsigned int *a2)
{
 unsigned int v0; // [bp-0xc]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x12ea8
typedef struct container_int_struct_0 {
 char padding_0[40];
 unsigned int field_28;
} container_int_struct_0;

void Container_int_Container(void* self)
{
 struct_0 *ptr; // r0

 ptr->field_28 = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x12ed8
void Container_int_push(void* ptr, int arg_0)
{
 unsigned int index; // r3

 if (9 >= *(int*)((char*)ptr + 40))
 {
 index = *(int*)((char*)ptr + 40);
 *((int *)((char *)ptr + 40)) = index + 1;
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
}


// Function: _ZNK9ContainerIiE3getEi at 0x12f2c
int Container_int_get(void* self)
{
 unsigned int v0; // r1
 unsigned int *v1; // r0

 if (v0 >= 0 && ((unsigned int*)v1)[10] > v0)
 return ((int*)v1)[v0];
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x12f84
typedef struct container_int_struct_0 {
 char padding_0[40];
 unsigned int field_28;
} container_int_struct_0;

int Container_int_getSize(void* self)
{
 struct_0 *v0; // r0

 return v0->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x12fac
typedef struct container_double_struct_0 {
 char padding_0[80];
 unsigned int field_50;
} container_double_struct_0;

void Container_double_Container(void* self)
{
 unsigned int* ptr = (unsigned int*)self;
 ptr[20] = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x12fdc
void Container_double_push(unsigned int v2, unsigned int v3, char *ptr)
{
 unsigned int v0; // r1

 if (9 >= ((unsigned int*)ptr)[20])
 {
 v0 = ((unsigned int*)ptr)[20];
 ((unsigned int*)ptr)[20] = v0 + 1;
 ((unsigned int*)ptr)[2 * v0] = v2;
 ((unsigned int*)ptr)[2 * v0 + 1] = v3;
 }
}


// Function: _ZNK9ContainerIdE3getEi at 0x13040
int Container_double_get(void* self, unsigned int v0)
{
 unsigned int *v1 = (unsigned int*)self;

 if (v0 >= 0 && v1[20] > v0)
 return v1[2 * v0];
 return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x130a8
unsigned int Container_double_getSize(void* self)
{
 unsigned int *v1 = (unsigned int*)self;
 return v1[20];
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x130d0
void std_uniq_ptr_data_int_default_del___uniq_ptr_data(void* self, void* arg_0)
{
 std_uniq_ptr_impl_int_default_del___uniq_ptr_impl(self, arg_0);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x13108
void std_unique_ptr_int_default_unique_ptr(void* a0, void* a1)
{
 std_uniq_ptr_data_int_default_del___uniq_ptr_data(a0, a1);
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x13140
int RTTIBase_getType(void* self)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x13164
int RTTIDerivedA_getType(void* self)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x13188
int RTTIDerivedA_derivedA_data(void* self)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x131ac
int RTTIDerivedB_getType(void* self)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x131d0
int RTTIDerivedB_derivedB_data(void* self)
{
 return 0;
}


// Function: _ZN8RTTIBaseC1Ev at 0x131f4
extern char g_1448c;

void RTTIBase_RTTIBase(void* ptr)
{
 *((unsigned int *)ptr) = 83084;
}


// Function: _ZN8RTTIBaseD2Ev at 0x13228
extern char g_1448c;

void RTTIBase_destructor(void* ptr)
{
 *((unsigned int *)ptr) = 83084;
}


// Function: _ZN8RTTIBaseD0Ev at 0x1325c
int RTTIBase_deleting_destructor(void* self)
{
 operatordelete(self, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x13290
extern char g_14478;

void RTTIDerivedA_RTTIDerivedA(void* ptr)
{
 RTTIBase_RTTIBase(ptr);
 *((unsigned int *)ptr) = 83064;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x132cc
extern char g_14464;

void RTTIDerivedB_RTTIDerivedB(void* ptr)
{
 RTTIBase_RTTIBase(ptr);
 *((unsigned int *)ptr) = 83044;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x13308
void std_uniq_ptr_data_int_default_del___uniq_ptr_data_2(void* self, void* arg_0)
{
 std_uniq_ptr_impl_int_default_del___uniq_ptr_impl_2(self, arg_0);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x13340
void std_unique_ptr_int_default_unique_ptr2(char *a0, void *a1)
{
 std_uniq_ptr_data_int_default_del___uniq_ptr_data_2(a0, a1);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x13374
void std_unique_ptr_int_default_destructor(void* self)
{
 unsigned int v1;
 void *v2;
 void **ptr;

 ptr = (void**)std___uniq_ptr_impl_int_default_del__M_ptr(self);
 if (*(ptr))
 {
 v1 = (unsigned int)std_unique_ptr_int_default_get_deleter(self);
 std_move_int_ptr(ptr);
 std_default_delete_int_operator_paren((void*)v1, *(ptr));
 }
 *(ptr) = 0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x133e8
void* std_unique_ptr_int_default_operator_deref(void* self)
{
 return std_unique_ptr_int_default_get(self);
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x13418
void* std_move_unique_ptr(void* self)
{
 return self;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x1343c
void std__Tuple_impl_0_int_ptr_default_del__Tuple_impl(void* ptr, void* arg_0, void* arg_1)
{
 void* v0 = arg_0;
 void* v1 = arg_1;
 std__Tuple_impl_1_default_del__Tuple_impl_move(ptr, v1);
 std__Head_base_0_int_ptr__Head_base(ptr, v0);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x1347c
void std_tuple_int_ptr_default_del_tuple(void* self, void* arg_0)
{
 std__Tuple_impl_0_int_ptr_default_del__Tuple_impl(self, arg_0, arg_0);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x134b4
void std___uniq_ptr_impl_int_default_del___uniq_ptr_impl(void* a0, void* a1)
{
 std_tuple_int_ptr_default_del_tuple(a0, a1);
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x1350c
void std_uniq_ptr_data_int_default_del_array___uniq_ptr_data(void* self, void* arg_0)
{
 std___uniq_ptr_impl_int_default_del_array___uniq_ptr_impl(self, arg_0, arg_0, self, arg_0, self);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x13544
void std_unique_ptr_int_array_unique_ptr(char *a0, int *a1)
{
 std_uniq_ptr_data_int_default_del_array___uniq_ptr_data(a0, a1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x13578
int std_unique_ptr_int_array_destructor(void* self)
{
 unsigned int v1; // r0
 void **ptr; // [bp-0xc]

 ptr = (void**)std___uniq_ptr_impl_int_default_del_array__M_ptr(self);
 if (*(ptr))
 {
 v1 = (unsigned int)std_unique_ptr_int_array_get_deleter(self);
 std_default_delete_array_operator_paren((void*)v1, *(ptr));
 }
 *(ptr) = 0;
 return 0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj at 0x135e4
int* std_unique_ptr_int_array_operator_index(void* self, unsigned int a1)
{
 return (int*)((char*)std_unique_ptr_int_array_get(self) + a1 * 4);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x13624
void std___uniq_ptr_impl_int_default_del___uniq_ptr_impl_2(void* a0, void* a1)
{
 std_tuple_int_ptr_default_del_tuple_true_true(a0);
 *(std___uniq_ptr_impl_int_default_del__M_ptr(a0)) = a1;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x13668
void* std___uniq_ptr_impl_int_default_del__M_ptr(void* self)
{
 return (void*)std_get_0_int_ptr_default_del((unsigned int)self);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x13694
void* std_unique_ptr_int_default_get_deleter(void* self)
{
 return std___uniq_ptr_impl_int_default_del__M_deleter((unsigned int)self);
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x136c0
void* std_move_int_ptr(void* self)
{
 return self;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x136e4
void std_default_delete_int_operator_paren(void* self, int *arg_0)
{
 void* v0; // [bp-0xc]

 v0 = self;
 if (arg_0)
 operatordelete(arg_0, 4);
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x1371c
void* std_unique_ptr_int_default_get(void* self)
{
 return (void*)std___uniq_ptr_impl_int_default_del__M_ptr(self);
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x13748
void* std_move_tuple_int_ptr_default_del(void* self)
{
 return self;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ at 0x1376c
void std__Tuple_impl_1_default_del__Tuple_impl_move(void* self, void* arg_0)
{
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x13794
void std___uniq_ptr_impl_int_default_del_array___uniq_ptr_impl(void* a0, void* a1, void* a2, void* a3, void* a4, void* a5)
{
 unsigned int vvar_4;

 std_tuple_int_ptr_default_del_array_tuple_true_true(a0);
 *(std___uniq_ptr_impl_int_default_del_array__M_ptr(a0)) = a1;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x137d8
void* std___uniq_ptr_impl_int_default_del_array__M_ptr(void* self)
{
 return (void*)std_get_0_int_ptr_default_del_array((unsigned int)self, 0);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x13804
void* std_unique_ptr_int_array_get_deleter(void* self)
{
 return std___uniq_ptr_impl_int_default_del_array__M_deleter((unsigned int)self);
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x13830
void std_default_delete_array_operator_paren(void* self, int *a1)
{
 if (a1)
 operatordelete[](a1);
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x13864
void* std_unique_ptr_int_array_get(void* self)
{
 return (void*)std___uniq_ptr_impl_int_default_del_array__M_ptr(self);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x13890
void std_tuple_int_ptr_default_del_tuple_true_true(void* self)
{
 std__Tuple_impl_0_int_ptr_default_del__Tuple_impl(self);
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x138bc
void* std_get_0_int_ptr_default_del(void* self, void* arg_0)
{
 return (void*)std___get_helper_0_int_ptr_default_del(self);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x138e8
unsigned int std___uniq_ptr_impl_int_ptr_default_del__M_deleter(void* self)
{
 return std_get_1_int_ptr_default_del(self);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x13914
void* std___uniq_ptr_impl_int_ptr_default_del__M_ptr_const(void* self)
{
 return std_get_0_int_ptr_default_del(self);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x13944
int std::tuple<int*, std::default_delete<int[]>>::tuple<true, true>()
{
 unsigned int v0; // r0;

 std__Tuple_impl_0_int_ptr_default_del_array__Tuple_impl((void*)v0);
 return v0;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x13970
void* std_get_0_int_ptr_default_del_array(void* self, void* arg_0)
{
 return (void*)std___get_helper_0_int_ptr_default_del_array(self);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x1399c
unsigned int std___uniq_ptr_impl_int_ptr_default_del_array__M_deleter(void* self)
{
 return std_get_1_int_ptr_default_del_array(self);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x139c8
void* std___uniq_ptr_impl_int_ptr_default_del_array__M_ptr_const(void* self)
{
 return std_get_0_int_ptr_default_del_array((unsigned int)self, 0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC1Ev at 0x139f8
void std__Tuple_impl_0_int_ptr_default_del__Tuple_impl(void* self)
{
 std__Tuple_impl_1_default_del__Tuple_impl(self, self);
 std__Head_base_0_int_ptr___Head_base((void*)self);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13a2c
void* std___get_helper_0_int_ptr_default_del(void* self, void* arg_0)
{
 return (void*)std__Tuple_impl_0_int_ptr_default_del__M_head(self);
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x13a54
void* std_get_1_int_ptr_default_del(void* self, void* arg_0)
{
 return (void*)std___get_helper_1_default_del(self, arg_0);
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x13a7c
void* std_get_0_int_ptr_default_del_const(void* self, void* arg_0)
{
 return (void*)std___get_helper_0_int_ptr_default_del(self, arg_0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev at 0x13aa8
void std__Tuple_impl_0_int_ptr_default_del_array__Tuple_impl(void* self)
{
 std__Tuple_impl_1_default_del_array__Tuple_impl(self, self);
 std__Head_base_0_int_ptr___Head_base((void*)self);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x13adc
void* std___get_helper_0_int_ptr_default_del_array(void* self, void* arg_0)
{
 return (void*)std__Tuple_impl_0_int_ptr_default_del_array__M_head(self);
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x13b04
void* std_get_1_int_ptr_default_del_array(void* self, void* arg_0)
{
 return (void*)std___get_helper_1_default_del_array(self, arg_0);
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x13b2c
void* std_get_0_int_ptr_default_del_array_const(void* self, void* arg_0)
{
 return (void*)std___get_helper_0_int_ptr_default_del_array(self);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x13b58
void* std_forward_int_ptr(void* self)
{
 return self;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC1Ev at 0x13b7c
void std__Tuple_impl_1_default_del__Tuple_impl(void* self, void* arg_0)
{
 std__Head_base_1_default_del___Head_base(self);
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC1Ev at 0x13ba4
void std__Head_base_0_int_ptr___Head_base(void* self)
{
 unsigned int **ptr = (unsigned int**)self;
 *(ptr) = 0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x13bd4
void* std__Tuple_impl_0_int_ptr_default_del__M_head(void* self, void* arg_0)
{
 return std__Head_base_0_int_ptr___M_head(self);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x13c00
void* std___get_helper_1_default_del(void* self, void* arg_0)
{
 return std__Tuple_impl_1_default_del__M_head(self, arg_0);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13c28
void* std___get_helper_0_int_ptr_default_del_const(void* self, void* arg_0)
{
 return (void*)std__Tuple_impl_0_int_ptr_default_del__M_head(self);
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC1Ev at 0x13c50
void std__Tuple_impl_1_default_del_array__Tuple_impl(void* self, void* arg_0)
{
 std__Head_base_1_default_del_array___Head_base(self);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x13c78
void std__Tuple_impl_0_int_ptr_default_del_array__M_head(void* self, void* arg_0)
{
 std__Head_base_0_int_ptr___M_head(self);
 return;
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13ca4
void* std___get_helper_1_default_del_array(void* self, void* arg_0)
{
 return std__Tuple_impl_1_default_del_array__M_head(self, arg_0);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x13ccc
void* std___get_helper_0_int_ptr_default_del_array_const(void* self, void* arg_0)
{
 return (void*)std__Tuple_impl_0_int_ptr_default_del_array__M_head(self);
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ at 0x13cf4
void std__Head_base_0_int_ptr___Head_base_int_ptr_ref(void* ptr, void* arg_0)
{
 *((int **)ptr) = *((int **)std_forward_int_ptr(arg_0));
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC1Ev at 0x13d30
int std__Head_base_1_default_del___Head_base(void* self)
{
 return (int)self;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ at 0x13d54
void* std__Head_base_0_int_ptr___M_head(void* self)
{
 return self;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x13d78
void* std__Tuple_impl_1_default_del__M_head(void* self, void* arg_0)
{
 return std__Head_base_1_default_del___M_head(self);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x13da0
void* std__Tuple_impl_0_int_ptr_default_del__M_head_const(void* self, void* arg_0)
{
 return std__Head_base_0_int_ptr___M_head_const(self);
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev at 0x13dcc
void std__Head_base_1_default_del_array___Head_base(void* self)
{
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x13df0
void* std__Tuple_impl_1_default_del_array__M_head(void* self, void* arg_0)
{
 return std__Head_base_1_default_del_array___M_head(self);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x13e18
void* std__Tuple_impl_0_int_ptr_default_del_array__M_head_const(void* self, void* arg_0)
{
 return std__Head_base_0_int_ptr___M_head_const(self);
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x13e44
void* std__Head_base_1_default_del___M_head(void* self)
{
 return self;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ at 0x13e68
void* std__Head_base_0_int_ptr___M_head_const(void* self)
{
 return (void*)self;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x13e8c
void* std__Head_base_1_default_del_array___M_head(void* self)
{
 return self;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x13eb0
extern char g_14464;

void RTTIDerivedB_destructor(void* ptr)
{
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x13eec
int RTTIDerivedB_deleting_destructor(void* self)
{
 operatordelete(self, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x13f20
extern char g_14478;

void RTTIDerivedA_destructor(void* ptr)
{
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x13f5c
int RTTIDerivedA_deleting_destructor(void* self)
{
 operatordelete(self, 4);
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x13f90
extern char g_144a4;
extern char g_144bc;
extern char g_144d8;

void DiamondDerived_destructor(void* ptr)
{
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x14028
void non_virtual_thunk_to_DiamondDerived_destructor(void* a0)
{
 DiamondDerived_destructor((void*)a0);
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x14030
void thunk_to_DiamondDerived_destructor(void* a0)
{
 DiamondDerived_destructor((void*)a0);
}


// Function: _ZN14DiamondDerivedD0Ev at 0x14044
int DiamondDerived_deleting_destructor(void* self)
{
 operatordelete(self, 24);
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x14078
int non_virtual_thunk_to_DiamondDerived_deleting_destructor(void* a0)
{
 DiamondDerived_deleting_destructor(a0);
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x14080
int thunk_to_DiamondDerived_deleting_destructor(void* a0)
{
 DiamondDerived_deleting_destructor(a0);
 return 0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x14094
extern char g_14584;
extern char g_1459c;

void MultiDerived_destructor(void* ptr)
{
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x140f0
void non_virtual_thunk_to_MultiDerived_destructor(void* a0)
{
 MultiDerived_destructor((void*)a0);
}


// Function: _ZN12MultiDerivedD0Ev at 0x140f8
int MultiDerived_deleting_destructor(void* self)
{
 operatordelete(self, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x1412c
int non_virtual_thunk_to_MultiDerived_deleting_destructor(void* a0)
{
 MultiDerived_deleting_destructor((void*)a0);
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x14134
extern char g_145d8;

void Derived_destructor(void* ptr)
{
}


// Function: _ZN7DerivedD0Ev at 0x14170
int Derived_deleting_destructor(void* self)
{
 operatordelete(self, 8);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


