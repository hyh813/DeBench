/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#if !defined(__SIZE_TYPE__)
typedef unsigned long size_t;
#endif
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Include SSE intrinsics for __m128i */
#include <emmintrin.h>
#include <smmintrin.h>

/* Ensure SSE4.1 is enabled for _mm_extract_epi32 */
#if defined(__GNUC__) && !defined(__SSE4_1__)
#pragma GCC target("sse4.1")
#endif

/* Decompiler-generated placeholder type */
typedef struct { char data[1]; } _UNKNOWN;

/* External declarations */
extern void _gmon_start__(void);
extern int frame_dummy(void);
extern int _do_global_ctors_aux(void);

/* IDA decompiler byte extraction macros */
#define LOBYTE(x) (*((unsigned char*)&(x)))
#define BYTE1(x) (*((unsigned char*)&(x)+1))
#define BYTE2(x) (*((unsigned char*)&(x)+2))
#define BYTE3(x) (*((unsigned char*)&(x)+3))
#define BYTE4(x) (*((unsigned char*)&(x)+4))

/* Define missing intrinsics for GCC */
static __inline__ unsigned int __readgsdword(unsigned int offset)
{
    unsigned int result;
    __asm__ __volatile__("movl %%gs:%1, %0" : "=r"(result) : "m"(*(const unsigned int *)(offset)));
    return result;
}

static __inline__ long _InterlockedExchangeAdd(long volatile *addend, long value)
{
    return __sync_fetch_and_add(addend, value);
}

static __inline__ void _do_global_dtors_aux(void)
{
}

/* Global data declarations */
static const __m128i xmmword_22E0 = {0, 0};
static const __m128i xmmword_22F0 = {0, 0};
static const char asc_21F4[] = "Preprocessing tests passed!\n";
static const char aPpL201D[] = "Macro constants: %d\n";
static const char aPpL202D[] = "Macro functions: %d\n";
static const char aPpL203D[] = "Conditional compile: %d\n";
static const char aPpL204D[] = "Multi-branch compile: %d\n";
static const char aPpL301D[] = "Macro recursion: %d\n";
static const char aPpL302D[] = "Stringize: %d\n";
static const char aPpL303D[] = "Token paste: %d\n";
static const char aPpL304D[] = "Variadic macro: %d\n";
static const char aPpL305D[] = "Macro override: %d\n";
static const char aPpL306D[] = "Include guard: %d\n";
static const char aPpL307D[] = "Builtin macros: %d\n";
static const char asc_2294[] = "ASM tests passed!\n";
static const char aAsmL401D[] = "ASM basic: %d\n";
static const char aAsmL402D[] = "ASM clobber: %d\n";
static const char aAsmL403D[] = "ASM multi-insn: %d\n";
static const char aAsmL404D[] = "ASM SIMD: %d\n";
static const char aAsmL405D[] = "ASM atomic: %d\n";
static const char aAsmL406D[] = "ASM privileged: %d\n";
static int global_var = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_gcc_O3_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%ebx)");
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
int sub_10B0(int a1)
{
 return (*(int (**)(void))(a1 + 44))();
}


/* Function: main @ 0x1130 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_117C @ 0x117C */
void sub_117C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1180 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12B9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12BD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x12D0 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x12F0 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1300 */
int param_macro_functions(int x, int y)
{
 int v2; // edx

 v2 = x;
 if ( x < y )
 v2 = y;
 return v2 + x * x;
}


/* Function: call_macro_functions @ 0x1320 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x1330 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x1340 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1350 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1360 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1370 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1380 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1390 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x13A0 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x13B0 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x13C0 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x13D0 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x13E0 */
int param_variadic_macro(int x, int y, int z)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x1420 */
int call_variadic_macro()
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x1460 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x1470 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1480 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1490 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x14A0 */
int param_builtin_macros(int x)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "02:59:56");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x14F0 */
int call_builtin_macros()
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "02:59:56");
 return 382;
}


