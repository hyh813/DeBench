/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O0_no_g
 * Processor: pc
 */

unsigned long long __readfsqword(unsigned int offset);

/* Forward declarations for C++ classes */
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct Point Point;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Missing function declarations for classes */
void SimpleClass_SimpleClass(long long a1, int a2, const char *a3);
long long SimpleClass_getValue(long long a1);
long long SimpleClass_setValue(long long a1, int a2);
long long SimpleClass_compute(long long a1, int a2);
long long SimpleClass_getClassID(long long a1);
void LifecycleClass_LifecycleClass(long long a1, unsigned long long a2);
long long LifecycleClass_getData(long long a1, unsigned long long a2);
long long LifecycleClass_getInstanceCount(long long a1);
void LifecycleClass_destructor(long long a1);
void Base_Base(long long a1);
void Base_destructor(long long a1);
long long Base_virtual_func(long long a1, int a2);
void Derived_Derived(long long a1, int a2);
void Derived_destructor(Derived *a1);
long long Derived_virtual_func(long long a1, int a2);
void MultiDerived_MultiDerived(long long a1);
void MultiDerived_destructor(MultiDerived *a1);
long long MultiDerived_funcA(long long a1);
long long MultiDerived_funcB(long long a1);
void DiamondDerived_DiamondDerived(long long a1);
void DiamondDerived_destructor(DiamondDerived *a1);
long long DiamondDerived_func(long long a1);
void Point_Point(long long a1, int a2, int a3);
long long Point_operator_plus(long long a1, long long a2);
long long Point_operator_eq(long long a1, long long a2);
long long Point_operator_inc(long long a1);
long long template_max_int(unsigned int a1, unsigned int a2);
long long template_max_double(double a1, double a2);
int * template_swap_int(int *a1, int *a2);
long long Container_int_Container(long long a1);
long long Container_int_push(long long a1, int a2);
long long Container_int_get(long long a1, int a2);
long long Container_int_getSize(long long a1);
long long Container_double_Container(long long a1);
long long Container_double_push(long long a1, double a2);
long long Container_double_get(long long a1, int a2);
void RTTIBase_RTTIBase(RTTIBase *a1);
void RTTIBase_destructor(RTTIBase *a1);
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *a1);
void RTTIDerivedA_destructor(RTTIDerivedA *a1);
long long RTTIDerivedA_derivedA_data(RTTIDerivedA *a1);
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *a1);
void RTTIDerivedB_destructor(RTTIDerivedB *a1);
long long RTTIDerivedB_derivedB_data(RTTIDerivedB *a1);
void MiddleA_MiddleA(long long a1, unsigned long long *a2);
void MiddleA_destructor(long long a1, unsigned long long *a2);
void MiddleB_MiddleB(long long a1, unsigned long long *a2);
void MiddleB_destructor(long long a1, unsigned long long *a2);
void VirtualBase_VirtualBase(long long a1);
void VirtualBase_destructor(long long a1);
long long std_unique_ptr_int_unique_ptr(long long a1, long long a2);
long long std_unique_ptr_int_deref(long long a1);
long long std_move_unique_ptr_int(long long a1);
long long std_unique_ptr_int_array_unique_ptr(long long a1, long long a2);
long long std_unique_ptr_int_array_get(long long a1, long long a2);
long long std_unique_ptr_int_lambda_unique_ptr(long long a1, long long a2, long long a3);
long long std_unique_ptr_int_lambda_deref(long long a1);
unsigned long long *std_unique_ptr_int_lambda_destructor(long long a1);
unsigned long long *std_unique_ptr_int_array_destructor(long long a1);
unsigned long long *std_unique_ptr_int_destructor(long long a1);
void __cxa_throw_bad_array_new_length(void);
/* Missing function declarations */
void *operator new(unsigned long size);
void operator delete(void *ptr, unsigned long size);
void operator_delete(void *ptr, unsigned long size);
void *operator_new_array(unsigned long size);
void operator_delete_array(void *ptr);
void *__cxa_allocate_exception(unsigned long size);
void __cxa_throw(void *exception, void *type_info, void *dest_fn);
void __cxa_bad_typeid(void);
void *__dynamic_cast(void *src, void *src_type, void *dst_type, unsigned long src_ptr_type);
unsigned long strlen(const char *s);
int strcmp(const char *s1, const char *s2);
char *strncpy(char *dest, const char *src, unsigned long n);
int printf(const char *format, ...);
int puts(const char *s);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Remove duplicate typedefs - already declared above */
/* typedef struct Base Base; */
/* typedef struct Derived Derived; */
/* typedef struct BaseA BaseA; */
/* typedef struct BaseB BaseB; */
/* typedef struct MultiDerived MultiDerived; */
/* typedef struct VirtualBase VirtualBase; */
/* typedef struct MiddleA MiddleA; */
/* typedef struct MiddleB MiddleB; */
/* typedef struct DiamondDerived DiamondDerived; */
/* typedef struct Point Point; */
/* typedef struct RTTIBase RTTIBase; */
/* typedef struct RTTIDerivedA RTTIDerivedA; */
/* typedef struct RTTIDerivedB RTTIDerivedB; */

