// Angr Decompilation of 5-1_gcc_O0_g
// Platform: AARCH64

#include <stdlib.h>
#include <string.h>

// Macro for rotate left operation
#define __ROL__(val, shift) (((val) << (shift)) | ((val) >> (64 - (shift))))

/* CRT stub function _init removed by preprocessor */

// External function declarations
extern void *operatornew(unsigned long long size);
extern void *operatornew_array(unsigned long long size);
extern void operatordelete(void *ptr, unsigned long long size);
extern void operatordelete_array(void *ptr);
extern void deregister_tm_clones();
extern void __do_global_dtors_aux();
extern unsigned long long frame_dummy();
extern void _Unwind_Resume(unsigned long long a0);
extern void __cxa_throw_bad_array_new_length(unsigned long long a0, unsigned long long a1);
extern void __cxa_bad_typeid(void *ptr);
extern void __cxa_atexit(void *func, void *arg, void *dso_handle);
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *ptr, void *type_info, void *dest);
extern void *__cxa_begin_catch();
extern void __cxa_end_catch(unsigned long long a0, unsigned long long a1);
extern void *__cxa_rethrow(unsigned long long a0, unsigned long long a1);
extern void *__dynamic_cast(void *ptr, void *src_type, void *dst_type, long long src2dst);
extern unsigned long long strlen(const char *s);
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern int strcmp(const char *s1, const char *s2);
extern void __stack_chk_fail(void);

// SimpleClass function declarations
extern void SimpleClass_SimpleClass(char *ptr, long long a1, long long a2);
extern void SimpleClass_setValue(char *ptr, unsigned int val);
extern unsigned int SimpleClass_getValue(char *ptr);
extern unsigned int SimpleClass_compute(char *ptr, int val);
extern unsigned int SimpleClass_getClassID(unsigned int val, int arg);

// LifecycleClass function declarations
extern void LifecycleClass_LifecycleClass(char *ptr, unsigned long long size);
extern unsigned long long LifecycleClass_getData(char *ptr, unsigned long long index);
extern unsigned int LifecycleClass_getInstanceCount(unsigned int val1, unsigned int val2);

// Base and Derived class function declarations
typedef struct Base Base;
extern unsigned int Base_virtual_func(void *ptr, int val);
extern unsigned int Derived_virtual_func(char *ptr, int val);
extern void Derived_Derived(char *ptr, int val);
extern unsigned int call_virtual_func(Base *arg_0, int arg_1);

// Forward declarations for other classes
typedef struct Base Base;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct struct_0 {
    unsigned int field_0;
    struct {
        unsigned int field_0;
    } *field_8;
} struct_0;
typedef struct struct_1 struct_1;

// MultiDerived function declarations
extern void MultiDerived_MultiDerived(char *ptr, int val);
extern void MultiDerived_funcA(void *this);
extern void MultiDerived_funcB(void *this);

// DiamondDerived function declarations
extern void DiamondDerived_DiamondDerived(char *ptr, int val);
extern void DiamondDerived_func(void *this);

// Point function declarations
extern int Point_Point(void *ptr, int arg_0, int arg_1);
extern long long Point_operator_plus(char *a0, char *a1);
extern long long Point_operator_eq(char *a0, char *a1);
extern long long Point_operator_inc(char *a0);

// RTTI class function declarations
extern void RTTIDerivedA_RTTIDerivedA(void *ptr);
extern void RTTIDerivedB_RTTIDerivedB(void *ptr);
extern void RTTIDerivedA_derivedA_data(void *this);
extern void RTTIDerivedB_derivedB_data(void *this);

// Template function declarations
extern int template_max_int(int arg_0, int arg_1);
extern double template_max_double(double arg_0, double arg_1);
extern void template_swap_int(unsigned int *ptr, unsigned int *ptr2);

// Container class declarations
extern void Container_int_Container(void *ptr);
extern void Container_int_push(void *ptr, int arg_0);
extern unsigned int Container_int_get(void *ptr, int index);
extern unsigned int Container_int_getSize(void *ptr);
extern void Container_double_Container(void *ptr);
extern void Container_double_push(void *ptr, double val);
extern double Container_double_get(void *ptr, int index);
extern void Container_double_getSize(void *ptr);