/* Function: test_preprocessing_features @ 0x1540 */
void test_preprocessing_features()
{
 __printf_chk(1, asc_21F4);
 __printf_chk(1, aPpL201D, 64);
 __printf_chk(1, aPpL202D, 30);
 __printf_chk(1, aPpL203D, 32);
 __printf_chk(1, aPpL204D, 57122);
 __printf_chk(1, aPpL301D, 116);
 __printf_chk(1, aPpL302D, 19);
 __printf_chk(1, aPpL303D, 60);
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, aPpL304D, 60);
 __printf_chk(1, aPpL305D, 16);
 __printf_chk(1, aPpL306D, 500);
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "02:59:56");
 __printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x1690 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x16B0 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x16D0 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < n; ++i )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x1700 */
int call_asm_clobber()
{
 int result; // eax
 int i; // ecx
 int arr[5]; // [esp+8h] [ebp-24h]
 unsigned int v3; // [esp+1Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 result = 0;
 for ( i = 0; i < 5; ++i )
 result += arr[i];
 return result;
}


/* Function: param_asm_multi_insn @ 0x1750 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1780 */
int call_asm_multi_insn()
{
 int result; // eax
 char src[10]; // [esp+2h] [ebp-3Ah] BYREF
 char dst[32]; // [esp+Ch] [ebp-30h] BYREF
 unsigned int v3; // [esp+2Ch] [ebp-10h]

 v3 = __readgsdword(0x14u);
 strcpy(src, "Hello ASM");
 memset(&dst[8], 0, 24);
 memcpy(dst, src, 9u);
 if ( dst[0] != 72 )
 return -1;
 result = -1;
 if ( dst[4] == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x1850 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1870 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(_mm_load_si128((const __m128i *)b), *(__m128i *)a);
 return 0;
}


/* Function: call_asm_simd @ 0x1890 */
long long call_asm_simd()
{
 __m128i result; // [esp+2Ch] [ebp-20h]

 result = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_22E0), _mm_load_si128((const __m128i *)&xmmword_22F0));
 {
  const int *res_array = (const int *)&result;
  return (unsigned int)(res_array[3] + res_array[2] + res_array[0] + res_array[1]);
 }
}


/* Function: param_asm_atomic @ 0x1910 */
int param_asm_atomic(int *counter, int increment)
{
 return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: param_atomic_c11 @ 0x1930 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1950 */
long long call_asm_atomic()
{
 signed int v0; // eax
 int counter; // [esp+8h] [ebp-14h] BYREF
 unsigned int v3; // [esp+Ch] [ebp-10h]
 union {
  long long ll;
  struct {
   unsigned int low;
   unsigned int high;
  } parts;
 } result;

 v3 = __readgsdword(0x14u);
 counter = 10;
 v0 = _InterlockedExchangeAdd(&counter, 5u);
 result.parts.low = v0 + counter + 5;
 result.parts.high = v3 - __readgsdword(0x14u);
 return result.ll;
}


/* Function: param_dynamic_code @ 0x19A0 */
int param_dynamic_code(int x)
{
 size_t v1; // esi
 void *v2; // eax
 int v3; // edi

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (void *)-1 )
 return -1;
 v3 = x + 5;
 munmap(v2, v1);
 return v3;
}