/* Forward declarations for std functions */
long long std_type_info_operator_eq(long long a1, long long a2);
long long std_type_info_name(long long a1);
long long std_move_int_ptr(long long a1);
long long std_forward_int_ptr(long long a1);
long long std_get_0ul_int_lambda(long long a1);
long long std_get_1ul_lambda(long long a1);
long long std_get_0ul_int_default_delete_int(long long a1);
long long std_get_1ul_int_default_delete_int(long long a1);
long long std_get_0ul_int_default_delete_int_array(long long a1);
long long std_get_1ul_int_default_delete_int_array(long long a1);
long long std_uniq_ptr_impl_int_lambda_M_ptr(long long a1);
long long std_uniq_ptr_impl_int_lambda_M_deleter(long long a1);
long long std_uniq_ptr_impl_int_default_delete_int_M_ptr(long long a1);
long long std_uniq_ptr_impl_int_default_delete_int_M_deleter(long long a1);
long long std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(long long a1);
long long std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(long long a1);
long long std_unique_ptr_int_lambda_get_deleter(long long a1);
long long std_unique_ptr_int_get_deleter(long long a1);
long long std_unique_ptr_int_array_get_deleter(long long a1);
long long std_unique_ptr_int_lambda_get(long long a1);
long long std_unique_ptr_int_get(long long a1);
long long std_unique_ptr_int_array_get_ptr(long long a1);
void std_default_delete_int_operator(long long a1, void *a2);
void std_default_delete_int_array_operator_int(long long a1, void *a2);
long long std_Tuple_impl_0ul_int_lambda_M_head(long long a1);
long long std_Tuple_impl_1ul_lambda_M_head(long long a1);
long long std_tuple_int_lambda_ctor(long long a1, long long a2, long long a3);
long long std_Tuple_impl_0ul_int_default_delete_int_M_head(long long a1);
long long std_Tuple_impl_1ul_default_delete_int_M_head(long long a1);
long long std_Tuple_impl_0ul_int_default_delete_int_array_M_head(long long a1);
long long std_Tuple_impl_1ul_default_delete_int_array_M_head(long long a1);
long long std_Head_base_0ul_int_false_M_head(long long a1);
long long std_Head_base_1ul_lambda_true_M_head(long long a1);
long long std_Head_base_1ul_default_delete_int_true_M_head(long long a1);
long long std_Head_base_1ul_default_delete_int_array_true_M_head(long long a1);
long long std_Head_base_0ul_int_false_M_head_const(long long a1);
long long std_Tuple_impl_0ul_int_lambda_M_head_const(long long a1);
long long std_Tuple_impl_0ul_int_default_delete_int_M_head_const(long long a1);
long long std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const(long long a1);
long long std_get_helper_0ul_int_lambda(long long a1);
long long std_get_helper_1ul_lambda(long long a1);
long long std_get_helper_0ul_int_lambda_const(long long a1);
long long std___get_helper_0ul_int_default_delete_int(long long a1);
long long std___get_helper_1ul_default_delete_int(long long a1);
long long std___get_helper_0ul_int_default_delete_int_const(long long a1);
long long std___get_helper_0ul_int_default_delete_int_array(long long a1);
long long std___get_helper_1ul_default_delete_int_array(long long a1);
long long std___get_helper_0ul_int_default_delete_int_array_const(long long a1);
long long std_forward_lambda_const(long long a1);
long long std_move_unique_ptr_int(long long a1);
long long std_move_tuple_int_default_delete_int(long long a1);
long long std_tuple_int_default_delete_int_tuple(unsigned long long *a1, unsigned long long *a2);
long long std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl(long long a1);
long long std_Tuple_impl_1ul_default_delete_int_Tuple_impl(long long a1);
long long std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl(long long a1);
long long std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl(long long a1);
long long std_Head_base_0ul_int_false_Head_base(unsigned long long *a1);
long long std_Head_base_1ul_default_delete_int_true_Head_base(long long a1);
long long std_Head_base_1ul_default_delete_int_array_true_Head_base(long long a1);
long long std_Head_base_0ul_int_false_Head_base_int_ptr(unsigned long long *a1, long long a2);
long long std_tuple_int_default_delete_int_ctor_true_true(long long a1);
long long std_tuple_int_default_delete_int_array_ctor_true_true(long long a1);
long long std_uniq_ptr_impl_int_default_delete_int_ctor(unsigned long long *a1, long long a2);
long long std_uniq_ptr_impl_int_default_delete_int_ctor_Pi(long long a1, long long a2);
long long std_uniq_ptr_impl_int_default_delete_int_array_ctor_Pi(long long a1, long long a2);
long long std_uniq_ptr_data_int_default_delete_int_true_true_ctor(long long a1, long long a2);
long long std_unique_ptr_int_ctor(long long a1, long long a2);
long long std_unique_ptr_int_unique_ptr_S1_v_Pi(long long a1, long long a2);
long long std_unique_ptr_int_array_unique_ptr(long long a1, long long a2);
unsigned long long *std_unique_ptr_int_destructor(long long a1);
unsigned long long *std_unique_ptr_int_array_destructor(long long a1);
long long std_unique_ptr_int_deref(long long a1);
long long std_unique_ptr_int_array_get(long long a1, long long a2);
long long std_Tuple_impl_0ul_int_lambda_ctor(long long a1, long long a2, long long a3);
long long std_Tuple_impl_1ul_lambda_ctor(long long a1, long long a2);
long long std_Head_base_1ul_lambda_true_ctor(long long a1, long long a2);
long long std_uniq_ptr_impl_int_lambda_ctor(long long a1, long long a2, long long a3);
long long std_unique_ptr_int_lambda_unique_ptr(long long a1, long long a2, long long a3);
unsigned long long *std_unique_ptr_int_lambda_destructor(long long a1);
long long std_unique_ptr_int_lambda_deref(long long a1);
long long std_unique_ptr_int_lambda_get_deleter(long long a1);
long long std_unique_ptr_int_lambda_get(long long a1);
long long std_get_0ul_int_lambda_const(long long a1);
long long std_uniq_ptr_impl_int_lambda_M_ptr_const(long long a1);
long long std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(long long a1);
long long std_uniq_ptr_impl_int_default_delete_int_array_M_ptr_const(long long a1);

/* Struct definitions */
struct SimpleClass { unsigned int value; char name[32]; };
struct LifecycleClass { unsigned long long *data; unsigned long long size; };
struct Point { unsigned int x; unsigned int y; };
struct Base { unsigned long long vtable; };
struct Derived { unsigned long long vtable; unsigned int value; };
struct BaseA { unsigned long long vtable; };
struct BaseB { unsigned long long vtable; };
struct MultiDerived { unsigned long long vtable; unsigned long long vtable2; BaseA baseA; BaseB baseB; };
struct VirtualBase { unsigned long long vtable; };
struct MiddleA { unsigned long long vtable; unsigned long long offset; };
struct MiddleB { unsigned long long vtable; unsigned long long offset; };
struct DiamondDerived { unsigned long long vtable; unsigned long long vtable2; unsigned long long vtable3; MiddleA middleA; MiddleB middleB; VirtualBase virtualBase; };
struct RTTIBase { unsigned long long vtable; };
struct RTTIDerivedA { unsigned long long vtable; };
struct RTTIDerivedB { unsigned long long vtable; };

/* External variables for vtables and typeinfo */
extern unsigned long long off_8B50;
extern unsigned long long off_8B20;
extern unsigned long long off_8AF8;
extern unsigned long long off_8AD0;
extern unsigned long long off_8A78;
extern unsigned long long off_8AA8;
extern unsigned long long off_8A50;
extern unsigned long long off_8940;
extern unsigned long long off_8950;
extern unsigned long long off_88B8;
extern unsigned long long off_8920;
extern unsigned long long off_88E8;
extern unsigned long long off_8888;
extern unsigned long long off_8860;
extern unsigned long long off_8838;
extern unsigned long long *typeinfo_for_int;
extern unsigned long long *typeinfo_for_RTTIDerivedA;
extern unsigned long long *typeinfo_for_RTTIDerivedB;
extern unsigned long long *typeinfo_for_RTTIBase;
extern unsigned long long std___ioinit;
extern void *_dso_handle;
extern long long (*_gmon_start__)(void);

/* std::type_info forward declaration */
typedef struct type_info type_info;
struct type_info { unsigned long long vtable; const char *name; };

/* Macro definitions */
#define LODWORD(x) ((unsigned int)(x))
#define HIDWORD(x) ((unsigned int)((x) >> 32))
#define JUMPOUT(x) do { } while(0)

/* Function: .init_proc @ 0x2000 */
long long init_proc(void)
{
 long long result; // rax

 if ( &_gmon_start__ )
 result = ((long long (*)(void))_gmon_start__)();
 else
 result = (long long)&_gmon_start__;
 return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
 JUMPOUT(0);
}


/* Function: sub_2030 @ 0x2030 */
void sub_2030()
{
 sub_2020();
}


/* Function: sub_2040 @ 0x2040 */
void sub_2040()
{
 sub_2020();
}


/* Function: sub_2050 @ 0x2050 */
void sub_2050()
{
 sub_2020();
}


/* Function: sub_2060 @ 0x2060 */
void sub_2060()
{
 sub_2020();
}


/* Function: sub_2070 @ 0x2070 */
void sub_2070()
{
 sub_2020();
}


/* Function: sub_2080 @ 0x2080 */
void sub_2080()
{
 sub_2020();
}


/* Function: sub_2090 @ 0x2090 */
void sub_2090()
{
 sub_2020();
}


/* Function: sub_20A0 @ 0x20A0 */
void sub_20A0()
{
 sub_2020();
}


/* Function: sub_20B0 @ 0x20B0 */
void sub_20B0()
{
 sub_2020();
}


/* Function: sub_20C0 @ 0x20C0 */
void sub_20C0()
{
 sub_2020();
}


/* Function: sub_20D0 @ 0x20D0 */
void sub_20D0()
{
 sub_2020();
}


/* Function: sub_20E0 @ 0x20E0 */
void sub_20E0()
{
 sub_2020();
}


/* Function: sub_20F0 @ 0x20F0 */
void sub_20F0()
{
 sub_2020();
}


/* Function: sub_2100 @ 0x2100 */
void sub_2100()
{
 sub_2020();
}


/* Function: sub_2110 @ 0x2110 */
void sub_2110()
{
 sub_2020();
}


/* Function: sub_2120 @ 0x2120 */
void sub_2120()
{
 sub_2020();
}


/* Function: sub_2130 @ 0x2130 */
void sub_2130()
{
 sub_2020();
}


/* Function: sub_2140 @ 0x2140 */
void sub_2140()
{
 sub_2020();
}


/* Function: sub_2150 @ 0x2150 */
void sub_2150()
{
 sub_2020();
}


/* Function: sub_2160 @ 0x2160 */
void sub_2160()
{
 sub_2020();
}


