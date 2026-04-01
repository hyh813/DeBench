/* Macro definitions for 64-bit value handling */
#define LODWORD(x) ((unsigned int)(x))
#define HIDWORD(x) ((unsigned int)((unsigned long long)(x) >> 32))
#define HIBYTE(x) (*((unsigned char *)&(x) + 1))

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

/* Forward declarations for C++ classes */
typedef struct Base Base;
typedef struct type_info type_info;

/* Define std_ios_base_Init struct */
struct std_ios_base_Init {
    int dummy;
};
typedef struct std_ios_base_Init std_ios_base_Init;

/* Forward declarations for functions */
extern void test_cpp_oo_features(void);
extern void std_ios_base_Init_Init(std_ios_base_Init *self);
extern void std_ios_base_Init_destructor(std_ios_base_Init *self);
extern int template_max_int(int a1, int a2);
extern long double template_max_double(double a1, double a2);
extern unsigned int *template_swap_int(int *a1, unsigned int *a2);

/* External variable declarations */
extern std_ios_base_Init std___ioinit;
extern void *_dso_handle;
extern int __printf_chk(int flag, const char *format, ...);

/* Define missing variables */
static std_ios_base_Init std___ioinit_def = { 0 };
static void *_dso_handle_def = 0;

/* Alias externs to static definitions */
#define std___ioinit std___ioinit_def
#define _dso_handle _dso_handle_def

/* External typeinfo declarations */
extern struct type_info typeinfo_for_int;
extern struct type_info typeinfo_for_RTTIBase;
extern struct type_info typeinfo_for_RTTIDerivedA;
extern struct type_info typeinfo_for_RTTIDerivedB;

/* Define type_info structures */
struct type_info {
    void *vtable;
    const char *name;
};

static struct type_info typeinfo_for_int_def = { 0, "i" };
static struct type_info typeinfo_for_RTTIBase_def = { 0, "8RTTIBase" };
static struct type_info typeinfo_for_RTTIDerivedA_def = { 0, "12RTTIDerivedA" };
static struct type_info typeinfo_for_RTTIDerivedB_def = { 0, "12RTTIDerivedB" };

/* Alias externs to static definitions */
#define typeinfo_for_int typeinfo_for_int_def
#define typeinfo_for_RTTIBase typeinfo_for_RTTIBase_def
#define typeinfo_for_RTTIDerivedA typeinfo_for_RTTIDerivedA_def
#define typeinfo_for_RTTIDerivedB typeinfo_for_RTTIDerivedB_def

/* External variable declarations */
extern int LifecycleClass_instance_count;
extern int off_3E48;
extern int off_3E5C;
extern const char *asc_2018;
extern const char *unk_203C;
extern const char *unk_205A;
extern const char *unk_2076;
extern const char *unk_2092;
extern const char *unk_20AE;
extern const char *unk_20CB;
extern const char *unk_20E7;
extern const char *unk_2103;
extern const char *unk_211F;

/* Define missing string constants and variables */
static int LifecycleClass_instance_count_def = 1;
static int off_3E48_def = 0;
static int off_3E5C_def = 0;
static const char *asc_2018_def = "Testing C++ OO Features";
static const char *unk_203C_def = "strlen result: %d\n";
static const char *unk_205A_def = "constructor result: %d\n";
static const char *unk_2076_def = "virtual func result: %d\n";
static const char *unk_2092_def = "multiple inheritance result: %d\n";
static const char *unk_20AE_def = "diamond inheritance result: %d\n";
static const char *unk_20CB_def = "operator overload result: %d\n";
static const char *unk_20E7_def = "template func result: %d\n";
static const char *unk_2103_def = "template class result: %d\n";
static const char *unk_211F_def = "lambda result: %d\n";

/* Alias externs to static definitions */
#define LifecycleClass_instance_count LifecycleClass_instance_count_def
#define off_3E48 off_3E48_def
#define off_3E5C off_3E5C_def
#define asc_2018 asc_2018_def
#define unk_203C unk_203C_def
#define unk_205A unk_205A_def
#define unk_2076 unk_2076_def
#define unk_2092 unk_2092_def
#define unk_20AE unk_20AE_def
#define unk_20CB unk_20CB_def
#define unk_20E7 unk_20E7_def
#define unk_2103 unk_2103_def
#define unk_211F unk_211F_def
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

