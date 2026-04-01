/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-1/5-1_gcc_O0_no_g
 * Processor: pc
 */

/* Typeinfo symbols */
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;
extern const struct __class_type_info class_type_info_for_RTTIBase;
extern const struct __class_type_info class_type_info_for_RTTIDerivedA;
extern const struct __class_type_info class_type_info_for_RTTIDerivedB;

/* Forward declarations for C++ types */
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct BaseA BaseA;
typedef struct BaseB BaseB;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct SimpleClass SimpleClass;
typedef struct LifecycleClass LifecycleClass;
typedef struct Point Point;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Define LifecycleClass structure to fix incomplete type errors */
struct LifecycleClass {
    unsigned long long *data;
    unsigned long long size;
    static unsigned int instance_count;
};

/* Helper macro for LODWORD */
#define LODWORD(x) ((unsigned int)((unsigned long long)(x) & 0xFFFFFFFF))

/* Vtable offset declarations */
extern const void *off_8888;
extern const void *off_8838;
extern const void *off_8860;
extern const void *off_88B8;
extern const void *off_88E8;
extern const void *off_8920;
extern const void *off_8940;
extern const void *off_8950;
extern const void *off_8A50;
extern const void *off_8A78;
extern const void *off_8AA8;
extern const void *off_8AD0;
extern const void *off_8AF8;
extern const void *off_8B20;
extern const void *off_8B50;

/* Function: __readfsqword intrinsic */
unsigned long long __readfsqword(unsigned long long offset);