/* Function: param_memory_protection @ 0x1A00 */
int param_memory_protection()
{
 size_t v0; // edi
 unsigned int *v1; // eax
 unsigned int *v2; // esi
 int v3; // ebp

 v0 = sysconf(30);
 v1 = mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (unsigned int *)-1 )
 return -1;
 *v1 = 42;
 v2 = v1;
 if ( mprotect(v1, v0, 1) )
 {
 v3 = -2;
 munmap(v2, v0);
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 v3 = -3;
 else
 *v2 = 100;
 munmap(v2, v0);
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x1AD0 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1AF0 */
int call_asm_privileged()
{
 size_t v0; // esi
 void *v1; // eax
 char v2; // di
 int v3; // esi
 size_t v5; // [esp-18h] [ebp-38h]

 v0 = sysconf(30);
 v1 = mmap(0, v0, 7, 34, -1, 0);
 if ( v1 == (void *)-1 )
 {
 v2 = 0;
 v3 = -1;
 }
 else
 {
 v2 = 1;
 v5 = v0;
 v3 = 15;
 munmap(v1, v5);
 }
 if ( param_memory_protection() == 42 && v2 )
 return 77;
 return v3;
}


/* Function: param_memory_clobber_demo @ 0x1BA0 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1BD0 */
void test_asm_features()
{
 int v0; // eax
 int i; // ecx
 int v2; // eax
 signed int v3; // eax
 int v4; // eax
 signed int v5; // [esp+0h] [ebp-80h] BYREF
 __m128i si128; // [esp+4h] [ebp-7Ch]
 __m128i v7; // [esp+14h] [ebp-6Ch]
 __m128i v8; // [esp+30h] [ebp-50h]
 char v9[10]; // [esp+46h] [ebp-3Ah] BYREF
 long double v10; // [esp+50h] [ebp-30h] BYREF
 int v11; // [esp+5Ch] [ebp-24h]
 int v12; // [esp+60h] [ebp-20h]
 int v13; // [esp+64h] [ebp-1Ch]
 int v14; // [esp+68h] [ebp-18h]
 int v15; // [esp+6Ch] [ebp-14h]
 unsigned int v16; // [esp+70h] [ebp-10h]

 v16 = __readgsdword(0x14u);
 __printf_chk(1, asc_2294);
 __printf_chk(1, aAsmL401D, 15);
 v0 = 0;
 for ( i = 0; i < 4; ++i )
 v0 += _mm_extract_epi32(v8, i);
 __printf_chk(1, aAsmL402D, v0);
 strcpy(v9, "Hello ASM");
 memset(&v10, 0, sizeof(v10));
 v11 = 0;
 v12 = 0;
 v13 = 0;
 v14 = 0;
 v15 = 0;
 memcpy(&v10, v9, 9u);
 if ( LOBYTE(v10) == 72 )
 {
 v2 = -1;
 if ( BYTE4(v10) == 111 )
 v2 = 42;
 }
 else
 {
 v2 = -1;
 }
 __printf_chk(1, aAsmL403D, v2);
 si128 = _mm_load_si128((const __m128i *)&xmmword_22E0);
 v7 = _mm_load_si128((const __m128i *)&xmmword_22F0);
 v8 = _mm_add_epi32(si128, v7);
 __printf_chk(1, aAsmL404D, _mm_extract_epi32(v8, 3) + _mm_extract_epi32(v8, 2) + _mm_extract_epi32(v8, 0) + _mm_extract_epi32(v8, 1));
 v5 = 10;
 v3 = _InterlockedExchangeAdd(&v5, 5u);
 __printf_chk(1, aAsmL405D, v3 + v5 + 5);
 v4 = call_asm_privileged();
 __printf_chk(1, aAsmL406D, v4);
}


/* Function: __x86.get_pc_thunk.ax @ 0x1DBF */
void *_x86_get_pc_thunk_ax()
{
 _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x1DC3 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1DD0 */
void _stack_chk_fail_local()
{
 __asm__ volatile ("addl $_GLOBAL_OFFSET_TABLE_ - (.), %ebx");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1E3C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4018 */

/* FAILED to decompile: mprotect @ 0x401C */

/* FAILED to decompile: __stack_chk_fail @ 0x4020 */

/* FAILED to decompile: sysconf @ 0x4024 */

/* FAILED to decompile: __cxa_finalize @ 0x4028 */

/* FAILED to decompile: mmap @ 0x402C */

/* FAILED to decompile: __printf_chk @ 0x4030 */

/* FAILED to decompile: munmap @ 0x4034 */

/* Total functions decompiled: 67, failed: 8 */
