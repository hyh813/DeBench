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

/* Missing function declarations */
extern void *_gmon_start__;
unsigned long __readgsdword(unsigned long offset);
void *operator_new(unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete(void *ptr, unsigned long size);
void operator_delete_array(void *ptr);
int ** std_uniq_ptr_impl_int_default_delete_M_ptr(void *this_);
int ** std_uniq_ptr_impl_int_default_delete_array_M_ptr(void *this_);
void __cxa_bad_typeid();
bool std_type_info_operator_eq(const void *this_, const void *__arg);
size_t strlen(const char *s);
int ** std_move_int_ptr(int **__t);
void * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_deleter(void *this_);
int ** std_forward_int_ptr(void *__t);
int ** std__Head_base_0u_int_false__M_head(void *this_);
void std_uniq_ptr_impl_int_default_delete_constructor(void *this_, void *__p);
void std_Head_base_0u_int_false_Head_base(void *this_);
int ** std_Head_base_0u_int_false_M_head(void *this_);
int ** std_Head_base_0u_int_false_M_head_const(const void *this_);

/* External offset variables */
extern int off_8DA8;
extern int off_8D90;
extern int off_8D7C;
extern int off_8D68;
extern int off_8D3C;
extern int off_8D54;
extern int off_8D28;
extern int off_8CA0;
extern int off_8CA8;
extern int off_8C5C;
extern int off_8C90;
extern int off_8C74;
extern int off_8C44;
extern int off_8C30;
extern int off_8C1C;

/* External typeinfo variables */
extern void *typeinfo_for_int;

/* External typeinfo variables */
extern void *typeinfo_for_RTTIDerivedA;
extern void *typeinfo_for_RTTIDerivedB;
extern void *typeinfo_for_RTTIBase;

/* Macros for 64-bit value manipulation */
#define LODWORD(x) (*(unsigned int*)&(x))
#define HIDWORD(x) (*(((unsigned int*)&(x))+1))

/* C++ STL type stubs */
typedef struct std_type_info { void *_vptr; unsigned int _name; } std_type_info;
typedef struct std_uniq_ptr_impl { void *_M_ptr; void *_M_deleter; } std_uniq_ptr_impl;
typedef struct { std_uniq_ptr_impl _M_t; } std_unique_ptr_int_head;
typedef struct std_unique_ptr_int { std_unique_ptr_int_head _M_t; } std_unique_ptr_int;
typedef struct { std_uniq_ptr_impl _M_t; } std_unique_ptr_int_array_head;
typedef struct std_unique_ptr_int_array { std_unique_ptr_int_array_head _M_t; } std_unique_ptr_int_array;
typedef struct { std_uniq_ptr_impl _M_t; } unique_ptr_int_lambda_head;
typedef struct unique_ptr_int_lambda { unique_ptr_int_lambda_head _M_t; } unique_ptr_int_lambda;
typedef struct Container_int { int size; int data[10]; } Container_int;
typedef struct Container_double { int size; double data[10]; } Container_double;
typedef struct Point { int x; int y; } Point;
typedef struct SimpleClass { int value; char name[32]; } SimpleClass;
typedef struct LifecycleClass { size_t size; int *data; } LifecycleClass;
typedef struct Base { int (**vptr_Base)(...); } Base;
typedef struct Derived { int (**_vptr_Base)(...); int multiplier; } Derived;
typedef struct BaseA { int (**_vptr_BaseA)(...); } BaseA;
typedef struct BaseB { int (**_vptr_BaseB)(...); } BaseB;
typedef struct MultiDerived { int (**_vptr_BaseA)(...); BaseA baseA_field; int (**_vptr_BaseB)(...); BaseB baseB_field; int dataA; int dataB; } MultiDerived;
typedef struct VirtualBase { int (**_vptr_VirtualBase)(...); } VirtualBase;
typedef struct MiddleA { int (**_vptr_MiddleA)(...); int dataA; } MiddleA;
typedef struct MiddleB { int (**_vptr_MiddleB)(...); int dataB; } MiddleB;
typedef struct DiamondDerived { MiddleA middleA_field; MiddleB middleB_field; int dataA; int dataB; int (**_vptr_MiddleA)(...); int (**_vptr_MiddleB)(...); } DiamondDerived;
typedef struct RTTIBase { int (**vptr_RTTIBase)(...); } RTTIBase;
typedef struct RTTIDerivedA { int (**_vptr_RTTIBase)(...); } RTTIDerivedA;
typedef struct RTTIDerivedB { int (**_vptr_RTTIBase)(...); } RTTIDerivedB;
typedef struct std___tuple_element_t { void *_M_head_impl; } std___tuple_element_t;
typedef struct std___tuple_element_t_0 { void *_M_head_impl; } std___tuple_element_t_0;
typedef struct std___tuple_element_t_1 { void *_M_head_impl; } std___tuple_element_t_1;
typedef struct lambda_capture { int __capture_by_value; int *__capture_by_ref; } lambda_capture;

/* Global variables */
int LifecycleClass_instance_count = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
 sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
 sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
 sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
 sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
 sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
 sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
 sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
 sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
 sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
 sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
void sub_1150()
{
 sub_1030();
}


/* Function: sub_1160 @ 0x1160 */
void sub_1160()
{
 sub_1030();
}


/* Function: sub_1170 @ 0x1170 */
void sub_1170()
{
 sub_1030();
}


/* Function: sub_1180 @ 0x1180 */
void sub_1180()
{
 sub_1030();
}


/* Function: sub_1190 @ 0x1190 */
void sub_1190()
{
 sub_1030();
}


/* Function: sub_11A0 @ 0x11A0 */
int sub_11A0(int a1)
{
 return (*(int (**)(void))(a1 + 104))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_133C @ 0x133C */
void sub_133C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1340 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1479 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x147D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1482 */
long long test_cpp_member_func()
{
 long long result; // rax
 int r1; // [esp+Ch] [ebp-3Ch]
 int r2; // [esp+10h] [ebp-38h]
 SimpleClass obj; // [esp+18h] [ebp-30h] BYREF
 unsigned int v4; // [esp+3Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 SimpleClass::SimpleClass(&obj, 5, "Test");
 SimpleClass::setValue(&obj, 10);
 r1 = SimpleClass::getValue(&obj);
 r2 = SimpleClass::compute(&obj, 3);
 LODWORD(result) = r2 + r1 + SimpleClass::getClassID();
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1519 */
long long test_cpp_constructor()
{
 long long v0; // rax
 int result; // [esp+0h] [ebp-18h]
 int resulta; // [esp+0h] [ebp-18h]
 LifecycleClass obj; // [esp+4h] [ebp-14h] BYREF
 unsigned int v4; // [esp+Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 LifecycleClass::LifecycleClass(&obj, 5u);
 result = LifecycleClass_getData(&obj, 2u);
 resulta = LifecycleClass_getInstanceCount() + result;
 LifecycleClass::~LifecycleClass(&obj);
 LODWORD(v0) = 1000 * LifecycleClass_getInstanceCount() + resulta;
 HIDWORD(v0) = v4 - __readgsdword(0x14u);
 return v0;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x159F */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x15CA */
long long test_cpp_virtual_func()
{
 int v0; // ebx
 long long result; // rax
 Base base; // [esp+8h] [ebp-30h] BYREF
 int r1; // [esp+Ch] [ebp-2Ch]
 int r2; // [esp+10h] [ebp-28h]
 Base *pb; // [esp+14h] [ebp-24h]
 Base *pd; // [esp+18h] [ebp-20h]
 int r3; // [esp+1Ch] [ebp-1Ch]
 int r4; // [esp+20h] [ebp-18h]
 Derived derived; // [esp+24h] [ebp-14h] BYREF
 unsigned int v10; // [esp+2Ch] [ebp-Ch]

 v10 = __readgsdword(0x14u);
 base.vptr_Base = (int (**)(...))&off_8DA8;
 Derived::Derived(&derived, 3);
 r1 = Base::virtual_func(&base, 5);
 r2 = Derived::virtual_func(&derived, 5);
 pb = &base;
 pd = &derived;
 r3 = call_virtual_func(&base, 5);
 r4 = call_virtual_func(pd, 5);
 v0 = r3 + r2 + r1 + r4;
 Derived::~Derived(&derived);
 Base::~Base(&base);
 LODWORD(result) = v0;
 HIDWORD(result) = v10 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x16DE */
long long test_cpp_multiple_inheritance()
{
 int v0; // ebx
 long long result; // rax
 int r1; // [esp+10h] [ebp-28h]
 MultiDerived obj; // [esp+1Ch] [ebp-1Ch] BYREF
 unsigned int v4; // [esp+2Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 MultiDerived::MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 r1 = (*obj._vptr_BaseA)(&obj);
 v0 = (*obj._vptr_BaseB)(&obj.baseB_field) + r1 + (&obj != (MultiDerived *)&obj.baseB_field);
 MultiDerived::~MultiDerived(&obj);
 LODWORD(result) = v0;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x17C0 */
long long test_cpp_diamond_inheritance()
{
 int v0; // ebx
 long long result; // rax
 int r1; // [esp+Ch] [ebp-2Ch]
 DiamondDerived obj; // [esp+14h] [ebp-24h] BYREF

 *(&obj.dataB + 1) = __readgsdword(0x14u);
 DiamondDerived::DiamondDerived(&obj);
 obj.dataB = 50;
 r1 = (*obj._vptr_MiddleB)(&obj.middleB_field);
 obj.dataB = 100;
 v0 = r1 + (*obj._vptr_MiddleB)(&obj.middleB_field);
 DiamondDerived::~DiamondDerived(&obj);
 LODWORD(result) = v0;
 HIDWORD(result) = *(&obj.dataB + 1) - __readgsdword(0x14u);
 return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1888 */
long long test_cpp_operator_overload()
{
 int v0; // edx
 long long result; // rax
 bool eq; // [esp+3h] [ebp-25h]
 Point p1; // [esp+4h] [ebp-24h] BYREF
 Point p2; // [esp+Ch] [ebp-1Ch] BYREF
 Point p3; // [esp+14h] [ebp-14h] BYREF
 unsigned int v6; // [esp+1Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 Point_Point(&p1, 1, 2);
 Point_Point(&p2, 3, 4);
 Point::operator+(&p3, &p1, &p2);
 eq = Point::operator==(&p1, &p2);
 Point::operator++(&p3);
 if ( eq )
 v0 = 0;
 else
 v0 = 10;
 LODWORD(result) = v0 + p3.x + p3.y;
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1938 */
long long test_cpp_template_func()
{
 long long result; // rax
 int a; // [esp+14h] [ebp-24h] BYREF
 int b; // [esp+18h] [ebp-20h] BYREF
 int r1; // [esp+1Ch] [ebp-1Ch]
 double r2; // [esp+20h] [ebp-18h]
 unsigned int v5; // [esp+2Ch] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 r1 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 LODWORD(result) = a + r1 + (int)r2 + b;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x19F3 */
long long test_cpp_template_class()
{
 long long result; // rax
 int r1; // [esp+18h] [ebp-A0h]
 int r2; // [esp+1Ch] [ebp-9Ch]
 Container_int int_container; // [esp+2Ch] [ebp-8Ch] BYREF
 Container_double double_container; // [esp+58h] [ebp-60h] BYREF
 unsigned int v5; // [esp+ACh] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 Container_int_Container(&int_container);
 Container_int_push(&int_container, 10);
 Container_int_push(&int_container, 20);
 Container_int_push(&int_container, 30);
 r1 = Container_int_get(&int_container, 0);
 r2 = Container_int_getSize(&int_container);
 Container_double_Container(&double_container);
 Container_double_push(&double_container, 3.14);
 LODWORD(result) = r2 + r1 + (int)Container_double_get(&double_container, 0);
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1B34 */
int test_cpp_lambda_lambda_operator(
 const lambda_capture *const __closure,
 int x)
{
 __closure->__capture_by_ref += 5;
 return x * __closure->__capture_by_value + *__closure->__capture_by_ref;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6B */
// local variable allocation has failed, the output may be wrong!
long long test_cpp_lambda()
{
 long long result; // rax
 int capture_by_ref; // [esp+4h] [ebp-24h] BYREF
 int capture_by_value; // [esp+8h] [ebp-20h]
 int r1; // [esp+Ch] [ebp-1Ch]
 lambda_capture lambda2; // [esp+14h] [ebp-14h] OVERLAPPED BYREF
 int *p_capture_by_ref; // [esp+18h] [ebp-10h]
 unsigned int v6; // [esp+1Ch] [ebp-Ch]

 v6 = __readgsdword(0x14u);
 capture_by_value = 10;
 capture_by_ref = 20;
 lambda2.__capture_by_value = 10;
 lambda2.__capture_by_ref = &capture_by_ref;
 p_capture_by_ref = &capture_by_ref;
 r1 = test_cpp_lambda_lambda_operator(&lambda2, 3);
 LODWORD(result) = r1 + 30;
 HIDWORD(result) = v6 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1BD7 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1D26 */
void test_cpp_smart_ptr_lambda_operator(
 const void *const __closure,
 int *p)
{
 (void)__closure;
 *p = -1;
 if ( p )
 operator_delete(p);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D5E */
long long test_cpp_smart_ptr()
{
 int *v0; // eax
 void *v1; // eax
 int *v2; // edx
 int *v3; // eax
 int v4; // ebx
 long long result; // rax
 $44B1EA910F358000232221CCB0AF3F67 deleter; // [esp+Fh] [ebp-29h] BYREF
 std_unique_ptr_int ptr2; // [esp+10h] [ebp-28h] BYREF
 unique_ptr_int_lambda ptr3; // [esp+18h] [ebp-20h] BYREF
 int r1; // [esp+20h] [ebp-18h]
 int r2; // [esp+24h] [ebp-14h]
 int r3; // [esp+28h] [ebp-10h]
 unsigned int v12; // [esp+2Ch] [ebp-Ch]

 v12 = __readgsdword(0x14u);
 v0 = (int *)operator_new(4u);
 *v0 = 100;
 std_unique_ptr_int_constructor(&ptr2, v0);
 *std_unique_ptr_int_deref(&ptr2) = 200;
 v1 = std_move_unique_ptr_int(&ptr2);
 std_unique_ptr_int_constructor_copy((std_unique_ptr_int *)&ptr2, v1);
 r1 = *std_unique_ptr_int_deref((const std_unique_ptr_int *)&ptr2);
 v2 = (int *)operator_new_array(0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_constructor(
 (std_unique_ptr_int_array *)&ptr3,
 v2);
 r2 = *std_unique_ptr_int_array_index((const std_unique_ptr_int_array *)&ptr3, 2u);
 v3 = (int *)operator_new(4u);
 *v3 = 500;
 unique_ptr_int_lambda_unique_ptr(
 (unique_ptr_int_lambda *)&ptr3,
 v3,
 (const void *)&deleter);
 r3 = *unique_ptr_int_lambda_operator_deref((const unique_ptr_int_lambda *)&ptr3);
 v4 = r2 + r1 + r3;
 unique_ptr_int_lambda_destructor((unique_ptr_int_lambda *)&ptr3);
 std_unique_ptr_int_array_destructor((std_unique_ptr_int_array *)&ptr3);
 std_unique_ptr_int_destructor((std_unique_ptr_int *)&ptr2);
 std_unique_ptr_int_destructor(&ptr2);
 LODWORD(result) = v4;
 HIDWORD(result) = v12 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x1F3B */
int test_cpp_rtti()
{
 RTTIDerivedA *v0; // esi
 RTTIDerivedB *v1; // esi
 const RTTIDerivedA *v2; // eax
 const RTTIDerivedB *v3; // eax
 const char *v4; // eax
 int result; // [esp+Ch] [ebp-1Ch]
 int resulta; // [esp+Ch] [ebp-1Ch]
 RTTIBase *obj1; // [esp+10h] [ebp-18h]

 v0 = (RTTIDerivedA *)operator_new(4u);
 v0->_vptr_RTTIBase = 0;
 RTTIDerivedA_RTTIDerivedA(v0);
 obj1 = v0;
 v1 = (RTTIDerivedB *)operator_new(4u);
 v1->_vptr_RTTIBase = 0;
 RTTIDerivedB_RTTIDerivedB(v1);
 result = 0;
 if ( !obj1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const void **)obj1->_vptr_RTTIBase - 1),
 (const void *)&typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v1 )
 __cxa_bad_typeid();
 if ( std_type_info_operator_eq(
 *((const void **)v1->_vptr_RTTIBase - 1),
 (const void *)&typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v2 = (const RTTIDerivedA *)__dynamic_cast(
 obj1,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedA,
 0);
 if ( v2 )
 result += RTTIDerivedA_derivedA_data(v2);
 v3 = (const RTTIDerivedB *)__dynamic_cast(
 v1,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( v3 )
 result += RTTIDerivedB_derivedB_data(v3);
 v4 = std_type_info_name(*((const void **)obj1->_vptr_RTTIBase - 1));
 resulta = result + strlen(v4);
 (*((void ( **)(RTTIBase *))obj1->_vptr_RTTIBase + 1))(obj1);
 (*((void ( **)(RTTIDerivedB *))v1->_vptr_RTTIBase + 1))(v1);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x20EA */
void test_cpp_oo_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax

 puts(asc_503C);
 v0 = test_cpp_member_func();
 printf(aCppL301D, v0);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 v2 = test_cpp_virtual_func();
 printf(aCppL303D, v2);
 v3 = test_cpp_multiple_inheritance();
 printf(aCppL304D, v3);
 v4 = test_cpp_diamond_inheritance();
 printf(aCppL305D, v4);
 v5 = test_cpp_operator_overload();
 printf(aCppL306D, v5);
 v6 = test_cpp_template_func();
 printf(aCppL307D, v6);
 v7 = test_cpp_template_class();
 printf(aCppL308D, v7);
 v8 = test_cpp_lambda();
 printf(aCppL309D, v8);
 test_cpp_exception();
}


/* Function: main @ 0x2238 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_true_false_uniq_ptr_data_const_test_cpp_smart_ptr_lambda_int @ 0x2258 */
void std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_true_false_uniq_ptr_data_const_test_cpp_smart_ptr_lambda_int(
 void *this_,
 int *__p,
 const void *a3)
{
 std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_uniq_ptr_impl_test_cpp_smart_ptr_lambda_int_1_const(
 this_,
 __p,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x2282 */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_unique_ptr_test_cpp_smart_ptr_lambda_int_1_void(
 void *this_,
 int *__p,
 const void *__d)
{
 std_uniq_ptr_data_int_test_cpp_smart_ptr_lambda_int_true_false_uniq_ptr_data_const_test_cpp_smart_ptr_lambda_int(
 this_,
 __p,
 __d);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x22AA */
void std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_destructor(
 void *this_)
{
 void *deleter; // ebx
 int **v2; // eax
 int **__ptr; // [esp+Ch] [ebp-Ch]

 __ptr = std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_ptr(this_);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_get_deleter(this_);
 v2 = std_move_int_ptr(__ptr);
 test_cpp_smart_ptr_lambda_int_1_operator(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x2312 */
int std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_operator_deref(
 const void *const this_)
{
 return *std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_get(this_);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x233A */
void std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_uniq_ptr_impl_test_cpp_smart_ptr_lambda_int_1_const(
 void *this_,
 int *__p,
 const void *__d)
{
 const void *v3; // eax

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_1_const(__d);
 std_tuple_int_test_cpp_smart_ptr_lambda_int_1_tuple_int_test_cpp_smart_ptr_lambda_int_1_const_true(
 this_,
 &__p,
 v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2374 */
int ** std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_ptr(
 void *this_)
{
 return (int **)std_get_0u_int_test_cpp_smart_ptr_lambda_int_1((void*)((char*)this_ + 0));
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x2396 */
void * std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_get_deleter(
 void *this_)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_deleter(this_);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x23B8 */
int * std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_get(
 const void *this_)
{
 return *(int **)std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_ptr((void*)this_);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x2396 */
void * std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_get_deleter(
 void *this_)
{
 return std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_deleter(this_);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x23B8 */
int * std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_1_get(
 const void *this_)
{
 return *(int **)std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_ptr((void*)this_);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x23D9 */
const void * std_forward_test_cpp_smart_ptr_lambda_int_1_const(
 void *__t_)
{
 return (const void *)__t_;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x23EC */
void std_tuple_int_test_cpp_smart_ptr_lambda_int_1_tuple_int_test_cpp_smart_ptr_lambda_int_1_const_true(
 void *this_,
 int **__a1,
 const void *__a2)
{
 const void *v3; // ebx
 int **v4; // eax

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_1_const(__a2);
 v4 = std_forward_int_ptr(__a1);
 std_Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_1_Tuple_impl_int_test_cpp_smart_ptr_lambda_int_1_const_void(
 this_,
 v4,
 v3);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x242F */
std___tuple_element_t_1 * std_get_0u_int_test_cpp_smart_ptr_lambda_int_1(
 void *__t)
{
 return std___get_helper_0u_int_test_cpp_smart_ptr_lambda_int_1(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x2450 */
void * std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_deleter(
 void *this_)
{
 return (void *)std_get_1u_int_test_cpp_smart_ptr_lambda_int_1((void*)((char*)this_ + 0));
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2472 */
int ** std_uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_1_M_ptr_const(
 const void *this_)
{
 return (int **)std_get_0u_int_test_cpp_smart_ptr_lambda_int_1((void*)((char*)this_ + 0));
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2496 */
void std__Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_1__Tuple_impl(
 void *this_,
 int **__head,
 const void *__t)
{
 const void *v3; // eax
 int **v4; // eax

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_1_const((void *)__t);
 std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_1__Tuple_impl(this_, v3);
 v4 = std_forward_int_ptr(__head);
 std__Head_base_0u_int_false__Head_base((void *)this_, v4);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x24E5 */
int ** std___get_helper_0u_int_test_cpp_smart_ptr_lambda_int_1(
 void *__t)
{
 return std__Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_1__M_head(__t);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2505 */
void * std_get_1u_int_test_cpp_smart_ptr_lambda_int_1(
 void *__t)
{
 return (void *)std___get_helper_1_test_cpp_smart_ptr__lambda_int_____(__t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2525 */
const void * std_get_0u_int_test_cpp_smart_ptr_lambda_int_1_const(
 const void *__t)
{
 return std___get_helper_0u_int_test_cpp_smart_ptr_lambda_int_1((void*)__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x2546 */
void std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_1__Tuple_impl(
 void *this_,
 const void *__head)
{
 std__Head_base_1u_test_cpp_smart_ptr_lambda_int_1_true__Head_base(this_, __head);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x256A */
int ** std__Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_1__M_head(
 void *__t)
{
 return (int **)std__Head_base_0u_int_false__M_head((void *)__t);
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ @ 0x258B */
void * std___get_helper_1_test_cpp_smart_ptr__lambda_int_____(
 void *__t)
{
 return std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_1__M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x25AB */
int *const * std___get_helper_0u_int_test_cpp_smart_ptr_lambda_int_1_const(
 const void *__t)
{
 return (int *const *)*std__Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_1__M_head((void*)__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x25CC */
void std__Head_base_1u_test_cpp_smart_ptr_lambda_int_1_true__Head_base(
 void *this_,
 const void *__h)
{
 (void)__h;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x25DC */
void * std__Tuple_impl_1u_test_cpp_smart_ptr_lambda_int_1__M_head(
 void *this_)
{
 return std__Head_base_1u_test_cpp_smart_ptr_lambda_int_1_true__M_head(this_);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x25FC */
int *const * std__Tuple_impl_0u_int_test_cpp_smart_ptr_lambda_int_1__M_head_const(
 const void *__t)
{
 return (int *const *)std__Head_base_0u_int_false__M_head_const((void *)__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x261D */
void * std__Head_base_1u_test_cpp_smart_ptr_lambda_int_1_true__M_head(
 void *this_)
{
 return this_;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x262F */
void __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
 if ( __initialize_p == 1 && __priority == 0xFFFF )
 {
 }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x268C */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x26B4 */
const char * std_type_info_name(const std_type_info *this_)
{
 if ( **((unsigned char **)this_ + 1) == 42 )
 return (const char *)(*((unsigned int *)this_ + 1) + 1);
 else
 return (const char *)*((unsigned int *)this_ + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x26E6 */
bool std_type_info_operator_eq(const std_type_info *this_, const std_type_info *__arg)
{
 return *((unsigned int *)this_ + 1) == *((unsigned int *)__arg + 1)
 || **((unsigned char **)this_ + 1) != 42 && !strcmp(*((const char **)this_ + 1), *((const char **)__arg + 1));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x274A */
void SimpleClass_SimpleClass(SimpleClass *this_, int v, const char *n)
{
 this_->value = v;
 strncpy(this_->name, n, 0x1Fu);
 this_->name[31] = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x278E */
int SimpleClass_getValue(const SimpleClass *this_)
{
 return this_->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x27A6 */
void SimpleClass_setValue(SimpleClass *this_, int v)
{
 this_->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x27C2 */
int SimpleClass_compute(const SimpleClass *this_, int x)
{
 int v2; // esi

 v2 = x * this_->value;
 return v2 + strlen(this_->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x27FD */
int SimpleClass_getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2816 */
void LifecycleClass_LifecycleClass(LifecycleClass *this_, size_t s)
{
 size_t i; // [esp+Ch] [ebp-Ch]

 this_->size = s;
 if ( s > 0x1FFFFFFF )
 __cxa_throw_bad_array_new_length();
 this_->data = (int *)operator_new_array(4 * s);
 for ( i = 0; i < s; ++i )
 this_->data[i] = 10 * i;
 ++LifecycleClass_instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x28A4 */
void LifecycleClass_LifecycleClass_destructor(LifecycleClass *this_)
{
 if ( this_->data )
 operator_delete_array(this_->data);
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x28EA */
int LifecycleClass_getData(const LifecycleClass *this_, size_t idx)
{
 if ( idx >= this_->size )
 return -1;
 else
 return this_->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x291E */
int LifecycleClass_getInstanceCount()
{
 return LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2938 */
int Base_virtual_func(Base *this_, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x2952 */
const char * Base_getName(const Base *this_)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x296C */
void Base_Base_destructor(Base *this_)
{
 this_->_vptr_Base = (int (**)(...))off_8DA8;
}


/* Function: _ZN4BaseD0Ev @ 0x298C */
void Base_Base_destructor_0(Base *this_)
{
 Base_Base_destructor(this_);
 operator_delete(this_, 4u);
}


/* Function: _ZN4BaseC2Ev @ 0x29C6 */
void Base_Base(Base *this_)
{
 this_->_vptr_Base = (int (**)(...))off_8DA8;
}


/* Function: _ZN7DerivedC2Ei @ 0x29E6 */
void Derived_Derived(Derived *this_, int m)
{
 Base_Base(this_);
 this_->_vptr_Base = (int (**)(...))&off_8D90;
 this_->multiplier = m;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A26 */
int Derived_virtual_func(Derived *this_, int x)
{
 return x * this_->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A44 */
const char * Derived_getName(const Derived *this_)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x2A5E */
int BaseA_funcA(BaseA *this_)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2A76 */
void BaseA_BaseA_destructor(BaseA *this_)
{
 this_->_vptr_BaseA = (int (**)(...))off_8D7C;
}


/* Function: _ZN5BaseAD0Ev @ 0x2A96 */
void BaseA_BaseA_destructor_0(BaseA *this_)
{
 BaseA_BaseA_destructor(this_);
 operator_delete(this_, 8u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2AD0 */
int BaseB_funcB(BaseB *this_)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2AE8 */
void BaseB_BaseB_destructor(BaseB *this_)
{
 this_->_vptr_BaseB = (int (**)(...))off_8D68;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B08 */
void BaseB_BaseB_destructor_0(BaseB *this_)
{
 BaseB_BaseB_destructor(this_);
 operator_delete(this_, 8u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2B42 */
int MultiDerived_funcA(MultiDerived *this_)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2B5A */
int MultiDerived_funcB(MultiDerived *this_)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x2B72 */
int MultiDerived_funcB_thunk(MultiDerived *this_)
{
 return MultiDerived_funcB((MultiDerived *)((char *)this_ - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x2B7E */
void BaseA_BaseA(BaseA *this_)
{
 this_->_vptr_BaseA = (int (**)(...))off_8D7C;
}


/* Function: _ZN5BaseBC2Ev @ 0x2B9E */
void BaseB_BaseB(BaseB *this_)
{
 this_->_vptr_BaseB = (int (**)(...))off_8D68;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2BBE */
void MultiDerived_MultiDerived(MultiDerived *this_)
{
 BaseA_BaseA(this_);
 BaseB_BaseB(&this_->baseB_field);
 this_->_vptr_BaseA = (int (**)(...))&off_8D3C;
 this_->_vptr_BaseB = (int (**)(...))&off_8D54;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2C12 */
int VirtualBase_func(VirtualBase *this_)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2C2A */
void VirtualBase_VirtualBase_destructor(VirtualBase *this_)
{
 this_->_vptr_VirtualBase = (int (**)(...))off_8D28;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2C4A */
void VirtualBase_VirtualBase_destructor_0(VirtualBase *this_)
{
 VirtualBase_VirtualBase_destructor(this_);
 operator_delete(this_, 8u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2C84 */
int MiddleA_func(MiddleA *this_)
{
 return *(int *)((char *)&this_->dataA + *((unsigned int *)this_->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x2CB0 */
int MiddleA_func_thunk(MiddleA *this_)
{
 return MiddleA_func((MiddleA *)((char *)this_ + *((unsigned int *)this_->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2CC4 */
int MiddleB_func(MiddleB *this_)
{
 return *(int *)((char *)&this_->dataB + *((unsigned int *)this_->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x2CF0 */
int MiddleB_func_thunk(MiddleB *this_)
{
 return MiddleB_func((MiddleB *)((char *)this_ + *((unsigned int *)this_->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2D04 */
int DiamondDerived_func(DiamondDerived *this_)
{
 return *(int *)((char *)&this_->dataA + *((unsigned int *)this_->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2D30 */
int DiamondDerived_func_thunk(DiamondDerived *this_)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ + *((unsigned int *)this_->_vptr_MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x2D43 */
int DiamondDerived_func_thunk2(DiamondDerived *this_)
{
 return DiamondDerived_func((DiamondDerived *)((char *)this_ - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x2D4E */
void VirtualBase_VirtualBase(VirtualBase *this_)
{
 this_->_vptr_VirtualBase = (int (**)(...))off_8D28;
}


/* Function: _ZN7MiddleAC2Ev @ 0x2D6E */
void MiddleA_MiddleA(MiddleA *this_, const void **__vtt_parm)
{
 this_->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_->_vptr_MiddleA + *((unsigned int *)this_->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x2DA6 */
void MiddleA_MiddleA_destructor(MiddleA *this_, const void **__vtt_parm)
{
 this_->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_->_vptr_MiddleA + *((unsigned int *)this_->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x2DDE */
void MiddleB_MiddleB(MiddleB *this_, const void **__vtt_parm)
{
 this_->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_->_vptr_MiddleB + *((unsigned int *)this_->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x2E16 */
void MiddleB_MiddleB_destructor(MiddleB *this_, const void **__vtt_parm)
{
 this_->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
 *(int (***)(...))((char *)&this_->_vptr_MiddleB + *((unsigned int *)this_->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E4E */
void DiamondDerived_DiamondDerived(DiamondDerived *this_)
{
 VirtualBase_VirtualBase((VirtualBase *)&this_->middleB_field);
 MiddleA_MiddleA(this_, (const void **)off_8CA0);
 MiddleB_MiddleB((MiddleB *)(&this_->dataA + 1), (const void **)off_8CA8);
 this_->_vptr_MiddleA = (int (**)(...))&off_8C5C;
 this_->_vptr_MiddleB = (int (**)(...))&off_8C90;
 *(&this_->dataA + 1) = (int)&off_8C74;
}


/* Function: _ZN5PointC2Eii @ 0x2ED0 */
void Point_Point(Point *this_, int _x, int _y)
{
 this_->x = _x;
 this_->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x2EF6 */
Point * Point_Point_operator_plus(Point *retstr, const Point *this_, const Point *other)
{
 Point_Point(retstr, this_->x + other->x, other->y + this_->y);
 return retstr;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2F3C */
bool Point_Point_operator_eq(const Point *this_, const Point *other)
{
 return this_->x == other->x && this_->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x2F7A */
Point * Point_Point_operator_inc(Point *this_)
{
 ++this_->x;
 ++this_->y;
 return this_;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2FAC */
int template_max_int(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2FCF */
double template_max_double(double a, double b)
{
 if ( a <= (long double)b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3011 */
void template_swap_int(int *a, int *b)
{
 int temp; // [esp+Ch] [ebp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3042 */
void Container_int_Container(Container_int *this_)
{
 this_->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3060 */
void Container_int_push(Container_int *this_, int value)
{
 int size; // eax

 if ( this_->size <= 9 )
 {
 size = this_->size;
 this_->size = size + 1;
 this_->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x309C */
int Container_int_get(const Container_int *this_, int idx)
{
 if ( idx < 0 || idx >= this_->size )
 return 0;
 else
 return this_->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x30D0 */
int Container_int_getSize(const Container_int *this_)
{
 return this_->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x30EA */
void Container_double_Container(Container_double *this_)
{
 this_->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3108 */
void Container_double_push(Container_double *this_, double value)
{
 int size; // eax

 if ( this_->size <= 9 )
 {
 size = this_->size;
 this_->size = size + 1;
 this_->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x314E */
double Container_double_get(const Container_double *this_, int idx)
{
 if ( idx < 0 || idx >= this_->size )
 return 0.0;
 else
 return this_->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3180 */
int Container_double_getSize(const Container_double *this_)
{
 return this_->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x319A */
void std_uniq_ptr_data_int_default_delete_true_true_constructor(
 void *this_,
 void *a2)
{
 std_uniq_ptr_impl_int_default_delete_constructor(this_, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x31C4 */
void std_unique_ptr_int_default_delete_constructor_copy(
 void *this_,
 void *a2)
{
 std_uniq_ptr_data_int_default_delete_true_true_constructor((char*)this_ + 0, (char*)a2 + 0);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x31EE */
int RTTIBase_getType(const RTTIBase *this_)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3206 */
int RTTIDerivedA_getType(const RTTIDerivedA *this_)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x321E */
int RTTIDerivedA_derivedA_data(const RTTIDerivedA *this_)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x3236 */
int RTTIDerivedB_getType(const RTTIDerivedB *this_)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x324E */
int RTTIDerivedB_derivedB_data(const RTTIDerivedB *this_)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x3266 */
void RTTIBase_RTTIBase(RTTIBase *this_)
{
 this_->vptr_RTTIBase = (int (**)(...))off_8C44;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3286 */
void RTTIBase_destructor(RTTIBase *this_)
{
 this_->vptr_RTTIBase = (int (**)(...))off_8C44;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x32A6 */
void RTTIBase_destructor_0(RTTIBase *this_)
{
 RTTIBase_destructor(this_);
 operator_delete(this_, 4u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x32E0 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *this_)
{
 RTTIBase_RTTIBase(this_);
 this_->_vptr_RTTIBase = (int (**)(...))off_8C30;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3316 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *this_)
{
 RTTIBase_RTTIBase(this_);
 this_->_vptr_RTTIBase = (int (**)(...))off_8C1C;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x334C */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 void *this_,
 void *__p)
{
 std_uniq_ptr_impl_int_default_delete_constructor(this_, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3376 */
void std_unique_ptr_int_default_delete_constructor(
 void *this_,
 void *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi((char*)this_ + 0, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x33A0 */
void std_unique_ptr_int_default_delete_destructor(
 void *this_)
{
 void *deleter; // ebx
 int **v2; // eax
 int **__ptr; // [esp+Ch] [ebp-Ch]

 __ptr = std_uniq_ptr_impl_int_default_delete_M_ptr((char*)this_ + 0);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_default_delete_get_deleter(this_);
 v2 = std_move_int_ptr(__ptr);
 std_default_delete_int_operator(deleter, *v2);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x340C */
int std_unique_ptr_int_default_delete_operator_deref(
 const void *const this_)
{
 return *std_unique_ptr_int_default_delete_get(this_);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3437 */
void * std_move_unique_ptr_int(
 void *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x344E */
void std_Tuple_impl_0u_int_default_delete_Tuple_impl(
 void *this_,
 void *a2)
{
 std_Tuple_impl_1u_default_delete_Tuple_impl(this_, a2);
 *(unsigned int *)((char*)this_ + 4) = *(unsigned int *)((char*)a2 + 4);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3480 */
void std_tuple_int_default_delete_tuple(
 void *this_,
 void *a2)
{
 std_Tuple_impl_0u_int_default_delete_Tuple_impl(this_, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x34AA */
void std_uniq_ptr_impl_int_default_delete_constructor_copy(
 void *this_,
 void *__u)
{
 void *v2; // eax

 v2 = std_move_tuple_int_default_delete((void*)((char*)__u + 0));
 std_tuple_int_default_delete_tuple((void*)((char*)this_ + 0), v2);
 *std_uniq_ptr_impl_int_default_delete_M_ptr(__u) = 0;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x34F8 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 void *this_,
 void *__p)
{
 std_uniq_ptr_impl_int_default_delete_array_constructor(this_, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3522 */
void std_unique_ptr_int_array_constructor(
 void *this_,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi((char*)this_ + 0, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x354C */
void std_unique_ptr_int_array_destructor(
 void *this_)
{
 void *deleter; // eax
 int **__ptr; // [esp+Ch] [ebp-Ch]

 __ptr = std_uniq_ptr_impl_int_default_delete_array_M_ptr((char*)this_ + 0);
 if ( *__ptr )
 {
 deleter = std_unique_ptr_int_array_get_deleter(this_);
 std_default_delete_int_array_operator(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x35A8 */
int * std_unique_ptr_int_array_index(
 const void *const this_,
 unsigned int __i)
{
 return &std_unique_ptr_int_array_get(this_)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x35DE */
void std_uniq_ptr_impl_int_default_delete_constructor(
 void *this_,
 void *__p)
{
 std_tuple_int_default_delete_tuple_true_true((void*)((char*)this_ + 0));
 *std_uniq_ptr_impl_int_default_delete_M_ptr(this_) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x361C */
int ** std_uniq_ptr_impl_int_default_delete_M_ptr(
 void *this_)
{
 return std_get_0u_int_default_delete((void*)((char*)this_ + 0));
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3642 */
void * std_unique_ptr_int_default_delete_get_deleter(
 void *this_)
{
 return (void *)std_uniq_ptr_impl_int_default_delete_M_deleter((void*)((char*)this_ + 0));
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3667 */
int ** std_move_int_ptr(
 int **__t)
{
 return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x367E */
void std_default_delete_int_operator(
 const void *this_,
 int *__ptr)
{
 if ( __ptr )
 operator_delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x36B2 */
int * std_unique_ptr_int_default_delete_get(
 const void *this_)
{
 return *(int **)std_uniq_ptr_impl_int_default_delete_M_ptr((void*)((char*)this_ + 0));
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x36D7 */
void * std_move_tuple_int_default_delete(
 void *__t)
{
 return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x36EE */
void std_Tuple_impl_1u_default_delete_Tuple_impl(
 void *this_,
 void *__in)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3702 */
void std_uniq_ptr_impl_int_default_delete_array_constructor(
 void *this_,
 void *__p)
{
 std_tuple_int_default_delete_array_tuple_true_true((void*)((char*)this_ + 0));
 *std_uniq_ptr_impl_int_default_delete_array_M_ptr(this_) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3740 */
int ** std_uniq_ptr_impl_int_default_delete_array_M_ptr(
 void *this_)
{
 return std_get_0u_int_default_delete_array((void*)((char*)this_ + 0));
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3766 */
void * std_unique_ptr_int_array_get_deleter(
 void *this_)
{
 return (void *)std_uniq_ptr_impl_int_default_delete_array_M_deleter((void*)((char*)this_ + 0));
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x378C */
void std_default_delete_int_array_operator(
 const void *this_,
 int *__ptr)
{
 if ( __ptr )
 operator_delete_array(__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x37BE */
int * std_unique_ptr_int_array_get(
 const void *this_)
{
 return *std_uniq_ptr_impl_int_default_delete_array_M_ptr((void*)((char*)this_ + 0));
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x37E4 */
void std_tuple_int_default_delete_tuple_true_true(
 void *this_)
{
 std_Tuple_impl_0u_int_default_delete_Tuple_impl_void(this_);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x380A */
std___tuple_element_t * std_get_0u_int_default_delete(
 void *__t)
{
 return std_get_helper_0u_int_default_delete(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3830 */
void * std_uniq_ptr_impl_int_default_delete_M_deleter(
 void *this_)
{
 return (void *)std_get_1u_int_default_delete((void*)((char*)this_ + 0));
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3856 */
int ** std_uniq_ptr_impl_int_default_delete_M_ptr_const(
 const void *this_)
{
 return (int **)std_get_0u_int_default_delete((void*)((char*)this_ + 0));
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x387E */
void std_tuple_int_default_delete_array_tuple_true_true(
 void *this_)
{
 std_Tuple_impl_0u_int_default_delete_array_Tuple_impl_void(this_);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x38A4 */
std___tuple_element_t_0 * std_get_0u_int_default_delete_array(
 void *__t)
{
 return std_get_helper_0u_int_default_delete_array(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x38CA */
void * std_uniq_ptr_impl_int_default_delete_array_M_deleter(
 void *this_)
{
 return (void *)std_get_1u_int_default_delete_array((void*)((char*)this_ + 0));
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x38F0 */
int ** std_uniq_ptr_impl_int_default_delete_array_M_ptr_const(
 const void *this_)
{
 return (int **)std_get_0u_int_default_delete_array((void*)((char*)this_ + 0));
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x3918 */
void std_Tuple_impl_0u_int_default_delete_Tuple_impl_void(
 void *this_)
{
 std_Tuple_impl_1u_default_delete_Tuple_impl_void(this_);
 std_Head_base_0u_int_false_Head_base((void *)this_);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x394C */
int ** std_get_helper_0u_int_default_delete(
 void *__t)
{
 return std_Tuple_impl_0u_int_default_delete_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3970 */
std___tuple_element_t * std_get_1u_int_default_delete(
 void *__t)
{
 return (std___tuple_element_t *)std_get_helper_1u_default_delete(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x3994 */
const std___tuple_element_t * std_get_0u_int_default_delete_const(
 const void *__t)
{
 return std_get_helper_0u_int_default_delete((void*)__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x39BA */
void std_Tuple_impl_0u_int_default_delete_array_Tuple_impl_void(
 void *this_)
{
 std_Tuple_impl_1u_default_delete_array_Tuple_impl_void(this_);
 std_Head_base_0u_int_false_Head_base((void *)this_);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x39EE */
int ** std_get_helper_0u_int_default_delete_array(
 void *__t)
{
 return std_Tuple_impl_0u_int_default_delete_array_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3A12 */
std___tuple_element_t * std_get_1u_int_default_delete_array(
 void *__t)
{
 return (std___tuple_element_t *)std_get_helper_1u_default_delete_array(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x3A36 */
const std___tuple_element_t_0 * std_get_0u_int_default_delete_array_const(
 const void *__t)
{
 return std_get_helper_0u_int_default_delete_array((void*)__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x3A5B */
int ** std_forward_int_ptr(
 void *__t)
{
 return (int **)__t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x3A72 */
void std_Tuple_impl_1u_default_delete_Tuple_impl_void(
 void *this_)
{
 std_Head_base_1u_default_delete_true_Head_base(this_);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3A98 */
void std_Head_base_0u_int_false_Head_base(
 void *this_)
{
 *(void **)this_ = 0;
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3ADA */
void * std_get_helper_1u_default_delete(
 void *__t)
{
 return std_Tuple_impl_1u_default_delete_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3AFE */
int *const * std_get_helper_0u_int_default_delete_const(
 const void *__t)
{
 return std_Tuple_impl_0u_int_default_delete_M_head_const((void*)__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3B22 */
void std_Tuple_impl_1u_default_delete_array_Tuple_impl_void(
 void *this_)
{
 std_Head_base_1u_default_delete_array_true_Head_base(this_);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3B47 */
int ** std_Tuple_impl_0u_int_default_delete_array_M_head(
 void *this_)
{
 return std_Head_base_0u_int_false_M_head((void *)this_);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3B6C */
void * std_get_helper_1u_default_delete_array(
 void *__t)
{
 return std_Tuple_impl_1u_default_delete_array_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3B90 */
int *const * std_get_helper_0u_int_default_delete_array_const(
 const void *__t)
{
 return std_Tuple_impl_0u_int_default_delete_array_M_head_const((void*)__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x3BB4 */
void std_Head_base_0u_int_false_Head_base_int_ptr(
 void *this_,
 int **__h)
{
 *(void **)this_ = *std_forward_int_ptr(__h);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3BE0 */
void std_Head_base_1u_default_delete_true_Head_base(
 void *this_)
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x3BF4 */
int ** std_Head_base_0u_int_false_M_head(
 void *this_)
{
 return (int *)this_;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C0A */
void * std_Tuple_impl_1u_default_delete_M_head(
 void *this_)
{
 return std_Head_base_1u_default_delete_true_M_head(this_);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3C2E */
int *const * std_Tuple_impl_0u_int_default_delete_M_head_const(
 const void *this_)
{
 return (int *const *)std_Head_base_0u_int_false_M_head_const((const void *)this_);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3C54 */
void std_Head_base_1u_default_delete_array_true_Head_base(
 void *this_)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x3C68 */
void * std_Tuple_impl_1u_default_delete_array_M_head(
 void *this_)
{
 return std_Head_base_1u_default_delete_array_true_M_head(this_);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x3C8C */
int *const * std_Tuple_impl_0u_int_default_delete_array_M_head_const(
 const void *this_)
{
 return (int *const *)std_Head_base_0u_int_false_M_head_const((const void *)this_);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CB1 */
void * std_Head_base_1u_default_delete_true_M_head(
 void *this_)
{
 return this_;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3CC7 */
int *const * std_Head_base_0u_int_false_M_head_const(
 const void *this_)
{
 return (int *const *)this_;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x3CDD */
void * std_Head_base_1u_default_delete_array_true_M_head(
 void *this_)
{
 return this_;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x3AB5 */
int ** std_Tuple_impl_0u_int_default_delete_M_head(
 void *this_)
{
 return (int **)std_Head_base_0u_int_false_M_head((void *)this_);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3ADA */
void * std_get_helper_1u_default_delete(
 void *__t)
{
 return std_Tuple_impl_1u_default_delete_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3AFE */
int *const * std_get_helper_0u_int_default_delete_const(
 const void *__t)
{
 return std_Tuple_impl_0u_int_default_delete_M_head_const((void*)__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3B22 */
void std_Tuple_impl_1u_default_delete_array_Tuple_impl_void(
 void *this_)
{
 std_Head_base_1u_default_delete_array_true_Head_base(this_);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3B47 */
int ** std_Tuple_impl_0u_int_default_delete_array_M_head(
 void *this_)
{
 return std_Head_base_0u_int_false_M_head((void *)this_);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3B6C */
void * std_get_helper_1u_default_delete_array(
 void *__t)
{
 return std_Tuple_impl_1u_default_delete_array_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3B90 */
int *const * std_get_helper_0u_int_default_delete_array_const(
 const void *__t)
{
 return std_Tuple_impl_0u_int_default_delete_array_M_head_const((void*)__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x3BB4 */
void std_Head_base_0u_int_false_Head_base_int_ptr(
 void *this_,
 int **__h)
{
 *(void **)this_ = *std_forward_int_ptr(__h);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3BE0 */
void std_Head_base_1u_default_delete_true_Head_base(
 void *this_)
{
 ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x3BF4 */
int ** std_Head_base_0u_int_false_M_head(
 void *this_)
{
 return (int *)this_;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C0A */
void * std_Tuple_impl_1u_default_delete_M_head(
 void *this_)
{
 return std_Head_base_1u_default_delete_true_M_head(this_);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3C2E */
int *const * std_Tuple_impl_0u_int_default_delete_M_head_const(
 const void *this_)
{
 return (int *const *)std_Head_base_0u_int_false_M_head_const((const void *)this_);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3C54 */
void std_Head_base_1u_default_delete_array_true_Head_base(
 void *this_)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x3C68 */
void * std_Tuple_impl_1u_default_delete_array_M_head(
 void *this_)
{
 return std_Head_base_1u_default_delete_array_true_M_head(this_);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x3C8C */
int *const * std_Tuple_impl_0u_int_default_delete_array_M_head_const(
 const void *this_)
{
 return (int *const *)std_Head_base_0u_int_false_M_head_const((const void *)this_);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CB1 */
void * std_Head_base_1u_default_delete_true_M_head(
 void *this_)
{
 return this_;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3CC7 */
int *const * std_Head_base_0u_int_false_M_head_const(
 const void *this_)
{
 return (int *const *)this_;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x3CF4 */
void RTTIDerivedB_destructor(
 RTTIDerivedB *this_)
{
 this_->_vptr_RTTIBase = (int (**)(...))off_8C1C;
 RTTIBase_destructor(this_);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x3D26 */
void RTTIDerivedB_destructor_0(
 RTTIDerivedB *this_)
{
 RTTIDerivedB_destructor(this_);
 operator_delete(this_, 4u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x3D60 */
void RTTIDerivedA_destructor(
 RTTIDerivedA *this_)
{
 this_->_vptr_RTTIBase = (int (**)(...))off_8C30;
 RTTIBase_destructor(this_);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x3D92 */
void RTTIDerivedA_destructor_0(
 RTTIDerivedA *this_)
{
 RTTIDerivedA_destructor(this_);
 operator_delete(this_, 4u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3DCC */
void DiamondDerived_destructor(
 DiamondDerived *this_)
{
 this_->_vptr_MiddleA = (int (**)(...))&off_8C5C;
 this_->_vptr_MiddleB = (int (**)(...))&off_8C90;
 *(&this_->dataA + 1) = (int)&off_8C74;
 MiddleB_destructor((MiddleB *)(&this_->dataA + 1), (const void **)off_8CA8);
 MiddleA_destructor(this_, (const void **)off_8CA0);
 VirtualBase_destructor((VirtualBase *)&this_->middleB_field);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3E4E */
void DiamondDerived_destructor_thunk(
 DiamondDerived *this_)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3E5C */
void DiamondDerived_destructor_virtual_thunk(
 DiamondDerived *this_)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ + *((unsigned int *)this_->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3E72 */
void DiamondDerived_destructor_0(
 DiamondDerived *this_)
{
 DiamondDerived_destructor(this_);
 operator_delete(this_, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3EAB */
void DiamondDerived_destructor_0_thunk(
 DiamondDerived *this_)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3EB6 */
void DiamondDerived_destructor_0_virtual_thunk(
 DiamondDerived *this_)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)this_ + *((unsigned int *)this_->_vptr_MiddleA - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3ECA */
void MultiDerived_destructor(
 MultiDerived *this_)
{
 this_->_vptr_BaseA = (int (**)(...))&off_8D3C;
 this_->_vptr_BaseB = (int (**)(...))&off_8D54;
 BaseB_destructor(&this_->baseB_field);
 BaseA_destructor(this_);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3F19 */
void MultiDerived_destructor_thunk(
 MultiDerived *this_)
{
 MultiDerived_destructor((MultiDerived *)((char *)this_ - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3F24 */
void MultiDerived_destructor_0(
 MultiDerived *this_)
{
 MultiDerived_destructor(this_);
 operator_delete(this_, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3F5D */
void MultiDerived_destructor_0_thunk(
 MultiDerived *this_)
{
 MultiDerived_destructor((MultiDerived *)((char *)this_ - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x3F68 */
void Derived_destructor(
 Derived *this_)
{
 this_->_vptr_Base = (int (**)(...))&off_8D90;
 Base_destructor(this_);
}


/* Function: _ZN7DerivedD0Ev @ 0x3F9A */
void Derived_destructor_0(
 Derived *this_)
{
 Derived_destructor(this_);
 operator_delete(this_, 8u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x3FD3 */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x3FD7 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x3FE0 */
void _stack_chk_fail_local()
{
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x404C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9030 */

/* FAILED to decompile: __cxa_finalize @ 0x9034 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9038 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x903C */

/* FAILED to decompile: strlen @ 0x9040 */

/* FAILED to decompile: __cxa_atexit @ 0x9044 */

/* FAILED to decompile: _ZdlPvj @ 0x9048 */

/* FAILED to decompile: strcmp @ 0x9050 */

/* FAILED to decompile: __libc_start_main @ 0x9054 */

/* FAILED to decompile: _Znaj @ 0x9058 */

/* FAILED to decompile: strncpy @ 0x905C */

/* FAILED to decompile: __cxa_bad_typeid @ 0x9060 */

/* FAILED to decompile: __stack_chk_fail @ 0x9064 */

/* FAILED to decompile: __dynamic_cast @ 0x9068 */

/* FAILED to decompile: _ZdaPv @ 0x906C */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x9074 */

/* FAILED to decompile: printf @ 0x9078 */

/* FAILED to decompile: __cxa_rethrow @ 0x907C */

/* FAILED to decompile: puts @ 0x9080 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x9084 */

/* FAILED to decompile: __cxa_end_catch @ 0x9088 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x908C */

/* FAILED to decompile: __cxa_throw @ 0x9090 */

/* FAILED to decompile: _Unwind_Resume @ 0x9098 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x909C */

/* Total functions decompiled: 235, failed: 25 */