/* Function: .init_proc @ 0x2000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = &_gmon_start__;
 if ( &_gmon_start__ )
 return (long long (**)(void))_gmon_start__();
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
 SimpleClass__SimpleClass((SimpleClass *)v3, 5, "Test");
 SimpleClass__setValue((SimpleClass *)v3, 10);
 Value = SimpleClass__getValue((SimpleClass *)v3);
 v2 = SimpleClass__compute((SimpleClass *)v3, 3);
 return v2 + Value + (unsigned int)SimpleClass__getClassID((SimpleClass *)v3);
}


/* Function: _Z20test_cpp_constructorv @ 0x245C */
long long test_cpp_constructor(void)
{
 int Data; // [rsp+Ch] [rbp-24h]
 int v2; // [rsp+Ch] [rbp-24h]
 unsigned char v3[24]; // [rsp+10h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+28h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 LifecycleClass__LifecycleClass((LifecycleClass *)v3, 5u);
 Data = LifecycleClass__getData((LifecycleClass *)v3, 2u);
 v2 = LifecycleClass__getInstanceCount((LifecycleClass *)v3) + Data;
 LifecycleClass__dtor((void **)v3);
 return 1000 * (unsigned int)LifecycleClass__getInstanceCount((LifecycleClass *)v3) + v2;
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
 v5[0] = &off_8B50;
 Derived::Derived((Derived *)v7, 3);
 v2 = Base_virtual_func((Base *)v5, 5);
 v3 = Derived_virtual_func((Derived *)v7, 5);
 v5[1] = v5;
 v6 = (Base *)v7;
 v4 = call_virtual_func((Base *)v5, 5u);
 v0 = v4 + v3 + v2 + call_virtual_func(v6, 5u);
 Derived__dtor((Derived *)v7);
 Base__dtor((Base *)v5);
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
 MultiDerived::MultiDerived((MultiDerived *)&v3);
 v4 = 100;
 v6 = 200;
 v2 = (*v3)(&v3);
 v0 = (*v5)(&v5) + v2 + (&v3 != &v5);
 MultiDerived::~MultiDerived((MultiDerived *)&v3);
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
 DiamondDerived::DiamondDerived((DiamondDerived *)v3);
 v5 = 50;
 v2 = (*v4)(&v4);
 v5 = 100;
 v0 = v2 + (*v4)(&v4);
 DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
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
 Point__Point((Point *)v3, 1, 2);
 Point__Point((Point *)v4, 3, 4);
 v5[0] = Point__operator_plus(v3, v4);
 v2 = Point__operator_eq(v3, v4);
 Point__operator_pp(v5);
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
 Container_int__Container(v3);
 Container_int__push(v3, 10);
 Container_int__push(v3, 20);
 Container_int__push(v3, 30);
 v1 = Container_int__get(v3, 0);
 Size = Container_int__getSize(v3);
 Container_double__Container(v4);
 Container_double__push(v4, 3.14);
 return (unsigned int)(Size + v1 + (int)Container_double__get(v4, 0));
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x2A12 */
long long test_cpp_lambda_lambda_int__operator()(long long a1, int a2)
{
 **(unsigned int **)(a1 + 8) += 5;
 return (unsigned int)(a2 * *(unsigned int *)a1 + **(unsigned int **)(a1 + 8));
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
 return (unsigned int)test_cpp_lambda_lambda_int__operator_((long long)&v2, 3) + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2ABE */
void test_cpp_exception(void)
{
 unsigned int *exception; // rax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x2BE4 */
void test_cpp_smart_ptr_lambda_int_ptr_operator_(long long a1, unsigned int *a2)
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
 char v6; // [rsp+Bh] [rbp-45h] BYREF
 int v7; // [rsp+Ch] [rbp-44h]
 int v8; // [rsp+10h] [rbp-40h]
 int v9; // [rsp+14h] [rbp-3Ch]
 unsigned char v10[8]; // [rsp+18h] [rbp-38h] BYREF
 unsigned char v11[8]; // [rsp+20h] [rbp-30h] BYREF
 unsigned char v12[8]; // [rsp+28h] [rbp-28h] BYREF
 unsigned char v13[8]; // [rsp+30h] [rbp-20h] BYREF
 unsigned long long v14; // [rsp+38h] [rbp-18h]

 v14 = __readfsqword(0x28u);
 v0 = (unsigned int *)operator new(4u);
 *v0 = 100;
 std_unique_ptr_int__unique_ptr_std__default_delete_int__void(v10, v0);
 *(unsigned int *)std_unique_ptr_int__operator_deref(v10) = 200;
 v1 = std_move_std__unique_ptr_int_ref(v10);
 std_unique_ptr_int__unique_ptr_std__default_delete_int__unique_ptr(v11, v1);
 v7 = *(unsigned int *)std_unique_ptr_int__operator_deref(v11);
 v2 = (unsigned int *)operator new[](0x14u);
 *v2 = 1;
 v2[1] = 2;
 v2[2] = 3;
 v2[3] = 4;
 v2[4] = 5;
 std_unique_ptr_int_array__unique_ptr(v12, v2);
 v8 = *(unsigned int *)std_unique_ptr_int_array__operator_index(v12, 2);
 v3 = (unsigned int *)operator new(4u);
 *v3 = 500;
 std_unique_ptr_int_lambda__unique_ptr(
 v13,
 v3,
 &v6);
 v9 = *(unsigned int *)std_unique_ptr_int_lambda__operator_deref(v13);
 v4 = v8 + v7 + v9;
 std_unique_ptr_int_lambda__dtor(v13);
 std_unique_ptr_int_array__dtor(v12);
 std_unique_ptr_int__dtor(v11);
 std_unique_ptr_int__dtor(v10);
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
 RTTIDerivedA__RTTIDerivedA(v0);
 lpsrc = v0;
 v1 = (RTTIDerivedB *)operator new(8u);
 *(unsigned long long *)v1 = 0;
 RTTIDerivedB__RTTIDerivedB(v1);
 v6 = 0;
 if ( !lpsrc )
 __cxa_bad_typeid();
 if ( (unsigned char)std_type_info__operator_eq(*(unsigned long long *)(*(unsigned long long *)lpsrc - 8LL), (long long)&typeinfo_for_RTTIDerivedA) )
 v6 = 10;
 if ( !v1 )
 __cxa_bad_typeid();
 if ( (unsigned char)std_type_info__operator_eq(*(unsigned long long *)(*(unsigned long long *)v1 - 8LL), (long long)&typeinfo_for_RTTIDerivedB) )
 v6 += 20;
 v2 = (RTTIDerivedA *)__dynamic_cast(
 lpsrc,
 &class_type_info_for_RTTIBase,
 &class_type_info_for_RTTIDerivedA,
 0);
 if ( v2 )
 v6 += RTTIDerivedA__derivedA_data(v2);
 v3 = (RTTIDerivedB *)__dynamic_cast(
 v1,
 &class_type_info_for_RTTIBase,
 &class_type_info_for_RTTIDerivedB,
 0);
 if ( v3 )
 v6 += RTTIDerivedB__derivedB_data(v3);
 v4 = (const char *)std_type_info__name(*(std::type_info **)(*(unsigned long long *)lpsrc - 8LL));
 v7 = strlen(v4) + v6;
 (*(void ( **)(RTTIDerivedA *))(*(unsigned long long *)lpsrc + 8LL))(lpsrc);
 (*(void ( **)(RTTIDerivedB *))(*(unsigned long long *)v1 + 8LL))(v1);
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

 puts(s);
 v0 = test_cpp_member_func();
 printf(format, v0);
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


/* Function: main @ 0x30CD */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x30E2 */
long long ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 long long a1,
 long long a2,
 long long a3)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda_int_ptr>::__uniq_ptr_impl<test_cpp_smart_ptr_lambda_int_ptr const&>(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x3110 */
long long std_unique_ptr_int_lambda__unique_ptr_lambda_void(
 long long a1,
 long long a2,
 long long a3)
{
 return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
 a1,
 a2,
 a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x313E */
unsigned long long * std_unique_ptr_int_lambda____unique_ptr(long long a1)
{
 long long deleter; // rbx
 unsigned int **v2; // rax
 unsigned long long *result; // rax
 unsigned long long *v4; // [rsp+18h] [rbp-18h]

 v4 = (unsigned long long *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr_lambda_int_ptr>::_M_ptr(a1);
 if ( *v4 )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr_lambda_int_ptr>::get_deleter(a1);
 v2 = (unsigned int **)std_move_int_ptr_ref(v4);
 test_cpp_smart_ptr_lambda_int_ptr::operator()(deleter, *v2);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x31A2 */
long long std_unique_ptr_int_lambda__operator_deref(long long a1)
{
 return std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr__get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x31C4 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr____uniq_ptr_impl_test_cpp_smart_ptr_lambda_int_ptr_const_ref(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 unsigned long long v5[3]; // [rsp+10h] [rbp-20h] BYREF

 v5[1] = a1;
 v5[0] = a2;
 v3 = std_forward_test_cpp_smart_ptr_lambda_int_ptr_const_ref(a3);
 return std_tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__tuple_int_ptr_ref_test_cpp_smart_ptr_lambda_int_ptr_const_ref_true(
 a1,
 v5,
 v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x3202 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_ptr(long long a1)
{
 return std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x321C */
long long std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr__get_deleter(long long a1)
{
 return std___get_helper_1ul_test_cpp_smart_ptr_lambda_int_ptr(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x3236 */
long long std_unique_ptr_int_test_cpp_smart_ptr_lambda_int_ptr__get(long long a1)
{
 return *(unsigned long long *)std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x3250 */
long long std_forward_test_cpp_smart_ptr_lambda_int_ptr_const_ref(long long a1)
{
 return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x325E */
long long std_tuple_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__tuple_int_ptr_ref_test_cpp_smart_ptr_lambda_int_ptr_const_ref_true(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // r12
 long long v4; // rax

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_ptr_const_ref(a3);
 v4 = std_forward_int_ptr_ref(a2);
 return std_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_lambda_int_ptr_const_ref_void(
 a1,
 v4,
 v3);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32AC */
long long std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr(long long a1)
{
 return std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x32C6 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_deleter(long long a1)
{
 return std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_ptr__M_head(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x32E0 */
long long std___uniq_ptr_impl_int_test_cpp_smart_ptr_lambda_int_ptr__M_ptr(long long a1)
{
 return *(unsigned long long *)std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x32FE */
long long std_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__Tuple_impl_int_ptr_ref_test_cpp_smart_ptr_lambda_int_ptr_const_ref_void(
 long long a1,
 long long a2,
 long long a3)
{
 long long v3; // rax
 long long v4; // rax

 v3 = std_forward_test_cpp_smart_ptr_lambda_int_ptr_const_ref(a3);
 std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_ptr__Tuple_impl(a1, v3);
 v4 = std_forward_int_ptr_ref(a2);
 return std_Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(a1, v4);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3353 */
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__M_head(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x336D */
long long std_get_1ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr(long long a1)
{
 return std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_ptr__M_head(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x3387 */
long long std_get_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_const(long long a1)
{
 return std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x33A2 */
long long std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_ptr__Tuple_impl_(
 long long a1,
 long long a2)
{
 return (unsigned long long)std_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_true__Head_base(a1, a2);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x33C8 */
long long std_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__M_head(long long a1)
{
 return (unsigned long long)std_Head_base_0ul_int_ptr_false__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x343F */
long long std_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__M_head_const(long long a1)
{
 return (unsigned long long)std_Head_base_0ul_int_ptr_false__M_head_const(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33E2 */
long long std___get_helper_1ul_test_cpp_smart_ptr_lambda_int_ptr(long long a1)
{
 return std_Tuple_impl_1ul_test_cpp_smart_ptr_lambda_int_ptr__M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33FC */
long long std___get_helper_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr_const(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x3416 */
void std_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_true__Head_base_(
 long long a1,
 long long a2)
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x3425 */
long long std_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_true__M_head(long long a1)
{
 return (unsigned long long)std_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_true__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x343F */
long long std_Tuple_impl_0ul_int_ptr_test_cpp_smart_ptr_lambda_int_ptr__M_head(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x3459 */
long long std_Head_base_1ul_test_cpp_smart_ptr_lambda_int_ptr_true__M_head(long long a1)
{
 return (unsigned long long)a1;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x3467 */
int __static_initialization_and_destruction_0(int a1, int a2)
{
 int result; // eax

 if ( a1 == 1 && a2 == 0xFFFF )
 {
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
 }
 return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x34BD */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x34D6 */
long long std_type_info__name(std::type_info *_this)
{
 if ( **((unsigned char **)_this + 1) == 42 )
 return (unsigned long long)(*((unsigned long long *)_this + 1) + 1LL);
 else
 return (unsigned long long)*((unsigned long long *)_this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x350A */
_BOOL8 std_type_info__operator_eq(long long _this, long long a2)
{
 return *(unsigned long long *)(_this + 8) == *(unsigned long long *)(a2 + 8)
 || **(unsigned char **)(_this + 8) != 42 && !strcmp(*(const char **)(_this + 8), *(const char **)(a2 + 8));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3570 */
void SimpleClass__SimpleClass(SimpleClass *_this, int a2, const char *a3)
{
 *(unsigned int *)_this = a2;
 strncpy((char *)_this + 4, a3, 0x1Fu);
 *((unsigned char *)_this + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x35B8 */
long long SimpleClass__getValue(SimpleClass *_this)
{
 return *(unsigned int *)_this;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x35CC */
SimpleClass * SimpleClass__setValue(SimpleClass *_this, int a2)
{
 SimpleClass *result; // rax

 result = _this;
 *(unsigned int *)_this = a2;
 return result;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x35E8 */
long long SimpleClass__compute(SimpleClass *_this, int a2)
{
 int v2; // ebx

 v2 = a2 * *(unsigned int *)_this;
 return v2 + (unsigned int)strlen((const char *)_this + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3620 */
long long SimpleClass__getClassID(SimpleClass *_this)
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3630 */
void LifecycleClass__LifecycleClass(LifecycleClass *_this, unsigned long long a2)
{
 unsigned long long i; // [rsp+18h] [rbp-8h]

 *((unsigned long long *)_this + 1) = a2;
 if ( a2 > 0x1FFFFFFFFFFFFFFELL )
 __cxa_throw_bad_array_new_length();
 *(unsigned long long *)_this = operator new[](4 * a2);
 for ( i = 0; i < a2; ++i )
 *(unsigned int *)(*(unsigned long long *)_this + 4 * i) = 10 * i;
 ++LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x36D0 */
void LifecycleClass__dtor(void **_this)
{
 if ( *_this )
 _ZdaPv(*_this);
 --LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x370E */
long long LifecycleClass__getData(LifecycleClass *_this, unsigned long long a2)
{
 if ( a2 >= *((unsigned long long *)_this + 1) )
 return 0xFFFFFFFFLL;
 else
 return *(unsigned int *)(*(unsigned long long *)_this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3749 */
long long LifecycleClass__getInstanceCount(LifecycleClass *_this)
{
 return (unsigned int)LifecycleClass::instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x375A */
long long Base_virtual_func(Base *_this, int a2)
{
 return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3772 */
const char * Base_getName(Base *_this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x3788 */
void Base_dtor(Base *_this)
{
 *(unsigned long long *)_this = &off_8B50;
}


/* Function: _ZN4BaseD0Ev @ 0x37A6 */
void Base_deleting_dtor(Base *_this)
{
 Base_dtor(_this);
 operator delete(_this, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x37D6 */
void Base_ctor(Base *_this)
{
 *(unsigned long long *)_this = &off_8B50;
}


/* Function: _ZN7DerivedC2Ei @ 0x37F4 */
void Derived_ctor(Derived *_this, int a2)
{
 Base_ctor(_this);
 *(unsigned long long *)_this = &off_8B20;
 *((unsigned int *)_this + 2) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x382E */
long long Derived_virtual_func(Derived *_this, int a2)
{
 return (unsigned int)(a2 * *((unsigned int *)_this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x384A */
const char * Derived_getName(Derived *_this)
{
 return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3860 */
long long BaseA_funcA(BaseA *_this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3874 */
void BaseA_dtor(BaseA *_this)
{
 *(unsigned long long *)_this = &off_8AF8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3892 */
void BaseA_deleting_dtor(BaseA *_this)
{
 BaseA_dtor(_this);
 operator delete(_this, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38C2 */
long long BaseB_funcB(BaseB *_this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38D6 */
void BaseB_dtor(BaseB *_this)
{
 *(unsigned long long *)_this = &off_8AD0;
}


/* Function: _ZN5BaseBD0Ev @ 0x38F4 */
void BaseB_deleting_dtor(BaseB *_this)
{
 BaseB_dtor(_this);
 operator delete(_this, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3924 */
long long MultiDerived_funcA(MultiDerived *_this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3938 */
long long MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x394B */
long long thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return MultiDerived__funcB((MultiDerived *)((char *)_this - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3956 */
void BaseA__BaseA(BaseA *_this)
{
 *(unsigned long long *)_this = &off_8AF8;
}


/* Function: _ZN5BaseBC2Ev @ 0x3974 */
void BaseB__BaseB(BaseB *_this)
{
 *(unsigned long long *)_this = &off_8AD0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3992 */
void MultiDerived__MultiDerived(MultiDerived *_this)
{
 BaseA__BaseA(_this);
 BaseB__BaseB((MultiDerived *)((char *)_this + 16));
 *(unsigned long long *)_this = &off_8A78;
 *((unsigned long long *)_this + 2) = &off_8AA8;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x39DE */
long long VirtualBase__func(VirtualBase *_this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x39F2 */
void VirtualBase__dtor(VirtualBase *_this)
{
 *(unsigned long long *)_this = off_8A50;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3A10 */
void VirtualBase__deleting_dtor(VirtualBase *_this)
{
 VirtualBase__dtor(_this);
 operator delete(_this, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x3A40 */
long long MiddleA__func(MiddleA *_this)
{
 return (unsigned long long)(*(unsigned int *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3A6E */
long long virtual_thunk_to_MiddleA__func(MiddleA *_this)
{
 return MiddleA__func((MiddleA *)((char *)_this + (long long)*(unsigned long long *)(*(unsigned long long *)_this - 24LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3A7C */
long long MiddleB__func(MiddleB *_this)
{
 return (unsigned long long)(*(unsigned int *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3AAA */
long long virtual_thunk_to_MiddleB__func(MiddleB *_this)
{
 return MiddleB__func((MiddleB *)((char *)_this + (long long)*(unsigned long long *)(*(unsigned long long *)_this - 24LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3AB8 */
long long DiamondDerived__func(DiamondDerived *_this)
{
 return (unsigned long long)(*(unsigned int *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x3AE6 */
long long virtual_thunk_to_DiamondDerived__func(DiamondDerived *_this)
{
 return DiamondDerived__func((DiamondDerived *)((char *)_this + (long long)*(unsigned long long *)(*(unsigned long long *)_this - 24LL)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x3AF3 */
long long non_virtual_thunk_to_DiamondDerived__func(DiamondDerived *_this)
{
 return DiamondDerived__func((DiamondDerived *)((char *)_this - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3AFE */
void VirtualBase__VirtualBase(VirtualBase *_this)
{
 *(unsigned long long *)_this = &off_8A50;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3B1C */
void MiddleA__MiddleA(MiddleA *_this, unsigned long long *a2)
{
 *(unsigned long long *)_this = *a2;
 *(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3B60 */
void MiddleA__dtor(MiddleA *_this, unsigned long long *a2)
{
 *(unsigned long long *)_this = *a2;
 *(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3BA4 */
void MiddleB__MiddleB(MiddleB *_this, unsigned long long *a2)
{
 *(unsigned long long *)_this = *a2;
 *(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x3BE8 */
void MiddleB__dtor(MiddleB *_this, unsigned long long *a2)
{
 *(unsigned long long *)_this = *a2;
 *(unsigned long long *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 24LL)) = a2[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3C2C */
void DiamondDerived__DiamondDerived(DiamondDerived *_this)
{
 VirtualBase__VirtualBase((DiamondDerived *)((char *)_this + 32));
 MiddleA__MiddleA(_this, off_8940);
 MiddleB__MiddleB((DiamondDerived *)((char *)_this + 16), off_8950);
 *(unsigned long long *)_this = &off_88B8;
 *((unsigned long long *)_this + 4) = &off_8920;
 *((unsigned long long *)_this + 2) = &off_88E8;
}


/* Function: _ZN5PointC2Eii @ 0x3CAE */
void Point__Point(Point *_this, int a2, int a3)
{
 *(unsigned int *)_this = a2;
 *((unsigned int *)_this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3CD6 */
long long Point__operator_plus(unsigned int *a1, unsigned int *a2)
{
 unsigned long long v3[2]; // [rsp+10h] [rbp-10h] BYREF

 v3[1] = __readfsqword(0x28u);
 Point__Point((Point *)v3, *a2 + *a1, a2[1] + a1[1]);
 return v3[0];
}


/* Function: _ZNK5PointeqERKS_ @ 0x3D40 */
_BOOL8 Point__operator_eq(unsigned int *a1, unsigned int *a2)
{
 return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x3D80 */
unsigned int * Point__operator_pp(unsigned int *a1)
{
 ++*a1;
 ++a1[1];
 return a1;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3DB2 */
long long template_max_int(unsigned int a1, unsigned int a2)
{
 if ( (int)a1 <= (int)a2 )
 return a2;
 else
 return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3DD2 */
long long template_max_double(double a1, double a2)
{
 if ( a1 <= a2 )
 a1 = a2;
 return *(unsigned long long *)&a1;
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
long long Container_int__Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3E54 */
long long Container_int__push(long long a1, int a2)
{
 long long result; // rax

 result = *(unsigned int *)(a1 + 40);
 if ( (int)result <= 9 )
 {
 LODWORD(result) = *(unsigned int *)(a1 + 40);
 *(unsigned int *)(a1 + 40) = result + 1;
 result = (int)result;
 *(unsigned int *)(a1 + 4LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3E90 */
long long Container_int__get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 40) )
 return 0;
 else
 return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3EC8 */
long long Container_int__getSize(long long a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3EDE */
long long Container_double__Container(long long a1)
{
 long long result; // rax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3EF8 */
long long Container_double__push(long long a1, double a2)
{
 long long result; // rax

 result = *(unsigned int *)(a1 + 80);
 if ( (int)result <= 9 )
 {
 LODWORD(result) = *(unsigned int *)(a1 + 80);
 *(unsigned int *)(a1 + 80) = result + 1;
 result = (int)result;
 *(double *)(a1 + 8LL * (int)result) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3F3A */
long long Container_double__get(long long a1, int a2)
{
 if ( a2 < 0 || a2 >= *(unsigned int *)(a1 + 80) )
 return 0;
 else
 return *(unsigned long long *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3F7C */
long long Container_double__getSize(long long a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3F92 */
long long std___uniq_ptr_data_int_std__default_delete_int_true_true____uniq_ptr_data(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3FBC */
long long std_unique_ptr_int__unique_ptr(long long a1, long long a2)
{
 return std___uniq_ptr_data_int_std__default_delete_int_true_true____uniq_ptr_data(a1, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3FE6 */
long long RTTIBase__getType(RTTIBase *_this)
{
 return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3FFA */
long long RTTIDerivedA__getType(RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x400E */
long long RTTIDerivedA__derivedA_data(RTTIDerivedA *_this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4022 */
long long RTTIDerivedB__getType(RTTIDerivedB *_this)
{
 return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x4036 */
long long RTTIDerivedB__derivedB_data(RTTIDerivedB *_this)
{
 return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x404A */
void RTTIBase__RTTIBase(RTTIBase *_this)
{
 *(unsigned long long *)_this = off_8888;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4068 */
void RTTIBase__dtor(RTTIBase *_this)
{
 *(unsigned long long *)_this = off_8888;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4086 */
void RTTIBase__deleting_dtor(RTTIBase *_this)
{
 RTTIBase__dtor(_this);
 operator delete(_this, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x40B6 */
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *_this)
{
 RTTIBase__RTTIBase(_this);
 *(unsigned long long *)_this = off_8860;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x40E4 */
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *_this)
{
 RTTIBase__RTTIBase(_this);
 *(unsigned long long *)_this = off_8838;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4112 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x413C */
long long std_unique_ptr_int__unique_ptr_std__default_delete_int_(long long a1, long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x4166 */
unsigned long long * std_unique_ptr_int__dtor(long long a1)
{
 long long deleter; // rbx
 unsigned long long *v2; // rax
 unsigned long long *result; // rax
 unsigned long long *v4; // [rsp+18h] [rbp-18h]

 v4 = (unsigned long long *)std___uniq_ptr_impl_int_std__default_delete_int__M_ptr(a1);
 if ( *v4 )
 {
 deleter = std_unique_ptr_int__get_deleter(a1);
 v2 = (unsigned long long *)std_move_int_ptr_ref(v4);
 std_default_delete_int__operator()(deleter, *v2);
 }
 result = v4;
 *v4 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x41CE */
long long std_unique_ptr_int__operator_deref(long long a1)
{
 return std_unique_ptr_int__get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x41F3 */
long long std_move_std__unique_ptr_int_ref(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4206 */
unsigned long long * std_Tuple_impl_0ul_int_ptr_std__default_delete_int__Tuple_impl(unsigned long long *a1, unsigned long long *a2)
{
 unsigned long long *result; // rax

 std_Tuple_impl_1ul_std__default_delete_int__Tuple_impl(a1, a2);
 result = a1;
 *a1 = *a2;
 return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x423E */
unsigned long long * std_tuple_int_ptr_std__default_delete_int__tuple(unsigned long long *a1, unsigned long long *a2)
{
 return std_Tuple_impl_0ul_int_ptr_std__default_delete_int__Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4268 */
unsigned long long * std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl(unsigned long long *a1, long long a2)
{
 unsigned long long *v2; // rax
 unsigned long long *result; // rax

 v2 = (unsigned long long *)std_move_std__tuple_int_ptr_std__default_delete_int_ref(a2);
 std_tuple_int_ptr_std__default_delete_int__tuple_true_true(a1, v2);
 result = (unsigned long long *)std___uniq_ptr_impl_int_std__default_delete_int__M_ptr(a2);
 *result = 0;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x42B2 */
long long ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 long long a1,
 long long a2)
{
 return std___uniq_ptr_impl_int_std__default_delete_int_array____uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x42DC */
long long std_unique_ptr_int_array__unique_ptr_int_ptr_std__default_delete_int_array_void_bool(
 long long a1,
 long long a2)
{
 return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x4306 */
unsigned long long * std_unique_ptr_int_array__dtor(long long a1)
{
 long long deleter; // rax
 unsigned long long *result; // rax
 unsigned long long *v3; // [rsp+18h] [rbp-8h]

 v3 = (unsigned long long *)std___uniq_ptr_impl_int_std__default_delete_int_array__M_ptr(a1);
 if ( *v3 )
 {
 deleter = std_unique_ptr_int_array__get_deleter(a1);
 std_default_delete_int_array__operator_int(deleter, *v3);
 }
 result = v3;
 *v3 = 0;
 return result;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x4362 */
long long std_unique_ptr_int_array__operator_index(long long a1, long long a2)
{
 return std_unique_ptr_int_array__get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x439A */
unsigned long long * std___uniq_ptr_impl_int_std__default_delete_int____uniq_ptr_impl(long long a1, long long a2)
{
 unsigned long long *result; // rax

 std_tuple_int_ptr_std__default_delete_int__tuple_true_true(a1);
 result = (unsigned long long *)std___uniq_ptr_impl_int_std__default_delete_int__M_ptr(a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x43D6 */
long long std___uniq_ptr_impl_int_std__default_delete_int__M_ptr(long long a1)
{
 return std___get_helper_0ul_int_ptr_std__default_delete_int(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F4 */
long long std_unique_ptr_int__get_deleter(long long a1)
{
 return std___uniq_ptr_impl_int_std__default_delete_int__M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4412 */
long long std_move_int_ptr_ref(long long a1)
{
 return a1;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4424 */
void std_default_delete_int__operator()(long long a1, void *a2)
{
 if ( a2 )
 _ZdlPvm(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4452 */
long long std_unique_ptr_int__get(long long a1)
{
 return std___uniq_ptr_impl_int_std__default_delete_int__M_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4470 */
long long std_move_std__tuple_int_ptr_std__default_delete_int_ref(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4482 */
void std_Tuple_impl_1ul_std__default_delete_int__Tuple_impl()
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4496 */
unsigned long long * std___uniq_ptr_impl_int_std__default_delete_int_array____uniq_ptr_impl(long long a1, long long a2)
{
 unsigned long long *result; // rax

 std_tuple_int_ptr_std__default_delete_int_array__tuple_true_true(a1);
 result = (unsigned long long *)std___uniq_ptr_impl_int_std__default_delete_int_array__M_ptr(a1);
 *result = a2;
 return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x44D2 */
long long std___uniq_ptr_impl_int_std__default_delete_int_array__M_ptr(long long a1)
{
 return std___get_helper_0ul_int_ptr_std__default_delete_int_array(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x44F0 */
long long std_unique_ptr_int_array__get_deleter(long long a1)
{
 return std___uniq_ptr_impl_int_std__default_delete_int_array__M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x450E */
void std_default_delete_int_array__operator_int(long long a1, void *a2)
{
 if ( a2 )
 _ZdaPv(a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4538 */
long long std_unique_ptr_int_array__get(long long a1)
{
 return std___uniq_ptr_impl_int_std__default_delete_int_array__M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4556 */
long long std_tuple_int_ptr_std__default_delete_int__tuple_true_true(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std__default_delete_int__Tuple_impl(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4575 */
long long std_get_0ul_int_ptr_std__default_delete_int_(long long a1)
{
 return std___get_helper_0ul_int_ptr_std__default_delete_int(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4594 */
long long std___uniq_ptr_impl_int_std__default_delete_int__M_deleter(long long a1)
{
 return std_get_1ul_int_ptr_std__default_delete_int(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B2 */
long long std___uniq_ptr_impl_int_std__default_delete_int__M_ptr(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_ptr_std__default_delete_int(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x45D4 */
long long std_tuple_int_ptr_std__default_delete_int_array__tuple_true_true(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std__default_delete_int_array__Tuple_impl(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x45F3 */
long long std_get_0ul_int_ptr_std__default_delete_int_array(long long a1)
{
 return std___get_helper_0ul_int_ptr_std__default_delete_int_array(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4612 */
long long std___uniq_ptr_impl_int_std__default_delete_int_array__M_deleter(long long a1)
{
 return std_get_1ul_int_ptr_std__default_delete_int_array(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4630 */
long long std___uniq_ptr_impl_int_std__default_delete_int_array__M_ptr(long long a1)
{
 return *(unsigned long long *)std_get_0ul_int_ptr_std__default_delete_int_array(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x4652 */
long long std_Tuple_impl_0ul_int_ptr_std__default_delete_int__Tuple_impl(long long a1)
{
 std_Tuple_impl_1ul_std__default_delete_int__Tuple_impl(a1);
 return (unsigned long long)std_Head_base_0ul_int_ptr_false__Head_base_(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x467D */
long long std___get_helper_0ul_int_ptr_std__default_delete_int(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std__default_delete_int__M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x469B */
long long std_get_1ul_int_ptr_std__default_delete_int(long long a1)
{
 return std___get_helper_1ul_std__default_delete_int(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x46B9 */
long long std_get_0ul_int_ptr_std__default_delete_int_const(long long a1)
{
 return std___get_helper_0ul_int_ptr_std__default_delete_int_const(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x46D8 */
long long std_Tuple_impl_0ul_int_ptr_std__default_delete_int_array__Tuple_impl(long long a1)
{
 std_Tuple_impl_1ul_std__default_delete_int_array__Tuple_impl(a1);
 return (unsigned long long)std_Head_base_0ul_int_ptr_false__Head_base_(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4703 */
long long std___get_helper_0ul_int_ptr_std__default_delete_int_array(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std__default_delete_int_array__M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4721 */
long long std_get_1ul_int_ptr_std__default_delete_int_array(long long a1)
{
 return std___get_helper_1ul_std__default_delete_int_array(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x473F */
long long std_get_0ul_int_ptr_std__default_delete_int_array_const(long long a1)
{
 return std___get_helper_0ul_int_ptr_std__default_delete_int_array_const(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x475D */
long long std_forward_int_ptr_ref(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4770 */
long long std_Tuple_impl_1ul_std__default_delete_int__Tuple_impl(long long a1)
{
 return (unsigned long long)std_Head_base_1ul_std__default_delete_int_true__Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4790 */
unsigned long long * std_Head_base_0ul_int_ptr_false__Head_base_(unsigned long long *a1)
{
 unsigned long long *result; // rax

 result = a1;
 *a1 = 0;
 return result;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x47AA */
long long std_Tuple_impl_0ul_int_ptr_std__default_delete_int__M_head(long long a1)
{
 return (unsigned long long)std_Head_base_0ul_int_ptr_false__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x48EB */
long long std_Tuple_impl_0ul_int_ptr_std__default_delete_int__M_head_const(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head_const(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x47C8 */
long long std___get_helper_1ul_std__default_delete_int(long long a1)
{
 return std_Tuple_impl_1ul_std__default_delete_int__M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x47E6 */
long long std___get_helper_0ul_int_ptr_std__default_delete_int_const(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std__default_delete_int__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4804 */
long long std_Tuple_impl_1ul_std__default_delete_int_array__Tuple_impl(long long a1)
{
 return (unsigned long long)std_Head_base_1ul_std__default_delete_int_array_true__Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4823 */
long long std_Tuple_impl_0ul_int_ptr_std__default_delete_int_array__M_head(long long a1)
{
 return (unsigned long long)std_Head_base_0ul_int_ptr_false__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4937 */
long long std_Tuple_impl_0ul_int_ptr_std__default_delete_int_array__M_head_const(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head_const(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4841 */
long long std___get_helper_1ul_std__default_delete_int_array(long long a1)
{
 return std_Tuple_impl_1ul_std__default_delete_int_array__M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x485F */
long long std___get_helper_0ul_int_ptr_std__default_delete_int_array_const(long long a1)
{
 return std_Tuple_impl_0ul_int_ptr_std__default_delete_int_array__M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x487E */
unsigned long long * std_Head_base_0ul_int_ptr_false__Head_base_int_ptr_ref(unsigned long long *a1, long long a2)
{
 long long v2; // rdx
 unsigned long long *result; // rax

 v2 = *(unsigned long long *)std_forward_int_ptr_ref(a2);
 result = a1;
 *a1 = v2;
 return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x48AC */
void std_Head_base_1ul_std__default_delete_int_true__Head_base()
{
 ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x48BB */
long long std_Head_base_0ul_int_ptr_false__M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4967 */
long long std_Head_base_0ul_int_ptr_false__M_head_const(long long a1)
{
 return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x48CD */
long long std_Tuple_impl_1ul_std__default_delete_int__M_head(long long a1)
{
 return std_Head_base_1ul_std__default_delete_int_true__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x48EB */
long long std_Tuple_impl_0ul_int_ptr_std__default_delete_int__M_head_const(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x490A */
void std_Head_base_1ul_std__default_delete_int_array_true__Head_base()
{
 ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4919 */
long long std_Tuple_impl_1ul_std__default_delete_int_array__M_head(long long a1)
{
 return std_Head_base_1ul_std__default_delete_int_array_true__M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4937 */
long long std_Tuple_impl_0ul_int_ptr_std__default_delete_int_array__M_head_const(long long a1)
{
 return std_Head_base_0ul_int_ptr_false__M_head_const(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4955 */
long long std_Head_base_1ul_std__default_delete_int_true__M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4967 */
long long std_Head_base_0ul_int_ptr_false__M_head(long long a1)
{
 return a1;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4979 */
long long std_Head_base_1ul_std__default_delete_int_array_true__M_head(long long a1)
{
 return a1;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x498C */
void RTTIDerivedB__dtor(RTTIDerivedB *_this)
{
 *(unsigned long long *)_this = off_8838;
 RTTIBase__dtor(_this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x49BA */
void RTTIDerivedB__deleting_dtor(RTTIDerivedB *_this)
{
 RTTIDerivedB__dtor(_this);
 operator delete(_this, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x49EA */
void RTTIDerivedA__dtor(RTTIDerivedA *_this)
{
 *(unsigned long long *)_this = off_8860;
 RTTIBase__dtor(_this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4A18 */
void RTTIDerivedA__deleting_dtor(RTTIDerivedA *_this)
{
 RTTIDerivedA__dtor(_this);
 operator delete(_this, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x4A48 */
void DiamondDerived__dtor(DiamondDerived *_this)
{
 *(unsigned long long *)_this = &off_88B8;
 *((unsigned long long *)_this + 4) = &off_8920;
 *((unsigned long long *)_this + 2) = &off_88E8;
 MiddleB__dtor((DiamondDerived *)((char *)_this + 16), off_8950);
 MiddleA__dtor(_this, off_8940);
 VirtualBase__dtor((DiamondDerived *)((char *)_this + 32));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4ACA */
void non_virtual_thunk_to_DiamondDerived__dtor(DiamondDerived *_this)
{
 DiamondDerived__dtor((DiamondDerived *)((char *)_this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4AD7 */
void virtual_thunk_to_DiamondDerived__dtor(DiamondDerived *_this)
{
 DiamondDerived__dtor((DiamondDerived *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 32LL)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4AE8 */
void DiamondDerived__deleting_dtor(DiamondDerived *_this)
{
 DiamondDerived__dtor(_this);
 operator delete(_this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4B17 */
void non_virtual_thunk_to_DiamondDerived__deleting_dtor(DiamondDerived *_this)
{
 DiamondDerived__deleting_dtor((DiamondDerived *)((char *)_this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4B21 */
void virtual_thunk_to_DiamondDerived__deleting_dtor(DiamondDerived *_this)
{
 DiamondDerived__deleting_dtor((DiamondDerived *)((char *)_this + *(unsigned long long *)(*(unsigned long long *)_this - 32LL)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x4B2E */
void MultiDerived__dtor(MultiDerived *_this)
{
 *(unsigned long long *)_this = &off_8A78;
 *((unsigned long long *)_this + 2) = &off_8AA8;
 BaseB_dtor((MultiDerived *)((char *)_this + 16));
 BaseA_dtor(_this);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4B7A */
void non_virtual_thunk_to_MultiDerived__dtor(MultiDerived *_this)
{
 MultiDerived__dtor((MultiDerived *)((char *)_this - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4B84 */
void MultiDerived__deleting_dtor(MultiDerived *_this)
{
 MultiDerived__dtor(_this);
 operator delete(_this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4BB3 */
void non_virtual_thunk_to_MultiDerived__deleting_dtor(MultiDerived *_this)
{
 MultiDerived__deleting_dtor((MultiDerived *)((char *)_this - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4BBE */
void Derived__dtor(Derived *_this)
{
 *(unsigned long long *)_this = &off_8B20;
 Base__dtor(_this);
}


/* Function: _ZN7DerivedD0Ev @ 0x4BEC */
void Derived__deleting_dtor(Derived *_this)
{
 Derived__dtor(_this);
 operator delete(_this, 0x10u);
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