/* Function: sub_2170 @ 0x2170 */
void sub_2170()
{
 sub_2020();
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: _Z20test_cpp_member_funcv @ 0x23CA */
long long test_cpp_member_func(void)
{
 int Value; // [rsp+4h] [rbp-3Ch]
 int v2; // [rsp+8h] [rbp-38h]
 unsigned char v3[40]; // [rsp+10h] [rbp-30h] BYREF
 unsigned long long v4; // [rsp+38h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 SimpleClass_SimpleClass((long long)v3, 5, "Test");
 SimpleClass_setValue((long long)v3, 10);
 Value = SimpleClass_getValue((long long)v3);
 v2 = SimpleClass_compute((long long)v3, 3);
 return v2 + Value + (unsigned int)SimpleClass_getClassID((long long)v3);
}


/* Function: _Z20test_cpp_constructorv @ 0x245C */
long long test_cpp_constructor(void)
{
 int Data; // [rsp+Ch] [rbp-24h]
 int v2; // [rsp+Ch] [rbp-24h]
 unsigned char v3[24]; // [rsp+10h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 LifecycleClass_LifecycleClass((long long)v3, 5u);
 Data = LifecycleClass_getData((long long)v3, 2u);
 v2 = LifecycleClass_getInstanceCount((long long)v3) + Data;
 LifecycleClass_destructor((long long)v3);
 return 1000 * (unsigned int)LifecycleClass_getInstanceCount((long long)v3) + v2;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x24DE */
long long call_virtual_func(Base *a1, unsigned int a2)
{
 return (**(long long ( ***)(Base *, unsigned long long))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x250B */
long long test_cpp_virtual_func(void)
{
 unsigned int v0; // ebx
 int v2; // [rsp+8h] [rbp-58h]
 int v3; // [rsp+Ch] [rbp-54h]
 int v4; // [rsp+10h] [rbp-50h]
 unsigned long long v5[2]; // [rsp+18h] [rbp-48h] BYREF
 Base *v6; // [rsp+28h] [rbp-38h]
 unsigned char v7[24]; // [rsp+30h] [rbp-30h] BYREF
 unsigned long long v8; // [rsp+48h] [rbp-18h]

 v8 = __readfsqword(0x28u);
 v5[0] = (unsigned long long)&off_8B50;
 Derived_Derived(v7, 3);
 v2 = Base_virtual_func(v5, 5);
 v3 = Derived_virtual_func((long long)v7, 5);
 v5[1] = v5[0];
 v6 = (Base *)v7;
 v4 = call_virtual_func(v6, 5u);
 v0 = v4 + v3 + v2 + call_virtual_func(v6, 5u);
 Derived_destructor((Derived *)v7);
 Base_destructor(v5);
 return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2616 */
long long test_cpp_multiple_inheritance(void)
{
 unsigned int v0; // ebx
 int v2; // [rsp+4h] [rbp-5Ch]
 long long ( **v3)(unsigned long long); // [rsp+20h] [rbp-40h] BYREF
 int v4; // [rsp+28h] [rbp-38h]
 long long ( **v5)(unsigned long long); // [rsp+30h] [rbp-30h] BYREF
 int v6; // [rsp+38h] [rbp-28h]
 unsigned long long v7; // [rsp+48h] [rbp-18h]

 v7 = __readfsqword(0x28u);
 MultiDerived_MultiDerived((long long)&v3);
 v4 = 100;
 v6 = 200;
 v2 = MultiDerived_funcA((long long)(unsigned long long *)&v3);
 v0 = MultiDerived_funcB((long long)(unsigned long long *)&v5) + v2 + (&v3 != &v5);
 MultiDerived_destructor((MultiDerived *)&v3);
 return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x26F3 */
long long test_cpp_diamond_inheritance(void)
{
 unsigned int v0; // ebx
 int v2; // [rsp+0h] [rbp-60h]
 unsigned char v3[32]; // [rsp+10h] [rbp-50h] BYREF
 long long ( **v4)(unsigned long long); // [rsp+30h] [rbp-30h] BYREF
 int v5; // [rsp+38h] [rbp-28h]
 unsigned long long v6; // [rsp+48h] [rbp-18h]

 v6 = __readfsqword(0x28u);
 DiamondDerived_DiamondDerived((long long)v3);
 v5 = 50;
 v2 = DiamondDerived_func((long long)(unsigned long long *)&v4);
 v5 = 100;
 v0 = v2 + DiamondDerived_func((long long)(unsigned long long *)&v4);
 DiamondDerived_destructor((DiamondDerived *)v3);
 return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x27B2 */
long long test_cpp_operator_overload(void)
{
 int v0; // edx
 char v2; // [rsp+Fh] [rbp-21h]
 unsigned char v3[8]; // [rsp+10h] [rbp-20h] BYREF
 unsigned char v4[8]; // [rsp+18h] [rbp-18h] BYREF
 unsigned long long v5[2]; // [rsp+20h] [rbp-10h] BYREF

 v5[1] = __readfsqword(0x28u);
 Point_Point((long long)v3, 1, 2);
 Point_Point((long long)v4, 3, 4);
 v5[0] = Point_operator_plus((long long)v3, (long long)v4);
 v2 = Point_operator_eq((long long)v3, (long long)v4);
 Point_operator_inc((long long)v5);
 if ( v2 )
 v0 = 0;
 else
 v0 = 10;
 return (unsigned int)(v0 + LODWORD(v5[0]) + HIDWORD(v5[0]));
}


/* Function: _Z22test_cpp_template_funcv @ 0x2864 */
long long test_cpp_template_func(void)
{
 int v1; // [rsp+4h] [rbp-1Ch] BYREF
 int v2; // [rsp+8h] [rbp-18h] BYREF
 int v3; // [rsp+Ch] [rbp-14h]
 double v4; // [rsp+10h] [rbp-10h]
 unsigned long long v5; // [rsp+18h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 v3 = template_max_int(3, 7);
 v4 = template_max_double(2.5, 1.5);
 v1 = 10;
 v2 = 20;
 template_swap_int(&v1, &v2);
 return (unsigned int)(v1 + v3 + (int)v4 + v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x2906 */
long long test_cpp_template_class(void)
{
 int v1; // [rsp+0h] [rbp-A0h]
 int Size; // [rsp+4h] [rbp-9Ch]
 unsigned char v3[48]; // [rsp+10h] [rbp-90h] BYREF
 unsigned char v4[88]; // [rsp+40h] [rbp-60h] BYREF
 unsigned long long v5; // [rsp+98h] [rbp-8h]

 v5 = __readfsqword(0x28u);
 Container_int_Container(v3);
 Container_int_push(v3, 10);
 Container_int_push(v3, 20);
 Container_int_push(v3, 30);
 v1 = Container_int_get(v3, 0);
 Size = Container_int_getSize(v3);
 Container_double_Container(v4);
 Container_double_push(v4, 3.14);
 return (unsigned int)(Size + v1 + (int)Container_double_get(v4, 0));
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x2A12 */
long long lambda_test_cpp_lambda_operator(long long a1, int a2)
{
 *(unsigned int *)(a1 + 8) += 5;
 return (unsigned int)(a2 * *(unsigned int *)a1 + *(unsigned int *)(a1 + 8));
}


/* Function: _Z15test_cpp_lambdav @ 0x2A4E */
long long test_cpp_lambda(void)
{
 unsigned int v1[2]; // [rsp+0h] [rbp-30h] BYREF
 int v2; // [rsp+10h] [rbp-20h] BYREF
 unsigned int *v3; // [rsp+18h] [rbp-18h]
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 v1[1] = 10;
 v1[0] = 20;
 v2 = 10;
 v3 = v1;
 return (unsigned int)lambda_test_cpp_lambda_operator((long long)v3, 3) + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2ABE */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)typeinfo_for_int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x2BE4 */
void lambda_test_cpp_smart_ptr_operator(long long a1, unsigned int *a2)
{
 *a2 = -1;
 if ( a2 )
 operator delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2C17 */
long long test_cpp_smart_ptr(void)
{
 unsigned int *v0; // rax
 long long v1; // rax
 unsigned int *v2; // rdx
 unsigned int *v3; // rax
 unsigned int v4; // ebx
 long long v6; // [rsp+Bh] [rbp-45h]
 int v7; // [rsp+Ch] [rbp-44h]
 int v8; // [rsp+10h] [rbp-40h]
 int v9; // [rsp+14h] [rbp-3Ch]
 unsigned long long v10[2]; // [rsp+18h] [rbp-38h] BYREF
 unsigned long long v11[2]; // [rsp+20h] [rbp-30h] BYREF
 unsigned long long v12[2]; // [rsp+28h] [rbp-28h] BYREF
 unsigned long long v13[2]; // [rsp+30h] [rbp-20h] BYREF
 unsigned long long v14; // [rsp+38h] [rbp-18h]

 v14 = __readfsqword(0x28u);
 v0 = (unsigned int *)operator new(4u);
 *v0 = 100;
 std_unique_ptr_int_unique_ptr(v10, (long long)v0);
 *(unsigned int *)std_unique_ptr_int_deref((long long)v10) = 200;
 v1 = std_move_unique_ptr_int((long long)v10);
 std_unique_ptr_int_unique_ptr((long long)v11, v1);
 v7 = *(unsigned int *)std_unique_ptr_int_deref((long long)v11);
 v2 = (unsigned int *)operator_new_array(0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array_unique_ptr(v12, (long long)v2);
 v8 = *(unsigned int *)std_unique_ptr_int_array_get((long long)v12, 2);
 v3 = (unsigned int *)operator new(4u);
 *v3 = 500;
 std_unique_ptr_int_lambda_unique_ptr(v13, (long long)v3, (long long)&v6);
 v9 = *(unsigned int *)std_unique_ptr_int_lambda_deref((long long)v13);
 v4 = v8 + v7 + v9;
 std_unique_ptr_int_lambda_destructor(v13);
 std_unique_ptr_int_array_destructor(v12);
 std_unique_ptr_int_destructor(v11);
 std_unique_ptr_int_destructor(v10);
 return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x2DC5 */
long long test_cpp_rtti(void)
{
 RTTIDerivedA *v0; // rbx
 RTTIDerivedB *v1; // rbx
 RTTIDerivedA *v2; // rax
 RTTIDerivedB *v3; // rax
 const char *v4; // rax
 int v6; // [rsp+Ch] [rbp-34h]
 unsigned int v7; // [rsp+Ch] [rbp-34h]
 RTTIDerivedA *lpsrc; // [rsp+10h] [rbp-30h]

 v0 = (RTTIDerivedA *)operator new(8u);
 *(unsigned long long *)v0 = 0;
 RTTIDerivedA_RTTIDerivedA(v0);
 lpsrc = v0;
 v1 = (RTTIDerivedB *)operator new(8u);
 *(unsigned long long *)v1 = 0;
 RTTIDerivedB_RTTIDerivedB(v1);
 v6 = 0;
 if ( !lpsrc )
 __cxa_bad_typeid();
 if ( (unsigned char)std_type_info_operator_eq(*(unsigned long long *)(*(unsigned long long *)lpsrc - 8LL), (long long)typeinfo_for_RTTIDerivedA) )
  v6 = 10;
 if ( !v1 )
  __cxa_bad_typeid();
 if ( (unsigned char)std_type_info_operator_eq(*(unsigned long long *)(*(unsigned long long *)v1 - 8LL), (long long)typeinfo_for_RTTIDerivedB) )
  v6 += 20;
 v2 = (RTTIDerivedA *)__dynamic_cast(
  (void *)lpsrc,
  (void *)typeinfo_for_RTTIBase,
  (void *)typeinfo_for_RTTIDerivedA,
  0);
 if ( v2 )
  v6 += RTTIDerivedA_derivedA_data(v2);
 v3 = (RTTIDerivedB *)__dynamic_cast(
  (void *)v1,
  (void *)typeinfo_for_RTTIBase,
  (void *)typeinfo_for_RTTIDerivedB,
  0);
 if ( v3 )
  v6 += RTTIDerivedB_derivedB_data(v3);
 v4 = (const char *)std_type_info_name(*(unsigned long long *)(*(unsigned long long *)lpsrc - 8LL));
 v7 = strlen(v4) + v6;
 RTTIDerivedA_destructor(lpsrc);
 RTTIDerivedB_destructor(v1);
 return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F6F */
void test_cpp_oo_features(void)
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax

 puts("Testing C++ OO features");
 v0 = test_cpp_member_func();
 printf("C++ L301: %d\n", v0);
 v1 = test_cpp_constructor();
 printf("C++ L302: %d\n", v1);
 v2 = test_cpp_virtual_func();
 printf("C++ L303: %d\n", v2);
 v3 = test_cpp_multiple_inheritance();
 printf("C++ L304: %d\n", v3);
 v4 = test_cpp_diamond_inheritance();
 printf("C++ L305: %d\n", v4);
 v5 = test_cpp_operator_overload();
 printf("C++ L306: %d\n", v5);
 v6 = test_cpp_template_func();
 printf("C++ L307: %d\n", v6);
 v7 = test_cpp_template_class();
 printf("C++ L308: %d\n", v7);
 v8 = test_cpp_lambda();
 printf("C++ L309: %d\n", v8);
 test_cpp_exception();
}


/* Function: main @ 0x30CD */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x30E2 */
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 unsigned long long *a1,
 unsigned long long a2,
 unsigned long long a3)
{
 return std_uniq_ptr_impl_int_lambda_ctor(
 (long long)a1,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x3110 */
long long std_unique_ptr_int_lambda_unique_ptr(
 unsigned long long *a1,
 unsigned long long a2,
 unsigned long long a3)
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x313E */
unsigned long long * std_unique_ptr_int_lambda_destructor(long long a1)
{
 long long deleter; // rbx
 unsigned int **v2; // rax
 unsigned long long *result; // rax
 unsigned long long *v4; // [rsp+18h] [rbp-18h]

 v4 = (unsigned long long *)std_uniq_ptr_impl_int_lambda_M_ptr(a1);
 if ( *(unsigned long long *)v4 )
 {
 deleter = std_unique_ptr_int_lambda_get_deleter(a1);
 v2 = (unsigned int **)std_move_int_ptr((long long)v4);
 lambda_test_cpp_smart_ptr_operator(deleter, *v2);
 }
 result = (unsigned long long *)v4;
 *(unsigned long long *)v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x31A2 */
long long std_unique_ptr_int_lambda_deref(long long a1)
{
 return std_unique_ptr_int_lambda_get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x31C4 */
long long std_uniq_ptr_impl_int_lambda_ctor(
 unsigned long long *a1,
 unsigned long long a2,
 unsigned long long a3)
{
 long long v3; // rax
 unsigned long long v5[3]; // [rsp+10h] [rbp-20h] BYREF

 v5[1] = (unsigned long long)a1;
 v5[0] = a2;
 v3 = std_forward_lambda_const(a3);
 return std_tuple_int_lambda_ctor(
 (long long)v5,
 v3);
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x325E */
long long std_tuple_int_lambda_ctor(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // r12
 long long v4; // rax

 v3 = std_forward_lambda_const(a3);
 v4 = std_forward_int_ptr(a2);
 return std_Tuple_impl_0ul_int_lambda_ctor(
 a1,
 v4,
 v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x3202 */
long long std_uniq_ptr_impl_int_lambda_M_ptr(long long a1)
{
 return std_get_0ul_int_lambda(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x321C */
long long std_unique_ptr_int_lambda_get_deleter(long long a1)
{
 return std_uniq_ptr_impl_int_lambda_M_deleter(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x3236 */
long long std_unique_ptr_int_lambda_get(long long a1)
{
 return std_uniq_ptr_impl_int_lambda_M_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x3250 */
long long std_forward_lambda_const(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x325E */
long long std_tuple_int_lambda_ctor(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // r12
 long long v4; // rax

 v3 = std_forward_lambda_const(a3);
 v4 = std_forward_int_ptr(a2);
 return std_Tuple_impl_0ul_int_lambda_ctor(
 a1,
 v4,
 v3);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32AC */
long long std_get_0ul_int_lambda(long long a1)
{
 return std_get_helper_0ul_int_lambda(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x32C6 */
long long std_uniq_ptr_impl_int_lambda_M_deleter(long long a1)
{
 return std_get_1ul_lambda(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x32E0 */
long long std_uniq_ptr_impl_int_lambda_M_ptr_const(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_lambda(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x32FE */
long long std_Tuple_impl_0ul_int_lambda_ctor(
 unsigned long long *a1,
 unsigned long long a2,
 unsigned long long a3)
{
 long long v3; // rax
 long long v4; // rax

 v3 = std_forward_lambda_const(a3);
 std_Tuple_impl_1ul_lambda_ctor((long long)a1, v3);
 v4 = std_forward_int_ptr(a2);
 return std_Head_base_0ul_int_ptr_ctor((long long)a1, v4);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3353 */
long long std_get_helper_0ul_int_lambda(long long a1)
{
 return std_Tuple_impl_0ul_int_lambda_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x336D */
long long std_get_1ul_int_lambda(long long a1)
{
 return std_get_helper_1ul_lambda(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x3387 */
long long std_get_0ul_int_lambda_const(long long a1)
{
 return std_get_helper_0ul_int_lambda_const(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x33A2 */
long long std_Tuple_impl_1ul_lambda_ctor(
 unsigned long long *a1,
 unsigned long long a2)
{
 return std_Head_base_1ul_lambda_true_ctor((long long)a1, a2);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x33C8 */
long long std_Tuple_impl_0ul_int_lambda_M_head(long long a1)
{
 return std_Head_base_0ul_int_false_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33E2 */
long long std_get_helper_1ul_lambda(long long a1)
{
 return std_Tuple_impl_1ul_lambda_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33FC */
long long std_get_helper_0ul_int_lambda_const(long long a1)
{
 return std_Tuple_impl_0ul_int_lambda_M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x3416 */
void std_Head_base_1ul_lambda_true_ctor(unsigned long long *a1, unsigned long long a2)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x3425 */
long long std_Tuple_impl_1ul_lambda_M_head(long long a1)
{
 return std_Head_base_1ul_lambda_true_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x343F */
long long std_Tuple_impl_0ul_int_lambda_M_head_const(long long a1)
{
 return std_Head_base_0ul_int_false_M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x3459 */
long long std_Head_base_1ul_lambda_true_M_head(long long a1)
{
 return a1;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x3467 */
int __static_initialization_and_destruction_0(int a1, int a2)
{
 int result; // eax

 if ( a1 == 1 && a2 == 0xFFFF )
 {
 return __cxa_atexit((void (*)(void *))0, (void *)&std___ioinit, &_dso_handle);
 }
 return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x34BD */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x34D6 */
long long std_type_info_name(long long a1)
{
 if ( **((unsigned char **)a1 + 1) == 42 )
 return (long long)(*((unsigned long long *)a1 + 1) + 1LL);
 else
 return (long long)*((unsigned long long *)a1 + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x350A */
long long std_type_info_operator_eq(long long a1, long long a2)
{
 return *(unsigned long long *)(a1 + 8) == *(unsigned long long *)(a2 + 8)
 || **(unsigned char **)(a1 + 8) != 42 && !strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3570 */
void SimpleClass_SimpleClass(long long a1, int a2, const char *a3)
{
 *(unsigned int *)a1 = a2;
 strncpy((char *)a1 + 4, a3, 0x1Fu);
 *((unsigned char *)a1 + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x35B8 */
long long SimpleClass_getValue(long long a1)
{
 return *(unsigned int *)a1;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x35CC */
long long SimpleClass_setValue(long long a1, int a2)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)a1 = a2;
 return result;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x35E8 */
long long SimpleClass_compute(long long a1, int a2)
{
 int v2; // ebx

 v2 = a2 * *(unsigned int *)a1;
 return v2 + (unsigned int)strlen((const char *)a1 + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3620 */
long long SimpleClass_getClassID(long long a1)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3630 */
void LifecycleClass_LifecycleClass(long long a1, unsigned long long a2)
{
 unsigned long long i; // [rsp+18h] [rbp-8h]

 *((unsigned long long *)a1 + 1) = a2;
 if ( a2 > 0x1FFFFFFFFFFFFFFELL )
 __cxa_throw_bad_array_new_length();
 *(unsigned long long *)a1 = (unsigned long long)operator_new_array(4 * a2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned long long *)a1 + 4 * i) = 10 * i;
 ++LifecycleClass_instance_count;
}

/* Global variable declaration */
unsigned int LifecycleClass_instance_count = 0;


/* Function: _ZN14LifecycleClassD2Ev @ 0x36D0 */
void LifecycleClass_destructor(long long a1)
{
 if ( *(unsigned long long *)a1 )
 operator_delete_array((void *)(unsigned long long *)(*(unsigned long long *)a1));
 --LifecycleClass_instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x370E */
long long LifecycleClass_getData(long long a1, unsigned long long a2)
{
 if ( a2 >= *((unsigned long long *)a1 + 1) )
 return 0xFFFFFFFFLL;
 else
 return (long long)*(unsigned int *)(*(unsigned long long *)a1 + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3749 */
long long LifecycleClass_getInstanceCount(long long a1)
{
 return (long long)(unsigned int)LifecycleClass_instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x375A */
long long Base_virtual_func(long long a1, int a2)
{
 return (long long)(unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3772 */
long long Base_getName(long long a1)
{
 return (long long)"Base";
}


/* Function: _ZN4BaseD2Ev @ 0x3788 */
void Base_destructor(long long a1)
{
 *(unsigned long long *)a1 = (unsigned long long)&off_8B50;
}


/* Function: _ZN4BaseD0Ev @ 0x37A6 */
void Base_destructorDeleting(long long a1)
{
 Base_destructor(a1);
 operator_delete((void *)a1, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x37D6 */
void Base_Base(long long a1)
{
 *(unsigned long long *)a1 = (unsigned long long)&off_8B50;
}


/* Function: _ZN7DerivedC2Ei @ 0x37F4 */
void Derived_Derived(long long a1, int a2)
{
 Base_Base(a1);
 *(unsigned long long *)a1 = (unsigned long long)&off_8B20;
 *((unsigned int *)a1 + 2) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x382E */
long long Derived_virtual_func(long long a1, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)a1 + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x384A */
long long Derived_getName(long long a1)
{
 return (long long)"Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3860 */
long long BaseA_funcA(long long a1)
{
 return (long long)10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3874 */
void BaseA_destructor(long long a1)
{
 *(unsigned long long *)a1 = (unsigned long long)&off_8AF8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3892 */
void BaseA_destructorDeleting(long long a1)
{
 BaseA_destructor(a1);
 operator_delete((void *)a1, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38C2 */
long long BaseB_funcB(long long a1)
{
 return (long long)20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38D6 */
void BaseB_destructor(long long a1)
{
 *(unsigned long long *)a1 = (unsigned long long)&off_8AD0;
}


/* Function: _ZN5BaseBD0Ev @ 0x38F4 */
void BaseB_destructorDeleting(long long a1)
{
 BaseB_destructor(a1);
 operator_delete((void *)a1, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3924 */
long long MultiDerived_funcA(long long a1)
{
 return (long long)30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3938 */
long long MultiDerived_funcB(long long a1)
{
 return (long long)40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x394B */
long long non_virtual_thunk_MultiDerived_funcB(long long a1)
{
 return (long long)MultiDerived_funcB(a1 - 16);
}


/* Function: _ZN5BaseAC2Ev @ 0x3956 */
void BaseA_BaseA(long long a1)
{
 *(unsigned long long *)a1 = (unsigned long long)&off_8AF8;
}


/* Function: _ZN5BaseBC2Ev @ 0x3974 */
void BaseB_BaseB(long long a1)
{
 *(unsigned long long *)a1 = (unsigned long long)&off_8AD0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3992 */
void MultiDerived_MultiDerived(long long a1)
{
 BaseA_BaseA(a1);
 BaseB_BaseB(a1 + 16);
 *(unsigned long long *)a1 = (unsigned long long)&off_8A78;
 *((unsigned long long *)a1 + 2) = (unsigned long long)&off_8AA8;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x39DE */
long long VirtualBase_func(long long a1)
{
 return (long long)100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x39F2 */
void VirtualBase_destructor(long long a1)
{
 *(unsigned long long *)a1 = (unsigned long long)&off_8A50;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3A10 */
void VirtualBase_destructorDeleting(long long a1)
{
 VirtualBase_destructor(a1);
 operator_delete((void *)a1, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x3A40 */
long long MiddleA_func(long long a1)
{
 unsigned long long vtable = *(unsigned long long *)a1;
 unsigned long long offset = *(unsigned long long *)(vtable - 24LL);
 unsigned int *ptr = (unsigned int *)((char *)a1 + (long long)offset + 8);
 return (long long)(unsigned int)(*ptr + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3A6E */
long long virtual_thunk_MiddleA_func(long long a1)
{
 return (long long)MiddleA_func(a1 + *(unsigned long long *)(*(unsigned long long *)a1 - 24LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3A7C */
long long MiddleB_func(long long a1)
{
 unsigned long long vtable = *(unsigned long long *)a1;
 unsigned long long offset = *(unsigned long long *)(vtable - 24LL);
 unsigned int *ptr = (unsigned int *)((char *)a1 + (long long)offset + 8);
 return (long long)(unsigned int)(*ptr + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3AAA */
long long virtual_thunk_MiddleB_func(long long a1)
{
 return (long long)MiddleB_func(a1 + *(unsigned long long *)(*(unsigned long long *)a1 - 24LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3AB8 */
long long DiamondDerived_func(long long a1)
{
 unsigned long long vtable = *(unsigned long long *)a1;
 unsigned long long offset = *(unsigned long long *)(vtable - 24LL);
 unsigned int *ptr = (unsigned int *)((char *)a1 + (long long)offset + 8);
 return (long long)(unsigned int)(*ptr + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x3AE6 */
long long virtual_thunk_DiamondDerived_func(long long a1)
{
 return (long long)DiamondDerived_func(a1 + *(unsigned long long *)(*(unsigned long long *)a1 - 24LL));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x3AF3 */
long long non_virtual_thunk_DiamondDerived_func(long long a1)
{
 return (long long)DiamondDerived_func(a1 - 16);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3AFE */
void VirtualBase_VirtualBase(long long a1)
{
 *(unsigned long long *)a1 = (unsigned long long)&off_8A50;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3B1C */
void MiddleA_MiddleA(long long a1, unsigned long long *a2)
{
 unsigned long long vtable = *(unsigned long long *)a1;
 unsigned long long offset = *(unsigned long long *)(vtable - 24LL);
 *(unsigned long long *)a1 = *(unsigned long long *)a2;
 *(unsigned long long *)((char *)a1 + offset) = *(unsigned long long *)((char *)a2 + 8);
}


/* Function: _ZN7MiddleAD2Ev @ 0x3B60 */
void MiddleA_destructor(long long a1, unsigned long long *a2)
{
 unsigned long long vtable = *(unsigned long long *)a1;
 unsigned long long offset = *(unsigned long long *)(vtable - 24LL);
 *(unsigned long long *)a1 = *(unsigned long long *)a2;
 *(unsigned long long *)((char *)a1 + offset) = *(unsigned long long *)((char *)a2 + 8);
}


/* Function: _ZN7MiddleBC2Ev @ 0x3BA4 */
void MiddleB_MiddleB(long long a1, unsigned long long *a2)
{
 unsigned long long vtable = *(unsigned long long *)a1;
 unsigned long long offset = *(unsigned long long *)(vtable - 24LL);
 *(unsigned long long *)a1 = *(unsigned long long *)a2;
 *(unsigned long long *)((char *)a1 + offset) = *(unsigned long long *)((char *)a2 + 8);
}


/* Function: _ZN7MiddleBD2Ev @ 0x3BE8 */
void MiddleB_destructor(long long a1, unsigned long long *a2)
{
 unsigned long long vtable = *(unsigned long long *)a1;
 unsigned long long offset = *(unsigned long long *)(vtable - 24LL);
 *(unsigned long long *)a1 = *(unsigned long long *)a2;
 *(unsigned long long *)((char *)a1 + offset) = *(unsigned long long *)((char *)a2 + 8);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3C2C */
void DiamondDerived_DiamondDerived(long long a1)
{
 VirtualBase_VirtualBase(a1 + 32);
 MiddleA_MiddleA(a1, &off_8940);
 MiddleB_MiddleB(a1 + 16, &off_8950);
 *(unsigned long long *)a1 = (unsigned long long)&off_88B8;
 *((unsigned long long *)a1 + 4) = (unsigned long long)&off_8920;
 *((unsigned long long *)a1 + 2) = (unsigned long long)&off_88E8;
}


/* Function: _ZN5PointC2Eii @ 0x3CAE */
void Point_Point(long long a1, int a2, int a3)
{
 *(unsigned int *)a1 = a2;
 *((unsigned int *)a1 + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3CD6 */
long long Point_operator_plus(long long a1, long long a2)
{
 unsigned long long v3[2]; // [rsp+10h] [rbp-10h] BYREF

 v3[1] = __readfsqword(0x28u);
 Point_Point((long long)v3, *(unsigned int *)a2 + *(unsigned int *)a1, ((unsigned int *)a2)[1] + ((unsigned int *)a1)[1]);
 return (long long)v3[0];
}


/* Function: _ZNK5PointeqERKS_ @ 0x3D40 */
long long Point_operator_eq(long long a1, long long a2)
{
 return (long long)(*(unsigned int *)a1 == *(unsigned int *)a2 && ((unsigned int *)a1)[1] == ((unsigned int *)a2)[1]);
}


/* Function: _ZN5PointppEv @ 0x3D80 */
long long Point_operator_inc(long long a1)
{
 ++*(unsigned int *)a1;
 ++((unsigned int *)a1)[1];
 return (long long)a1;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3DB2 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 if ( (int)a1 <= (int)a2 )
 return (long long)a2;
 else
 return (long long)a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3DD2 */
long long template_max_double(double a1, double a2)
{
 if ( a1 <= a2 )
 a1 = a2;
 return (long long)*(unsigned long long *)&a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3E08 */
int * template_swap_int(int *a1, int *a2)
{
 int *result; // rax
 int v3; // [rsp+1Ch] [rbp-4h]

 v3 = *a1;
 *a1 = *a2;
 result = a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3E3A */
long long Container_int_Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return (long long)result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3E54 */
long long Container_int_push(long long a1, int a2)
{
 long long result; // rax

 result = (long long)*(unsigned int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 result = (long long)*(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = (unsigned int)(result + 1);
 result = (long long)(int)result;
 *(unsigned int *)(a1 + 4LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3E90 */
long long Container_int_get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return (long long)*(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3EC8 */
long long Container_int_getSize(long long a1)
{
 return (long long)*(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3EDE */
long long Container_double_Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return (long long)result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3EF8 */
long long Container_double_push(long long a1, double a2)
{
 long long result; // rax

 result = (long long)*(unsigned int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 result = (long long)*(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = (unsigned int)(result + 1);
 result = (long long)(int)result;
 *(double *)(a1 + 8LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3F3A */
long long Container_double_get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0;
 else
 return (long long)*(unsigned long long *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3F7C */
long long Container_double_getSize(long long a1)
{
 return (long long)*(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3F92 */
long long std_uniq_ptr_data_int_default_delete_int_true_true_ctor(
 unsigned long long *a1,
 unsigned long long a2)
{
 return std_uniq_ptr_impl_int_default_delete_int_ctor(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3FBC */
long long std_unique_ptr_int_ctor(
 unsigned long long *a1,
 unsigned long long a2)
{
 return std_uniq_ptr_data_int_default_delete_int_true_true_ctor(a1, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3FE6 */
long long RTTIBase_getType(RTTIBase *a1)
{
 return (long long)0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3FFA */
long long RTTIDerivedA_getType(RTTIDerivedA *a1)
{
 return (long long)1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x400E */
long long RTTIDerivedA_derivedA_data(RTTIDerivedA *a1)
{
 return (long long)100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4022 */
long long RTTIDerivedB_getType(RTTIDerivedB *a1)
{
 return (long long)2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x4036 */
long long RTTIDerivedB_derivedB_data(RTTIDerivedB *a1)
{
 return (long long)200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x404A */
void RTTIBase_RTTIBase(RTTIBase *a1)
{
 *(unsigned long long *)a1 = off_8888;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4068 */
void RTTIBase_destructor(RTTIBase *a1)
{
 *(unsigned long long *)a1 = off_8888;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4086 */
void RTTIBase_destructorDeleting(RTTIBase *a1)
{
 RTTIBase_destructor(a1);
 operator_delete((void *)a1, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x40B6 */
void RTTIDerivedA_RTTIDerivedA(RTTIDerivedA *a1)
{
 RTTIBase_RTTIBase((RTTIBase *)a1);
 *(unsigned long long *)a1 = (unsigned long long)off_8860;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x40E4 */
void RTTIDerivedB_RTTIDerivedB(RTTIDerivedB *a1)
{
 RTTIBase_RTTIBase((RTTIBase *)a1);
 *(unsigned long long *)a1 = (unsigned long long)off_8838;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4112 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 long long a1,
 long long a2)
{
 return std_uniq_ptr_impl_int_default_delete_int_ctor_Pi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x413C */
long long std_unique_ptr_int_unique_ptr_S1_v_Pi(
 long long a1,
 long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x4166 */
unsigned long long * std_unique_ptr_int_destructor(long long a1)
{
 long long deleter; // rbx
 unsigned long long *v2; // rax
 unsigned long long *result; // rax
 unsigned long long *v4; // [rsp+18h] [rbp-18h]

 v4 = std_uniq_ptr_impl_int_default_delete_int_M_ptr(a1);
 if ( *v4 )
 {
 deleter = std_unique_ptr_int_get_deleter(a1);
 v2 = (unsigned long long *)std_move_int_ptr(v4);
 std_default_delete_int_operator(deleter, (void *)*v2);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x41CE */
long long std_unique_ptr_int_deref(long long a1)
{
 return std_unique_ptr_int_get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x41F3 */
long long std_move_unique_ptr_int(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4206 */
unsigned long long * std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl(
 unsigned long long *a1,
 unsigned long long *a2)
{
 unsigned long long *result; // rax

 std_Tuple_impl_1ul_default_delete_int_Tuple_impl(a1, a2);
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x423E */
unsigned long long * std_tuple_int_default_delete_int_tuple(
 unsigned long long *a1,
 unsigned long long *a2)
{
 return std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4268 */
unsigned long long * std_uniq_ptr_impl_int_default_delete_int_ctor(
 unsigned long long *a1,
 unsigned long long a2)
{
 unsigned long long *v2; // rax
 unsigned long long *result; // rax

 v2 = (unsigned long long *)std_move_tuple_int_default_delete_int(a2);
 std_tuple_int_default_delete_int_tuple(a1, v2);
 result = (unsigned long long *)std_uniq_ptr_impl_int_default_delete_int_M_ptr((long long)a1);
 *(unsigned long long *)result = 0;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x42B2 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 unsigned long long *a1,
 unsigned long long a2)
{
 return std_uniq_ptr_impl_int_default_delete_int_array_ctor_Pi((long long)a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x42DC */
long long std_unique_ptr_int_array_unique_ptr(
 unsigned long long *a1,
 unsigned int *a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, (unsigned long long)a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x4306 */
unsigned long long * std_unique_ptr_int_array_destructor(long long a1)
{
 long long deleter; // rax
 unsigned long long *result; // rax
 unsigned long long *v3; // [rsp+18h] [rbp-8h]

 v3 = std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(a1);
 if ( *v3 )
 {
 deleter = std_unique_ptr_int_array_get_deleter(a1);
 std_default_delete_int_array_operator_int(deleter, *v3);
 }
 result = v3;
 *v3 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x4362 */
long long std_unique_ptr_int_array_get(long long a1, long long a2)
{
 return std_unique_ptr_int_array_get_ptr(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x439A */
unsigned long long * std_uniq_ptr_impl_int_default_delete_int_ctor_Pi(unsigned long long *a1, unsigned long long a2)
{
 unsigned long long *result; // rax

 std_tuple_int_default_delete_int_ctor_true_true((long long)a1);
 result = (unsigned long long *)std_uniq_ptr_impl_int_default_delete_int_M_ptr((long long)a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x43D6 */
long long std_uniq_ptr_impl_int_default_delete_int_M_ptr(long long a1)
{
 return std_get_0ul_int_default_delete_int(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F4 */
long long std_unique_ptr_int_get_deleter(long long a1)
{
 return std_uniq_ptr_impl_int_default_delete_int_M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4412 */
long long std_move_int_ptr(long long a1)
{
 return a1;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4424 */
void std_default_delete_int_operator(long long a1, void *a2)
{
 if ( a2 )
 operator_delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4452 */
long long std_unique_ptr_int_get(long long a1)
{
 return std_uniq_ptr_impl_int_default_delete_int_M_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4470 */
long long std_move_tuple_int_default_delete_int(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4482 */
void std_Tuple_impl_1ul_default_delete_int_Tuple_impl(long long a1, long long a2)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4496 */
unsigned long long * std_uniq_ptr_impl_int_default_delete_int_array_ctor_Pi(unsigned long long *a1, unsigned long long a2)
{
 unsigned long long *result; // rax

 std_tuple_int_default_delete_int_array_ctor_true_true((long long)a1);
 result = (unsigned long long *)std_uniq_ptr_impl_int_default_delete_int_array_M_ptr((long long)a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x44D2 */
long long std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(long long a1)
{
 return std_get_0ul_int_default_delete_int_array(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x44F0 */
long long std_unique_ptr_int_array_get_deleter(long long a1)
{
 return std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x450E */
void std_default_delete_int_array_operator_int(long long a1, void *a2)
{
 if ( a2 )
 operator_delete_array(a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4538 */
long long std_unique_ptr_int_array_get_ptr(long long a1)
{
 return std_uniq_ptr_impl_int_default_delete_int_array_M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4556 */
long long std_tuple_int_default_delete_int_ctor_true_true(unsigned long long *a1)
{
 return std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl((long long)a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4575 */
long long std_get_0ul_int_default_delete_int(long long a1)
{
 return std___get_helper_0ul_int_default_delete_int(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4594 */
long long std_uniq_ptr_impl_int_default_delete_int_M_deleter(long long a1)
{
 return std_get_1ul_int_default_delete_int(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B2 */
long long std_uniq_ptr_impl_int_default_delete_int_M_ptr_const(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_default_delete_int(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x45D4 */
long long std_tuple_int_default_delete_int_array_ctor_true_true(unsigned long long *a1)
{
 return std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl((long long)a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x45F3 */
long long std_get_0ul_int_default_delete_int_array(long long a1)
{
 return std___get_helper_0ul_int_default_delete_int_array(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4612 */
long long std_uniq_ptr_impl_int_default_delete_int_array_M_deleter(long long a1)
{
 return std_get_1ul_int_default_delete_int_array(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4630 */
long long std_uniq_ptr_impl_int_default_delete_int_array_M_ptr_const(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_default_delete_int_array(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x4652 */
long long std_Tuple_impl_0ul_int_default_delete_int_Tuple_impl(unsigned long long *a1)
{
 std_Tuple_impl_1ul_default_delete_int_Tuple_impl((long long)a1);
 return std_Head_base_0ul_int_false_Head_base((long long)a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x467D */
long long std___get_helper_0ul_int_default_delete_int(long long a1)
{
 return std_Tuple_impl_0ul_int_default_delete_int_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x469B */
long long std_get_1ul_int_default_delete_int(long long a1)
{
 return std___get_helper_1ul_default_delete_int(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x46B9 */
long long std_get_0ul_int_default_delete_int_const(long long a1)
{
 return std___get_helper_0ul_int_default_delete_int_const(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x46D8 */
long long std_Tuple_impl_0ul_int_default_delete_int_array_Tuple_impl(unsigned long long *a1)
{
 std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl((long long)a1);
 return std_Head_base_0ul_int_false_Head_base((long long)a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4703 */
long long std___get_helper_0ul_int_default_delete_int_array(long long a1)
{
 return std_Tuple_impl_0ul_int_default_delete_int_array_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4721 */
long long std_get_1ul_int_default_delete_int_array(long long a1)
{
 return std___get_helper_1ul_default_delete_int_array(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x473F */
long long std_get_0ul_int_default_delete_int_array_const(long long a1)
{
 return std___get_helper_0ul_int_default_delete_int_array_const(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x475D */
long long std_forward_int_ptr(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4770 */
long long std_Tuple_impl_1ul_default_delete_int_Tuple_impl(unsigned long long *a1)
{
 return std_Head_base_1ul_default_delete_int_true_Head_base((long long)a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4790 */
long long std_Head_base_0ul_int_false_Head_base(unsigned long long *a1)
{
 long long result; // rax

 result = (long long)a1;
 *a1 = 0;
 return result;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x47AA */
long long std_Tuple_impl_0ul_int_default_delete_int_M_head(long long a1)
{
 return std_Head_base_0ul_int_false_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x47C8 */
long long std___get_helper_1ul_default_delete_int(long long a1)
{
 return std_Tuple_impl_1ul_default_delete_int_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x47E6 */
long long std___get_helper_0ul_int_default_delete_int_const(long long a1)
{
 return std_Tuple_impl_0ul_int_default_delete_int_M_head_const(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4804 */
long long std_Tuple_impl_1ul_default_delete_int_array_Tuple_impl(unsigned long long *a1)
{
 return std_Head_base_1ul_default_delete_int_array_true_Head_base((long long)a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4823 */
long long std_Tuple_impl_0ul_int_default_delete_int_array_M_head(long long a1)
{
 return std_Head_base_0ul_int_false_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4841 */
long long std___get_helper_1ul_default_delete_int_array(long long a1)
{
 return std_Tuple_impl_1ul_default_delete_int_array_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x485F */
long long std___get_helper_0ul_int_default_delete_int_array_const(long long a1)
{
 return std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x487E */
unsigned long long * std_Head_base_0ul_int_false_Head_base_int_ptr(unsigned long long *a1, long long a2)
{
 long long v2; // rdx
 unsigned long long *result; // rax

 v2 = *(unsigned long long *)std_forward_int_ptr((long long)(unsigned long long *)a2);
 result = a1;
 *a1 = (unsigned long long)v2;
 return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x48AC */
void std_Head_base_1ul_default_delete_int_true_Head_base(unsigned long long *a1)
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x48BB */
long long std_Head_base_0ul_int_false_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x48CD */
long long std_Tuple_impl_1ul_default_delete_int_M_head(long long a1)
{
 return std_Head_base_1ul_default_delete_int_true_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x48EB */
long long std_Tuple_impl_0ul_int_default_delete_int_M_head_const(long long a1)
{
 return std_Head_base_0ul_int_false_M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x490A */
void std_Head_base_1ul_default_delete_int_array_true_Head_base(unsigned long long *a1)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4919 */
long long std_Tuple_impl_1ul_default_delete_int_array_M_head(long long a1)
{
 return std_Head_base_1ul_default_delete_int_array_true_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4937 */
long long std_Tuple_impl_0ul_int_default_delete_int_array_M_head_const(long long a1)
{
 return std_Head_base_0ul_int_false_M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4955 */
long long std_Head_base_1ul_default_delete_int_true_M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4967 */
long long std_Head_base_0ul_int_false_M_head_const(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4979 */
long long std_Head_base_1ul_default_delete_int_array_true_M_head(long long a1)
{
 return a1;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x498C */
void RTTIDerivedB_destructor(RTTIDerivedB *a1)
{
 *(unsigned long long *)a1 = off_8838;
 RTTIBase_destructor((RTTIBase *)a1);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x49BA */
void RTTIDerivedB_destructorDeleting(RTTIDerivedB *a1)
{
 RTTIDerivedB_destructor(a1);
 operator_delete((void *)a1, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x49EA */
void RTTIDerivedA_destructor(RTTIDerivedA *a1)
{
 *(unsigned long long *)a1 = off_8860;
 RTTIBase_destructor((RTTIBase *)a1);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4A18 */
void RTTIDerivedA_destructorDeleting(RTTIDerivedA *a1)
{
 RTTIDerivedA_destructor(a1);
 operator_delete((void *)a1, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x4A48 */
void DiamondDerived_destructor(DiamondDerived *a1)
{
 *(unsigned long long *)a1 = (unsigned long long)off_88B8;
 *((unsigned long long *)a1 + 4) = (unsigned long long)off_8920;
 *((unsigned long long *)a1 + 2) = (unsigned long long)off_88E8;
 MiddleB_destructor((long long)((char *)a1 + 16), (unsigned long long *)&off_8950);
 MiddleA_destructor((long long)a1, (unsigned long long *)&off_8940);
 VirtualBase_destructor((long long)((char *)a1 + 32));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4ACA */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *a1)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)a1 - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4AD7 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *a1)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)a1 + *(unsigned long long *)(*(unsigned long long *)a1 - 32LL)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4AE8 */
void DiamondDerived_destructorDeleting(DiamondDerived *a1)
{
 DiamondDerived_destructor(a1);
 operator_delete(a1, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4B17 */
void non_virtual_thunk_to_DiamondDerived_destructorDeleting(DiamondDerived *a1)
{
 DiamondDerived_destructorDeleting((DiamondDerived *)((char *)a1 - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4B21 */
void virtual_thunk_to_DiamondDerived_destructorDeleting(DiamondDerived *a1)
{
 DiamondDerived_destructorDeleting((DiamondDerived *)((char *)a1 + *(unsigned long long *)(*(unsigned long long *)a1 - 32LL)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x4B2E */
void MultiDerived_destructor(MultiDerived *a1)
{
 *(unsigned long long *)a1 = (unsigned long long)off_8A78;
 *((unsigned long long *)a1 + 2) = (unsigned long long)off_8AA8;
 BaseB_destructor((long long)((char *)a1 + 16));
 BaseA_destructor((long long)a1);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4B7A */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *a1)
{
 MultiDerived_destructor((MultiDerived *)((char *)a1 - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4B84 */
void MultiDerived_destructorDeleting(MultiDerived *a1)
{
 MultiDerived_destructor(a1);
 operator_delete(a1, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4BB3 */
void non_virtual_thunk_to_MultiDerived_destructorDeleting(MultiDerived *a1)
{
 MultiDerived_destructorDeleting((MultiDerived *)((char *)a1 - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4BBE */
void Derived_destructor(Derived *a1)
{
 *(unsigned long long *)a1 = (unsigned long long)off_8B20;
 Base_destructor((long long)a1);
}


/* Function: _ZN7DerivedD0Ev @ 0x4BEC */
void Derived_destructorDeleting(Derived *a1)
{
 Derived_destructor(a1);
 operator_delete(a1, 0x10u);
}


/* Function: .term_proc @ 0x4C1C */
void term_proc()
{
 ;
}


/* FAILED to decompile: _Znam @ 0x9048 */

/* FAILED to decompile: printf @ 0x9050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9058 */

/* FAILED to decompile: strlen @ 0x9060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x9068 */

/* FAILED to decompile: strncpy @ 0x9070 */

/* FAILED to decompile: __libc_start_main @ 0x9080 */

/* FAILED to decompile: __cxa_atexit @ 0x9088 */

/* FAILED to decompile: _Znwm @ 0x9090 */

/* FAILED to decompile: _ZdlPvm @ 0x9098 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x90A0 */

/* FAILED to decompile: __stack_chk_fail @ 0x90A8 */

/* FAILED to decompile: __dynamic_cast @ 0x90B0 */

/* FAILED to decompile: _ZdaPv @ 0x90B8 */

/* FAILED to decompile: strcmp @ 0x90C8 */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x90D0 */

/* FAILED to decompile: __cxa_rethrow @ 0x90D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x90E0 */

/* FAILED to decompile: puts @ 0x90E8 */

/* FAILED to decompile: __cxa_end_catch @ 0x90F0 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x90F8 */

/* FAILED to decompile: __cxa_throw @ 0x9100 */

/* FAILED to decompile: _Unwind_Resume @ 0x9110 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x9118 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x9120 */

/* FAILED to decompile: __gmon_start__ @ 0x9130 */

/* Total functions decompiled: 225, failed: 26 */
