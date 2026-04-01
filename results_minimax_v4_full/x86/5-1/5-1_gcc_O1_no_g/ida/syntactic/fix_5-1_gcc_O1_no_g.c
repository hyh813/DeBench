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

/* External function declarations */
int puts(const char *s);
int strcmp(const char *s1, const char *s2);
char *strcpy(char *dest, const char *src);
size_t strlen(const char *s);
int __printf_chk(int flag, const char *format, ...);
unsigned int __readgsdword(unsigned int offset);
void *__cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);
int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);
void *__cxa_begin_catch(void *exception_header);
void __cxa_end_catch();
void __cxa_rethrow();
void *__dynamic_cast(const void *src, const void *src_type, const void *dst_type, long search_distance);
int __libc_start_main(int (*main)(int, char**, char**), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
void __stack_chk_fail();
void __stack_chk_fail_local();
void __cxa_finalize(void *);
void _stack_chk_fail_local();
void frame_dummy();
int _do_global_ctors_aux();
void _do_global_dtors_aux();
void *_gmon_start__;

/* Operator new/delete declarations */
void *operator new(size_t size);
void operator delete(void *ptr) noexcept;
void *operator new[](size_t size);
void operator delete[](void *ptr) noexcept;

/* Template function declarations */
template<typename T>
T template_max(T a, T b);

template<typename T>
void template_swap(T *a, T *b);

/* Class definitions */
struct Base { int (*virtual_func_ptr)(Base*, int); const char *name; };
struct Derived { int (*virtual_func_ptr)(Derived*, int); const char *name; unsigned int value; };
struct MultiDerived { int (*virtual_func_ptr)(MultiDerived*, int); int padding1; const char *name1; const char *name2; int padding2; };
struct MiddleA { int (*virtual_func_ptr)(MiddleA*); };
struct MiddleB { int (*virtual_func_ptr)(MiddleB*); };
struct DiamondDerived { int (*virtual_func_ptr)(DiamondDerived*); int padding1; const char *name1; const char *name2; int padding2; };

struct LifecycleClass { static int instance_count; };
int LifecycleClass::instance_count = 0;

struct RTTIBase { virtual ~RTTIBase(); };
struct RTTIDerivedA : RTTIBase { virtual ~RTTIDerivedA(); virtual int getType(); };
struct RTTIDerivedB : RTTIBase { virtual ~RTTIDerivedB(); virtual int getType(); };

struct Container_int { int data[10]; int size; };
struct Container_double { double data[10]; int size; };

/* Virtual table pointers */
extern unsigned int off_4CD4;
extern unsigned int off_4CEC;
extern unsigned int off_4DC0;
extern unsigned int off_4DD4;
extern unsigned int off_4DE8;
extern void *_dso_handle;
extern void *__ioinit;

/* Helper macros for function pointer casts */
#define LODWORD(x) ((unsigned int*)&(x))[0]
#define HIDWORD(x) ((unsigned int*)&(x))[1]

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O1_no_g
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
 __asm { jmp dword ptr [ebx+8] }
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
int sub_1170@<eax>(int a1@<ebx>)
{
 return (*(int (**)(void))(a1 + 92))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_12DC @ 0x12DC */
void sub_12DC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x12E0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1419 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x141D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1421 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 char s[6]; // [esp+Ch] [ebp-30h] BYREF
 short v2; // [esp+12h] [ebp-2Ah]
 int v3; // [esp+14h] [ebp-28h]
 int v4; // [esp+18h] [ebp-24h]
 int v5; // [esp+1Ch] [ebp-20h]
 int v6; // [esp+20h] [ebp-1Ch]
 int v7; // [esp+24h] [ebp-18h]
 short v8; // [esp+28h] [ebp-14h]
 char v9; // [esp+2Ah] [ebp-12h]
 char v10; // [esp+2Bh] [ebp-11h]
 unsigned int v11; // [esp+2Ch] [ebp-10h]

 v11 = __readgsdword(0x14u);
 strcpy(s, "Test");
 s[5] = 0;
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 LODWORD(result) = strlen(s) + 4700;
 HIDWORD(result) = v11 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x14B5 */
int test_cpp_constructor(void)
{
 unsigned int *v0; // eax
 int v1; // esi

 v0 = (unsigned int *)operator new[](0x14u);
 v0[1] = 10;
 v0[2] = 20;
 v0[3] = 30;
 v0[4] = 40;
 v1 = LifecycleClass::instance_count++;
 operator delete[](v0);
 --LifecycleClass::instance_count;
 return v1 + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1523 */
int call_virtual_func(Base *a1, int a2)
{
 return (**(int ( ***)(Base *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x153B */
long long test_cpp_virtual_func(void)
{
 int v0; // ebx
 long long result; // rax
 unsigned int (*v2)(Base *, int); // [esp+8h] [ebp-1Ch] BYREF
 unsigned int v3[2]; // [esp+Ch] [ebp-18h] BYREF
 unsigned int v4; // [esp+14h] [ebp-10h]

 v4 = __readgsdword(0x14u);
 v2 = &off_4CD4;
 v3[0] = &off_4CEC;
 v3[1] = 3;
 v0 = call_virtual_func((Base *)&v2, 5);
 LODWORD(result) = v0 + call_virtual_func((Base *)v3, 5) + 21;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x15B1 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x15BB */
long long test_cpp_diamond_inheritance(void)
{
 int v0; // ebx
 long long result; // rax
 unsigned int ( **v2)(DiamondDerived *__hidden); // [esp+24h] [ebp-18h] BYREF
 int v3; // [esp+28h] [ebp-14h]
 unsigned int v4; // [esp+2Ch] [ebp-10h]

 v4 = __readgsdword(0x14u);
 v2 = &off_4DC0;
 v3 = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v2);
 v3 = 100;
 LODWORD(result) = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&v2);
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1634 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x163E */
long long test_cpp_template_func(long double a1)
{
 int v1; // ebx
 long long result; // rax
 int v3; // [esp+1Ch] [ebp-18h] BYREF
 int v4; // [esp+20h] [ebp-14h] BYREF
 unsigned int v5; // [esp+24h] [ebp-10h]

 v5 = __readgsdword(0x14u);
 v1 = template_max_int(3, 7);
 template_max_double(2.5, 1.5);
 v3 = 10;
 v4 = 20;
 template_swap<int>(&v3, &v4);
 LODWORD(result) = v4 + v3 + v1 + (int)(double)a1;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x16E2 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x16EC */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x16F6 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = __cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1806 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1810 */
size_t test_cpp_rtti(void)
{
 void *v0; // ebp
 const char *v1; // edi
 int v2; // esi
 int v3; // esi
 size_t v4; // esi
 int *lpsrc; // [esp+18h] [ebp-24h]
 int v7; // [esp+1Ch] [ebp-20h]

 lpsrc = (int *)operator new(4u);
 *lpsrc = (int)off_4DD4;
 v0 = (void *)operator new(4u);
 *(unsigned int *)v0 = off_4DE8;
 v7 = *lpsrc;
 v1 = *(const char **)(*(unsigned int *)(*lpsrc - 4) + 4);
 v2 = 10;
 if ( v1 != "12RTTIDerivedA" )
 {
 v2 = 0;
 if ( *v1 != 42 )
 v2 = strcmp(v1, "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v3 = v2 + 20;
 if ( __dynamic_cast(
 lpsrc,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v3 += 100;
 }
 if ( __dynamic_cast(
 v0,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 += 200;
 }
 v4 = strlen(&v1[*v1 == 42]) + v3;
 (*(void ( **)(int *))(v7 + 4))(lpsrc);
 (*(void ( **)(void *))(*(unsigned int *)v0 + 4))(v0);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x193A */
void test_cpp_oo_features(void)
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 long double v5; // fst7
 int v6; // eax

 puts(asc_2018);
 v0 = test_cpp_member_func();
 __printf_chk(1, &unk_203C, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, &unk_205A, v1);
 v2 = test_cpp_virtual_func();
 __printf_chk(1, &unk_2076, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, &unk_2092, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, &unk_20AE, v4);
 v5 = __printf_chk(1, &unk_20CB, 22);
 v6 = test_cpp_template_func(v5);
 __printf_chk(1, &unk_20E7, v6);
 __printf_chk(1, &unk_2103, 16);
 __printf_chk(1, &unk_211F, 85);
 test_cpp_exception();
}


/* Function: main @ 0x1A75 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1A8B */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1AC8 */
int Base::virtual_func(int a2)
{
 (void)this;
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1AD4 */
const char *Base::getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1AEA */
void Base::~Base()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1AF0 */
int Derived::virtual_func(int a2)
{
 (void)this;
 return *((unsigned int *)this + 1) * a2;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1B02 */
const char *Derived::getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1B18 */
int MultiDerived::funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1B22 */
int MultiDerived::funcB()
{
 return 40;
}


/* Function: non_virtual_thunk_to_MultiDerived_funcB @ 0x1B2C */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1B36 */
int MiddleA::func()
{
 return *(unsigned int *)((char *)this + 4) + 150;
}


/* Function: virtual_thunk_to_MiddleA_func @ 0x1B4D */
int virtual_thunk_to_MiddleA_func(MiddleA *ptr)
{
 return *(unsigned int *)((char *)ptr
 + *(unsigned int *)(*(unsigned int *)ptr - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)ptr + *(unsigned int *)(*(unsigned int *)ptr - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B6A */
int MiddleB::func(MiddleB *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 200;
}


/* Function: virtual_thunk_to_MiddleB_func @ 0x1B81 */
int virtual_thunk_to_MiddleB_func(MiddleA *this)
{
 return *(unsigned int *)((char *)this
 + *(unsigned int *)(*(unsigned int *)this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B9E */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12) + 4) + 250;
}


/* Function: virtual_thunk_to_DiamondDerived_func @ 0x1BB5 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this
 + *(unsigned int *)(*(unsigned int *)this - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)this + *(unsigned int *)(*(unsigned int *)this - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BD1 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *this)
{
 return *(unsigned int *)((char *)this + *(unsigned int *)(*((unsigned int *)this - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BEA */
int RTTIDerivedA::getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BF4 */
int RTTIDerivedB::getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BFE */
void RTTIDerivedB::~RTTIDerivedB()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1C04 */
void RTTIDerivedA::~RTTIDerivedA()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C0A */
void DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C0F */
void non_virtual_thunk_to_DiamondDerived_dtor(DiamondDerived *this)
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C14 */
void `virtual thunk to'DiamondDerived::~DiamondDerived()
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C1A */
void MultiDerived::~MultiDerived()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C1F */
void non_virtual_thunk_to_MultiDerived_dtor()
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C24 */
void Derived::~Derived()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C2A */
Base::~Base()
{
}


/* Function: _ZN7DerivedD0Ev @ 0x1C4E */
Derived::~Derived()
{
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1C72 */
MultiDerived::~MultiDerived()
{
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1C95 */
void non_virtual_thunk_to_MultiDerived_dtor()
{
 MultiDerived *this_ptr = (MultiDerived *)((char *)__builtin_frame_address(0) + 8);
 operator delete((char *)this_ptr - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1CBC */
RTTIDerivedA::~RTTIDerivedA()
{
 operator delete(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1CE0 */
RTTIDerivedB::~RTTIDerivedB()
{
 operator delete(this);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D04 */
DiamondDerived::~DiamondDerived()
{
 operator delete(this, 0x18u);
}


/* Function: template_max_int @ 0x1D77 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a1;
 if ( a1 < a2 )
 return a2;
 return result;
}


/* Function: template_max_double @ 0x1D89 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a1;
 if ( a1 <= (long double)a2 )
 return a2;
 return v2;
}


/* Function: template_swap_int @ 0x1D9C */
unsigned int * template_swap_int(int *a1, unsigned int *a2)
{
 unsigned int *result; // eax
 int v3; // ecx

 result = a2;
 v3 = *a1;
 *a1 = *a2;
 *a2 = v3;
 return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1DB4 */
int Container<int>::Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1DC4 */
int Container<int>::push(int a1, int a2)
{
 int result; // eax
 int v3; // edx

 result = a1;
 v3 = *(unsigned int *)(a1 + 40);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 40) = v3 + 1;
 *(unsigned int *)(a1 + 4 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1DE2 */
int Container<int>::get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1E02 */
int Container<int>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1E0E */
int Container<double>::Container(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1E1E */
int Container<double>::push(int a1, double a2)
{
 int result; // eax
 int v3; // edx

 result = a1;
 v3 = *(unsigned int *)(a1 + 80);
 if ( v3 <= 9 )
 {
 *(unsigned int *)(a1 + 80) = v3 + 1;
 *(double *)(a1 + 8 * v3) = a2;
 }
 return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1E40 */
long double Container<double>::get(int a1, int a2)
{
 if ( a2 < 0 )
 return 0.0;
 if ( *(unsigned int *)(a1 + 80) > a2 )
 return *(double *)(a1 + 8 * a2);
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1E60 */
int Container<double>::getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1E6C */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x1E70 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1E80 */
void _stack_chk_fail_local()
{
 __asm { add ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1EEC */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __printf_chk @ 0x502C */

/* FAILED to decompile: _Znwj @ 0x5034 */

/* FAILED to decompile: __cxa_finalize @ 0x5038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x503C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x5040 */

/* FAILED to decompile: strlen @ 0x5044 */

/* FAILED to decompile: __cxa_atexit @ 0x5048 */

/* FAILED to decompile: _ZdlPvj @ 0x504C */

/* FAILED to decompile: strcmp @ 0x5054 */

/* FAILED to decompile: __libc_start_main @ 0x5058 */

/* FAILED to decompile: _Znaj @ 0x505C */

/* FAILED to decompile: __stack_chk_fail @ 0x5060 */

/* FAILED to decompile: __dynamic_cast @ 0x5064 */

/* FAILED to decompile: _ZdaPv @ 0x5068 */

/* FAILED to decompile: __cxa_rethrow @ 0x5070 */

/* FAILED to decompile: puts @ 0x5074 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x5078 */

/* FAILED to decompile: __cxa_end_catch @ 0x507C */

/* FAILED to decompile: __gxx_personality_v0 @ 0x5080 */

/* FAILED to decompile: __cxa_throw @ 0x5084 */

/* FAILED to decompile: _Unwind_Resume @ 0x508C */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x5090 */

/* Total functions decompiled: 97, failed: 22 */
