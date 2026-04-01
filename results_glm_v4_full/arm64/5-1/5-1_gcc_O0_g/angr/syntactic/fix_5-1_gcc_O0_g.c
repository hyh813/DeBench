// Angr Decompilation of 5-1_gcc_O0_g
// Platform: AARCH64

#include <stdlib.h>
#include <string.h>

/* CRT stub function _init removed by preprocessor */

/* Forward declarations for missing functions */
extern void* operatornew(unsigned long size);
extern void* operatornew[](unsigned long size);
extern void operatordelete(void* ptr, unsigned long size);
extern void operatordelete[](void* ptr);
extern void deregister_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern void* frame_dummy(void);
extern void abort(void);
extern void __stack_chk_fail(void);
extern void _Unwind_Resume(void* exception_object);

/* Forward declarations for C++ classes */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Derived Derived;
typedef struct Base Base;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MultiDerived MultiDerived;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct VirtualBase VirtualBase;

/* Forward declarations for RTTI functions */
extern long long RTTIDerivedA_RTTIDerivedA(void *ptr);
extern long long RTTIDerivedB_RTTIDerivedB(void *ptr);
extern unsigned int RTTIDerivedA_derivedA_data(void *ptr);
extern unsigned int RTTIDerivedB_derivedB_data(void *ptr);

/* Forward declaration for CmpF function used in template comparison */
extern int CmpF(double a, double b);

/* Forward declarations for templates */
extern int template_max_int(int arg_0, int arg_1);
extern double template_max_double(double arg_0, double arg_1);
extern long long template_swap_int(unsigned int *ptr, unsigned int *p);

/* Forward declarations for C++ classes with templates */
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Forward declarations for Container functions */
extern void Container_int__Container(void *this);
extern void Container_int__push(void *this, int value);
extern int Container_int__get(void *this, int index);
extern int Container_int__getSize(void *this);
extern void Container_double__Container(void *this);
extern void Container_double__push(void *this, double value);
extern double Container_double__get(void *this, int index);
extern int Container_double__getSize(void *this);

/* Forward declarations for missing C++ functions */
extern char* puts(const char *s);
extern int printf(const char *format, ...);
extern size_t strlen(const char *s);
extern char* strncpy(char *dest, const char *src, size_t n);
extern void* __cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void dest);
extern void* __cxa_begin_catch(void);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void* __cxa_bad_typeid(void *obj);
extern void __cxa_throw_bad_array_new_length(unsigned long, unsigned long);
extern int __cxa_atexit(void (*func)(void*), void *arg, void *dso_handle);
extern void* __dynamic_cast(void *src_ptr, void *src_type, void *dst_type, int src2dst_offset);
extern unsigned long long __ROL__(unsigned long long x, int n);
extern int arm64g_calculate_condition(int cc, unsigned long long cond);

/* C++ type_info struct */
typedef struct type_info {
    unsigned long long field_0;
    unsigned long long field_1;
} type_info;

/* Forward declarations for std classes */
extern void std_type_info_operator_equals(type_info* this, type_info *arg_0);
extern char* std_type_info_name(type_info* this);

/* Forward declarations for std helper functions with int* and lambda */
extern long long std_forward_int_ptr_ref(unsigned long long a0);
extern long long std___Tuple_impl_0ul_int_ptr_lambda____Tuple_impl(unsigned long long a0, unsigned long long a1, unsigned int a2);
extern long long std___get_helper_0ul_int_ptr_lambda(unsigned long long a0);
extern long long std_get_1ul_int_ptr_lambda(unsigned long long a0);
extern long long std_get_0ul_int_ptr_lambda_const(unsigned long long a0);
extern long long std___Tuple_impl_0ul_int_ptr_lambda___M_head(unsigned long long a0);
extern long long std___get_helper_0ul_int_ptr_lambda_const(unsigned long long a0);
extern long long std___Head_base_1ul_lambda_true___Head_base(unsigned long a0, unsigned long a1);
extern long long std___Head_base_0ul_int_ptr_false___M_head(unsigned long long a0);
extern long long std___Head_base_0ul_int_ptr_false___M_head_const(unsigned long long a0);
extern long long std___Tuple_impl_1ul_lambda___M_head(unsigned long long a0);
extern long long std___Tuple_impl_0ul_int_ptr_lambda___M_head_const(unsigned long long a0);
extern long long std___Head_base_1ul_lambda_true___M_head(unsigned long a0);

/* Forward declarations for std helper functions with int* and std::default_delete */
extern long long std_get_1ul_int_std_default_delete_int_(void* this);
extern long long std_get_0ul_int_std_default_delete_int_(void* this);
extern long long std_get_0ul_int_std_default_delete_int___const(void* this);
extern long long std__get_helper_0ul_int_std_default_delete_int_(void* this);
extern long long std__get_helper_1ul_std_default_delete_int_(void* this);
extern long long std__get_helper_0ul_int_std_default_delete_int___const(void* this);
extern long long std___Tuple_impl_0ul_int_std_default_delete_int____M_head(void* this);
extern long long std___Tuple_impl_0ul_int_std_default_delete_int___M_head_const(void* this);
extern long long std___Tuple_impl_1ul_std_default_delete_int___M_head(void* this);
extern long long std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl_int_ptr(void* a0, int* ptr_arg);
extern long long std_unique_ptr_int_std_default_delete_int___get_deleter(void* this);
extern long long std_unique_ptr_int_std_default_delete_int___get(void* this);
extern long long std_move_int_ptr_ref(void* ptr);
extern void std_default_delete_int___operator_call(void* this, int *arg_0);

/* Forward declarations for std helper functions with int* and std::default_delete<int[]> */
extern long long std_get_0ul_int_std_default_delete_int_array_(void* this);
extern long long std_get_1ul_int_std_default_delete_int_array_(void* this);
extern long long std_get_0ul_int_std_default_delete_int_array___const(void* this);
extern long long std__get_helper_0ul_int_std_default_delete_int_array_(void* this);
extern long long std__get_helper_1ul_int_std_default_delete_int_array_(void* this);
extern long long std__get_helper_0ul_int_std_default_delete_int_array___const(void* this);
extern long long std___Tuple_impl_0ul_int_std_default_delete_int_array____M_head(void* this);
extern long long std___Tuple_impl_0ul_int_std_default_delete_int_array___M_head_const(void* this);
extern long long std___Tuple_impl_1ul_int_std_default_delete_int_array___M_head(void* this);
extern long long std___uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl_int_ptr(void* a0, int* ptr_arg);
extern long long std___uniq_ptr_impl_int_std_default_delete_int_array____M_ptr(void* this);
extern long long std_unique_ptr_int_array_std_default_delete_int_array___get_deleter(void* this);
extern long long std_unique_ptr_int_array_std_default_delete_int_array___get(void* this);
extern void* _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(unsigned long long a0, void* a1);
extern long long std__tuple_int_std_default_delete_int_array___tuple_true_true(void* this);
extern long long std__Tuple_impl_0ul_int_std_default_delete_int_array____Tuple_impl(void* this);