// Smart pointer function declarations
extern void std_unique_ptr_int_default_delete_unique_ptr(char *ptr, unsigned int *p, char *a2);
extern unsigned int *std_unique_ptr_int_default_delete_operator_deref(char *ptr);
extern unsigned int *std_unique_ptr_int_array_default_delete_operator_index(char *ptr, int index);
extern void std_unique_ptr_int_array_default_delete_unique_ptr(char *ptr, unsigned int *p, unsigned int *p2);
extern void std_unique_ptr_int_lambda_unique_ptr(char *a0, unsigned int *a1, char *a2, char *a3);
extern unsigned int *std_unique_ptr_int_lambda_operator_deref(char *ptr);
extern long long std_uniq_ptr_impl_int_lambda_const_ref(unsigned long long a0, unsigned long long a1, unsigned long long a2);
extern long long std_uniq_ptr_impl_int_lambda_M_ptr(unsigned long long a0);
extern long long std_unique_ptr_int_lambda_get_deleter(unsigned long long a0);
extern unsigned int **std_move_int_ptr_ref(unsigned int **ptr);
extern long long std_unique_ptr_int_lambda_get_const(unsigned long long a0);
extern long long std_forward_lambda_const_ref(unsigned long a0);
extern long long std_tuple_int_lambda_tuple(unsigned long long a0, unsigned long long a1, unsigned int a2);
extern long long std_get_0ul_int_ptr_lambda(unsigned long long a0);
extern long long std_uniq_ptr_impl_int_lambda_M_deleter(unsigned long long a0);
extern long long std_uniq_ptr_impl_int_lambda_M_ptr_const(unsigned long long a0);
extern long long std_forward_int_ptr_ref(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_lambda(unsigned long long a0, unsigned long long a1, unsigned int a2);
extern long long std___get_helper_0ul_int_ptr_lambda(unsigned long long a0);
extern long long std_get_1ul_int_ptr_lambda(unsigned long long a0);
extern long long std_get_0ul_int_ptr_lambda_const(unsigned long long a0);
extern long long std_Tuple_impl_1ul_lambda_Tuple_impl(unsigned long long a0, unsigned long long a1);
extern void* std___get_helper_0ul_int_ptr_default_delete_int_array(void* this, void *arg_0);
extern void* std___get_helper_0ul_int_ptr_default_delete_int_array_const(void* this, void *arg_0);
extern void* std___get_helper_0ul_int_ptr_default_delete_int_const(void* this, void *arg_0);
extern long long std_Head_base_0ul_int_ptr_false_Head_base(unsigned long long a0, unsigned long long a1);
extern long long std_Tuple_impl_0ul_int_ptr_lambda_M_head(unsigned long long a0);
extern long long std___get_helper_1ul_lambda(unsigned long long a0);
extern long long std___get_helper_0ul_int_ptr_lambda_const(unsigned long long a0);
extern long long std_Head_base_1ul_lambda_true_Head_base(unsigned long a0, unsigned long a1);
extern long long std_Head_base_0ul_int_ptr_false_M_head(unsigned long long a0);
extern long long std_Tuple_impl_1ul_lambda_M_head(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_lambda_M_head_const(unsigned long long a0);
extern long long std_Head_base_1ul_lambda_true_M_head(unsigned long a0);

// Type info function declarations
extern int std_type_info_operator_eq(long long a0, void *a1, long long a2);
extern void *std_type_info_name(long long a0);

// Additional std helper function declarations
extern long long std___Tuple_impl_1ul_default_delete_int___M_head(unsigned long long a0);
extern long long std___Tuple_impl_1ul_default_delete_int_array___M_head(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_default_delete_int___M_head(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array___M_head(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const(unsigned long long a0);
extern long long std_Head_base_0ul_int_ptr_false__M_head(unsigned long long a0);
extern long long std_Head_base_1ul_default_delete_int_true__M_head(unsigned long long a0);
extern long long std_Head_base_1ul_default_delete_int_array_true__M_head(unsigned long long a0);
extern long long std___get_helper_1ul_default_delete_int(unsigned long long a0);
extern long long std___get_helper_1ul_default_delete_int_array(unsigned long long a0);
extern void* std_move_int_ptr_ref(void* ptr);
extern void* std_get_0ul_int_ptr_default_delete_int(void* this_ptr);
extern void* std_get_1ul_int_ptr_default_delete_int(void* this_ptr);
extern void* std_get_0ul_int_ptr_default_delete_int_array(void* this_ptr);
extern void* std_get_1ul_int_ptr_default_delete_int_array(void* this_ptr);
extern void* std_default_delete_int_array_operator(void* this_ptr, void* arg_0);
extern void* std___get_helper_0ul_int_ptr_default_delete_int(void* this, void *arg_0);
extern void* std_unique_ptr_int_array_default_delete_int_array_get(void* this_ptr);
extern void* std_tuple_int_ptr_default_delete_int_tuple_true_true(void* this_ptr);
extern long long std_tuple_int_ptr_default_delete_int_array_tuple_true_true(unsigned long long a0);
extern void std_uniq_ptr_impl_int_default_delete_int_array__M_deleter(void* this_ptr);
extern long long std_uniq_ptr_impl_int_default_delete_int__M_deleter(unsigned long long a0);
extern long long std_Tuple_impl_1ul_default_delete_int__Tuple_impl(unsigned long long a0);
extern long long std_Tuple_impl_1ul_default_delete_int_array__Tuple_impl(unsigned long long a0);
extern long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl(unsigned long long a0);
extern long long std_Head_base_0ul_int_ptr_false_Head_base(unsigned long long a0);
extern long long std_Head_base_1ul_default_delete_int_true_Head_base(unsigned long long a0);
extern long long std_Head_base_1ul_default_delete_int_array_true_Head_base(unsigned long long a0);
extern long long std_forward_int_ptr_ref(unsigned long long a0);
extern void std_ios_base_Init_Init(void* ptr);
extern int std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(void* this, void *arg_0);
extern unsigned long long* std_uniq_ptr_impl_int_default_delete_int__M_ptr(void* this);
extern unsigned long long std_unique_ptr_int_default_delete_int_get_deleter(void* this);
extern void std_default_delete_int_operator(void* this, int *arg_0);
extern long long std_unique_ptr_int_default_delete_int_get(void* this);
extern void* std_move_tuple_int_ptr_default_delete_int_ref(void* this, void *arg_0);
extern int std_uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(void* this, int *arg_0);
extern unsigned long long* std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(void* this);
extern unsigned long long std_unique_ptr_int_array_default_delete_int_array_get_deleter(void* this);



// Function: __dollar_x at 0x401840
extern unsigned long long g_416ee0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 goto g_416ee0;
}


// Function: sub_401854 at 0x401854
void * sub_401854()
{
 unsigned int v0; // x0

 return operatornew[](v0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_401a30 at 0x401a30
void sub_401a30()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_401a48 at 0x401a48
void sub_401a48()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401abc at 0x401abc
void sub_401abc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401b08 at 0x401b08
long long sub_401b08()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x401b14
extern char __stack_chk_guard;

void test_cpp_member_func()
{
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 char v4; // [bp-0x30]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 SimpleClass_SimpleClass(&v4, 5, "Test", &v4);
 SimpleClass_setValue(&v4, 10);
 v1 = SimpleClass_getValue(&v4);
 v2 = SimpleClass_compute(&v4, 3);
 v3 = SimpleClass_getClassID(v2, 3);
 if (v5 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x401bbc
extern char __stack_chk_guard;

void test_cpp_constructor()
{
 unsigned long long v6; // x0
 unsigned int v7; // w0
 unsigned long long v8; // x0
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x1c]
 char v3; // [bp-0x18]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = 0;
 LifecycleClass_LifecycleClass(&v3, 5);
 v6 = LifecycleClass_getData(&v3, 2);
 v2 = v1 + (unsigned int)v6;
 v7 = LifecycleClass_getInstanceCount(v1 + (v6 & 4294967295), v6 & 4294967295);
 v1 = v2 + v7;
 v1 += 1000 * LifecycleClass_getInstanceCount(v8, v7);
 if (v4 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x401c70
unsigned int call_virtual_func(Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp-0x8]
 char v2; // [bp+0x0]
 unsigned int result;

 v0 = &v2;
 result = Base_virtual_func(arg_0, arg_1);
 return result;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401ca0
extern char __stack_chk_guard;
extern char g_416b10;

void test_cpp_virtual_func()
{
 char *v0; // [bp-0x60]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 Base *v5; // [bp-0x30]
 Base *v6; // [bp-0x28]
 Base *v7; // [bp-0x20]
 char v8; // [bp-0x18]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 v5 = (Base*)&g_416b10;
 Derived_Derived(&v8, 3);
 v1 = Base_virtual_func(v5, 5);
 v2 = Derived_virtual_func(&v8, 5);
 v6 = v5;
 v7 = (Base*)&v8;
 v3 = call_virtual_func(v6, 5);
 v4 = call_virtual_func(v7, 5);
 if (v9 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_401d78 at 0x401d78
long long sub_401d78(unsigned long long a0)
{
 _Unwind_Resume(a0); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401da8
extern char __stack_chk_guard;

void test_cpp_multiple_inheritance()
{
 char v12; // x0
 char *v0; // [bp-0x70]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 void *v4; // [bp-0x38]
 void *v5; // [bp-0x30]
 char v6; // [bp-0x28]
 unsigned int v7; // [bp-0x20]
 char v8; // [bp-0x18]
 unsigned int v9; // [bp-0x10]
 unsigned long v10; // [bp-0x8]
 char v11; // [bp+0x0]

 v0 = &v11;
 v10 = *((long long *)&__stack_chk_guard);
 MultiDerived_MultiDerived(&v6, 0);
 v7 = 100;
 v9 = 200;
 v4 = &v6;
 v5 = &v8;
 MultiDerived_funcA(v4);
 MultiDerived_funcB(v5);
 if (v4 == v5)
 v12 = 0;
 else
 v12 = 1;
 v3 = v12;
 if (v10 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_401e7c at 0x401e7c
long long sub_401e7c(unsigned long long a0)
{
 _Unwind_Resume(a0); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401ea4
extern char __stack_chk_guard;

void test_cpp_diamond_inheritance()
{
 char *v0; // [bp-0x70]
 unsigned int v1; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 void *v3; // [bp-0x40]
 char v4; // [bp-0x38]
 void *v5; // [bp-0x18]
 unsigned int v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 DiamondDerived_DiamondDerived(&v4, 0);
 v6 = 50;
 v3 = &v4;
 DiamondDerived_func(v3);
 v6 = 100;
 DiamondDerived_func(v3);
 if (v7 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_401f50 at 0x401f50
long long sub_401f50(unsigned long long a0)
{
 _Unwind_Resume(a0); /* do not return */
}


// Function: _Z26test_cpp_operator_overloadv at 0x401f78
extern char __stack_chk_guard;

void test_cpp_operator_overload()
{
 char *v0; // [bp-0x40]
 char result; // [bp-0x21]
 char v2; // [bp-0x20]
 char v3; // [bp-0x18]
 char v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 Point_Point(&v2, 1, 2);
 Point_Point(&v3, 3, 4);
 Point_operator_plus(&v4, &v2, &v3);
 result = Point_operator_eq(&v2, &v3);
 Point_operator_inc(&v4);
 if (v5 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z22test_cpp_template_funcv at 0x402034
extern char __stack_chk_guard;

void test_cpp_template_func()
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned long long v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 v3 = template_max_int(3, 7);
 template_max_double((double)v3, 7.0);
 v4 = 0x4004000000000000;
 v1 = 10;
 v2 = 20;
 template_swap_int(&v1, &v2);
 if (v5 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x4020dc
extern char __stack_chk_guard;
extern unsigned long long g_404000;

void test_cpp_template_class()
{
 char *v0; // [bp-0xb0]
 unsigned int v1; // [bp-0xa0]
 unsigned int v2; // [bp-0x9c]
 unsigned long long v3; // [bp-0x98]
 char v4; // [bp-0x90]
 char v5; // [bp-0x60]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 Container_int_Container(&v4);
 Container_int_push(&v4, 10);
 Container_int_push(&v4, 20);
 Container_int_push(&v4, 30);
 v1 = Container_int_get(&v4, 0);
 v2 = Container_int_getSize(&v4);
 Container_double_Container(&v5);
 Container_double_push(&v5, *(double*)&g_404000);
 Container_double_get(v5, 0);
 v3 = 4614253070214989087;
 if (v6 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x4021b0
extern int test_cpp_lambda_lambda_operator(struct_0 *this, unsigned int a1);

int test_cpp_lambda_lambda_operator(struct_0 *this, unsigned int a1)
{
 if (this && this->field_8)
  this->field_8->field_0 = this->field_8->field_0 + 5;
 return a1 * this->field_0 + (this->field_8 ? this->field_8->field_0 : 0);
}


// Function: _Z15test_cpp_lambdav at 0x402200
extern char __stack_chk_guard;

void test_cpp_lambda()
{
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]
 struct_0 v5; // [bp-0x18]
 struct_0 *v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 v2 = 10;
 v1 = 20;
 v5.field_0 = v2;
 v5.field_8 = (void*)&v1;
 v3 = test_cpp_lambda_lambda_operator(&v5, 3);
 v4 = 30;
 if (v7 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z18test_cpp_exceptionv at 0x402290
extern char _ZTIi;

void test_cpp_exception()
{
 unsigned int *ptr; // x0
 char *v0; // [bp-0x40]
 unsigned int result; // [bp-0x1c]
 char v2; // [bp+0x0]

 v0 = &v2;
 result = 0;
 ptr = __cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, &_ZTIi, 0);
 return;
}


// Function: sub_4022c8 at 0x4022c8
extern unsigned long long _ZTIZ18test_cpp_exceptionvE16DerivedException;

int sub_4022c8()
{
 unsigned long long v6; // x1
 unsigned long v7; // x1
 unsigned long long ptr; // x0
 unsigned int v0; // [bp+0x24]
 unsigned int v1; // [bp+0x24]
 unsigned int v2; // [bp+0x28]
 unsigned int v3; // [bp+0x2c]

 if (v6 == 1)
 {
 v2 = *((int *)__cxa_begin_catch());
 v7 = v0;
 v0 = (unsigned int)v7 + v2;
 __cxa_end_catch(__cxa_rethrow(v7 + v2, v7), v7);
 }
 if (v6 == 1)
 {
 v3 = *((int *)__cxa_begin_catch());
 v1 = v0 + ((v3 * 2 | v3 >> 31) & 4294967294);
 __cxa_end_catch(v0 + ((v3 * 2 | v3 >> 31) & 4294967294), v0);
 ptr = __cxa_allocate_exception(1);
 __cxa_throw(ptr, &_ZTIZ18test_cpp_exceptionvE16DerivedException, 0, ptr);
 _Unwind_Resume(); /* do not return */
 }
 _Unwind_Resume(); /* do not return */
}


// Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ at 0x4023b4
unsigned int * test_cpp_smart_ptr_lambda_operator(unsigned long long a0, unsigned int *ptr)
{
 unsigned int *v3; // x0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = a0;
 if (ptr)
 {
  *(ptr) = 4294967295;
  operatordelete(ptr, 4);
 }
 v3 = ptr;
 return v3;
}


// Function: _Z18test_cpp_smart_ptrv at 0x4023f0
extern char __stack_chk_guard;

void test_cpp_smart_ptr()
{
 unsigned int *p; // x0
 unsigned int *ptr3; // x0
 unsigned int *ptr4; // x0
 unsigned int *ptr5; // x0
 unsigned int *ptr6; // x0
 unsigned int *ptr; // x0
 unsigned int *addr; // x0
 char *v0; // [bp-0x60]
 char v1; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 unsigned int v3; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 char v5; // [bp-0x28]
 char v6; // [bp-0x20]
 char v7; // [bp-0x18]
 char v8; // [bp-0x10]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 p = (unsigned int *)operatornew(4);
 *(p) = 100;
 std_unique_ptr_int_default_delete_unique_ptr(&v5, p, &v5);
 ptr3 = (unsigned int *)std_unique_ptr_int_default_delete_operator_deref(&v6);
 *(ptr3) = 200;
 std_unique_ptr_int_default_delete_unique_ptr(&v7, ptr3, &v7);
 v2 = *((int *)std_unique_ptr_int_default_delete_operator_deref(&v7));
 ptr4 = (unsigned int *)operatornew[](20);
 ptr4[0] = 1;
 ptr5 = &ptr4[1];
 ptr5[0] = 2;
 ptr6 = &ptr5[1];
 ptr6[0] = 3;
 ptr = &ptr6[1];
 ptr[0] = 4;
 ptr[1] = 5;
 std_unique_ptr_int_array_default_delete_unique_ptr(&v8, ptr4, ptr4);
 v3 = *((int *)std_unique_ptr_int_array_default_delete_operator_index(&v8, 2));
 addr = (unsigned int *)operatornew(4);
 *(addr) = 500;
 std_unique_ptr_int_lambda_unique_ptr(&v1, addr, &v1, &v1);
 v4 = *((int *)std_unique_ptr_int_lambda_operator_deref(&v1));
 if (v9 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402560 at 0x402560
long long sub_402560(unsigned long long a0)
{
 _Unwind_Resume(a0); /* do not return */
}


// Function: sub_402570 at 0x402570
long long sub_402570(unsigned long a0)
{
}


// Function: _Z13test_cpp_rttiv at 0x4025a0
extern unsigned long long _ZTI12RTTIDerivedA;
extern unsigned long long _ZTI12RTTIDerivedB;
extern unsigned long long _ZTI8RTTIBase;

void test_cpp_rtti()
{
 void* *ptr; // x19
 void* *p; // x19
 unsigned long long v10; // x0
 unsigned long long v11; // x0
 void* *v12; // x0
 char *v0; // [bp-0x50]
 unsigned int v1; // [sp-0x24]
 unsigned int cur; // [bp-0x24]
 void* *result; // [bp-0x20]
 void* *flag1; // [bp-0x18]
 unsigned long long v5; // [bp-0x10]
 unsigned long long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 ptr = (void* *)operatornew(8);
 *(ptr) = NULL;
 RTTIDerivedA_RTTIDerivedA(ptr);
 result = ptr;
 p = (void* *)operatornew(8);
 *(p) = NULL;
 RTTIDerivedB_RTTIDerivedB(p);
 flag1 = p;
 cur = 0;
 if (!result)
 {
 __cxa_bad_typeid(result);
 }
 else if (!(std_type_info_operator_eq((long long)(*(result))[8], &_ZTI12RTTIDerivedA, (long long)(*(result))[8]) & 255))
 {
 goto LABEL_40262c;
 }
 cur += 10;
LABEL_40262c:
 if (!flag1)
 {
 __cxa_bad_typeid(flag1);
 }
 else if (!(std_type_info_operator_eq((long long)(*(flag1))[8], &_ZTI12RTTIDerivedB, (long long)(*(flag1))[8]) & 255))
 {
 goto LABEL_402670;
 }
 cur += 20;
LABEL_402670:
 if (result)
 v10 = __dynamic_cast(result, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedA, 0);
 else
 v10 = 0;
 v5 = v10;
 if (v5)
 cur += (unsigned int)RTTIDerivedA_derivedA_data(v5);
 if (flag1)
 v11 = __dynamic_cast(flag1, &_ZTI8RTTIBase, &_ZTI12RTTIDerivedB, 0);
 else
 v11 = 0;
 v6 = v11;
 if (v6)
 cur += (unsigned int)RTTIDerivedB_derivedB_data(v6);
 if (result)
 {
 v1 = (unsigned int)strlen(std_type_info_name((long long)(*(result))[8])) + cur;
 v12 = result;
 if (!v12)
 goto LABEL_402768;
 }
 else
 {
 v12 = __cxa_bad_typeid(result);
 }
 (*(v12))[8](v12, (long long)(*(v12))[8]);
LABEL_402768:
 if (flag1)
 (*(flag1))[8](flag1, (long long)(*(flag1))[8]);
 return;
}


// Function: _Z20test_cpp_oo_featuresv at 0x402794
extern char g_4045e8;
extern char g_404610;
extern char g_404630;
extern char g_404650;
extern char g_404670;
extern char g_404690;
extern char g_4046b0;
extern char g_4046d0;
extern char g_4046f0;
extern char g_404710;
extern char g_404730;
extern char g_404750;
extern char g_404770;

void test_cpp_oo_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_4045e8);
 printf(&g_404610, (unsigned long long)test_cpp_member_func() & 4294967295);
 printf(&g_404630, (unsigned long long)test_cpp_constructor() & 4294967295);
 printf(&g_404650, (unsigned long long)test_cpp_virtual_func() & 4294967295);
 printf(&g_404670, (unsigned long long)test_cpp_multiple_inheritance() & 4294967295);
 printf(&g_404690, (unsigned long long)test_cpp_diamond_inheritance() & 4294967295);
 printf(&g_4046b0, (unsigned long long)test_cpp_operator_overload() & 4294967295);
 printf(&g_4046d0, (unsigned long long)test_cpp_template_func() & 4294967295);
 printf(&g_4046f0, (unsigned long long)test_cpp_template_class() & 4294967295);
 printf(&g_404710, (unsigned long long)test_cpp_lambda() & 4294967295);
 printf(&g_404730, (unsigned long long)test_cpp_exception() & 4294967295);
 printf(&g_404750, (unsigned long long)test_cpp_smart_ptr() & 4294967295);
 printf(&g_404770, (unsigned long long)test_cpp_rtti() & 4294967295);
 return;
}


// Function: main at 0x4028a4
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_cpp_oo_features();
 return 0;
}


// Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI1St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ at 0x4028bc
void std_uniq_ptr_data_int_lambda_const_ref(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 std_uniq_ptr_impl_int_lambda_const_ref(a0, a1, a2);
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ at 0x4028ec
void std_unique_ptr_int_lambda_unique_ptr(char *a0, unsigned int *a1, char *a2)
{
 std_uniq_ptr_data_int_lambda_const_ref(a0, a1, a2);
 return;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev at 0x40291c
void std_unique_ptr_int_lambda_destructor(unsigned long long a0)
{
 unsigned long long v3; // x19
 unsigned int **v4; // x0
 unsigned long long *ptr; // [bp-0x8]

 ptr = (unsigned long long*)std_uniq_ptr_impl_int_lambda_M_ptr(a0);
 if (*(ptr))
 {
 v3 = std_unique_ptr_int_lambda_get_deleter(a0);
 v4 = (unsigned int**)std_move_int_ptr_ref((unsigned long long)ptr);
 test_cpp_smart_ptr_lambda_operator(v3, *(v4));
 }
 *(ptr) = 0;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv at 0x402984
unsigned long long std_unique_ptr_int_lambda_operator_deref(unsigned long long a0)
{
 return (unsigned long long)std_unique_ptr_int_lambda_get_const(a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ at 0x4029a8
void std_uniq_ptr_impl_int_lambda(unsigned long long a0, unsigned long a1, unsigned long long a2)
{
 std_forward_lambda_const_ref(a2);
 std_tuple_int_lambda_tuple(a0, &a1, a2);
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x4029f4
unsigned long long std_uniq_ptr_impl_int_lambda_M_ptr(unsigned long long a0)
{
 return (unsigned long long)std_get_0ul_int_ptr_lambda(a0);
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv at 0x402a10
unsigned long long std_unique_ptr_int_lambda_get_deleter(unsigned long long a0)
{
 return (unsigned long long)std_uniq_ptr_impl_int_lambda_M_deleter(a0);
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv at 0x402a2c
unsigned long long std_unique_ptr_int_lambda_get_const(unsigned long long a0)
{
 return (unsigned long long)std_uniq_ptr_impl_int_lambda_M_ptr_const(a0);
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE at 0x402a48
unsigned long std_forward_lambda_const_ref(unsigned long a0)
{
 return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x402a5c
void std_tuple_int_lambda_tuple(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 std_forward_int_ptr_ref(a1);
 std_forward_lambda_const_ref(a2);
 std_Tuple_impl_0ul_int_ptr_lambda(a0, a1, a2);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402aac
unsigned long long std_get_0ul_int_ptr_lambda(unsigned long long a0)
{
 return (unsigned long long)std___get_helper_0ul_int_ptr_lambda(a0);
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv at 0x402ac8
unsigned long long std_uniq_ptr_impl_int_lambda_M_deleter(unsigned long long a0)
{
 return (unsigned long long)std_get_1ul_int_ptr_lambda(a0);
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x402ae4
unsigned long long std_uniq_ptr_impl_int_lambda_M_ptr_const(unsigned long long a0)
{
 return (unsigned long long)std_get_0ul_int_ptr_lambda_const(a0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x402b04
void std_Tuple_impl_0ul_int_ptr_lambda_Tuple_impl(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 std_Tuple_impl_1ul_lambda_Tuple_impl(a0, a2);
 std_Head_base_0ul_int_ptr_false_Head_base(a0, a1);
 return;
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402b58
unsigned long long std___get_helper_0ul_int_ptr_lambda(unsigned long long a0)
{
 return (unsigned long long)std_Tuple_impl_0ul_int_ptr_lambda_M_head(a0);
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402b74
unsigned long long std_get_1ul_int_ptr_lambda(unsigned long long a0)
{
 return (unsigned long long)std___get_helper_1ul_lambda(a0);
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x402b90
unsigned long long std_get_0ul_int_ptr_lambda_const(unsigned long long a0)
{
 return (unsigned long long)std___get_helper_0ul_int_ptr_lambda_const(a0);
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ at 0x402bac
void std_Tuple_impl_1ul_lambda_Tuple_impl(unsigned long long a0, unsigned long long a1)
{
 std_Head_base_1ul_lambda_true_Head_base(a0, a1);
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ at 0x402bd4
unsigned long long std_Tuple_impl_0ul_int_ptr_lambda_M_head(unsigned long long a0)
{
 return (unsigned long long)std_Head_base_0ul_int_ptr_false_M_head(a0);
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402bf0
unsigned long long std___get_helper_1ul_lambda(unsigned long long a0)
{
 return (unsigned long long)std_Tuple_impl_1ul_lambda_M_head(a0);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402c0c
unsigned long long std___get_helper_0ul_int_ptr_lambda_const(unsigned long long a0)
{
 return (unsigned long long)std_Tuple_impl_0ul_int_ptr_lambda_M_head_const(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ at 0x402c28
void std_Head_base_1ul_lambda_true_Head_base(unsigned long long a0, unsigned long long a1)
{
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ at 0x402c40
unsigned long long std_Tuple_impl_1ul_lambda_M_head(unsigned long long a0)
{
 return (unsigned long long)std_Head_base_1ul_lambda_true_M_head(a0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ at 0x402c5c
unsigned long long std_Tuple_impl_0ul_int_ptr_lambda_M_head_const(unsigned long long a0)
{
 return (unsigned long long)std_Head_base_0ul_int_ptr_false_M_head(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ at 0x402c78
unsigned long long std_Head_base_1ul_lambda_true_M_head(unsigned long long a0)
{
 return a0;
}


// Function: _Z41__static_initialization_and_destruction_0ii at 0x402c8c
extern char _ZNSt8ios_base4InitD1Ev;
extern void _ZStL8__ioinit;
extern unsigned long long __dso_handle;

void __static_initialization_and_destruction_0(int arg_0, int arg_1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (arg_0 != 1)
 {
 return;
 }
 else if (arg_1 == 65535)
 {
 std_ios_base_Init_Init(&_ZStL8__ioinit);
 __cxa_atexit(&_ZNSt8ios_base4InitD1Ev, &_ZStL8__ioinit, &__dso_handle);
 return;
 }
 else
 {
 return;
 }
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x402cec
long long _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = (unsigned long long)__static_initialization_and_destruction_0(1, 65535);
 return (unsigned long long)__static_initialization_and_destruction_0(1, 65535);
}


// Function: _ZNKSt9type_info4nameEv at 0x402d08
void* std_type_info_name(void* this)
{
 if (*((char *)(long long)((unsigned long long*)this)[8]) != 42)
 return 0;
 return (void*)((unsigned long long*)this)[8];
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x402d44
int std_type_info_operator_eq(void* this, void *arg_0, void *arg_1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if ((long long)((unsigned long long*)this)[8] != *((long long *)(arg_0 + 8)) && (*((char *)(long long)((unsigned long long*)this)[8]) == 42 || strcmp((char*)(long long)((unsigned long long*)this)[8], (char*)*((long long *)(arg_0 + 8)))))
 return 0;
 return 1;
}


// Function: _ZN11SimpleClassC2EiPKc at 0x402db8
long long SimpleClass_SimpleClass(char *ptr, long long a1, long long a2)
{
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((long long *)&ptr) = a1;
 strncpy(ptr + 4, a2, 31);
 ptr[35] = 0;
 return ptr;
}


// Function: _ZNK11SimpleClass8getValueEv at 0x402e00
unsigned int SimpleClass_getValue(char *ptr)
{
 return *((unsigned int *)ptr);
}


// Function: _ZN11SimpleClass8setValueEi at 0x402e18
void SimpleClass_setValue(char *ptr, unsigned int val)
{
 *((unsigned int *)ptr) = val;
}


// Function: _ZNK11SimpleClass7computeEi at 0x402e3c
unsigned int SimpleClass_compute(char *ptr, int val)
{
 unsigned long long len; // x0

 len = strlen(ptr + 4);
 return (val * *((unsigned int *)ptr) & 4294967295) + len;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x402e80
unsigned int SimpleClass_getClassID(unsigned int val, int arg)
{
 return val;
}


// Function: _ZN14LifecycleClassC1Em at 0x402e88
extern unsigned int _ZN14LifecycleClass14instance_countE;

void LifecycleClass_LifecycleClass(unsigned long long v4)
{
 unsigned long long ptr[2]; // x0
 char *v0; // [bp-0x30]
 unsigned long long i; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 ptr[1] = v4;
 if (2305843009213693950 >= v4)
 {
 ptr[0] = (unsigned long long)operatornew_array(__ROL__(v4, 2) & 18446744073709551612);
 i = 0;
 }
 else
 {
 __cxa_throw_bad_array_new_length(v4, 2305843009213693950);
 }
 for (; i < v4; i += 1)
 {
 ((unsigned int *)(ptr[0]))[i] = (((((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i) * 2 | (((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i >> 31) & 4294967294;
 }
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
}

// Global variable definition
unsigned int _ZN14LifecycleClass14instance_countE = 0;


// Function: _ZN14LifecycleClassD1Ev at 0x402f50
extern unsigned int _ZN14LifecycleClass14instance_countE;

void LifecycleClass_LifecycleClass_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (*((long long *)this))
 operatordelete_array(*((long long *)this));
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x402fa0
unsigned int LifecycleClass_getData(unsigned long long v0, unsigned long v1)
{
 if (v0 <= v1)
 return 4294967295;
 return ((unsigned int *)(v0))[v1];
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x402fe8
unsigned int LifecycleClass_getInstanceCount(unsigned int val1, unsigned int val2)
{
 return val1 + val2;
}


// Function: _ZN4Base12virtual_funcEi at 0x402ff8
unsigned int Base_virtual_func(void *ptr, int val)
{
 return 1;
}


// Function: _ZNK4Base7getNameEv at 0x403014
void Base_getName(void* this)
{
 puts("Base");
}


// Function: _ZN4BaseD1Ev at 0x40302c
extern char g_416b10;

void Base_Base_destructor(void* ptr)
{
 *((char **)ptr) = &g_416b10;
}


// Function: _ZN4BaseD0Ev at 0x403050
void Base_Base_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
}


// Function: _ZN4BaseC2Ev at 0x403078
extern char g_416b10;

void Base_Base(void* ptr)
{
 *((char **)ptr) = &g_416b10;
}


// Function: _ZN7DerivedC1Ei at 0x40309c
extern char g_416ae0;

void Derived_Derived(char *ptr, unsigned int v3)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 Base_Base(ptr);
 *((char **)&ptr->padding_0[0]) = &g_416ae0;
 ptr->field_8 = v3;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4030dc
unsigned int Derived_virtual_func(char *ptr, int val)
{
 return val;
}


// Function: _ZNK7Derived7getNameEv at 0x403100
void Derived_getName(void* this)
{
 puts("Derived");
}


// Function: _ZN5BaseA5funcAEv at 0x403118
void BaseA_funcA(void* this)
{
 puts("BaseA::funcA");
}


// Function: _ZN5BaseAD2Ev at 0x40312c
extern char g_416ab8;

void BaseA_BaseA_destructor(void* ptr)
{
 *((char **)ptr) = &g_416ab8;
}


// Function: _ZN5BaseAD0Ev at 0x403150
void BaseA_BaseA_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
}


// Function: _ZN5BaseB5funcBEv at 0x403178
void BaseB_funcB(void* this)
{
 puts("BaseB::funcB");
}


// Function: _ZN5BaseBD1Ev at 0x40318c
extern char g_416a90;

void BaseB_BaseB_destructor(void* ptr)
{
 *((char **)ptr) = &g_416a90;
}


// Function: _ZN5BaseBD0Ev at 0x4031b0
void BaseB_BaseB_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
}


// Function: _ZN12MultiDerived5funcAEv at 0x4031d8
void MultiDerived_funcA(void* this)
{
 puts("MultiDerived::funcA");
}


// Function: _ZN12MultiDerived5funcBEv at 0x4031ec
void MultiDerived_funcB(void* this)
{
 puts("MultiDerived::funcB");
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x403200
long long non_virtual_thunk_MultiDerived_funcB(void* a0)
{
 unsigned long v0; // x0

 MultiDerived_funcB((char*)a0 - 16);
 v0 = 0;
 return v0;
}


// Function: _ZN5BaseAC1Ev at 0x403208
extern char g_416ab8;

int BaseA_BaseA(void* ptr)
{
 *((char **)ptr) = &g_416ab8;
 return 0;
}


// Function: _ZN5BaseBC2Ev at 0x40322c
extern char g_416a90;

int BaseB_BaseB(void* ptr)
{
 *((char **)ptr) = &g_416a90;
 return 0;
}


// Function: _ZN12MultiDerivedC2Ev at 0x403250
extern char g_416a38;
extern char g_416a68;

void* MultiDerived_MultiDerived(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 BaseA_BaseA(ptr);
 BaseB_BaseB((char*)ptr + 16);
 *((char **)ptr) = &g_416a38;
 *((char **)&((char*)ptr)[16]) = &g_416a68;
 return ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x40329c
void VirtualBase_func(void* this)
{
 puts("VirtualBase::func");
}


// Function: _ZN11VirtualBaseD2Ev at 0x4032b0
extern char g_416a10;

int VirtualBase_VirtualBase_destructor(void* ptr)
{
 *((char **)ptr) = &g_416a10;
 return 0;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4032d4
int VirtualBase_VirtualBase_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
 return 0;
}


// Function: _ZN7MiddleA4funcEv at 0x4032fc
void MiddleA_func(void* this)
{
 puts("MiddleA::func");
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x403330
long long thunk_MiddleA_func(void* *a0)
{
 unsigned long v0; // x0

 MiddleA_func((char *)a0 + (*(a0))[24]);
 v0 = 0;
 return v0;
}


// Function: _ZN7MiddleB4funcEv at 0x403340
void MiddleB_func(void* this)
{
 puts("MiddleB::func");
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x403374
long long thunk_MiddleB_func(void* *a0)
{
 unsigned long v0; // x0

 MiddleB_func((char *)a0 + (*(a0))[24]);
 v0 = 0;
 return v0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x403384
void DiamondDerived_func(void* this)
{
 puts("DiamondDerived::func");
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x4033b8
long long thunk_DiamondDerived_func(void* *a0)
{
 unsigned long v0; // x0

 DiamondDerived_func((char *)a0 + (*(a0))[24]);
 v0 = 0;
 return v0;
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4033c8
long long non_virtual_thunk_DiamondDerived_func(void* a0)
{
 unsigned long v0; // x0

 DiamondDerived_func((char*)a0 - 16);
 v0 = 0;
 return v0;
}


// Function: _ZN11VirtualBaseC1Ev at 0x4033d0
extern char g_416a10;

int VirtualBase_VirtualBase(void* ptr)
{
 *((char **)ptr) = &g_416a10;
 return 0;
}


// Function: _ZN7MiddleAC2Ev at 0x4033f4
int MiddleA_MiddleA(void* ptr)
{
 unsigned long long *v0; // [bp-0x10]

 *((unsigned long long *)ptr) = *(v0);
 return 0;
}


// Function: _ZN7MiddleAD2Ev at 0x403444
int MiddleA_MiddleA_destructor(void* ptr)
{
 unsigned long long *v0; // [bp-0x10]

 *((unsigned long long *)ptr) = *(v0);
 return 0;
}


// Function: _ZN7MiddleBC2Ev at 0x403494
int MiddleB_MiddleB(void* ptr)
{
 unsigned long long *v0; // [bp-0x10]

 *((unsigned long long *)ptr) = *(v0);
 return 0;
}


// Function: _ZN7MiddleBD2Ev at 0x4034e4
int MiddleB_MiddleB_destructor(void* ptr)
{
 unsigned long long *v0; // [bp-0x10]

 *((unsigned long long *)ptr) = *(v0);
 return 0;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x403534
extern char g_416878;
extern char g_4168a8;
extern char g_4168e0;

void* DiamondDerived_DiamondDerived(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 VirtualBase_VirtualBase((char*)ptr + 32);
 MiddleA_MiddleA(ptr);
 MiddleB_MiddleB((char*)ptr + 16);
 *((char **)ptr) = &g_416878;
 *((char **)&((char*)ptr)[32]) = &g_4168e0;
 *((char **)&((char*)ptr)[16]) = &g_4168a8;
 return ptr;
}


// Function: _ZN5PointC1Eii at 0x4035c0
int Point_Point(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)&ptr[4]) = arg_1;
 return 0;
}


// Function: _ZNK5PointplERKS_ at 0x4035f4
extern char __stack_chk_guard;

void Point_operator_plus(char *result, char *a0, char *a1)
{
 unsigned int v4[2]; // x1
 char *v0; // [bp-0x30]
 char v1; // [bp-0x10], Other Possible Types: unsigned long
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 Point_Point(result, *((int *)a0) + *((int *)a1), *((int *)&a0[4]) + *((int *)&a1[4]));
 if (v2 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _ZNK5PointeqERKS_ at 0x403684
long long Point_operator_eq(char *a0, char *a1)
{
 if (*((int *)a0) == *((int *)a1) && *((int *)&a0[4]) == *((int *)&a1[4]))
 return 1;
 return 0;
}


// Function: _ZN5PointppEv at 0x4036d4
long long Point_operator_inc(char *ptr)
{
 unsigned int *p = (unsigned int*)ptr;

 p[0] = p[0] + 1;
 p[1] = p[1] + 1;
 return (long long)ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403710
int template_max<int>(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x403740
double template_max_double(double arg_0, double arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x403774
long long template_swap_int(unsigned int *ptr, unsigned int *ptr2)
{
 unsigned int v0; // [bp-0x4]

 v0 = *(ptr);
 *(ptr) = *(ptr2);
 *(ptr2) = v0;
 return (long long)ptr2;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4037b4
void* Container_int_Container(void* ptr)
{
 return ptr;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4037d0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long v0; // x0

 if (9 >= (int)((char*)ptr)[40])
 {
 v0 = (int)((char*)ptr)[40];
 *((unsigned int *)&((char*)ptr)[40]) = (unsigned int)v0 + 1;
 ((int *)((char *)ptr))[v0] = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x40381c
unsigned int Container_int_get(void* ptr, int index)
{
 unsigned int *v1 = (unsigned int*)((char*)ptr);
 if (index >= 0 && ((unsigned int*)((char*)ptr + 40))[0] > (unsigned int)index)
 return v1[index];
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403864
unsigned int Container_int_getSize(void *v0)
{
 return ((unsigned int*)((char*)v0 + 40))[0];
}


// Function: _ZN9ContainerIdEC1Ev at 0x40387c
void* Container_double_Container(void* ptr)
{
 return ptr;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403898
void Container_double_push(void *ptr, unsigned long v3)
{
 unsigned long index; // x0
 unsigned long v2; // x0

 index = ((unsigned int*)((char*)ptr + 80))[0];
 if (9 >= (unsigned int)index)
 {
 v2 = ((unsigned int*)((char*)ptr + 80))[0];
 ((unsigned int*)((char*)ptr + 80))[0] = (unsigned int)v2 + 1;
 index = v2;
 ((double*)((char*)ptr))[index] = *(double*)&v3;
 }
}


// Function: _ZNK9ContainerIdE3getEi at 0x4038e4
double Container_double_get(void *ptr, int index)
{
 unsigned int v1; // w1

 v1 = index;
 if ((unsigned int)v1 >= 0)
 {
 v1 = ((unsigned int*)((char*)ptr + 80))[0];
 if ((unsigned int)v1 > (unsigned int)index)
 return ((double*)((char*)ptr))[index];
 }
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40392c
unsigned int Container_double_getSize(void* this)
{
 return ((unsigned int*)((char*)this + 80))[0];
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403944
void std_uniq_ptr_data_int_default_delete_int___uniq_ptr_data(void* this, void *arg_0)
{
 std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(this, arg_0);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x40396c
void std_unique_ptr_int_default_delete_int_unique_ptr(void* v2, unsigned long v3)
{
 std_uniq_ptr_data_int_default_delete_int___uniq_ptr_data(v2, (void*)v3);
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x403994
void RTTIBase_getType(void* this)
{
 puts("RTTIBase");
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4039a8
void RTTIDerivedA_getType(void* this)
{
 puts("RTTIDerivedA");
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x4039bc
unsigned int RTTIDerivedA_derivedA_data(void* this)
{
 return 10;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4039d0
void RTTIDerivedB_getType(void* this)
{
 puts("RTTIDerivedB");
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x4039e4
unsigned int RTTIDerivedB_derivedB_data(void* this)
{
 return 20;
}


// Function: _ZN8RTTIBaseC1Ev at 0x4039f8
extern char g_416848;

int RTTIBase_RTTIBase(void* ptr)
{
 *((char **)ptr) = &g_416848;
 return 0;
}


// Function: _ZN8RTTIBaseD2Ev at 0x403a1c
extern char g_416848;

int RTTIBase_RTTIBase_destructor(void* ptr)
{
 *((char **)ptr) = &g_416848;
 return 0;
}


// Function: _ZN8RTTIBaseD0Ev at 0x403a40
int RTTIBase_RTTIBase_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x403a68
extern char g_416820;

void RTTIDerivedA_RTTIDerivedA(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 RTTIBase_RTTIBase(ptr);
 *((char **)ptr) = &g_416820;
 return;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x403a98
extern char g_4167f8;

void RTTIDerivedB_RTTIDerivedB(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 RTTIBase_RTTIBase(ptr);
 *((char **)ptr) = &g_4167f8;
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x403ac8
int std_uniq_ptr_data_int_default_delete_int___uniq_ptr_data_ptr(void* this, int *arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(this, arg_0);
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x403af0
long long std_unique_ptr_int_default_delete_int_unique_ptr_ptr(char *a0, unsigned int *a1)
{
 unsigned long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_uniq_ptr_data_int_default_delete_int___uniq_ptr_data(a0, a1);
 return (unsigned long long)a0;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x403b18
void std_unique_ptr_int_default_delete_int_destructor(void* this)
{
 unsigned long long v3; // x19
 unsigned long long *v4; // x0
 unsigned long long *ptr; // [bp-0x8]

 ptr = (unsigned long long*)std_uniq_ptr_impl_int_default_delete_int__M_ptr(this);
 if (*(ptr))
 {
 v3 = std_unique_ptr_int_default_delete_int_get_deleter(this);
 v4 = (unsigned long long*)std_move_int_ptr_ref((unsigned long long)ptr);
 std_default_delete_int_operator((void*)v3, (int*)*(v4));
 }
 *(ptr) = 0;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x403b80
long long std_unique_ptr_int_default_delete_int_operator_deref(void* this)
{
 return (long long)std_unique_ptr_int_default_delete_int_get(this);
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x403ba4
long long std_move_unique_ptr_int_default_delete_int_ref(void* a0)
{
 return (long long)a0;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_ at 0x403bb8
void std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(void* ptr, void *arg_0)
{
 std_Tuple_impl_1ul_default_delete_int__Tuple_impl(ptr);
 *((long long *)ptr) = *((long long *)arg_0);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x403bf0
void std_tuple_int_ptr_default_delete_int_tuple(void* this, void *arg_0)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(this, arg_0);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x403c18
void std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(unsigned long long v2, void* v4)
{
 unsigned long long *ptr; // x0

 std_tuple_int_ptr_default_delete_int_tuple(v4, std_move_tuple_int_ptr_default_delete_int_ref((void*)v2));
 ptr = (unsigned long long*)std_uniq_ptr_impl_int_default_delete_int__M_ptr((void*)v2);
 *(ptr) = 0;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x403c60
void std_uniq_ptr_data_int_default_delete_int_array___uniq_ptr_data(void* this, int *arg_0)
{
 std_uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(this, arg_0);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x403c88
void std_unique_ptr_int_array_default_delete_int_array_unique_ptr(char *a0, unsigned int *a1)
{
 std_uniq_ptr_data_int_default_delete_int_array___uniq_ptr_data(a0, (int*)a1);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x403cb0
void std_unique_ptr_int_array_default_delete_int_array_destructor(void* this)
{
 unsigned long long v3; // x0
 unsigned long long *v1; // [bp-0x8]

 v1 = (unsigned long long*)std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(this);
 if (*(v1))
 {
 v3 = std_unique_ptr_int_array_default_delete_int_array_get_deleter(this);
 std_default_delete_int_array_operator(v3, (void*)*(v1));
 }
 *(v1) = 0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x403d0c
long long std_unique_ptr_int_array_default_delete_int_array_operator_index(unsigned long long v2, unsigned long long v3)
{
 return (long long)std_unique_ptr_int_array_default_delete_int_array_get((void*)v2) + (__ROL__(v3, 2) & 18446744073709551612);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x403d44
void std_uniq_ptr_impl_int_default_delete_int___uniq_ptr_impl(void* a0, unsigned long long v3)
{
 unsigned long long *ptr; // x0

 std_tuple_int_ptr_default_delete_int_tuple_true_true(a0);
 ptr = (unsigned long long*)std_uniq_ptr_impl_int_default_delete_int__M_ptr(a0);
 *(ptr) = v3;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403d80
long long std_uniq_ptr_impl_int_default_delete_int__M_ptr(unsigned long long v2)
{
 return (long long)std_get_0ul_int_ptr_default_delete_int((void*)v2, 0);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x403d9c
long long std_unique_ptr_int_default_delete_int_get_deleter(unsigned long long v2)
{
 return (long long)std_uniq_ptr_impl_int_default_delete_int__M_deleter((void*)v2);
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x403db8
unsigned long long* std_move_int_ptr_ref(unsigned long long v0)
{
 return (unsigned long long*)v0;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x403dcc
long long std_default_delete_int_operator(void* this_ptr, int *arg_0_ptr)
{
 char *v0; // [bp-0x20]
 void* v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = this_ptr;
 if (arg_0_ptr)
 operatordelete(arg_0_ptr, 4);
 return (long long)this_ptr;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x403dfc
long long std_unique_ptr_int_default_delete_int_get(unsigned long long v2)
{
 return std_uniq_ptr_impl_int_default_delete_int__M_ptr((void*)v2);
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x403e18
long long std_move_tuple_int_ptr_default_delete_int_ref(void* this, void *arg_0)
{
 return (long long)this;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x403e2c
void std_Tuple_impl_1ul_default_delete_int__Tuple_impl(unsigned long v0)
{
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x403e44
void std_uniq_ptr_impl_int_default_delete_int_array___uniq_ptr_impl(void* a0, unsigned long long v3)
{
 unsigned long long *ptr; // x0

 std_tuple_int_ptr_default_delete_int_array_tuple_true_true((unsigned long long)a0);
 ptr = (unsigned long long*)std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(a0);
 *(ptr) = v3;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x403e80
long long std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(unsigned long long v2)
{
 return (long long)std_get_0ul_int_ptr_default_delete_int_array((void*)v2, 0);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x403e9c
long long std_unique_ptr_int_array_default_delete_int_array_get_deleter(unsigned long long a0)
{
 return (long long)std_uniq_ptr_impl_int_default_delete_int_array__M_deleter((void*)a0);
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x403eb8
long long std_default_delete_int_array_operator(unsigned long long a0, void* a1)
{
 void* v3; // x0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = a0;
 v3 = a1;
 if (v3)
 operatordelete[](a1);
 return (long long)a0;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x403ee8
long long std_unique_ptr_int_array_default_delete_int_array_get(void* this)
{
 return std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(this);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x403f04
void std_tuple_int_ptr_default_delete_int_tuple_true_true(unsigned long long v2)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl((void*)v2);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x403f24
long long std_get_0ul_int_ptr_default_delete_int(void* this, void *arg_0)
{
 return (long long)std___get_helper_0ul_int_ptr_default_delete_int(this, 0);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x403f40
long long std_uniq_ptr_impl_int_default_delete_int__M_deleter(void* this)
{
 return (long long)std_get_1ul_int_ptr_default_delete_int((unsigned long long)this);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403f5c
long long std_uniq_ptr_impl_int_default_delete_int__M_ptr(void* this)
{
 return (long long)std_get_0ul_int_ptr_default_delete_int(this, 0);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x403f7c
void std_tuple_int_ptr_default_delete_int_array_tuple_true_true(unsigned long long a0)
{
 std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl((void*)a0);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x403f9c
long long std_get_0ul_int_ptr_default_delete_int_array(void* this, void *arg_0)
{
 return (long long)std___get_helper_0ul_int_ptr_default_delete_int_array(this, 0);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x403fb8
long long std_uniq_ptr_impl_int_default_delete_int_array__M_deleter(void* this_ptr)
{
 return (long long)std_get_1ul_int_ptr_default_delete_int_array((unsigned long long)this_ptr);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x403fd4
long long std_uniq_ptr_impl_int_default_delete_int_array__M_ptr(unsigned long long v2)
{
 return (long long)std_get_0ul_int_ptr_default_delete_int_array((void*)v2, 0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev at 0x403ff4
void std_Tuple_impl_0ul_int_ptr_default_delete_int__Tuple_impl(void* this)
{
 std_Tuple_impl_1ul_default_delete_int__Tuple_impl((unsigned long long)this);
 std_Head_base_0ul_int_ptr_false_Head_base(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40401c
long long std___get_helper_0ul_int_ptr_default_delete_int(void* this, void *arg_0)
{
 return (long long)std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head(this);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404038
long long std_get_1ul_int_ptr_default_delete_int(unsigned long long v2)
{
 return (long long)std___get_helper_1ul_default_delete_int((void*)v2, 0);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x404054
long long std_get_0ul_int_ptr_default_delete_int_const(unsigned long long v2)
{
 return (long long)std___get_helper_0ul_int_ptr_default_delete_int_const((void*)v2, 0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x404070
void std_Tuple_impl_0ul_int_ptr_default_delete_int_array__Tuple_impl(void* this)
{
 std_Tuple_impl_1ul_default_delete_int_array__Tuple_impl((unsigned long long)this);
 std_Head_base_0ul_int_ptr_false_Head_base(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404098
long long std___get_helper_0ul_int_ptr_default_delete_int_array(void* this_ptr, void *arg_0_ptr)
{
 return (long long)std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(this_ptr);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x4040b4
long long std_get_1ul_int_ptr_default_delete_int_array(unsigned long long v2)
{
 return (long long)std___get_helper_1ul_default_delete_int_array((void*)v2, 0);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x4040d0
long long std_get_0ul_int_ptr_default_delete_int_array_const(void* this, void *arg_0)
{
 return (long long)std___get_helper_0ul_int_ptr_default_delete_int_array_const(this, 0);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x4040ec
void* std_forward_int_ptr_ref(void* this_ptr)
{
 return this_ptr;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x404100
void std_Tuple_impl_1ul_default_delete_int__Tuple_impl(unsigned long long v2)
{
 std_Head_base_1ul_default_delete_int_true_Head_base((void*)v2);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC1Ev at 0x404120
void std_Head_base_0ul_int_ptr_false_Head_base(void* this)
{
 unsigned long long *ptr = (unsigned long long*)this;

 *(ptr) = 0;
 return;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x40413c
long long std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head(void* this)
{
 return (long long)std_Head_base_0ul_int_ptr_false__M_head(this);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x404158
long long std___get_helper_1ul_default_delete_int(void* this, void *arg_0)
{
 return (long long)std___Tuple_impl_1ul_default_delete_int___M_head(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404174
long long std___get_helper_0ul_int_ptr_default_delete_int_const(void* this, void *arg_0)
{
 return (long long)std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const(this);
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x404190
void std_Tuple_impl_1ul_default_delete_int_array__Tuple_impl(unsigned long long v2)
{
 std_Head_base_1ul_default_delete_int_array_true_Head_base((void*)v2);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x4041b0
long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head(void* this)
{
 return (long long)std_Head_base_0ul_int_ptr_false__M_head(this);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x4041cc
long long std___get_helper_1ul_default_delete_int_array(void* this, void *arg_0)
{
 return (long long)std___Tuple_impl_1ul_default_delete_int_array___M_head(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x4041e8
long long std___get_helper_0ul_int_ptr_default_delete_int_array_const(void* this, void *arg_0)
{
 return (long long)std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const(this);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x404204
void std_Head_base_0ul_int_ptr_false_Head_base_int_ptr_ref(void* this_ptr, void *arg_0_ptr)
{
 *((long long *)this_ptr) = *((long long *)std_forward_int_ptr_ref(arg_0_ptr));
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x404234
void std_Head_base_1ul_default_delete_int_true_Head_base(void* this)
{
 return;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x404248
long long std_Head_base_0ul_int_ptr_false__M_head(void* this)
{
 return (long long)this;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x40425c
long long std_Tuple_impl_1ul_default_delete_int__M_head(void* this)
{
 return (long long)std_Head_base_1ul_default_delete_int_true__M_head(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x404278
long long std_Tuple_impl_0ul_int_ptr_default_delete_int__M_head_const(void* this)
{
 return (long long)std_Head_base_0ul_int_ptr_false__M_head(this);
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev at 0x404294
void std_Head_base_1ul_default_delete_int_array_true_Head_base(void* this)
{
 return;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x4042a8
long long std_Tuple_impl_1ul_default_delete_int_array__M_head(void* this)
{
 return (long long)std_Head_base_1ul_default_delete_int_array_true__M_head(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x4042c4
long long std_Tuple_impl_0ul_int_ptr_default_delete_int_array__M_head_const(void* this)
{
 return (long long)std_Head_base_0ul_int_ptr_false__M_head(this);
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x4042e0
long long std_Head_base_1ul_default_delete_int_true__M_head(void* this)
{
 return (long long)this;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x4042f4
long long std_Head_base_0ul_int_ptr_false_M_head_const(void* this)
{
 return (long long)this;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404308
long long std_Head_base_1ul_default_delete_int_array_true__M_head(void* this)
{
 return (long long)this;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x40431c
extern char g_4167f8;

int RTTIDerivedB_RTTIDerivedB_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_4167f8;
 return 0;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40434c
int RTTIDerivedB_RTTIDerivedB_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x404374
extern char g_416820;

int RTTIDerivedA_RTTIDerivedA_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_416820;
 return 0;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4043a4
int RTTIDerivedA_RTTIDerivedA_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x4043cc
extern char g_416878;
extern char g_4168a8;
extern char g_4168e0;

int DiamondDerived_DiamondDerived_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_416878;
 *((char **)&ptr[32]) = &g_4168e0;
 *((char **)&ptr[16]) = &g_4168a8;
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x404458
long long non_virtual_thunk_DiamondDerived_D1(unsigned long a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x404460
long long thunk_DiamondDerived_D1(unsigned long a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x404470
int DiamondDerived_DiamondDerived_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 48);
 return 0;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404498
long long non_virtual_thunk_DiamondDerived_D0(unsigned long a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x4044a0
long long thunk_DiamondDerived_D0(unsigned long a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x4044b0
extern char g_416a38;
extern char g_416a68;

int MultiDerived_MultiDerived_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_416a38;
 *((char **)&ptr[16]) = &g_416a68;
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x4044fc
long long non_virtual_thunk_MultiDerived_D1(unsigned long a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x404504
int MultiDerived_MultiDerived_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 32);
 return 0;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x40452c
long long non_virtual_thunk_MultiDerived_D0(unsigned long a0)
{
 unsigned long v0; // x0

 return v0;
}


// Function: _ZN7DerivedD2Ev at 0x404534
extern char g_416ae0;

int Derived_Derived_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_416ae0;
 return 0;
}


// Function: _ZN7DerivedD0Ev at 0x404564
int Derived_Derived_destructor2(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