/* Stub for __readgsdword intrinsic */
static unsigned int __readgsdword(unsigned int offset) { return 0; }

/* External function declarations */
extern size_t strlen(const char *s);
extern char *strcpy(char *dest, const char *src);
extern int strcmp(const char *s1, const char *s2);
extern int puts(const char *s);
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr, size_t size);
extern void *__dynamic_cast(void *obj, const void *src_type, const void *dst_type, int flags);
extern void *__cxa_allocate_exception(size_t size);
extern void __cxa_throw(void *exception, void *type_info, void *dest);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *_ZdaPvj;

/* Stub definitions for external library functions */
static size_t strlen_stub(const char *s) { return 0; }
static void *operator_new_stub(size_t size) { return 0; }
static void operator_delete_stub(void *ptr, size_t size) { }
static int puts_stub(const char *s) { return 0; }
static char *strcpy_stub(char *dest, const char *src) { return dest; }
static void *__dynamic_cast_stub(void *obj, const void *src_type, const void *dst_type, int flags) { return 0; }
static void __cxa_throw_stub(void *exception, void *type_info, void *dest) { }
static int __printf_chk_stub(int flag, const char *format, ...) { return 0; }
static void *__cxa_allocate_exception_stub(size_t size) { return 0; }

/* Alias externs to stub definitions */
#define strlen strlen_stub
#define operator_new operator_new_stub
#define operator_delete operator_delete_stub
#define puts puts_stub
#define strcpy strcpy_stub
#define __dynamic_cast __dynamic_cast_stub
#define __cxa_throw __cxa_throw_stub
#define __printf_chk __printf_chk_stub
#define __cxa_allocate_exception __cxa_allocate_exception_stub

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_O2_no_g
 * Processor: pc
 */