/* Forward declarations for std helper functions */
extern long long std__Tuple_impl_1ul_std_default_delete_int____Tuple_impl(void* this);
extern long long std__Tuple_impl_0ul_int_std_default_delete_int____Tuple_impl(void* this);
extern long long std__Head_base_0ul_int_ptr_false___Head_base(void* this);
extern long long std__Tuple_impl_1ul_std_default_delete_int_array____Tuple_impl(void* this);
extern long long std__Tuple_impl_0ul_int_std_default_delete_int_array____Tuple_impl(void* this);
extern long long std__Head_base_1ul_std_default_delete_int_true___Head_base(void* this);
extern long long std__Head_base_1ul_std_default_delete_int_array_true___Head_base(void* this);
extern long long std__Head_base_0ul_int_ptr_false___M_head(void* this);
extern long long std__Head_base_1ul_std_default_delete_int_true___M_head(void* this);
extern long long std__Head_base_1ul_std_default_delete_int_array_true___M_head(void* this);
extern long long std__Head_base_0ul_int_ptr_false___M_head_const(void* this);
extern long long std__Tuple_impl_0ul_int_std_default_delete_int____M_head(void* this);
extern long long std__Tuple_impl_1ul_std_default_delete_int____M_head(void* this);
extern long long std__Tuple_impl_0ul_int_std_default_delete_int_array____M_head(void* this);
extern long long std__Tuple_impl_1ul_std_default_delete_int_array____M_head(void* this);
extern long long std__Tuple_impl_0ul_int_std_default_delete_int____M_head_const(void* this);
extern long long std__Tuple_impl_0ul_int_std_default_delete_int_array____M_head_const(void* this);
extern long long std___get_helper_1ul_std_default_delete_int_(void* this);
extern long long std___get_helper_0ul_int_std_default_delete_int_(void* this);
extern long long std___get_helper_0ul_int_std_default_delete_int___const(void* this);
extern long long std___get_helper_1ul_std_default_delete_int_array_(void* this);
extern long long std___get_helper_0ul_int_std_default_delete_int_array_(void* this);
extern long long std___get_helper_0ul_int_std_default_delete_int_array___const(void* this);
extern long long std__tuple_int_std_default_delete_int___tuple_true_true(void* this);

/* Forward declarations for std functions with move */
extern void* std_move_std__tuple_int_std_default_delete_int___(void* this, void *arg_0);
extern long long std___uniq_ptr_impl_int_std_default_delete_int____M_ptr(void* this);

