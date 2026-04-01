// Angr Decompilation of 5-1_gcc_O0_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */



// Function: sub_10a68 at 0x10a68
extern unsigned int g_25008;

int sub_10a68()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10c04 at 0x10c04
extern void abort(void);
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
extern void __stack_chk_fail(void);
extern void* operatornew(unsigned int size);
extern void operatordelete(void* ptr, unsigned int size);
extern void operatordelete_array(void* ptr);
extern int strlen(const char* s);

typedef struct SimpleClass {
 int value;
 char name[32];
} SimpleClass;

int SimpleClass_SimpleClass(char *ptr, int a1, int a2);
int SimpleClass_setValue(void* self, unsigned int val);
int SimpleClass_getValue(void* self);
int SimpleClass_compute(void* self, int arg);
int SimpleClass_getClassID(void* self);

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
 SimpleClass_setValue(&v3, 10);
 v0 = SimpleClass_getValue(&v3);
 v1 = SimpleClass_compute(&v3, 3);
 ch = SimpleClass_getClassID(&v3);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x10d74
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int LifecycleClass_instance_count;

typedef struct LifecycleClass {
 unsigned int data_ptr;
 unsigned int size;
} LifecycleClass;

int LifecycleClass_LifecycleClass(void* self, unsigned int size);
int LifecycleClass_getData(void* self, unsigned int index);
int LifecycleClass_getInstanceCount(void* self);

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
 LifecycleClass_LifecycleClass(&v2, 5);
 v4 = LifecycleClass_getData(&v2, 2);
 v1 = v0 + v4;
 v0 = v1 + LifecycleClass_getInstanceCount(&v2);
 v0 += LifecycleClass_getInstanceCount(&v2) * 1000;
 if (!(v3 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x10e48
class Base {
} Base;

void call_virtual_func(class Base *arg_0, int arg_1)
{
 unsigned int vtable;
 unsigned int func_ptr;

 vtable = *((unsigned int*)arg_0);
 func_ptr = *((unsigned int*)vtable);
 ((void (*)(void*, int))func_ptr)(arg_0, arg_1);
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x10e84
extern unsigned int __glibc___stack_chk_guard;
extern char g_145f0;

int Derived_ctor(int v1);
int Base_virtual_func(void* self, int arg);
int Derived_virtual_func(void* self, int arg);

void test_cpp_virtual_func()
{
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 char v3_arr[8]; // [bp-0x2c]
 char v7; // [bp-0x1c]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int v8; // [bp-0x14]

 v8 = __glibc___stack_chk_guard;
 v0 = 83440;
 Derived_ctor(3);
 v1 = Base_virtual_func(&v0, 5);
 v2 = Derived_virtual_func(&v7, 5);
 call_virtual_func((Base*)&v0, 5);
 call_virtual_func((Base*)&v7, 5);
 if (!(v8 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_10f6c at 0x10f6c
extern void __cxa_end_cleanup(unsigned int, unsigned int, unsigned int, unsigned int);
int sub_10f6c()
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3

 __cxa_end_cleanup(v0, v1, v2, v3);
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10fa0
typedef struct struct_1_multi {
 struct struct_0_multi *field_0;
} struct_1_multi;

typedef struct struct_0_multi {
 unsigned int field_0;
} struct_0_multi;

extern unsigned int __glibc___stack_chk_guard;
extern int armg_calculate_condition(int cond, unsigned int a, unsigned int b, unsigned int c);

int MultiDerived_ctor(void);

void test_cpp_multiple_inheritance()
{
 unsigned int v10; // r3
 unsigned int v12; // r3
 unsigned int *v0; // [bp-0x38]
 unsigned int *v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 struct_1_multi v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 struct_1_multi v7; // [bp-0x1c]
 unsigned int v8; // [bp-0x18]
 unsigned int v9; // [bp-0x14]

 v9 = __glibc___stack_chk_guard;
 MultiDerived_ctor();
 v6 = 100;
 v8 = 200;
 v0 = (unsigned int*)&v5;
 v1 = (unsigned int*)&v7;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v10 = (unsigned int)v1;
 if (v0 != v1)
 {
 v12 = 0x1;
 if (!armg_calculate_condition(2, (unsigned int)v0, v10, 0))
 goto LABEL_11036;
LABEL_11035:
 v12 = 0;
 }
 else
 {
 v12 = v10;
 if (armg_calculate_condition(2, (unsigned int)v0, v12, 0))
 goto LABEL_11035;
LABEL_11036:
 }
 v4 = v12 & 255;
 if (!(v9 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_11080 at 0x11080
int sub_11080()
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3

 __cxa_end_cleanup(v0, v1, v2, v3);
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x110a4
typedef struct struct_0_diamond {
 unsigned int field_0;
} struct_0_diamond;

typedef struct struct_1_diamond {
 struct struct_0_diamond *field_0;
} struct_1_diamond;

extern unsigned int __glibc___stack_chk_guard;

int DiamondDerived_ctor(void);

void test_cpp_diamond_inheritance()
{
 struct_1_diamond **v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 char v3; // [bp-0x2c]
 struct_0_diamond *v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x18]
 unsigned int v6; // [bp-0x14]

 v6 = __glibc___stack_chk_guard;
 DiamondDerived_ctor(&v3);
 v5 = 50;
 v0 = (struct_1_diamond**)&v4;
 v4 = (struct_0_diamond*)*v0;
 v5 = 100;
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

 __cxa_end_cleanup(v0, v1, v2, v3);
}


// Function: _Z26test_cpp_operator_overloadv at 0x1117c
extern unsigned int __glibc___stack_chk_guard;

typedef struct Point {
 int x;
 int y;
} Point;

int Point_ctor(void* ptr, int arg_0, int arg_1);
int Point_operator_plus(char *a0, char *a1, char *a2);
int Point_operator_eq(char *a0, char *a1, char *a2);
int Point_operator_inc(void* self);

void test_cpp_operator_overload()
{
 char result; // [bp-0x25]
 char v1; // [bp-0x24]
 char v2; // [bp-0x1c]
 char v3; // [bp-0x14]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 Point_ctor(&v1, 1, 2);
 Point_ctor(&v2, 3, 4);
 Point_operator_plus(&v3, &v1, &v2);
 result = Point_operator_eq(&v1, &v2, &v2);
 Point_operator_inc(&v3);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z22test_cpp_template_funcv at 0x11250
extern unsigned int __glibc___stack_chk_guard;
extern int __aeabi_d2iz(double val, unsigned int dummy);

int template_max_int(int arg_0, int arg_1);
double template_max_double();
int template_swap_int(unsigned int *ptr, unsigned int *p);

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
 v3 = template_max_double();
 v0 = 10;
 v1 = 20;
 template_swap_int(&v0, &v1);
 __aeabi_d2iz(v3, v5);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x11324
extern unsigned int __glibc___stack_chk_guard;
extern int __aeabi_d2iz(double val, unsigned int dummy);

typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0;

typedef struct struct_0_container_int {
 char padding_0[40];
 unsigned int field_28;
} struct_0_container_int;

typedef struct struct_0_container_double {
 char padding_0[80];
 unsigned int field_50;
} struct_0_container_double;

int Container_int_Constructor(struct_0_container_int *ptr);
void Container_int_push(void* ptr, int arg_0);
int Container_int_get(void* ptr, unsigned int index);
int Container_int_getSize(struct_0 *v0);
int Container_double_Constructor(struct_0_container_double *ptr);
int Container_double_push(char *ptr, unsigned int v2, unsigned int v3);
int Container_double_get(void* ptr, unsigned int index);

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
 Container_int_Constructor(&v3);
 Container_int_push(&v3, 10);
 Container_int_push(&v3, 20);
 Container_int_push(&v3, 30);
 v0 = Container_int_get(&v3, 0);
 size = Container_int_getSize(&v3);
 Container_double_Constructor(&v4);
 Container_double_push(&v4, 1374389535, 1074339512);
 v2 = Container_double_get(&v4, 0);
 __aeabi_d2iz(v2, v6);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x1143c
typedef struct struct_0_lambda {
 unsigned int field_0;
 struct struct_1_lambda *field_4;
} struct_0_lambda;

typedef struct struct_1_lambda {
 unsigned int field_0;
} struct_1_lambda;

int test_cpp_lambda_lambda_operator(struct_0_lambda *idx, unsigned int a1)
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
 v2 = test_cpp_lambda_lambda_operator(&v4, 3);
 v3 = 30;
 if (!(v6 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z18test_cpp_exceptionv at 0x1152c
extern unsigned int CXXABI_1_3::_ZTIi;
extern void* __cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void* exc, void* type, void* destructor, void* ptr);

void test_cpp_exception()
{
 unsigned int *ptr; // r3
 unsigned int result; // [bp-0x24]

 result = 0;
 ptr = (unsigned int*)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)0x24e70, 0, ptr);
 return;
}


// Function: sub_1156c at 0x1156c
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;
extern void* __cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void* exc, void* type, void* destructor, void* ptr);
extern void* __cxa_begin_catch(unsigned int v6);
extern void __cxa_end_catch(void* p, unsigned int a1, unsigned int v9, unsigned int v10);
extern unsigned int __cxa_rethrow(void* ptr, unsigned int a1, unsigned int v0, unsigned int v0_plus_v2);
extern void __cxa_end_cleanup(void);

int sub_1156c(unsigned int a0, unsigned int a1)
{
 unsigned int v6; // r2
 unsigned int result; // r3
 unsigned int *ptr; // r0
 unsigned int v9; // r2
 unsigned int v10; // r3
 unsigned int v11; // r1
 unsigned int *p; // r0
 unsigned int exc_ptr; // r0
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
 v6 = __cxa_rethrow(ptr, a1, v0, v0 + v2);
 __cxa_end_catch((void*)v6, a1, v9, v10);
 result = v11;
 }
 if (result != 1)
 __cxa_end_cleanup();
 p = (unsigned int*)__cxa_begin_catch(v6);
 v3 = *(p);
 v0 = v1 + v3 * 2;
 __cxa_end_catch((void*)p, a1, v1, v1 + v3 * 2);
 exc_ptr = (unsigned int)__cxa_allocate_exception(1);
 v14 = (unsigned int)__cxa_throw((void*)exc_ptr, (void*)0x14450, 0, (void*)exc_ptr);
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
 __cxa_end_catch(v4, a1, v9, v0 + 200);
 }
 }
 v5 = __cxa_begin_catch(v14);
 v1 = v0 + 100;
 __cxa_end_catch(v5, a1, v9, v0 + 100);
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x1169c
unsigned int test_cpp_smart_ptr_lambda_operator(unsigned int a0, unsigned int *ptr)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 *(ptr) = 4294967295;
 if (ptr)
 operatordelete(ptr, 4);
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
 *(p) = 100;
 std_unique_ptr_int_ctor_ptr(&v1, p);
 v5 = *(unsigned int*)std_unique_ptr_int_deref((unsigned int*)&v1);
 *(unsigned int*)std_unique_ptr_int_deref((unsigned int*)&v1) = 200;
 v10 = std_move_unique_ptr_int((unsigned int*)&v1);
 std_unique_ptr_int_ctor(&v2, v10);
 v5 = *(unsigned int*)std_unique_ptr_int_deref((unsigned int*)&v2);
 ptr3 = (unsigned int*)operatornew(20);
 *(ptr3 + 0) = 1;
 ptr4 = (unsigned int*)((char*)ptr3 + 4);
 *(ptr4 + 0) = 2;
 ptr5 = (unsigned int*)((char*)ptr4 + 4);
 *(ptr5 + 0) = 3;
 ptr = (unsigned int*)((char*)ptr5 + 4);
 *(ptr + 0) = 4;
 *(ptr + 1) = 5;
 std_unique_ptr_int_array_ctor(&v3, ptr3);
 v6 = *std_unique_ptr_int_array_index((unsigned int*)&v3, 2);
 addr = (unsigned int*)operatornew(4);
 *(addr) = 500;
 std_unique_ptr_ctor(&v4, addr, &v0);
 v7 = *(unsigned int*)std_unique_ptr_deref((unsigned int*)&v4);
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

 __cxa_end_cleanup(v0, v1, v2, v3);
}


// Function: _Z13test_cpp_rttiv at 0x118c4
extern char _ZTI12RTTIDerivedA;
extern char _ZTI12RTTIDerivedB;
extern unsigned int _ZTI8RTTIBase;

int RTTIDerivedA_ctor();
int RTTIDerivedB_ctor();
int RTTIDerivedA_derivedA_data(void* ptr);
int RTTIDerivedB_derivedB_data(void* ptr);
int std_type_info_name(int self);
void __cxa_bad_typeid(void);
extern int __dynamic_cast(void* ptr, unsigned int a, unsigned int b, unsigned int c);

void test_cpp_rtti()
{
 unsigned int *ptr; // r4
 void* p; // r4
 void* flag2; // r3
 unsigned int cur; // [bp-0x24]
 void* result; // [bp-0x20]
 void* flag1; // [bp-0x1c]
 unsigned int flag3; // [bp-0x18]
 unsigned int flag4; // [bp-0x14]

 ptr = (unsigned int*)operatornew(4);
 *((unsigned int *)ptr) = 0;
 RTTIDerivedA_ctor();
 result = ptr;
 p = operatornew(4);
 *((unsigned int *)p) = 0;
 RTTIDerivedB_ctor();
 flag1 = p;
 cur = 0;
 if (!result)
 {
 __cxa_bad_typeid();
 }
 else if (!std_type_info_name((int)((unsigned int*)result)[4]))
 {
 goto LABEL_11960;
 }
 cur += 10;
LABEL_11960:
 if (!flag1)
 {
 __cxa_bad_typeid();
 }
 else if (!std_type_info_name((int)((unsigned int*)flag1)[4]))
 {
 goto LABEL_119a0;
 }
 cur += 20;
LABEL_119a0:
 flag3 = (!result ? 0 : (unsigned int)__dynamic_cast(result, 0x14638, 0x1461c, 0));
 if (flag3)
 cur += RTTIDerivedA_derivedA_data((void*)flag3);
 flag4 = (!flag1 ? 0 : (unsigned int)__dynamic_cast(flag1, 0x14638, 0x14600, 0));
 if (flag4)
 cur += RTTIDerivedB_derivedB_data((void*)flag4);
 if (result)
 {
 cur += (unsigned int)strlen((char*)std_type_info_name((int)((unsigned int*)result)[4]));
 flag2 = result;
 if (!flag2)
 goto LABEL_11aa0;
 }
 else
 {
 __cxa_bad_typeid();
 }
 std_type_info_name((int)((unsigned int*)flag2)[4]);
LABEL_11aa0:
 if (flag1)
 std_type_info_name((int)((unsigned int*)flag1)[4]);
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
 puts(0x1426c);
 printf(0x14290, (unsigned int)test_cpp_member_func());
 printf(0x142b0, (unsigned int)test_cpp_constructor());
 printf(0x142cc, (unsigned int)test_cpp_virtual_func());
 printf(0x142e8, (unsigned int)test_cpp_multiple_inheritance());
 printf(0x14304, (unsigned int)test_cpp_diamond_inheritance());
 printf(0x14324, (unsigned int)test_cpp_operator_overload());
 printf(0x14340, (unsigned int)test_cpp_template_func());
 printf(0x1435c, (unsigned int)test_cpp_template_class());
 printf(0x14378, (unsigned int)test_cpp_lambda());
 printf(0x14394, (unsigned int)test_cpp_exception());
 printf(0x143b4, (unsigned int)test_cpp_smart_ptr());
 printf("CPP-L4-03: %", (unsigned int)test_cpp_rtti());
 return;
}


// Function: main at 0x11c18
unsigned int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ at 0x11c30
void std_uniq_ptr_data_ctor(unsigned int a0, unsigned int a1, unsigned int a2)
{
 std_uniq_ptr_impl_ctor(a0, a1, a2);
}

void std_uniq_ptr_impl_ctor(unsigned int a0, unsigned int a1, unsigned int a2);


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ at 0x11c6c
void std_unique_ptr_ctor(char *a0, unsigned int *a1, char *a2)
{
 std_uniq_ptr_data_ctor((unsigned int)a0, (unsigned int)a1, (unsigned int)a2);
}

void std_uniq_ptr_data_ctor(unsigned int a0, unsigned int a1, unsigned int a2);


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev at 0x11ca8
unsigned int std_unique_ptr_dtor(unsigned int a0)
{
 unsigned int v1; // r4
 unsigned int *v2; // r0
 unsigned int *ptr; // [bp-0x14]

 ptr = (unsigned int*)std_uniq_ptr_impl_M_ptr(a0);
 if (*ptr)
 {
 v1 = (unsigned int)std_unique_ptr_get_deleter(a0);
 v2 = ptr;
 test_cpp_smart_ptr_lambda_operator(v1, *v2);
 }
 *ptr = 0;
 return a0;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv at 0x11d1c
unsigned int std_unique_ptr_deref(unsigned int a0)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = a0;
 v1 = (unsigned int)std_unique_ptr_get_const(v0);
 return v1;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ at 0x11d4c
void std_uniq_ptr_impl_ctor(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x18]

 v0 = a1;
 std_tuple_ctor(a0, &v0, (int)std_forward_lambda(a2));
}

int std_tuple_ctor(int a0, unsigned int *a1, int a2);
unsigned int std_forward_lambda(unsigned int a0);


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x11d94
unsigned int* std_uniq_ptr_impl_M_ptr(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_tuple_get_0(a0);
 return (unsigned int*)v0;
}

unsigned int std_tuple_get_0(unsigned int a0);


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv at 0x11dc0
unsigned int std_unique_ptr_get_deleter(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_uniq_ptr_impl_M_deleter(a0);
 return v0;
}

int std_uniq_ptr_impl_M_deleter(unsigned int a0);


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv at 0x11dec
unsigned int std_unique_ptr_get_const(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_uniq_ptr_impl_M_ptr_const(a0);
 return v0;
}

unsigned int std_uniq_ptr_impl_M_ptr_const(unsigned int a0);


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE at 0x11e18
unsigned int std_forward_lambda(unsigned int a0)
{
 return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x11e3c
void std_tuple_ctor(int a0, unsigned int *a1, int a2)
{
 unsigned int v0; // r0
 unsigned int v1; // r0

 v0 = (unsigned int)a1;
 v1 = (unsigned int)std_forward_lambda(a2);
 std_Tuple_impl_ctor(a0, v0, v1);
}

void std_Tuple_impl_ctor(unsigned int a0, unsigned int v0, unsigned int v1);


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x11e90
int std_get_0(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_get_helper_0(a0);
 return v0;
}

unsigned int std_get_helper_0(unsigned int a0);


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv at 0x11ebc
int std_uniq_ptr_impl_M_deleter(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_get_1(a0);
 return v0;
}

unsigned int std_get_1(unsigned int a0);


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x11ee8
unsigned int std_uniq_ptr_impl_M_ptr_const(unsigned int a0)
{
 unsigned int v0;
 v0 = (unsigned int)std_get_0_const(a0);
 return v0;
}

unsigned int std_get_0_const(unsigned int a0);
unsigned int std_get_helper_0_const(unsigned int a0);


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x11f18
void std_Tuple_impl_0_ctor(unsigned int a0, unsigned int a1, unsigned int a2)
{
 std_Tuple_impl_1_ctor(a0, (unsigned int)a2);
 std_Head_base_0_ctor(a0, a1);
}

void std_Tuple_impl_1_ctor(unsigned int a0, unsigned int a1);
void std_Head_base_0_ctor(unsigned int a0, unsigned int a1);


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x11f74
unsigned int std_get_helper_0(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Tuple_impl_0_M_head(a0);
 return v0;
}

unsigned int std_Tuple_impl_0_M_head(unsigned int a0);


// Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x11f9c
unsigned int std_get_1(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_get_helper_1(a0);
 return v0;
}

unsigned int std_get_helper_1(unsigned int a0);


// Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x11fc4
unsigned int std_get_0_const(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_get_helper_0_const(a0);
 return v0;
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ at 0x11ff0
void std_Tuple_impl_1_ctor(unsigned int a0, unsigned int a1)
{
 std_Head_base_1_ctor(a0, (unsigned int)a1);
}

void std_Head_base_1_ctor(unsigned int a0, unsigned int a1);


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ at 0x12020
unsigned int std_Tuple_impl_0_M_head(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Head_base_0_M_head(a0);
 return v0;
}

unsigned int std_Head_base_0_M_head(unsigned int a0);


// Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x1204c
unsigned int std_get_helper_1(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Tuple_impl_1_M_head(a0);
 return v0;
}

unsigned int std_Tuple_impl_1_M_head(unsigned int a0);


// Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x12074
unsigned int std_get_helper_0_const(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Tuple_impl_0_M_head_const(a0);
 return v0;
}

unsigned int std_Tuple_impl_0_M_head_const(unsigned int a0);


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ at 0x1209c
void std_Head_base_1_ctor(unsigned int a0, unsigned int a1)
{
}

unsigned int std_Head_base_1_M_head(unsigned int a0)
{
 return a0;
}


// Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ at 0x120c4
unsigned int std_Tuple_impl_1_M_head(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Head_base_1_M_head(a0);
 return v0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ at 0x120ec
unsigned int std_Head_base_0_M_head(unsigned int a0)
{
 return a0;
}
unsigned int std_Tuple_impl_0_M_head_const(unsigned int a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Head_base_0_M_head(a0);
 return v0;
}


// Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ at 0x12118
unsigned int std_Head_base_1_M_head(unsigned int a0)
{
 return a0;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ at 0x13d54
unsigned int std_Head_base_0_M_head_int_ptr(unsigned int v0)
{
 return v0;
}


// Function: _Z41__static_initialization_and_destruction_0ii at 0x1213c
extern void _ZStL8__ioinit;
extern unsigned int __dso_handle;

void std_ios_base_Init_Init(void* ptr);
void std_ios_base_Init_dtor(void* ptr);

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
 if (arg_0 != 1)
 {
 return;
 }
 else if (arg_1 == 65535)
 {
 std_ios_base_Init_Init((void*)0x250a0);
 __aeabi_atexit(0x250a0, std_ios_base_Init_dtor, 0x25094);
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
int std_type_info_name(int self)
{
 return self;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x12208
int SimpleClass_SimpleClass(char *ptr, int a1, int a2)
{
 *((int *)&ptr) = a1;
 strncpy(ptr + 4, (char*)a2, 31);
 ptr[35] = 0;
 return (int)ptr;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x12260
int SimpleClass_getValue(void* self)
{
 unsigned int *v0; // r0

 v0 = (unsigned int*)self;
 return *(v0);
}


// Function: _ZN11SimpleClass8setValueEi at 0x12288
int SimpleClass_setValue(void* self, unsigned int val)
{
 unsigned int *ptr; // r0

 ptr = (unsigned int*)self;
 *(ptr) = val;
 return (int)ptr;
}


// Function: _ZNK11SimpleClass7computeEi at 0x122b8
int SimpleClass_compute(void* self, int arg)
{
 unsigned int *v0; // r0
 unsigned int len; // r0

 v0 = (unsigned int*)self;
 len = (unsigned int)strlen((char*)(v0 + 1));
 return arg * *(v0) + len;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x12304
int SimpleClass_getClassID(void* self)
{
 return 0;
}


// Function: _ZN14LifecycleClassC1Ej at 0x12324
extern unsigned int LifecycleClass_instance_count;
extern int armg_calculate_condition(int cond, unsigned int a, unsigned int b, unsigned int c);

int LifecycleClass_LifecycleClass(void* self, unsigned int size)
{
 unsigned int *ptr; // r0
 unsigned int v2; // r1
 unsigned int i; // [bp-0xc]

 v2 = size;
 ptr = (unsigned int*)operatornew(v2 * 4);
 if (!armg_calculate_condition(129, v2, 3758096386, 0))
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
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 return (int)ptr;
}


// Function: _ZN14LifecycleClassD1Ev at 0x123f4
extern unsigned int LifecycleClass_instance_count;

int LifecycleClass_LifecycleClass_dtor(void* self)
{
 if (*((int *)self))
 operatordelete_array(*((int *)self));
 LifecycleClass_instance_count = LifecycleClass_instance_count - 1;
 return 0;
}


// Function: _ZNK14LifecycleClass7getDataEj at 0x1244c
int LifecycleClass_getData(void* self, unsigned int index)
{
 unsigned int *v0; // r0
 unsigned int v1; // r1

 v0 = (unsigned int*)self;
 v1 = ((unsigned int*)self)[1];
 return (v1 <= index ? 4294967295 : *((int *)(v0[0] + index * 4)));
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x124a4
int LifecycleClass_getInstanceCount(void* self)
{
 return LifecycleClass_instance_count;
}


// Function: _ZN4Base12virtual_funcEi at 0x124c8
int Base_virtual_func(void* self, int arg)
{
 return arg + 1;
}


// Function: _ZNK4Base7getNameEv at 0x124f4
int Base_getName(void* self)
{
 return 0;
}


// Function: _ZN4BaseD1Ev at 0x1251c
extern char g_145f0;

int Base_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83440;
 return 0;
}


// Function: _ZN4BaseD0Ev at 0x12550
int Base_dtor_delete(void* self)
{
 operatordelete(self, 4);
 return 0;
}


// Function: _ZN4BaseC2Ev at 0x12584
extern char g_145f0;

int Base_ctor(void* ptr)
{
 *((unsigned int *)ptr) = 83440;
 return (int)ptr;
}


// Function: _ZN7DerivedC1Ei at 0x125b8
typedef struct struct_0_derived {
 char padding_0[4];
 unsigned int field_4;
} struct_0_derived;

extern char g_145d8;

int Derived_ctor(int v1)
{
 struct_0_derived *ptr; // r0

 ptr = (struct_0_derived*)operatornew(8);
 Base_ctor(ptr);
 *((unsigned int *)&ptr->padding_0[0]) = 83416;
 ptr->field_4 = v1;
 return (int)ptr;
}


// Function: _ZN7Derived12virtual_funcEi at 0x12604
typedef struct struct_0_derived_vf {
 char padding_0[4];
 unsigned int field_4;
} struct_0_derived_vf;

int Derived_virtual_func(void* self, int arg)
{
 struct_0_derived_vf *v1; // r0

 v1 = (struct_0_derived_vf*)self;
 return arg * v1->field_4;
}


// Function: _ZNK7Derived7getNameEv at 0x12638
int Derived_getName(void* self)
{
 return 0;
}


// Function: _ZN5BaseA5funcAEv at 0x12660
int BaseA_funcA(void* self)
{
 return 0;
}


// Function: _ZN5BaseAD2Ev at 0x12684
extern char g_145c4;

int BaseA_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83396;
 return 0;
}


// Function: _ZN5BaseAD0Ev at 0x126b8
int BaseA_dtor_delete(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: _ZN5BaseB5funcBEv at 0x126ec
int BaseB_funcB(void* self)
{
 return 0;
}


// Function: _ZN5BaseBD1Ev at 0x12710
extern char g_145b0;

int BaseB_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83376;
 return 0;
}


// Function: _ZN5BaseBD0Ev at 0x12744
int BaseB_dtor_delete(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: _ZN12MultiDerived5funcAEv at 0x12778
int MultiDerived_funcA(void* self)
{
 return 0;
}


// Function: _ZN12MultiDerived5funcBEv at 0x1279c
int MultiDerived_funcB(void* self)
{
 return 0;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x127c0
int MultiDerived_funcB_thunk(void* a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)MultiDerived_funcB((char*)a0 - 8);
 return (unsigned int)MultiDerived_funcB((char*)a0 - 8);
}


// Function: _ZN5BaseAC1Ev at 0x127c8
extern char g_145c4;

void BaseA_ctor(void* ptr)
{
 *((unsigned int *)ptr) = 83396;
}


// Function: _ZN5BaseBC2Ev at 0x127fc
extern char g_145b0;

void BaseB_ctor(void* ptr)
{
 *((unsigned int *)ptr) = 83376;
}


// Function: _ZN12MultiDerivedC2Ev at 0x12830
extern char g_14584;
extern char g_1459c;

int MultiDerived_ctor(void)
{
 char *ptr; // r0

 ptr = (char*)operatornew(16);
 BaseA_ctor(ptr);
 BaseB_ctor(ptr + 8);
 *((unsigned int *)ptr) = 83332;
 *((unsigned int *)(ptr + 8)) = 83356;
 return (int)ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x1288c
int VirtualBase_func(void* self)
{
 return 0;
}


// Function: _ZN11VirtualBaseD2Ev at 0x128b0
extern char g_14570;

int VirtualBase_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83312;
 return 0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x128e4
int VirtualBase_dtor_delete(void* self)
{
 operatordelete(self, 8);
 return 0;
}


// Function: _ZN7MiddleA4funcEv at 0x12918
int MiddleA_func(void* self)
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1295c
int MiddleA_func_thunk(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)MiddleA_func((char *)a0 + ((int*)(*(a0)))[12]);
 return (unsigned int)MiddleA_func((char *)a0 + ((int*)(*(a0)))[12]);
}


// Function: _ZN7MiddleB4funcEv at 0x12970
int MiddleB_func(void* self)
{
 return 0;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x129b4
int MiddleB_func_thunk(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)MiddleB_func((char *)a0 + ((int*)(*(a0)))[12]);
 return (unsigned int)MiddleB_func((char *)a0 + ((int*)(*(a0)))[12]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x129c8
int DiamondDerived_func(void* self)
{
 return 0;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x12a0c
int DiamondDerived_func_thunk(void* *a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)DiamondDerived_func((char *)a0 + ((int*)(*(a0)))[12]);
 return (unsigned int)DiamondDerived_func((char *)a0 + ((int*)(*(a0)))[12]);
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x12a20
int DiamondDerived_func_thunk2(void* a0)
{
 unsigned int v0; // r0

 v0 = (unsigned int)DiamondDerived_func((char*)a0 - 8);
 return (unsigned int)DiamondDerived_func((char*)a0 - 8);
}


// Function: _ZN11VirtualBaseC1Ev at 0x12a28
extern char g_14570;

int VirtualBase_ctor(void* ptr)
{
 *((unsigned int *)ptr) = 83312;
 return (int)ptr;
}


// Function: _ZN7MiddleAC2Ev at 0x12a5c
int MiddleA_ctor(void* ptr)
{
 unsigned int vtable; // r1

 vtable = *((unsigned int *)ptr);
 *((unsigned int *)ptr) = vtable;
 *((unsigned int *)((char *)ptr + ((int *)(vtable))[-12])) = vtable;
 return (int)ptr;
}


// Function: _ZN7MiddleAD2Ev at 0x12abc
int MiddleA_dtor(void* ptr)
{
 unsigned int vtable; // r1

 vtable = *((unsigned int *)ptr);
 *((unsigned int *)ptr) = vtable;
 *((unsigned int *)((char *)ptr + ((int *)(vtable))[-12])) = vtable;
 return 0;
}


// Function: _ZN7MiddleBC2Ev at 0x12b1c
int MiddleB_ctor(void* ptr)
{
 unsigned int vtable; // r1

 vtable = *((unsigned int *)ptr);
 *((unsigned int *)ptr) = vtable;
 *((unsigned int *)((char *)ptr + ((int *)(vtable))[-12])) = vtable;
 return (int)ptr;
}


// Function: _ZN7MiddleBD2Ev at 0x12b7c
int MiddleB_dtor(void* ptr)
{
 unsigned int vtable; // r1

 vtable = *((unsigned int *)ptr);
 *((unsigned int *)ptr) = vtable;
 *((unsigned int *)((char *)ptr + ((int *)(vtable))[-12])) = vtable;
 return 0;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x12bdc
extern char g_144a4;
extern char g_144bc;
extern char g_144d8;

int DiamondDerived_ctor(void)
{
 char *ptr; // r0

 ptr = (char*)operatornew(24);
 VirtualBase_ctor(ptr + 16);
 MiddleA_ctor(ptr);
 MiddleB_ctor(ptr + 8);
 *((unsigned int *)ptr) = 83108;
 *((unsigned int *)(ptr + 16)) = 83160;
 *((unsigned int *)(ptr + 8)) = 83132;
 return (int)ptr;
}


// Function: _ZN5PointC1Eii at 0x12c74
int Point_ctor(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)((char*)ptr + 4)) = arg_1;
 return (int)ptr;
}


// Function: _ZNK5PointplERKS_ at 0x12cb8
int Point_operator_plus(char *a0, char *a1, char *a2)
{
 Point_ctor(a0, *((int *)&a1) + *((int *)&a2), *((int *)&a1[4]) + *((int *)&a2[4]));
 return a0;
}


// Function: _ZNK5PointeqERKS_ at 0x12d10
int Point_operator_eq(char *a0, char *a1, char *a2)
{
 if (*((int *)a0) == *((int *)a1) && *((int *)(a0 + 4)) == *((int *)(a1 + 4)))
 return 1;
 return 0;
}


// Function: _ZN5PointppEv at 0x12d70
int Point_operator_inc(void* self)
{
 unsigned int *ptr; // r0

 ptr = (unsigned int*)self;
 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
 return (int)self;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x12dbc
int template_max<int>(int arg_0, int arg_1)
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
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 if (!__aeabi_dcmpgt(v2, v3, v4, v5, v4, v5, v2, v3, &v1, *((int *)&v0)))
 return 0.0;
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x12e5c
int template_swap_int(unsigned int *ptr, unsigned int *p)
{
 unsigned int v0; // [bp-0xc]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return (int)ptr;
}


// Function: _ZN9ContainerIiEC2Ev at 0x12ea8
typedef struct struct_0_container_int {
 char padding_0[40];
 unsigned int field_28;
} struct_0_container_int;

int Container_int_Constructor(struct_0 *ptr)
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
 *((int *)((char *)ptr + 4 * index)) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x12f2c
int Container_int_get(void* ptr, unsigned int index)
{
 unsigned int *v1; // r0

 v1 = (unsigned int*)ptr;
 if (index >= 0 && v1[10] > index)
 return v1[index];
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x12f84
typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0;

int Container_int_getSize(struct_0 *v0)
{
 return v0->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x12fac
typedef struct struct_0_container_double {
 char padding_0[80];
 unsigned int field_50;
} struct_0_container_double;

int Container_double_Constructor(struct_0_container_double *ptr)
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
 *((unsigned int *)(ptr + 8 * v0)) = v2;
 *((unsigned int *)(ptr + 4 + 8 * v0)) = v3;
 }
 return (int)ptr;
}


// Function: _ZNK9ContainerIdE3getEi at 0x13040
int Container_double_get(void* ptr, unsigned int index)
{
 unsigned int *v1; // r0

 v1 = (unsigned int*)ptr;
 if (index >= 0 && v1[20] > index)
 return v1[2 * index];
 return 0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x130a8
int Container_double_getSize(void* ptr)
{
 unsigned int *v0; // r0

 v0 = (unsigned int*)ptr;
 return v0[20];
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x130d0
void std_uniq_ptr_data_int_ctor(void* ptr, void* arg_0)
{
 std_uniq_ptr_impl_int_ctor(ptr, arg_0);
}

void std_uniq_ptr_impl_int_ctor(void* a0, int a1);


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x13108
void std_unique_ptr_int_ctor(char *a0, int a1)
{
 std_uniq_ptr_data_int_ctor(a0, (void*)a1);
}

void std_uniq_ptr_data_int_ctor(void* ptr, void* arg_0);


// Function: _ZNK8RTTIBase7getTypeEv at 0x13140
int RTTIBase_getType(void* ptr)
{
 return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x13164
int RTTIDerivedA_getType(void* ptr)
{
 return 1;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x13188
int RTTIDerivedA_derivedA_data(void* ptr)
{
 return 10;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x131ac
int RTTIDerivedB_getType(void* ptr)
{
 return 2;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x131d0
int RTTIDerivedB_derivedB_data(void* ptr)
{
 return 20;
}


// Function: _ZN8RTTIBaseC1Ev at 0x131f4
extern char g_1448c;

int RTTIBase_ctor(void* ptr)
{
 *((unsigned int *)ptr) = 83084;
 return (int)ptr;
}


// Function: _ZN8RTTIBaseD2Ev at 0x13228
extern char g_1448c;

int RTTIBase_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83084;
 return 0;
}


// Function: _ZN8RTTIBaseD0Ev at 0x1325c
int RTTIBase_dtor_delete(void* self)
{
 operatordelete(self, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x13290
extern char g_14478;

int RTTIDerivedA_ctor(void)
{
 void* ptr; // r0

 ptr = operatornew(4);
 RTTIBase_ctor(ptr);
 *((unsigned int *)ptr) = 83064;
 return (int)ptr;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x132cc
extern char g_14464;

int RTTIDerivedB_ctor(void)
{
 void* ptr; // r0

 ptr = operatornew(4);
 RTTIBase_ctor(ptr);
 *((unsigned int *)ptr) = 83044;
 return (int)ptr;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x13308
int std_uniq_ptr_data_int_ctor_ptr(void* ptr, int *arg_0)
{
 std_uniq_ptr_impl_int_ctor_ptr(ptr, arg_0);
 return (int)ptr;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x13340
int std_unique_ptr_int_ctor_ptr(char *a0, unsigned int *a1)
{
 return std_uniq_ptr_data_int_ctor_ptr(a0, (int*)a1);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x13374
unsigned int std_unique_ptr_int_dtor(void* ptr)
{
 unsigned int v1; // r4
 unsigned int *v2; // r0
 unsigned int *p; // [bp-0x14]

 p = (unsigned int*)std_uniq_ptr_impl_int_M_ptr((unsigned int)ptr);
 if (*(p))
 {
 v1 = std_unique_ptr_int_get_deleter((unsigned int)ptr);
 v2 = p;
 std_default_delete_int_operator((void*)v1, *(v2));
 }
 *(p) = 0;
 return (unsigned int)ptr;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x133e8
unsigned int std_unique_ptr_int_deref(unsigned int ptr)
{
 return std_unique_ptr_int_get(ptr);
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x13418
int std_move_unique_ptr_int(unsigned int v0)
{
 return v0;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ at 0x1343c
void std_Tuple_impl_0_int_ptr_ctor(void* ptr, void* arg_0)
{
 std_Tuple_impl_1_default_delete_ctor((unsigned int)ptr, (unsigned int)arg_0);
 *((int *)ptr) = *((int *)arg_0);
}

void std_Tuple_impl_1_default_delete_ctor(unsigned int v0, unsigned int v1);


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x1347c
void std_tuple_int_ptr_ctor(void* ptr, void* arg_0)
{
 std_Tuple_impl_0_int_ptr_ctor(ptr, arg_0);
}

void std_Tuple_impl_0_int_ptr_ctor(void* ptr, void* arg_0);


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x134b4
void std_uniq_ptr_impl_int_ctor(void* a0, int a1)
{
 std_tuple_int_ptr_ctor(a0, (void*)a1);
}

void std_tuple_int_ptr_ctor(void* ptr, void* arg_0);


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x1350c
void std_uniq_ptr_data_int_array_ctor(void* ptr, int *arg_0)
{
 std_uniq_ptr_impl_int_array_ctor(ptr, arg_0);
}

void std_uniq_ptr_impl_int_array_ctor(void* a0, int *a1);


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x13544
void std_unique_ptr_int_array_ctor(char *a0, unsigned int *a1)
{
 std_uniq_ptr_data_int_array_ctor(a0, (int*)a1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x13578
void std_unique_ptr_int_array_dtor(void* ptr)
{
 unsigned int v1; // r0
 unsigned int *p; // [bp-0xc]

 p = (unsigned int*)std_uniq_ptr_impl_int_array_M_ptr((unsigned int)ptr);
 if (*(p))
 {
 v1 = std_unique_ptr_int_array_get_deleter((unsigned int)ptr);
 std_default_delete_int_array_operator(v1, *(p));
 }
 *(p) = 0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj at 0x135e4
unsigned int std_unique_ptr_int_array_index(unsigned int ptr, unsigned int index)
{
 unsigned int arr = std_unique_ptr_int_array_get((void*)ptr);
 return arr + index * 4;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x13624
int std_uniq_ptr_impl_int_ctor_ptr(void* a0, int *a1)
{
 std_tuple_int_ptr_ctor_default((unsigned int)a0);
 return (int)a0;
}

void std_tuple_int_ptr_ctor_default(unsigned int v0);


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x13668
unsigned int* std_uniq_ptr_impl_int_M_ptr(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_get_0_int_ptr((void*)v0);
 return (unsigned int*)v1;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x13694
unsigned int std_unique_ptr_int_get_deleter(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_uniq_ptr_impl_int_M_deleter((void*)v0);
 return v1;
}

unsigned int std_uniq_ptr_impl_int_M_deleter(void* ptr);


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x136c0
int std_move_int_ptr(unsigned int v0)
{
 return v0;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x136e4
void std_default_delete_int_operator(void* ptr, int *arg_0)
{
 if (arg_0)
 operatordelete(arg_0, 4);
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x1371c
unsigned int std_unique_ptr_int_get(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_uniq_ptr_impl_int_M_ptr(v0);
 return v1;
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x13748
void* std_move_tuple_int_ptr(void* ptr, void* arg_0)
{
 return ptr;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ at 0x1376c
void std_Tuple_impl_1_default_delete_ctor(unsigned int v0, unsigned int v1)
{
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x13794
int std_uniq_ptr_impl_int_array_ctor(void* a0, int *a1)
{
 std_tuple_int_array_ctor_default((unsigned int)a0);
 return (int)a0;
}

void std_tuple_int_array_ctor_default(unsigned int v0);


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x137d8
unsigned int* std_uniq_ptr_impl_int_array_M_ptr(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_get_0_int_array((void*)v0);
 return (unsigned int*)v1;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x13804
unsigned int std_unique_ptr_int_array_get_deleter(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_uniq_ptr_impl_int_array_M_deleter((void*)v0);
 return v1;
}

unsigned int std_uniq_ptr_impl_int_array_M_deleter(void* ptr);


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x13830
void std_default_delete_int_array_operator(unsigned int a0, void* a1)
{
 if (a1)
 operatordelete_array(a1);
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x13864
unsigned int* std_unique_ptr_int_array_get(void* ptr)
{
 return (unsigned int*)std_uniq_ptr_impl_int_array_M_ptr((unsigned int)ptr);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x13890
unsigned int std_tuple_int_ptr_ctor_default(unsigned int v0)
{
 std_Tuple_impl_0_int_ptr_ctor_default((void*)v0);
 return v0;
}

void std_Tuple_impl_0_int_ptr_ctor_default(void* ptr);


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x138bc
unsigned int std_get_0_int_ptr(void* ptr)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_get_helper_0_int_ptr(ptr);
 return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x138e8
unsigned int std_uniq_ptr_impl_int_M_deleter(void* ptr)
{
 return (unsigned int)std_get_1_default_delete((unsigned int)ptr);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x13914
unsigned int std_uniq_ptr_impl_int_M_ptr_const(void* ptr)
{
 return (unsigned int)std_get_0_int_ptr_const((unsigned int)ptr);
}

unsigned int std_get_0_int_ptr_const(unsigned int v0);


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x13944
unsigned int std_tuple_int_array_ctor_default(unsigned int v0)
{
 std_Tuple_impl_0_int_array_ctor_default((void*)v0);
 return v0;
}

void std_Tuple_impl_0_int_array_ctor_default(void* ptr);


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x13970
unsigned int std_get_0_int_array(void* ptr)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_get_helper_0_int_array(ptr);
 return v0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x1399c
unsigned int std_uniq_ptr_impl_int_array_M_deleter(void* ptr)
{
 return (unsigned int)std_get_1_default_delete_array((unsigned int)ptr);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x139c8
unsigned int std_uniq_ptr_impl_int_array_M_ptr_const(unsigned int v0)
{
 return (unsigned int)std_get_0_int_array_const(v0);
}

unsigned int std_get_0_int_array_const(void* ptr);


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC1Ev at 0x139f8
void std_Tuple_impl_1_default_delete_ctor_default(unsigned int v0)
{
}
void std_Head_base_0_int_ptr_ctor(unsigned int *ptr);
void std_Tuple_impl_0_int_ptr_ctor_default(void* ptr)
{
 std_Tuple_impl_1_default_delete_ctor_default((unsigned int)ptr);
 std_Head_base_0_int_ptr_ctor((unsigned int*)ptr);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13a2c
unsigned int std_get_helper_0_int_ptr(void* ptr)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Tuple_impl_0_M_head_int_ptr(ptr);
 return v0;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x13a54
unsigned int std_get_1_default_delete(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_get_helper_1_default_delete(v0);
 return v1;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x13a7c
unsigned int std_get_0_int_ptr_const(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_get_helper_0_int_ptr_const(v0);
 return v1;
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev at 0x13aa8
void std_Head_base_0_int_ptr_ctor(unsigned int *ptr);
void std_Tuple_impl_1_default_delete_array_ctor_default(unsigned int v0)
{
}
void std_Tuple_impl_0_int_array_ctor_default(void* ptr)
{
 std_Tuple_impl_1_default_delete_array_ctor_default((unsigned int)ptr);
 std_Head_base_0_int_ptr_ctor((unsigned int*)ptr);
}


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x13adc
unsigned int std_get_helper_0_int_array(void* ptr)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Tuple_impl_0_M_head_int_array(ptr);
 return v0;
}


// Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x13b04
unsigned int std_get_1_default_delete_array(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_get_helper_1_default_delete_array(v0);
 return v1;
}


// Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x13b2c
unsigned int std_get_0_int_array_const(void* ptr)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_get_helper_0_int_array_const(ptr);
 return v0;
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x13b58
int std_forward_int_ptr(unsigned int v0)
{
 return v0;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC1Ev at 0x13b7c
void std_Head_base_1_default_delete_ctor(void* ptr)
{
}
void std_Tuple_impl_1_default_delete_ctor_default(unsigned int v0)
{
 std_Head_base_1_default_delete_ctor((void*)v0);
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC1Ev at 0x13ba4
void std_Head_base_0_int_ptr_ctor_impl(unsigned int *ptr)
{
 *ptr = 0;
}
void std_Head_base_0_int_ptr_ctor(unsigned int *ptr)
{
 std_Head_base_0_int_ptr_ctor_impl(ptr);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x13bd4
unsigned int std_Tuple_impl_0_M_head_int_ptr(void* ptr)
{
 return (unsigned int)std_Head_base_0_M_head_int_ptr((unsigned int)ptr);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x13c00
unsigned int std_get_helper_1_default_delete(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_Tuple_impl_1_M_head_default_delete(v0);
 return v1;
}

unsigned int std_Tuple_impl_1_M_head_default_delete(void* ptr);


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13c28
unsigned int std_get_helper_0_int_ptr_const(void* ptr)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Tuple_impl_0_M_head_int_ptr_const(ptr);
 return v0;
}

unsigned int std_Tuple_impl_0_M_head_int_ptr_const(void* ptr);


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC1Ev at 0x13c50
void std_Head_base_1_default_delete_array_ctor(void* ptr)
{
}
void std_Tuple_impl_1_default_delete_array_ctor_default(unsigned int v0)
{
 std_Head_base_1_default_delete_array_ctor((void*)v0);
}


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x13c78
unsigned int std_Tuple_impl_0_M_head_int_array(void* ptr)
{
 return (unsigned int)std_Head_base_0_M_head_int_ptr((unsigned int)ptr);
}


// Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x13ca4
unsigned int std_get_helper_1_default_delete_array(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_Tuple_impl_1_M_head_default_delete_array(v0);
 return v1;
}

unsigned int std_Tuple_impl_1_M_head_default_delete_array(void* ptr);


// Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x13ccc
unsigned int std_get_helper_0_int_array_const(void* ptr)
{
 unsigned int v0; // r0

 v0 = (unsigned int)std_Tuple_impl_0_M_head_int_array_const(ptr);
 return v0;
}

unsigned int std_Tuple_impl_0_M_head_int_array_const(void* ptr);


// Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ at 0x13cf4
void std_Head_base_0_int_ptr_ctor_arg(void* ptr, int *arg_0)
{
 unsigned int v0; // [bp-0x10]

 v0 = (unsigned int)arg_0;
 *((int *)ptr) = std_forward_int_ptr(v0);
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC1Ev at 0x13d30
void std_Head_base_1_default_delete_ctor(void* ptr)
{
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ at 0x13d54
unsigned int std_Head_base_0_M_head_int_ptr(unsigned int v0)
{
 return v0;
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x13d78
unsigned int std_Tuple_impl_1_M_head_default_delete(void* ptr)
{
 return (unsigned int)std_Head_base_1_M_head_default_delete((unsigned int)ptr);
}

unsigned int std_Head_base_1_M_head_default_delete(unsigned int v0);


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x13da0
unsigned int std_Head_base_0_M_head_int_ptr_const(unsigned int v0);
unsigned int std_Tuple_impl_0_M_head_int_ptr_const(void* ptr)
{
 return (unsigned int)std_Head_base_0_M_head_int_ptr_const((unsigned int)ptr);
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev at 0x13dcc
void std_Head_base_1_default_delete_array_ctor(void* ptr)
{
}


// Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x13df0
unsigned int std_Tuple_impl_1_M_head_default_delete_array(void* ptr)
{
 return (unsigned int)std_Head_base_1_M_head_default_delete_array((unsigned int)ptr);
}

unsigned int std_Head_base_1_M_head_default_delete_array(unsigned int v0);


// Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x13e18
unsigned int std_Head_base_0_M_head_int_ptr_const(unsigned int v0);
unsigned int std_Tuple_impl_0_M_head_int_array_const(void* ptr)
{
 return (unsigned int)std_Head_base_0_M_head_int_ptr_const((unsigned int)ptr);
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x13e44
unsigned int std_Head_base_1_M_head_default_delete(unsigned int v0)
{
 return v0;
}


// Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ at 0x13e68
unsigned int std_Head_base_0_M_head_int_ptr_const(unsigned int v0)
{
 return v0;
}


// Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x13e8c
unsigned int std_Head_base_1_M_head_default_delete_array(unsigned int v0)
{
 return v0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x1371c
unsigned int std_unique_ptr_int_get(unsigned int v0)
{
 unsigned int v1; // r0

 v1 = (unsigned int)std_uniq_ptr_impl_int_M_ptr(v0);
 return v1;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x13eb0
extern char g_14464;

int RTTIDerivedB_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83044;
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x13eec
int RTTIDerivedB_dtor_delete(void* self)
{
 operatordelete(self, 4);
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x13f20
extern char g_14478;

int RTTIDerivedA_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83064;
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x13f5c
int RTTIDerivedA_dtor_delete(void* self)
{
 operatordelete(self, 4);
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x13f90
extern char g_144a4;
extern char g_144bc;
extern char g_144d8;

int DiamondDerived_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83108;
 *((unsigned int *)((char*)ptr + 16)) = 83160;
 *((unsigned int *)((char*)ptr + 8)) = 83132;
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x14028
int DiamondDerived_dtor_thunk(unsigned int a0)
{
 DiamondDerived_dtor((void*)(a0 - 8));
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x14030
int DiamondDerived_dtor_thunk2(unsigned int a0)
{
 DiamondDerived_dtor((void*)(a0 - 16));
 return 0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x14044
int DiamondDerived_dtor_delete(void* self)
{
 operatordelete(self, 24);
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x14078
int DiamondDerived_dtor_delete_thunk(unsigned int a0)
{
 DiamondDerived_dtor_delete((void*)(a0 - 8));
 return 0;
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x14080
int DiamondDerived_dtor_delete_thunk2(unsigned int a0)
{
 DiamondDerived_dtor_delete((void*)(a0 - 16));
 return 0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x14094
extern char g_14584;
extern char g_1459c;

int MultiDerived_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83332;
 *((unsigned int *)((char*)ptr + 8)) = 83356;
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x140f0
int MultiDerived_dtor_thunk(unsigned int a0)
{
 MultiDerived_dtor((void*)(a0 - 8));
 return 0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x140f8
int MultiDerived_dtor_delete(void* self)
{
 operatordelete(self, 16);
 return 0;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x1412c
int MultiDerived_dtor_delete_thunk(unsigned int a0)
{
 MultiDerived_dtor_delete((void*)(a0 - 8));
 return 0;
}


// Function: _ZN7DerivedD2Ev at 0x14134
extern char g_145d8;

int Derived_dtor(void* ptr)
{
 *((unsigned int *)ptr) = 83416;
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x14170
int Derived_dtor_delete(void* self)
{
 operatordelete(self, 8);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