/* External gmon start function */
extern void (*_gmon_start__)(void);




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 /* Stub - original assembly had invalid register for target architecture */
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
int sub_1150(int a1)
{
 return (*(int (**)(void))(a1 + 84))();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1270 */
void test_cpp_exception(void)
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (struct type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x1380 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}






/* CRT stub function _start removed by preprocessor */



/* Function: sub_140C @ 0x140C */
void sub_140C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1410 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1549 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x154D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1560 */
long long test_cpp_member_func(void)
{
 long long result; // rax
 char s[6]; // [esp+0h] [ebp-30h] BYREF
 short v2; // [esp+6h] [ebp-2Ah]
 int v3; // [esp+8h] [ebp-28h]
 int v4; // [esp+Ch] [ebp-24h]
 int v5; // [esp+10h] [ebp-20h]
 int v6; // [esp+14h] [ebp-1Ch]
 int v7; // [esp+18h] [ebp-18h]
 short v8; // [esp+1Ch] [ebp-14h]
 char v9; // [esp+1Eh] [ebp-12h]
 char v10; // [esp+1Fh] [ebp-11h]
 unsigned int v11; // [esp+20h] [ebp-10h]

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
 result = (long long)(strlen(s) + 4700) | ((long long)(v11 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1600 */
int test_cpp_constructor(void)
{
 return 1001 * LifecycleClass_instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x1620 */
int call_virtual_func(int (***a1)(void), int a2)
{
 return (**a1)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1630 */
int test_cpp_virtual_func(void)
{
 return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1640 */
int test_cpp_multiple_inheritance(void)
{
 return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1650 */
int test_cpp_diamond_inheritance(void)
{
 return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1660 */
int test_cpp_operator_overload(void)
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1670 */
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
 template_swap_int(&v3, (unsigned int *)&v4);
 result = (long long)(v4 + v3 + v1 + (int)(double)a1) | ((long long)(v5 - __readgsdword(0x14u)) << 32);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1720 */
int test_cpp_template_class(void)
{
 return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1730 */
int test_cpp_lambda(void)
{
 return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1740 */
int test_cpp_smart_ptr(void)
{
 return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1750 */
size_t test_cpp_rtti(void)
{
 int v0; // esi
 int *v1; // edi
 const char *v2; // ebp
 int v3; // esi
 size_t v4; // esi
 void *lpsrc; // [esp+14h] [ebp-28h]
 int v7; // [esp+18h] [ebp-24h]

 v0 = 10;
 v1 = (int *)operator_new(4u);
 *v1 = off_3E48;
 lpsrc = (void *)operator_new(4u);
 *(int *)lpsrc = off_3E5C;
 v7 = *v1;
 v2 = *(const char **)(*(unsigned int *)(*v1 - 4) + 4);
 if ( v2 != "12RTTIDerivedA" )
 {
 v0 = 0;
 if ( *v2 != 42 )
 v0 = strcmp(v2, "12RTTIDerivedA") == 0 ? 0xA : 0;
 }
 v3 = v0 + 20;
 if ( __dynamic_cast(
 (void *)v1,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedA,
 0) )
 {
 v3 += 100;
 }
 if ( __dynamic_cast(
 lpsrc,
 (const void *)&typeinfo_for_RTTIBase,
 (const void *)&typeinfo_for_RTTIDerivedB,
 0) )
 {
 v3 += 200;
 }
 v4 = strlen(v2 + (*v2 == 42)) + v3;
 (*(void ( **)(int *))(v7 + 4))(v1);
 (*(void ( **)(void *))(*(unsigned int *)lpsrc + 4))(lpsrc);
 return v4;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1880 */
void test_cpp_oo_features(void)
{
 size_t v0; // eax
 int v1; // eax
 int v2; // eax
 long double v3; // fst7
 int v4; // eax
 unsigned short s[4]; // [esp+1Ch] [ebp-30h] BYREF
 int v6; // [esp+24h] [ebp-28h]
 int v7; // [esp+28h] [ebp-24h]
 int v8; // [esp+2Ch] [ebp-20h]
 int v9; // [esp+30h] [ebp-1Ch]
 int v10; // [esp+34h] [ebp-18h]
 short v11; // [esp+38h] [ebp-14h]
 char v12; // [esp+3Ah] [ebp-12h]
 char v13; // [esp+3Bh] [ebp-11h]
 unsigned int v14; // [esp+3Ch] [ebp-10h]

 v14 = __readgsdword(0x14u);
 puts(asc_2018);
 v12 = 0;
 v11 = 0;
 strcpy((char *)s, "Test");
 ((unsigned char *)&s[2])[1] = 0;
 s[3] = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 v10 = 0;
 v13 = 0;
 v0 = strlen((const char *)s);
 __printf_chk(1, unk_203C, v0 + 4700);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_205A, v1);
 __printf_chk(1, unk_2076, 42);
 __printf_chk(1, unk_2092, 71);
 v2 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_20AE, v2);
 v3 = __printf_chk(1, unk_20CB, 22);
 v4 = test_cpp_template_func(v3);
 __printf_chk(1, unk_20E7, v4);
 __printf_chk(1, unk_2103, 16);
 __printf_chk(1, unk_211F, 85);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1A30 */
int Base_virtual_func(Base *self, int a2)
{
 return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1A40 */
const char *Base_getName()
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1A60 */
void Base_destructor()
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1A70 */
int Derived_virtual_func(Derived *self, int a2)
{
 return *((unsigned int *)self + 1) * a2;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1A90 */
const char *Derived_getName()
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1AB0 */
int MultiDerived_funcA()
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1AC0 */
int MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1AD0 */
int non_virtual_thunk_to_MultiDerived_funcB()
{
 return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1AE0 */
int MiddleA_func(MiddleA *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1B00 */
int virtual_thunk_to_MiddleA_func(MiddleA *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x1B20 */
int MiddleB_func(MiddleB *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1B40 */
int virtual_thunk_to_MiddleB_func(MiddleB *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1B60 */
int DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1B80 */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self
 + *(unsigned int *)(*(unsigned int *)self - 12)
 + *(unsigned int *)(*(unsigned int *)((char *)self + *(unsigned int *)(*(unsigned int *)self - 12)) - 12)
 + 4)
 + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1BA0 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *self)
{
 return *(unsigned int *)((char *)self + *(unsigned int *)(*((unsigned int *)self - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1BC0 */
int RTTIDerivedA_getType()
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1BD0 */
int RTTIDerivedB_getType()
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1BE0 */
void RTTIDerivedB_destructor()
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1BF0 */
void RTTIDerivedA_destructor()
{
 ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1C00 */
void DiamondDerived_destructor()
{
 ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1C10 */
void virtual_thunk_to_DiamondDerived_destructor()
{
 ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1C20 */
void non_virtual_thunk_to_DiamondDerived_destructor()
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1C30 */
void MultiDerived_destructor()
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1C40 */
void non_virtual_thunk_to_MultiDerived_destructor()
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1C50 */
void Derived_destructor()
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1C60 */
void Base_destructor_delete(Base *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1C90 */
void Derived_destructor_delete(Derived *self)
{
 operator_delete(self, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1CC0 */
void MultiDerived_destructor_delete(MultiDerived *self)
{
 operator_delete(self, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1CF0 */
void non_virtual_thunk_to_MultiDerived_destructor_delete(MultiDerived *self)
{
 operator_delete((char *)self - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1D20 */
void RTTIDerivedB_destructor_delete(RTTIDerivedB *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1D50 */
void RTTIDerivedA_destructor_delete(RTTIDerivedA *self)
{
 operator_delete(self, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1D80 */
void DiamondDerived_destructor_delete(DiamondDerived *self)
{
 operator_delete(self, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1DB0 */
void virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *self)
{
 operator_delete((char *)self + *(unsigned int *)(*(unsigned int *)self - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1DE0 */
void non_virtual_thunk_to_DiamondDerived_destructor_delete(DiamondDerived *self)
{
 operator_delete((char *)self - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1E10 */
int template_max_int(int a1, int a2)
{
 int result; // eax

 result = a1;
 if ( a1 < a2 )
 return a2;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1E30 */
long double template_max_double(double a1, double a2)
{
 long double v2; // fst6

 v2 = a1;
 if ( a1 <= (long double)a2 )
 return a2;
 return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1E50 */
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


/* Function: _ZN9ContainerIiEC2Ev @ 0x1E70 */
int Container_int_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 40) = 0;
 return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1E80 */
int Container_int_push(int a1, int a2)
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x1EA0 */
int Container_int_get(int a1, int a2)
{
 int result; // eax

 result = 0;
 if ( a2 >= 0 && *(unsigned int *)(a1 + 40) > a2 )
 return *(unsigned int *)(a1 + 4 * a2);
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1ED0 */
int Container_int_getSize(int a1)
{
 return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1EE0 */
int Container_double_Constructor(int a1)
{
 int result; // eax

 result = a1;
 *(unsigned int *)(a1 + 80) = 0;
 return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1EF0 */
int Container_double_push(int a1, double a2)
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x1F20 */
long double Container_double_get(int a1, int a2)
{
 if ( a2 >= 0 && a2 < *(unsigned int *)(a1 + 80) )
 return *(double *)(a1 + 8 * a2);
 else
 return 0.0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1F50 */
int Container_double_getSize(int a1)
{
 return *(unsigned int *)(a1 + 80);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1F5C */
void *_x86_get_pc_thunk_ax(void)
{
 void *retaddr;

 return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x1F60 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1F70 */
void _stack_chk_fail_local()
{
 __asm__ __volatile__ ("addl $_GLOBAL_OFFSET_TABLE_, %%ebx" ::: "ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* External function declaration */
extern void _do_global_dtors_aux(void);




/* FAILED to decompile: __printf_chk @ 0x402C */

/* FAILED to decompile: _Znwj @ 0x4034 */

/* FAILED to decompile: __cxa_finalize @ 0x4038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x403C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4040 */

/* FAILED to decompile: strlen @ 0x4044 */

/* FAILED to decompile: __cxa_atexit @ 0x4048 */

/* FAILED to decompile: _ZdlPvj @ 0x404C */

/* FAILED to decompile: strcmp @ 0x4054 */

/* FAILED to decompile: __libc_start_main @ 0x4058 */

/* FAILED to decompile: __stack_chk_fail @ 0x405C */

/* FAILED to decompile: __dynamic_cast @ 0x4060 */

/* FAILED to decompile: __cxa_rethrow @ 0x4068 */

/* FAILED to decompile: puts @ 0x406C */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4070 */

/* FAILED to decompile: __cxa_end_catch @ 0x4074 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4078 */

/* FAILED to decompile: __cxa_throw @ 0x407C */

/* FAILED to decompile: _Unwind_Resume @ 0x4080 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4084 */

/* Total functions decompiled: 95, failed: 20 */