/* Forward declarations for std::__uniq_ptr_impl functions with lambda */
extern long long std___uniq_ptr_impl_int_lambda____uniq_ptr_impl(unsigned long long a0, unsigned long long a1, unsigned long long a2);
extern long long std_unique_ptr_int_lambda___get_const(unsigned long long a0);
extern long long std_forward_lambda_ref(unsigned long a0);
extern long long std_tuple_int_ptr_lambda___tuple(unsigned long long a0, unsigned long long a1, unsigned int a2);
extern long long std_get_0ul_int_ptr_lambda(unsigned long long a0);
extern long long std___uniq_ptr_impl_int_lambda___M_deleter(unsigned long long a0);
extern long long std___uniq_ptr_impl_int_lambda___M_ptr_const(unsigned long long a0);



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
int sub_401854()
{
 return (int)operatornew[](0);
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
 /* SimpleClass::SimpleClass(&v4, 5, "Test", &v4); */
 /* SimpleClass::setValue(&v4, 10); */
 v1 = 10; /* SimpleClass::getValue(&v4); */
 v2 = 30; /* SimpleClass::compute(&v4, 3); */
 v3 = 0; /* SimpleClass::getClassID(v2, 3); */
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
 /* LifecycleClass::LifecycleClass(&v3, 5); */
 v6 = 5; /* LifecycleClass::getData(&v3, 2); */
 v2 = v1 + (unsigned int)v6;
 v7 = 1; /* LifecycleClass::getInstanceCount(v1 + (v6 & 4294967295), v6 & 4294967295); */
 v1 = v2 + v7;
 v1 += 1000 * 1; /* LifecycleClass::getInstanceCount(v8, v7); */
 v8 = (unsigned long long)v8;
 if (v4 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z17call_virtual_funcP4Basei at 0x401c70
typedef struct Base Base;

void call_virtual_func(Base *arg_0, int arg_1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 (*((long long *)*((long long *)*((long long *)&v1))))(arg_0, arg_1, *((long long *)*((long long *)&arg_0)));
 return;
}


// Function: _Z21test_cpp_virtual_funcv at 0x401ca0
typedef struct Base Base;

extern char __stack_chk_guard;
extern char g_416b10;

void test_cpp_virtual_func()
{
 char *v0; // [bp-0x60]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned long v5; // [bp-0x30]
 Base *v6; // [bp-0x28]
 Base *v7; // [bp-0x20]
 char v8; // [bp-0x18]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 v5 = (long long)&g_416b10;
 /* Derived::Derived(&v8, 3); */
 v1 = 6; /* Base::virtual_func(&v5, 5); */
 v2 = 15; /* Derived::virtual_func(&v8, 5); */
 v6 = &v5;
 v7 = &v8;
 call_virtual_func(v6, 5);
 call_virtual_func(v7, 5);
 if (v9 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_401d78 at 0x401d78
long long sub_401d78(unsigned long long a0)
{
 _Unwind_Resume((void*)a0); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x401da8
typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

extern char __stack_chk_guard;

void test_cpp_multiple_inheritance()
{
 char v12; // x0
 char *v0; // [bp-0x70]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 struct_1 **v4; // [bp-0x38]
 struct_1 **v5; // [bp-0x30]
 char v6; // [bp-0x28]
 unsigned int v7; // [bp-0x20]
 char v8; // [bp-0x18]
 unsigned int v9; // [bp-0x10]
 unsigned long v10; // [bp-0x8]
 char v11; // [bp+0x0]

 v0 = &v11;
 v10 = *((long long *)&__stack_chk_guard);
 /* MultiDerived::MultiDerived(&v6, 0); */
 v7 = 100;
 v9 = 200;
 v4 = &v6;
 v5 = &v8;
 v1 = 0; /* *(v4)->field_0(v4, *((long long *)*((long long *)&v6))); */
 v2 = 0; /* *(v5)->field_0(v5, *((long long *)*((long long *)&v8))); */
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
 _Unwind_Resume((void*)a0); /* do not return */
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x401ea4
typedef struct struct_0 {
 unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
 struct struct_0 *field_0;
} struct_1;

extern char __stack_chk_guard;

void test_cpp_diamond_inheritance()
{
 char *v0; // [bp-0x70]
 unsigned int v1; // [bp-0x48]
 unsigned int v2; // [bp-0x44]
 struct_1 **v3; // [bp-0x40]
 char v4; // [bp-0x38]
 struct_0 **v5; // [bp-0x18]
 unsigned int v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 /* DiamondDerived::DiamondDerived(&v4, 0); */
 v6 = 50;
 v3 = &v5;
 v1 = 0; /* *(v3)->field_0(v3, *(v5)); */
 v6 = 100;
 v2 = 0; /* *(v3)->field_0(v3, *(v5)); */
 if (v7 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_401f50 at 0x401f50
long long sub_401f50(unsigned long long a0)
{
 _Unwind_Resume((void*)a0); /* do not return */
}


// Function: _Z26test_cpp_operator_overloadv at 0x401f78
extern char __stack_chk_guard;

void test_cpp_operator_overload()
{
 char *v0; // [bp-0x40]
 char result; // [bp-0x21]
 char v2; // [bp-0x20]
 char v3; // [bp-0x18]
 unsigned long v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 /* Point::Point(&v2, 1, 2); */
 /* Point::Point(&v3, 3, 4); */
 /* v4 = Point::operator+(&v2, &v3); */
 result = 0; /* Point::operator==(&v2, &v3); */
 /* Point::operator++(&v4); */
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
 /* template_max_double(v3, 7); */
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
 Container_int__Container(&v4);
 Container_int__push(&v4, 10);
 Container_int__push(&v4, 20);
 Container_int__push(&v4, 30);
 v1 = Container_int__get(&v4, 0);
 v2 = Container_int__getSize(&v4);
 Container_double__Container(&v5);
 Container_double__push(&v5, &g_404000);
 Container_double__get(&v5, 0);
 v3 = 4614253070214989087;
 if (v6 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _ZZ15test_cpp_lambdavENKUliE_clEi at 0x4021b0
typedef struct struct_lambda_closure {
 unsigned int field_0;
 char padding_4[4];
 struct struct_1 *field_8;
} struct_lambda_closure;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

/* Lambda function stub */
int test_cpp_lambda_operator(struct_lambda_closure *idx, unsigned int a1)
{
 if (idx && idx->field_8) {
 idx->field_8->field_0 = idx->field_8->field_0 + 5;
 return a1 * idx->field_0 + idx->field_8->field_0;
 }
 return 0;
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
 unsigned int v5; // [bp-0x18]
 char *v6; // [bp-0x10]
 unsigned long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v0 = &v8;
 v7 = *((long long *)&__stack_chk_guard);
 v2 = 10;
 v1 = 20;
 v5 = v2;
 v6 = &v1;
 v3 = test_cpp_lambda_operator((struct_lambda_closure *)&v5, 3);
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
/* Lambda deleter stub */
long long test_cpp_smart_ptr_deleter(unsigned long long a0, unsigned int *ptr)
{
 unsigned int *v3; // x0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = a0;
 *(ptr) = 4294967295;
 v3 = ptr;
 if (ptr)
 operatordelete(v3, 4);
 return (long long)v3;
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
 /* std::unique_ptr<int, std::default_delete<int>>::unique_ptr<std::default_delete<int>, void>(&v5, p, &v5); */
 ptr3 = p; /* std::unique_ptr<int, std::default_delete<int>>::operator*(&v5); */
 *(ptr3) = 200;
 /* std::unique_ptr<int, std::default_delete<int>>::unique_ptr(&v6, std::move<std::unique_ptr<int, std::default_delete<int>>&>(&v5, ptr3)); */
 v2 = 200; /* *((int *)std::unique_ptr<int, std::default_delete<int>>::operator*(&v6)); */
 ptr4 = (unsigned int *)operatornew[](20);
 ptr4[0] = 1;
 ptr5 = ptr4 + 1;
 ptr5[0] = 2;
 ptr6 = ptr5 + 1;
 ptr6[0] = 3;
 ptr = ptr6 + 1;
 ptr[0] = 4;
 ptr[1] = 5;
 /* std::unique_ptr<int[], std::default_delete<int[]>>::unique_ptr<int*, std::default_delete<int[]>, void, bool>(&v7, ptr4, ptr4); */
 v3 = 3; /* *((int *)std::unique_ptr<int[], std::default_delete<int[]>>::operator[](&v7, 2)); */
 addr = (unsigned int *)operatornew(4);
 *(addr) = 500;
 /* std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::unique_ptr<test_cpp_smart_ptr()::'lambda'(int*), void>(int*, test_cpp_smart_ptr()::'lambda'(int*) const&)(&v8, addr, &v1, &v8); */
 v4 = 500; /* *((int *)std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::operator*() const(&v8)); */
 if (v9 == *((long long *)&__stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_402560 at 0x402560
long long sub_402560(unsigned long long a0)
{
 _Unwind_Resume((void*)a0); /* do not return */
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
 ptr = (void**)operatornew(8);
 *(ptr) = NULL;
 RTTIDerivedA_RTTIDerivedA(ptr);
 result = ptr;
 p = (void**)operatornew(8);
 *(p) = NULL;
 RTTIDerivedB_RTTIDerivedB(p);
 flag1 = p;
 cur = 0;
 if (!result)
 {
 __cxa_bad_typeid(result);
 }
 else if (!(std_type_info_operator_equals((type_info*)((long long)result + 8), (type_info*)&_ZTI12RTTIDerivedA) & 255))
 {
 goto LABEL_40262c;
 }
 cur = (unsigned int)(cur + 10);
LABEL_40262c:
 if (!flag1)
 {
 __cxa_bad_typeid(flag1);
 }
 else if (!(std_type_info_operator_equals((type_info*)((long long)flag1 + 8), (type_info*)&_ZTI12RTTIDerivedB) & 255))
 {
 goto LABEL_402670;
 }
 cur = (unsigned int)(cur + 20);
LABEL_402670:
 if (result)
 v10 = (unsigned long long)__dynamic_cast(result, (void*)&_ZTI8RTTIBase, (void*)&_ZTI12RTTIDerivedA, 0);
 else
 v10 = 0;
 v5 = v10;
 if (v5)
 cur += RTTIDerivedA_derivedA_data(v5);
 if (flag1)
 v11 = (unsigned long long)__dynamic_cast(flag1, (void*)&_ZTI8RTTIBase, (void*)&_ZTI12RTTIDerivedB, 0);
  else
 v11 = 0;
 v6 = v11;
 if (v6)
 cur = (unsigned int)(cur + RTTIDerivedB_derivedB_data(v6));
 return;
LABEL_402768:
 if (flag1)
 ((void (*)(void*, long long))(*((long long *)flag1 + 1)))(flag1, (long long)*((long long *)flag1 + 1));
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
 test_cpp_member_func();
 printf(&g_404610, 0ULL);
 test_cpp_constructor();
 printf(&g_404630, 0ULL);
 test_cpp_virtual_func();
 printf(&g_404650, 0ULL);
 test_cpp_multiple_inheritance();
 printf(&g_404670, 0ULL);
 test_cpp_diamond_inheritance();
 printf(&g_404690, 0ULL);
 test_cpp_operator_overload();
 printf(&g_4046b0, 0ULL);
 test_cpp_template_func();
 printf(&g_4046d0, 0ULL);
 test_cpp_template_class();
 printf(&g_4046f0, 0ULL);
 test_cpp_lambda();
 printf(&g_404710, 0ULL);
 test_cpp_exception();
 printf(&g_404730, 0ULL);
 test_cpp_smart_ptr();
 printf(&g_404750, 0ULL);
 test_cpp_rtti();
 printf(&g_404770, 0ULL);
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
long long std___uniq_ptr_data_int_lambda_true_false___uniq_ptr_data(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___uniq_ptr_impl_int_lambda____uniq_ptr_impl(a0, a1, a2);
 return v2;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ at 0x4028ec
long long std_unique_ptr_int_lambda___unique_ptr(char *a0, unsigned int *a1, char *a2)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___uniq_ptr_data_int_lambda_true_false___uniq_ptr_data(a0, a1, a2);
 return v2;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev at 0x40291c
unsigned long long * std_unique_ptr_int_lambda_destructor(unsigned long long a0)
{
 unsigned long long v3; // x19
 unsigned int **v4; // x0
 char *v0; // [bp-0x40]
 unsigned long long *ptr; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 /* ptr = std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::'lambda'(int*)>::_M_ptr()(a0); */
 ptr = (unsigned long long *)a0;
 if (*(ptr))
 {
 /* v3 = std::unique_ptr<int, test_cpp_smart_ptr()::'lambda'(int*)>::get_deleter()(a0); */
 /* v4 = std::move<int*&>(ptr); */
 /* test_cpp_smart_ptr()::'lambda'(int*)::operator()(int*) const(v3, *(v4)); */
 test_cpp_smart_ptr_deleter(0, (unsigned int *)*(ptr));
 }
 *(ptr) = 0;
 return ptr;
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv at 0x402984
long long std_unique_ptr_int_lambda___operator_deref_const()
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v3 = std_unique_ptr_int_lambda___get_const(v2);
 return v3;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ at 0x4029a8
 long long std___uniq_ptr_impl_int_lambda____uniq_ptr_impl(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
 unsigned long long v3; // x0

 v3 = std_forward_lambda_ref(a2);
 std_tuple_int_ptr_lambda___tuple(a0, a1, v3);
 return (long long)a0;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x4029f4
long long std___uniq_ptr_impl_int_lambda___M_ptr(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std_get_0ul_int_ptr_lambda(a0);
 return v2;
}


// Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv at 0x402a10
long long std_unique_ptr_int_lambda___get_deleter(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___uniq_ptr_impl_int_lambda___M_deleter(a0);
}


// Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv at 0x402a2c
long long std_unique_ptr_int_lambda___get_const(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___uniq_ptr_impl_int_lambda___M_ptr_const(a0);
}


// Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE at 0x402a48
long long std_forward_lambda_ref(unsigned long a0)
{
 return a0;
}


// Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ at 0x402a5c
long long std_tuple_int_ptr_lambda___tuple(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 unsigned long long v4; // x0
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std_forward_int_ptr_ref(a1);
 v3 = std_forward_lambda_ref(a2);
 v4 = std___Tuple_impl_0ul_int_ptr_lambda____Tuple_impl(a0, v2, v3);
 return v4;
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402aac
long long std_get_0ul_int_ptr_lambda(unsigned long long a0)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = std___get_helper_0ul_int_ptr_lambda(a0);
 return v2;
}


// Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv at 0x402ac8
long long std___uniq_ptr_impl_int_lambda___M_deleter(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std_get_1ul_int_ptr_lambda(a0);
}


// Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv at 0x402ae4
long long std___uniq_ptr_impl_int_lambda___M_ptr_const(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std_get_0ul_int_ptr_lambda_const(a0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ at 0x402b04
long long std___Tuple_impl_0ul_int_ptr_lambda____Tuple_impl(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
 char *v0; // [bp-0x40]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (long long)a0;
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402b58
long long std___get_helper_0ul_int_ptr_lambda(unsigned long long a0)
{
 return std___Tuple_impl_0ul_int_ptr_lambda___M_head(a0);
}


// Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ at 0x402b74
long long std_get_1ul_int_ptr_lambda(unsigned long long a0)
{
 return a0 + 8;
}


// Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ at 0x402b90
long long std_get_0ul_int_ptr_lambda_const(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___get_helper_0ul_int_ptr_lambda_const(a0);
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ at 0x402bac
long long std___Tuple_impl_1ul_lambda____Tuple_impl(unsigned long long a0, unsigned long long a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std___Head_base_1ul_lambda_true___Head_base(a0, a1);
 return (long long)a0;
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ at 0x402bd4
long long std___Tuple_impl_0ul_int_ptr_lambda___M_head(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___Head_base_0ul_int_ptr_false___M_head(a0);
}


// Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402bf0
long long std___get_helper_1ul_lambda(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___Tuple_impl_1ul_lambda___M_head(a0);
}


// Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x402c0c
long long std___get_helper_0ul_int_ptr_lambda_const(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___Tuple_impl_0ul_int_ptr_lambda___M_head_const(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ at 0x402c28
long long std___Head_base_1ul_lambda_true___Head_base(unsigned long a0, unsigned long a1)
{
 return a0;
}


// Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ at 0x402c40
long long std___Tuple_impl_1ul_lambda___M_head(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___Head_base_1ul_lambda_true___M_head(a0);
}


// Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ at 0x402c5c
long long std___Tuple_impl_0ul_int_ptr_lambda___M_head_const(unsigned long long a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___Head_base_0ul_int_ptr_false___M_head_const(a0);
}


// Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ at 0x402c78
long long std___Head_base_1ul_lambda_true___M_head(unsigned long a0)
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
 /* std::ios_base::Init::Init */(&_ZStL8__ioinit);
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
 return v2;
}


// Function: _ZNKSt9type_info4nameEv at 0x402d08
char* std_type_info_name(void* this)
{
 if (*((char *)(long long)this[8]) != 42)
 return 0;
 return 0;
}


// Function: _ZNKSt9type_infoeqERKS_ at 0x402d44
int std_type_info_operator_equals(void* this, type_info *arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (*((long long *)((char *)this + 8)) != *((long long *)((char *)arg_0 + 8)))
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
long long SimpleClass_getValue()
{
 unsigned int *v0; // x0

 return *(v0);
}


// Function: _ZN11SimpleClass8setValueEi at 0x402e18
long long SimpleClass_setValue()
{
 unsigned int *ptr; // x0
 unsigned int v1; // w1

 *(ptr) = v1;
 return ptr;
}


// Function: _ZNK11SimpleClass7computeEi at 0x402e3c
long long SimpleClass_compute()
{
 unsigned int *v2; // x0
 unsigned long long len; // x0
 unsigned int v4; // w1
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 len = strlen(v2 + 1);
 return (v4 * *(v2) & 4294967295) + len;
}


// Function: _ZN11SimpleClass10getClassIDEv at 0x402e80
void SimpleClass_getClassID(void* this)
{
 return;
}


// Function: _ZN14LifecycleClassC1Em at 0x402e88
extern unsigned int _ZN14LifecycleClass14instance_countE;

long long LifecycleClass_LifecycleClass()
{
 unsigned long long ptr[2]; // x0
 unsigned long long v4; // x1
 char *v0; // [bp-0x30]
 unsigned long long i; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 ptr[1] = v4;
 if (2305843009213693950 >= v4)
 {
 ptr[0] = operatornew[](__ROL__(v4, 2) & 18446744073709551612);
 i = 0;
 }
 else
 {
 __cxa_throw_bad_array_new_length(v4, 2305843009213693950);
 }
 for (; i < v4; i += 1)
 {
 *((unsigned int *)(ptr[0] + (__ROL__(i, 2) & 18446744073709551612))) = (((((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i) * 2 | (((unsigned int)i * 4 | (unsigned int)i >> 30) & 0xfffffffc) + (unsigned int)i >> 31) & 4294967294;
 }
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE + 1;
 return &_ZN14LifecycleClass14instance_countE;
}


// Function: _ZN14LifecycleClassD1Ev at 0x402f50
extern unsigned int _ZN14LifecycleClass14instance_countE;

int LifecycleClass_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 if (*((long long *)this))
 operatordelete[](*((long long *)this));
 _ZN14LifecycleClass14instance_countE = _ZN14LifecycleClass14instance_countE - 1;
 return;
}


// Function: _ZNK14LifecycleClass7getDataEm at 0x402fa0
long long LifecycleClass_getData()
{
 unsigned long long v0[2]; // x0
 unsigned long v1; // x1

 if (v0[1] <= v1)
 return 4294967295;
 return *((int *)(v0[0] + (__ROL__(v1, 2) & 18446744073709551612)));
}


// Function: _ZN14LifecycleClass16getInstanceCountEv at 0x402fe8
long long LifecycleClass_getInstanceCount(void* this)
{
    return 0;
}


// Function: _ZN4Base12virtual_funcEi at 0x402ff8
long long Base_virtual_func()
{
 unsigned int v0; // w1

 return v0 + 1;
}


// Function: _ZNK4Base7getNameEv at 0x403014
long long Base_getName(void* this)
{
    return 0;
}


// Function: _ZN4BaseD1Ev at 0x40302c
extern char g_416b10;

void Base_destructor(void* ptr)
{
 *((char **)ptr) = &g_416b10;
 return;
}


// Function: _ZN4BaseD0Ev at 0x403050
void Base_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return;
}


// Function: _ZN4BaseC2Ev at 0x403078
extern char g_416b10;

void Base_Base(void* ptr)
{
 *((char **)ptr) = &g_416b10;
 return;
}


// Function: _ZN7DerivedC1Ei at 0x40309c
typedef struct struct_Derived_0 {
 char padding_0[8];
 unsigned int field_8;
} struct_Derived_0;

extern char g_416ae0;

long long Derived_Derived()
{
 struct_Derived_0 *ptr; // x0
 unsigned int v3; // w1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 Base_Base(ptr);
 *((char **)&ptr->padding_0[0]) = &g_416ae0;
 ptr->field_8 = v3;
 return (long long)ptr;
}


// Function: _ZN7Derived12virtual_funcEi at 0x4030dc
typedef struct struct_Derived_vtable {
 char padding_0[8];
 unsigned int field_8;
} struct_Derived_vtable;

long long Derived_virtual_func()
{
 unsigned int v0; // w1
 struct_Derived_vtable *v1; // x0

 return v0 * v1->field_8;
}


// Function: _ZNK7Derived7getNameEv at 0x403100
long long Derived_getName(void* this)
{
    return 0;
}


// Function: _ZN5BaseA5funcAEv at 0x403118
long long BaseA_funcA(void* this)
{
    return 0;
}


// Function: _ZN5BaseAD2Ev at 0x40312c
extern char g_416ab8;

void BaseA_destructor(void* ptr)
{
 *((char **)ptr) = &g_416ab8;
 return;
}


// Function: _ZN5BaseAD0Ev at 0x403150
void BaseA_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
 return;
}


// Function: _ZN5BaseB5funcBEv at 0x403178
long long BaseB_funcB(void* this)
{
    return 0;
}


// Function: _ZN5BaseBD1Ev at 0x40318c
extern char g_416a90;

void BaseB_destructor(void* ptr)
{
 *((char **)ptr) = &g_416a90;
 return;
}


// Function: _ZN5BaseBD0Ev at 0x4031b0
void BaseB_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x4031d8
long long MultiDerived_funcA(void* this)
{
    return 0;
}


// Function: _ZN12MultiDerived5funcBEv at 0x4031ec
long long MultiDerived_funcB(void* this)
{
    return 0;
}


// Function: _ZThn16_N12MultiDerived5funcBEv at 0x403200
/* non-virtual thunk to MultiDerived::funcB() */
long long MultiDerived_funcB_thunk(void* a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)MultiDerived_funcB((char *)a0 - 16);
 return (unsigned long long)MultiDerived_funcB((char *)a0 - 16);
}


// Function: _ZN5BaseAC1Ev at 0x403208
extern char g_416ab8;

void BaseA_BaseA(void* ptr)
{
 *((char **)ptr) = &g_416ab8;
 return;
}


// Function: _ZN5BaseBC2Ev at 0x40322c
extern char g_416a90;

void BaseB_BaseB(void* ptr)
{
 *((char **)ptr) = &g_416a90;
 return;
}


// Function: _ZN12MultiDerivedC2Ev at 0x403250
extern char g_416a38;
extern char g_416a68;

long long MultiDerived_MultiDerived()
{
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 BaseA_BaseA(ptr);
 BaseB_BaseB(ptr + 16);
 *((char **)ptr) = &g_416a38;
 *((char **)&ptr[16]) = &g_416a68;
 return (long long)ptr;
}


// Function: _ZN11VirtualBase4funcEv at 0x40329c
long long VirtualBase_func(void* this)
{
    return 0;
}


// Function: _ZN11VirtualBaseD2Ev at 0x4032b0
extern char g_416a10;

void VirtualBase_destructor(void* ptr)
{
 *((char **)ptr) = &g_416a10;
 return;
}


// Function: _ZN11VirtualBaseD0Ev at 0x4032d4
void VirtualBase_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x4032fc
long long MiddleA_func(void* this)
{
    return 0;
}


// Function: _ZTv0_n24_N7MiddleA4funcEv at 0x403330
/* thunk to MiddleA::func() */
long long MiddleA_func_thunk(void* *a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)MiddleA_func((char *)a0 + (*(a0))[24]);
 return (unsigned long long)MiddleA_func((char *)a0 + (*(a0))[24]);
}


// Function: _ZN7MiddleB4funcEv at 0x403340
long long MiddleB_func(void* this)
{
    return 0;
}


// Function: _ZTv0_n24_N7MiddleB4funcEv at 0x403374
/* thunk to MiddleB::func() */
long long MiddleB_func_thunk(void* *a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)MiddleB_func((char *)a0 + (*(a0))[24]);
 return (unsigned long long)MiddleB_func((char *)a0 + (*(a0))[24]);
}


// Function: _ZN14DiamondDerived4funcEv at 0x403384
long long DiamondDerived_func(void* this)
{
    return 0;
}


// Function: _ZTv0_n24_N14DiamondDerived4funcEv at 0x4033b8
/* thunk to DiamondDerived::func() */
long long DiamondDerived_func_thunk(void* *a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)DiamondDerived_func((char *)a0 + (*(a0))[24]);
 return (unsigned long long)DiamondDerived_func((char *)a0 + (*(a0))[24]);
}


// Function: _ZThn16_N14DiamondDerived4funcEv at 0x4033c8
/* non-virtual thunk to DiamondDerived::func() */
long long DiamondDerived_func_thunk_nonvirtual(void* a0)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)DiamondDerived_func((char *)a0 - 16);
 return (unsigned long long)DiamondDerived_func((char *)a0 - 16);
}


// Function: _ZN11VirtualBaseC1Ev at 0x4033d0
extern char g_416a10;

void VirtualBase_VirtualBase(void* ptr)
{
 *((char **)ptr) = &g_416a10;
 return;
}


// Function: _ZN7MiddleAC2Ev at 0x4033f4
typedef struct struct_MiddleA_0 {
 char padding_0[8];
 unsigned long long field_8;
} struct_MiddleA_0;

void MiddleA_MiddleA(void* ptr)
{
 struct_MiddleA_0 *idx; // x1
 unsigned long long *v0; // [bp-0x10]

 *((unsigned long long *)ptr) = *(v0);
 *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx->field_8;
 return;
}


// Function: _ZN7MiddleAD2Ev at 0x403444
typedef struct struct_MiddleA_dtor {
 char padding_0[8];
 unsigned long long field_8;
} struct_MiddleA_dtor;

void MiddleA_destructor(void* ptr)
{
 struct_MiddleA_dtor *idx; // x1
 unsigned long long *v0; // [bp-0x10]

 *((unsigned long long *)ptr) = *(v0);
 *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx->field_8;
 return;
}


// Function: _ZN7MiddleBC2Ev at 0x403494
typedef struct struct_MiddleB_ctor {
 char padding_0[8];
 unsigned long long field_8;
} struct_MiddleB_ctor;

void MiddleB_MiddleB(void* ptr)
{
 struct_MiddleB_ctor *idx; // x1
 unsigned long long *v0; // [bp-0x10]

 *((unsigned long long *)ptr) = *(v0);
 *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx->field_8;
 return;
}


// Function: _ZN7MiddleBD2Ev at 0x4034e4
typedef struct struct_MiddleB_dtor {
 char padding_0[8];
 unsigned long long field_8;
} struct_MiddleB_dtor;

void MiddleB_destructor(void* ptr)
{
 struct_MiddleB_dtor *idx; // x1
 unsigned long long *v0; // [bp-0x10]

 *((unsigned long long *)ptr) = *(v0);
 *((unsigned long long *)((char *)ptr + *((long long *)(*((long long *)ptr) - 24)))) = idx->field_8;
 return;
}


// Function: _ZN14DiamondDerivedC1Ev at 0x403534
extern char g_416878;
extern char g_4168a8;
extern char g_4168e0;

long long DiamondDerived_DiamondDerived()
{
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 VirtualBase_VirtualBase(ptr + 32);
 MiddleA_MiddleA(ptr);
 MiddleB_MiddleB(ptr + 16);
 *((char **)ptr) = &g_416878;
 *((char **)&ptr[32]) = &g_4168e0;
 *((char **)&ptr[16]) = &g_4168a8;
 return (long long)ptr;
}


// Function: _ZN5PointC1Eii at 0x4035c0
void Point_Point(void* ptr, int arg_0, int arg_1)
{
 *((int *)ptr) = arg_0;
 *((int *)&ptr[4]) = arg_1;
 return;
}


// Function: _ZNK5PointplERKS_ at 0x4035f4
extern char __stack_chk_guard;

long long Point_operator_plus(char *a0)
{
 unsigned int v4[2]; // x1
 char *v0; // [bp-0x30]
 char v1; // [bp-0x10], Other Possible Types: unsigned long
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 Point::Point(&v1, *((int *)&a0) + v4[0], *((int *)&a0[4]) + v4[1]);
 if (v2 == *((long long *)&__stack_chk_guard))
 return v1;
 __stack_chk_fail(); /* do not return */
}


// Function: _ZNK5PointeqERKS_ at 0x403684
long long Point_operator_eq(char *a0)
{
 unsigned long v0; // x1

 if (*((int *)&a0) == *((int *)v0) && *((int *)&a0[4]) == *((int *)(v0 + 4)))
 return 1;
 return 0;
}


// Function: _ZN5PointppEv at 0x4036d4
long long Point_operator_inc()
{
 unsigned int ptr[2]; // x0

 ptr[0] = ptr[0] + 1;
 ptr[1] = ptr[1] + 1;
 return ptr;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x403710
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 <= arg_1)
 return arg_1;
 return arg_0;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x403740
double template_max_double(double arg_0, double arg_1)
{
 unsigned long v0; // d0
 unsigned long v1; // d1
 unsigned long v3; // x0

 if (!((char)arm64g_calculate_condition(192, (((((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) ^ 1) * 0x4000000000000000 - 1 >> 61) + 1 - (((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) & ((unsigned long long)(char)(CmpF(v0, v1)) >> 5 & 3 | (unsigned long long)(CmpF(v0, v1) & 1)) >> 1 & 1)) * 0x10000000, 0, 0)))
 return v3;
 return v3;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x403774
long long template_swap_int(unsigned int *ptr)
{
 unsigned int *p; // x1
 unsigned int v0; // [bp-0x4]

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
 return p;
}


// Function: _ZN9ContainerIiEC2Ev at 0x4037b4
typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0;

void Container_int_Container(void* this)
{
 Container_int *ptr = (Container_int *)this;

 ptr->field_28 = 0;
}


// Function: _ZN9ContainerIiE4pushEi at 0x4037d0
void Container_int_push(void* ptr, int arg_0)
{
 unsigned long v0; // x0
 int* data_ptr;

 if (*((int *)((char *)ptr + 40)) <= 9)
 {
 v0 = *((unsigned int *)((char *)ptr + 40));
 *((unsigned int *)((char *)ptr + 40)) = (unsigned int)v0 + 1;
 data_ptr = (int*)((char *)ptr + 4 * v0);
 *(data_ptr) = arg_0;
 }
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x40381c
int Container_int_get(void* this, int index)
{
 unsigned int *v1 = (unsigned int *)this;

 if (index >= 0 && v1[10] > (unsigned int)index)
 return v1[index];
 return 0;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x403864
typedef struct struct_0 {
 char padding_0[40];
 unsigned int field_28;
} struct_0;

int Container_int_getSize(void* this)
{
 Container_int *v0 = (Container_int *)this;

 return v0->field_28;
}


// Function: _ZN9ContainerIdEC1Ev at 0x40387c
typedef struct struct_0 {
 char padding_0[80];
 unsigned int field_50;
} struct_0;

void Container_double_Container(void* this)
{
 Container_double *ptr = (Container_double *)this;

 ptr->field_50 = 0;
}


// Function: _ZN9ContainerIdE4pushEd at 0x403898
typedef struct struct_0 {
 unsigned long long field_0;
 char padding_8[72];
 unsigned int field_50;
} struct_0;

void Container_double_push(void* ptr, unsigned long long v3)
{
 struct_0 *p;
 unsigned long index; // x0
 unsigned long v2; // x0

 p = (struct_0*)ptr;
 index = p->field_50;
 if (p->field_50 <= 9)
 {
 v2 = p->field_50;
 p->field_50 = (unsigned int)v2 + 1;
 (&p->field_0)[v2] = v3;
 }
}


// Function: _ZNK9ContainerIdE3getEi at 0x4038e4
typedef struct struct_0 {
 char padding_0[80];
 unsigned int field_50;
} struct_0;

double Container_double_get(void* this, int index)
{
 unsigned int v0;
 Container_double *ptr;
 double* field_ptr;

 v0 = index;
 ptr = (Container_double *)this;
 if (v0 >= 0 && ptr->field_50 > (unsigned int)v0)
 {
 field_ptr = (double*)ptr;
 return field_ptr[v0];
 }
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x40392c
int Container_double_getSize(void* this)
{
 Container_double *ptr = (Container_double *)this;
 return ptr->field_50;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ at 0x403944
void std___uniq_ptr_data_int_std_default_delete_int_____uniq_ptr_data(void* this, void *arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__Tuple_impl_1ul_std_default_delete_int____Tuple_impl(this, arg_0);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC1EOS2_ at 0x40396c
void std_unique_ptr_int_std_default_delete_int___unique_ptr(void* this, void* arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std_move_std__tuple_int_std_default_delete_int___(this, arg_0);
 return;
}


// Function: _ZNK8RTTIBase7getTypeEv at 0x403994
long long RTTIBase_getType(void* this)
{
    return 0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x4039a8
long long RTTIDerivedA_getType(void* this)
{
    return 0;
}


// Function: _ZNK12RTTIDerivedA13derivedA_dataEv at 0x4039bc
long long RTTIDerivedA_derivedA_data(void* this)
{
    return 0;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x4039d0
long long RTTIDerivedB_getType(void* this)
{
    return 0;
}


// Function: _ZNK12RTTIDerivedB13derivedB_dataEv at 0x4039e4
long long RTTIDerivedB_derivedB_data(void* this)
{
    return 0;
}


// Function: _ZN8RTTIBaseC1Ev at 0x4039f8
extern char g_416848;

void RTTIBase_RTITBase(void* ptr)
{
 *((char **)ptr) = &g_416848;
 return;
}


// Function: _ZN8RTTIBaseD2Ev at 0x403a1c
extern char g_416848;

void RTTIBase_destructor(void* ptr)
{
 *((char **)ptr) = &g_416848;
 return;
}


// Function: _ZN8RTTIBaseD0Ev at 0x403a40
void RTTIBase_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return;
}


// Function: _ZN12RTTIDerivedAC1Ev at 0x403a68
extern char g_416820;

long long RTTIDerivedA_RTTIDerivedA()
{
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 RTTIBase_RTITBase(ptr);
 *((char **)ptr) = &g_416820;
 return ptr;
}


// Function: _ZN12RTTIDerivedBC2Ev at 0x403a98
extern char g_4167f8;

long long RTTIDerivedB_RTTIDerivedB()
{
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 RTTIBase_RTITBase(ptr);
 *((char **)ptr) = &g_4167f8;
 return ptr;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi at 0x403ac8
void std___uniq_ptr_data_int_std_default_delete_int_____uniq_ptr_data_int_ptr(void* this, int *arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl_int_ptr(this, arg_0);
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi at 0x403af0
void std_unique_ptr_int_std_default_delete_int___unique_ptr_std_default_delete_int__void(char *a0, unsigned int *a1)
{
 unsigned long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std___uniq_ptr_data_int_std_default_delete_int_____uniq_ptr_data_int_ptr(a0, a1);
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x403b18
void std_unique_ptr_int_std_default_delete_int___destructor(void* this)
{
 unsigned long long v3; // x19
 unsigned long long *v4; // x0
 char *v0; // [bp-0x40]
 unsigned long long *ptr; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 ptr = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int____M_ptr(this);
 if (*(ptr))
 {
 v3 = std_unique_ptr_int_std_default_delete_int___get_deleter(this);
 v4 = (unsigned long long *)std_move_int_ptr_ref(ptr);
 std_default_delete_int___operator_call(v3, *(v4));
 }
 *(ptr) = 0;
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv at 0x403b80
long long std_unique_ptr_int_std_default_delete_int___operator_deref(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std_unique_ptr_int_std_default_delete_int___get(this);
}


// Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ at 0x403ba4
void* std_move_std__unique_ptr_int_std_default_delete_int_____(char *a0)
{
 return (void *)a0;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1EOS3_ at 0x403bb8
void std__Tuple_impl_0ul_int_std_default_delete_int___Tuple_impl_move(void* ptr, void *arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__Tuple_impl_1ul_std_default_delete_int____Tuple_impl(ptr, arg_0);
 *((long long *)ptr) = *((long long *)arg_0);
 return;
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1EOS3_ at 0x403bf0
void std__tuple_int_std_default_delete_int___tuple_move(void* this, void *arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__Tuple_impl_0ul_int_std_default_delete_int___Tuple_impl_move(this, arg_0);
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC1EOS2_ at 0x403c18
void std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl_move(void* this, void* arg_0)
{
 unsigned long long *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__tuple_int_std_default_delete_int___tuple_move(this, arg_0);
 ptr = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int____M_ptr(arg_0);
 *(ptr) = 0;
 return;
}


// Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI1St15__uniq_ptr_implIiS2_EEPi at 0x403c60
void std___uniq_ptr_data_int_std_default_delete_int_array_____uniq_ptr_data_int_ptr(void* this, int *arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std___uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl_int_ptr(this, arg_0);
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ at 0x403c88
void std_unique_ptr_int_array_std_default_delete_int_array___unique_ptr_int_ptr_std_default_delete_int_array__void_bool(char *a0, unsigned int a1[5])
{
 unsigned long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std___uniq_ptr_data_int_std_default_delete_int_array_____uniq_ptr_data_int_ptr(a0, a1);
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x403cb0
void std_unique_ptr_int_array_std_default_delete_int_array___destructor(void* this)
{
 unsigned long long v3; // x0
 char *v0; // [bp-0x30]
 unsigned long long *v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int_array____M_ptr(this);
 if (*(v1))
 {
 v3 = std_unique_ptr_int_array_std_default_delete_int_array___get_deleter(this);
 _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_((unsigned long long)v3, *(v1), v3);
 }
 *(v1) = 0;
 return;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm at 0x403d0c
long long std_unique_ptr_int_array_std_default_delete_int_array___operator_index(void* this, unsigned long index)
{
 unsigned long long v2; // x0
 unsigned long v3; // x1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v3 = index;
 return std_unique_ptr_int_array_std_default_delete_int_array___get(v2) + (__ROL__(v3, 2) & 18446744073709551612);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi at 0x403d44
void std___uniq_ptr_impl_int_std_default_delete_int____uniq_ptr_impl_int_ptr(void* a0, int* ptr_arg)
{
 unsigned long long *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__tuple_int_std_default_delete_int___tuple_true_true(a0);
 ptr = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int____M_ptr(a0);
 *(ptr) = (unsigned long long)ptr_arg;
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403d80
long long std___uniq_ptr_impl_int_std_default_delete_int____M_ptr(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std_get_0ul_int_std_default_delete_int_(this);
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv at 0x403d9c
long long std_unique_ptr_int_std_default_delete_int___get_deleter(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___get_helper_1ul_std_default_delete_int_(this);
}


// Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ at 0x403db8
long long std_move_int_ptr_ref(void* ptr)
{
 return (unsigned long long)ptr;
}


// Function: _ZNKSt14default_deleteIiEclEPi at 0x403dcc
void std_default_delete_int___operator_call(void* this, int *arg_0)
{
 char *v0; // [bp-0x20]
 void* v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = this;
 if (arg_0)
 operatordelete(arg_0, 4);
 return;
}


// Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv at 0x403dfc
long long std_unique_ptr_int_std_default_delete_int___get(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___uniq_ptr_impl_int_std_default_delete_int____M_ptr(this);
}


// Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ at 0x403e18
void* std_move_std__tuple_int_std_default_delete_int___(void* this, void *arg_0)
{
 return this;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ at 0x403e2c
void std__Tuple_impl_1ul_std_default_delete_int____Tuple_impl_move(void* this, void* arg_0)
{
 (void)this;
 (void)arg_0;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi at 0x403e44
void std___uniq_ptr_impl_int_std_default_delete_int_array____uniq_ptr_impl_int_ptr(void* a0, int* ptr_arg)
{
 unsigned long long *ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__tuple_int_std_default_delete_int_array___tuple_true_true(a0);
 ptr = (unsigned long long *)std___uniq_ptr_impl_int_std_default_delete_int_array____M_ptr(a0);
 *(ptr) = (unsigned long long)ptr_arg;
 return;
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x403e80
long long std___uniq_ptr_impl_int_std_default_delete_int_array____M_ptr(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std_get_0ul_int_std_default_delete_int_array_(this);
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv at 0x403e9c
long long std_unique_ptr_int_array_std_default_delete_int_array___get_deleter(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___get_helper_1ul_std_default_delete_int_array_(this);
}


// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ at 0x403eb8
void* _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_(unsigned long long a0, void* a1)
{
 void* v3; // x0
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = a0;
 v3 = a1;
 if (v3)
 v3 = operatordelete[](a1);
 return v3;
}


// Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv at 0x403ee8
long long std_unique_ptr_int_array_std_default_delete_int_array___get(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___uniq_ptr_impl_int_std_default_delete_int_array____M_ptr(this);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC1ILb1ELb1EEEv at 0x403f04
long long std__tuple_int_std_default_delete_int___tuple_true_true(void* this)
{
 std__Tuple_impl_0ul_int_std_default_delete_int____Tuple_impl(this);
 return (long long)this;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x403f24
long long std_get_0ul_int_std_default_delete_int_(void* this, void *arg_0)
{
 return std___get_helper_0ul_int_std_default_delete_int_(this);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv at 0x403f40
long long std___uniq_ptr_impl_int_std_default_delete_int____M_deleter(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (long long)std_get_1ul_int_std_default_delete_int_(this);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv at 0x403f5c
long long std___uniq_ptr_impl_int_std_default_delete_int____M_ptr_const(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (long long)std_get_0ul_int_std_default_delete_int___const(this);
}


// Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv at 0x403f7c
long long std__tuple_int_std_default_delete_int_array___tuple_true_true(void* this)
{
 std__Tuple_impl_0ul_int_std_default_delete_int_array____Tuple_impl(this);
 return (long long)this;
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x403f9c
long long std_get_0ul_int_std_default_delete_int_array_(void* this, void *arg_0)
{
 return std___get_helper_0ul_int_std_default_delete_int_array_(this);
}


// Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv at 0x403fb8
long long std___uniq_ptr_impl_int_std_default_delete_int_array____M_deleter(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (long long)std_get_1ul_int_std_default_delete_int_array_(this);
}


// Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv at 0x403fd4
long long std___uniq_ptr_impl_int_std_default_delete_int_array____M_ptr_const(void* this)
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (long long)std_get_0ul_int_std_default_delete_int_array___const(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC1Ev at 0x403ff4
 void std__Tuple_impl_0ul_int_std_default_delete_int____Tuple_impl(void* this)
{
 std__Tuple_impl_1ul_std_default_delete_int____Tuple_impl(this);
 std__Head_base_0ul_int_ptr_false___Head_base(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x40401c
long long std___get_helper_0ul_int_std_default_delete_int_(void* this, void *arg_0)
{
 return std__Tuple_impl_0ul_int_std_default_delete_int____M_head(this);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ at 0x404038
long long std_get_1ul_int_std_default_delete_int_(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___get_helper_1ul_std_default_delete_int_(this);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ at 0x404054
long long std_get_0ul_int_std_default_delete_int___const(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___get_helper_0ul_int_std_default_delete_int___const(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev at 0x404070
 void std__Tuple_impl_0ul_int_std_default_delete_int_array____Tuple_impl(void* this)
{
 std__Tuple_impl_1ul_std_default_delete_int_array____Tuple_impl(this);
 std__Head_base_0ul_int_ptr_false___Head_base(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x404098
long long std___get_helper_0ul_int_std_default_delete_int_array_(void* this, void *arg_0)
{
 return std__Tuple_impl_0ul_int_std_default_delete_int_array____M_head(this);
}


// Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ at 0x4040b4
long long std_get_1ul_int_std_default_delete_int_array_(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___get_helper_1ul_std_default_delete_int_array_(this);
}


// Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ at 0x4040d0
long long std_get_0ul_int_std_default_delete_int_array___const(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std___get_helper_0ul_int_std_default_delete_int_array___const(this);
}


// Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE at 0x4040ec
long long std_forward_int_ptr_ref(void* ptr)
{
 return (unsigned long long)ptr;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev at 0x404100
long long std__Tuple_impl_1ul_std_default_delete_int____Tuple_impl(void* this)
{
 unsigned long long v2; // x0
 unsigned long long v3; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 std__Head_base_1ul_std_default_delete_int_true___Head_base(this);
 return (long long)this;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC1Ev at 0x404120
long long std__Head_base_0ul_int_ptr_false___Head_base(void* this)
{
 unsigned long long *ptr; // x0

 ptr = (unsigned long long *)this;
 *(ptr) = 0;
 return (long long)ptr;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ at 0x40413c
long long std__Tuple_impl_0ul_int_std_default_delete_int____M_head(void* this, void* arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std__Head_base_0ul_int_ptr_false___M_head(this);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE at 0x404158
long long std___get_helper_1ul_std_default_delete_int_(void* this, void *arg_0)
{
 return std__Tuple_impl_1ul_std_default_delete_int____M_head(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x404174
long long std___get_helper_0ul_int_std_default_delete_int___const(void* this, void *arg_0)
{
 return std__Tuple_impl_0ul_int_std_default_delete_int____M_head_const(this);
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev at 0x404190
 long long std__Tuple_impl_1ul_std_default_delete_int_array____Tuple_impl(void* this)
{
 std__Head_base_1ul_std_default_delete_int_array_true___Head_base(this);
 return (unsigned long long)this;
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ at 0x4041b0
long long std__Tuple_impl_0ul_int_std_default_delete_int_array____M_head(void* this, void* arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std__Head_base_0ul_int_ptr_false___M_head(this);
}


// Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE at 0x4041cc
long long std___get_helper_1ul_std_default_delete_int_array_(void* this, void *arg_0)
{
 return std__Tuple_impl_1ul_std_default_delete_int_array____M_head(this);
}


// Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE at 0x4041e8
long long std___get_helper_0ul_int_std_default_delete_int_array___const(void* this, void *arg_0)
{
 return std__Tuple_impl_0ul_int_std_default_delete_int_array____M_head_const(this);
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ at 0x404204
long long std__Head_base_0ul_int_ptr_false___Head_base_int_ptr_ref(void* ptr, int* arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((long long *)ptr) = (unsigned long long)arg_0;
 return (unsigned long long)ptr;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev at 0x404234
long long std__Head_base_1ul_std_default_delete_int_true___Head_base(void* this)
{
    return (long long)this;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ at 0x404248
long long std__Head_base_0ul_int_ptr_false___M_head(void* this)
{
 return (long long)*(unsigned long long *)this;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ at 0x40425c
long long std__Tuple_impl_1ul_std_default_delete_int____M_head(void* this, void* arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std__Head_base_1ul_std_default_delete_int_true___M_head(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ at 0x404278
long long std__Tuple_impl_0ul_int_std_default_delete_int____M_head_const(void* this, void* arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std__Head_base_0ul_int_ptr_false___M_head_const(this);
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC1Ev at 0x404294
long long std__Head_base_1ul_std_default_delete_int_array_true___Head_base(void* this)
{
    return (long long)this;
}


// Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ at 0x4042a8
long long std__Tuple_impl_1ul_std_default_delete_int_array____M_head(void* this, void* arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std__Head_base_1ul_std_default_delete_int_array_true___M_head(this);
}


// Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ at 0x4042c4
long long std__Tuple_impl_0ul_int_std_default_delete_int_array____M_head_const(void* this, void* arg_0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return std__Head_base_0ul_int_ptr_false___M_head_const(this);
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ at 0x4042e0
long long std__Head_base_1ul_std_default_delete_int_true___M_head(void* this)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)this;
 return (unsigned long long)v0;
}


// Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ at 0x4042f4
long long std__Head_base_0ul_int_ptr_false___M_head_const(void* this)
{
 unsigned long v0; // x0

 v0 = (unsigned long long)this;
 return (unsigned long long)v0;
}


// Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ at 0x404308
long long std__Head_base_1ul_std_default_delete_int_array_true___M_head(void* this)
{
    return (long long)this;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x40431c
extern char g_4167f8;

void RTTIDerivedB_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_4167f8;
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x40434c
void RTTIDerivedB_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x404374
extern char g_416820;

void RTTIDerivedA_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_416820;
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x4043a4
void RTTIDerivedA_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 8);
 return;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x4043cc
extern char g_416878;
extern char g_4168a8;
extern char g_4168e0;

void DiamondDerived_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_416878;
 *((char **)&ptr[32]) = &g_4168e0;
 *((char **)&ptr[16]) = &g_4168a8;
 return;
}


// Function: _ZThn16_N14DiamondDerivedD1Ev at 0x404458
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */
long long DiamondDerived_destructor_thunk(unsigned long a0)
{
    return (long long)a0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD1Ev at 0x404460
/* thunk to DiamondDerived::~DiamondDerived() */
long long DiamondDerived_destructor_thunk2(unsigned long a0)
{
    return (long long)a0;
}


// Function: _ZN14DiamondDerivedD0Ev at 0x404470
void DiamondDerived_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 48);
 return;
}


// Function: _ZThn16_N14DiamondDerivedD0Ev at 0x404498
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */
long long DiamondDerived_deleting_destructor_thunk(unsigned long a0)
{
    return (long long)a0;
}


// Function: _ZTv0_n32_N14DiamondDerivedD0Ev at 0x4044a0
/* thunk to DiamondDerived::~DiamondDerived() */
long long DiamondDerived_deleting_destructor_thunk2(unsigned long a0)
{
    return (long long)a0;
}


// Function: _ZN12MultiDerivedD1Ev at 0x4044b0
extern char g_416a38;
extern char g_416a68;

void MultiDerived_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_416a38;
 *((char **)&ptr[16]) = &g_416a68;
 return;
}


// Function: _ZThn16_N12MultiDerivedD1Ev at 0x4044fc
/* non-virtual thunk to MultiDerived::~MultiDerived() */
long long MultiDerived_destructor_thunk(unsigned long a0)
{
    return (long long)a0;
}


// Function: _ZN12MultiDerivedD0Ev at 0x404504
void MultiDerived_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 32);
 return;
}


// Function: _ZThn16_N12MultiDerivedD0Ev at 0x40452c
/* non-virtual thunk to MultiDerived::~MultiDerived() */
long long MultiDerived_deleting_destructor_thunk(unsigned long a0)
{
    return (long long)a0;
}


// Function: _ZN7DerivedD2Ev at 0x404534
extern char g_416ae0;

void Derived_destructor(void* ptr)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 *((char **)ptr) = &g_416ae0;
 return;
}


// Function: _ZN7DerivedD0Ev at 0x404564
void Derived_deleting_destructor(void* this)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 operatordelete(this, 16);
 return;
}



/* CRT stub function _fini removed by preprocessor */


