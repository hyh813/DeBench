// Angr Decompilation of 7_gcc_Os_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/* Function prototypes for CRT and library functions */
extern void _start(void);
extern void abort(void);
extern int puts(const char *);
extern int __printf_chk(int flag, const char *format, ...);
extern void __stack_chk_fail(void);
extern char *strncpy(char *, const char *, size_t);
extern void *malloc(size_t);
extern void free(void *);
extern void signal(int sig, void (*handler)(int));
extern int _setjmp(void *);
extern void __longjmp_chk(void *, int, ...);
extern size_t strlen(const char *);

/* Function prototype for test_obf_opt_edge */
extern int test_obf_opt_edge(void);

/* External data - declarations only (definitions in separate file or provided by runtime) */
/* Note: Definitions are provided later in this file */

/* Internal string constants - extern for external linkage */
extern const char *g_401120;
extern const char *g_40114d;
extern const char *g_401169;
extern const char *g_401185;
extern const char *g_4011a2;
extern const char *g_4011be;
extern const char *g_4011e8;
extern const char *g_40120d;
extern const char *g_401233;
extern const char *g_401253;
extern const char *g_40126f;
extern const char *g_40128c;
extern const char *g_4012a9;
extern const char *g_4012da;
extern const char *g_4012f7;

/* CRT stub functions removed by preprocessor */
/* frame_dummy - removed */
/* __do_global_dtors_aux - removed */
/* deregister_tm_clones - removed */
/* register_tm_clones - removed */


/* Implementation of ARM64 utility functions */
static unsigned int __ROL__(unsigned int value, int rotation)
{
    return (value << rotation) | (value >> (32 - rotation));
}

static int arm64g_calculate_condition(int cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep)
{
    /* Simplified implementation for ARM64 condition codes */
    switch (cc_op & 0x1F)
    {
        case 0: /* ARM64_CC_EQ - Equal */
            return (cc_dep1 == cc_dep2) ? 1 : 0;
        case 1: /* ARM64_CC_NE - Not equal */
            return (cc_dep1 != cc_dep2) ? 1 : 0;
        case 2: /* ARM64_CC_CS/HS - Carry set/Unsigned >= */
            return (cc_dep1 >= cc_dep2) ? 1 : 0;
        case 3: /* ARM64_CC_CC/LO - Carry clear/Unsigned < */
            return (cc_dep1 < cc_dep2) ? 1 : 0;
        case 4: /* ARM64_CC_MI - Minus/Negative */
            return ((signed long)cc_dep1 < 0) ? 1 : 0;
        case 5: /* ARM64_CC_PL - Plus/Positive or zero */
            return ((signed long)cc_dep1 >= 0) ? 1 : 0;
        case 6: /* ARM64_CC_VS - Overflow set */
            return (cc_ndep != 0) ? 1 : 0;
        case 7: /* ARM64_CC_VC - Overflow clear */
            return (cc_ndep == 0) ? 1 : 0;
        case 8: /* ARM64_CC_HI - Unsigned > */
            return (cc_dep1 > cc_dep2) ? 1 : 0;
        case 9: /* ARM64_CC_LS - Unsigned <= */
            return (cc_dep1 <= cc_dep2) ? 1 : 0;
        case 10: /* ARM64_CC_GE - Signed >= */
            return ((signed long)cc_dep1 >= (signed long)cc_dep2) ? 1 : 0;
        case 11: /* ARM64_CC_LT - Signed < */
            return ((signed long)cc_dep1 < (signed long)cc_dep2) ? 1 : 0;
        case 12: /* ARM64_CC_GT - Signed > */
            return ((signed long)cc_dep1 > (signed long)cc_dep2) ? 1 : 0;
        case 13: /* ARM64_CC_LE - Signed <= */
            return ((signed long)cc_dep1 <= (signed long)cc_dep2) ? 1 : 0;
        default:
            return 0;
    }
}


/* Data definitions */
unsigned long long g_411f50 = 0;
static unsigned long long jmp_buffer[2] = {0, 0};
static unsigned long long segv_buffer[2] = {0, 0};
unsigned int div_zero_caught = 0;
unsigned int segv_caught = 0;
extern unsigned long long __data_start;
char __stack_chk_guard[24] = {0};
char encrypted_0[32] = {0};

/* Encrypted string placeholders - initialized to NULL */
const char *g_401120 = NULL;
const char *g_40114d = NULL;
const char *g_401169 = NULL;
const char *g_401185 = NULL;
const char *g_4011a2 = NULL;
const char *g_4011be = NULL;
const char *g_4011e8 = NULL;
const char *g_40120d = NULL;
const char *g_401233 = NULL;
const char *g_401253 = NULL;
const char *g_40126f = NULL;
const char *g_40128c = NULL;
const char *g_4012a9 = NULL;
const char *g_4012da = NULL;
const char *g_4012f7 = NULL;


// Function: __dollar_x at 0x400860
typedef void (*func_ptr_t)(void);

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 ((func_ptr_t)g_411f50)();
 return 0;
}


// Function: sub_400874 at 0x400874
size_t sub_400874(char *v0)
{
 size_t len; // x0

 len = strlen(v0);
 return len;
}


// Function: main at 0x400980
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_obf_opt_edge();
 return 0;
}


// Function: sub_400998 at 0x400998
void sub_400998(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009f0 at 0x4009f0
void sub_4009f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */








/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400ac8 at 0x400ac8
long long sub_400ac8()
{
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */





// Function: div_zero_handler at 0x400ad4
void div_zero_handler(int sig)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 div_zero_caught = 1;
 __longjmp_chk(&jmp_buffer, 1, &__data_start); /* do not return */
}


// Function: segv_handler at 0x400af4
void segv_handler(int sig)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 segv_caught = 1;
 __longjmp_chk(&segv_buffer, 1); /* do not return */
}


// Function: param_fake_branch at 0x400b14
long long param_fake_branch()
{
 unsigned long v0; // x0

 return v0;
}


// Function: call_fake_branch at 0x400b18
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x400b20
long long param_opaque_predicate(unsigned int a0)
{
 unsigned int flag1; // w1
 unsigned int v1; // w2
 unsigned long long v10; // cc_op
 unsigned long long v11; // cc_dep1
 unsigned long long v12; // cc_dep2
 unsigned int v2; // w4
 unsigned int v3; // w3
 unsigned long v4; // cc_dep1
 unsigned long v5; // cc_dep2
 unsigned long v6; // x3
 unsigned int result; // w5
 unsigned long v8; // x3

 flag1 = a0 + 1;
 v1 = __ROL__(a0, 1) & 4294967294;
 v2 = flag1 * flag1;
 v3 = a0 * a0 + a0 * 2 + 1;
 v4 = v3;
 v5 = v2;
 v6 = a0;
 if (v3 != v2)
 result = 0;
 else
 result = 1;
 while (true)
 {
 v8 = v6;
 if (!flag1)
 break;
 flag1 = (unsigned int)v8 - flag1 * (unsigned int)(v8 / flag1);
 v6 = flag1;
 }
 if (result)
 {
 v10 = 3;
 v11 = ((char)arm64g_calculate_condition(19, v4, v5, 0) ? v8 & 4294967295 : 0);
 v12 = ((char)arm64g_calculate_condition(19, v4, v5, 0) ? 1 : 0);
 }
 else
 {
 v10 = 0;
 v11 = ((char)arm64g_calculate_condition(19, v4, v5, 0) ? v8 & 4294967295 : 0);
 v12 = ((char)arm64g_calculate_condition(19, v4, v5, 0) ? 1 : 0);
 }
 if (!((char)arm64g_calculate_condition(v10 | 16, v11, v12, 0)))
 return v1 + 10;
 return v1 + a0 + 20;
}


// Function: call_opaque_predicate at 0x400b78
unsigned long long call_opaque_predicate()
{
 unsigned long long v0; // x0

 v0 = param_opaque_predicate(5);
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x400b80
int param_instruction_substitution(unsigned int a0)
{
 return ((a0 * 8 | a0 >> 29) & 0xfffffff8) - a0 * 2 + (a0 >> 1) + (a0 & 15) + ((a0 * 16 | a0 >> 28) & 0xfffffff0) - a0;
}


// Function: call_instruction_substitution at 0x400ba4
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x400bac
char * decrypt_string(char *a0, char *a1, unsigned long a2, char a3)
{
 char *dst; // x1
 char *v3; // x1
 char *ptr; // x1
 unsigned int result; // w0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 dst = strncpy(a1, a0, a2);
 dst[1 + a2] = 0;
 v3 = dst;
 while (true)
 {
 ptr = v3;
 result = *(ptr);
 if (!result)
 break;
 *(ptr) = (char)result ^ a3;
 v3 = ptr + 1;
 }
 return dst;
}


// Function: param_string_encryption at 0x400c04
long long param_string_encryption()
{
 unsigned long long len; // x0
 char *v0; // [bp-0x50]
 char v1[32]; // [bp-0x28]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 decrypt_string(encrypted_0, v1, 32, 90);
 len = strlen(v1);
 if (v2 == *((long long *)&__stack_chk_guard))
 return (unsigned long long)v1 + len;
 __stack_chk_fail(); /* do not return */
}


// Function: call_string_encryption at 0x400c7c
unsigned long long call_string_encryption()
{
 unsigned long long v0; // x0

 v0 = param_string_encryption();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x400c80
int param_tail_call_optimized(unsigned int a0, unsigned int a1)
{
 unsigned long i; // x2
 unsigned long v1; // x0

 i = a0;
 for (v1 = a1; (unsigned int)i > 0; i = (unsigned int)i - 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: call_tail_call_optimized at 0x400ca0
unsigned long long call_tail_call_optimized()
{
 return 500500;
}


// Function: param_non_tail_call at 0x400cac
unsigned long long param_non_tail_call(unsigned int a0)
{
 unsigned long i; // x1
 unsigned long long v1; // x0

 i = a0;
 for (v1 = 0; (unsigned int)i > 0; i = (unsigned int)i - 1)
 {
 v1 += i;
 }
 return v1;
}


// Function: call_non_tail_call at 0x400ccc
unsigned long long call_non_tail_call()
{
 unsigned long long v0; // x0

 v0 = param_non_tail_call(100);
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x400cd4
unsigned long long param_vectorized_loop(unsigned long *a0, unsigned long *a1, unsigned long *ptr, unsigned int a3)
{
 unsigned long long idx; // x4
 unsigned long long v1; // x1
 unsigned long long v2; // x0
 unsigned long long v3; // x1
 unsigned long long v4; // x1

 for (idx = 0; (unsigned int)idx < a3; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 }
 v1 = 0;
 v2 = 0;
 while (true)
 {
 v3 = v1;
 if ((unsigned int)v3 >= a3)
 break;
 v4 = v3 + 1;
 v2 += *((int *)(ptr + v3 * 4));
 v1 = v4;
 }
 return v2;
}


// Function: call_vectorized_loop at 0x400d1c
unsigned long long call_vectorized_loop()
{
 unsigned long long v11; // x0
 char *v0; // [bp-0x80]
 unsigned long v1; // [bp-0x68]
 unsigned long v2; // [bp-0x58]
 unsigned long v3; // [bp-0x48]
 unsigned long v4; // [bp-0x38]
 unsigned long result; // [bp-0x28]
 unsigned long long flag1; // [bp-0x20]
 unsigned long long flag2; // [bp-0x18]
 unsigned long long flag3; // [bp-0x10]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 result = 0;
 flag1 = 0;
 v1 = 316912650112397582603894390785;
 v2 = 633825300243241909290088267781;
 flag2 = 0;
 flag3 = 0;
 v3 = 396140812682002152440041832456;
 v4 = 79228162551157825753847955460;
 v11 = param_vectorized_loop(&v1, &v3, &result, 8);
 if (v9 == *((long long *)&__stack_chk_guard))
 return v11;
 __stack_chk_fail(); /* do not return */
}


// Function: param_link_time_optimization at 0x400d94
unsigned int param_link_time_optimization(unsigned int a0)
{
 return ((a0 + 5) * 2 | a0 + 5 >> 31) & 4294967294;
}


// Function: call_link_time_optimization at 0x400da0
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x400da8
unsigned long long param_division_by_zero(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 signal(8, div_zero_handler);
 if (_setjmp(&jmp_buffer))
 return 4294967295;
 return 10 / a0;
}


// Function: call_division_by_zero at 0x400df4
int call_division_by_zero()
{
 unsigned int v2; // w0
 unsigned int v3; // w0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_division_by_zero(5);
 v3 = param_division_by_zero(0);
 signal(8, NULL);
 return v2 + v3;
}


// Function: param_null_pointer_deref at 0x400e34
unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 signal(11, segv_handler);
 if (_setjmp(&segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x400e7c
long long call_null_pointer_deref()
{
 unsigned long long v4; // x0
 unsigned long long v5; // x0
 char *v0; // [bp-0x30]
 unsigned int v1[1]; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 v1[0] = 42;
 v4 = param_null_pointer_deref(v1);
 v5 = param_null_pointer_deref(NULL);
 signal(11, NULL);
 if (v2 == *((long long *)&__stack_chk_guard))
 return (v4 & 4294967295) + (v5 & 4294967295);
 __stack_chk_fail(); /* do not return */
}


// Function: param_buffer_overflow_stack at 0x400ef8
long long param_buffer_overflow_stack()
{
 unsigned long v0; // x0

 return v0;
}


// Function: param_buffer_overflow_heap at 0x400efc
unsigned long long param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x400f34
int call_buffer_overflow()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return (unsigned int)param_buffer_overflow_heap(20) + 10;
}


// Function: param_integer_overflow at 0x400f50
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
 unsigned int v0; // w2
 unsigned long long v1; // x0
 unsigned long long v18; // x0
 unsigned long v2; // cc_op
 unsigned long v3; // cc_dep1
 unsigned long v4; // cc_dep2
 unsigned long v5; // cc_ndep
 unsigned long v6; // cc_op
 unsigned long v7; // cc_dep1
 unsigned long v8; // cc_dep2
 unsigned long v9; // cc_ndep

 v0 = a0;
 v1 = a0 + a1;
 if (0 < v0)
 {
 if ((char)arm64g_calculate_condition(211, ((char)arm64g_calculate_condition(v2 | 192, v3, v4, v5) ? a1 & 4294967295 : 0x40000000), 0, 0))
 goto LABEL_400f70;
 }
 else
 {
 if ((char)arm64g_calculate_condition(208, ((char)arm64g_calculate_condition(v6 | 192, v7, v8, v9) ? a1 & 4294967295 : 0x40000000), 0, 0))
 {
LABEL_400f70:
 if ((char)arm64g_calculate_condition(89, (unsigned long long)(v0 & (unsigned int)a1), 0, 0))
 return v1;
 if ((unsigned int)v1 <= 0)
 v18 = v1 & 4294967295;
 else
 v18 = 4294967294;
 return v18;
 }
 }
 if (0 > (unsigned int)v1)
 return 4294967295;
 return v1 & 4294967295;
}


// Function: call_integer_overflow at 0x400f88
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x400f94
unsigned int param_undefined_behavior(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_undefined_behavior at 0x400f9c
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x400fa4
unsigned long long param_implementation_defined()
{
 return 48;
}


// Function: call_implementation_defined at 0x400fac
unsigned long long call_implementation_defined()
{
 return 48;
}


// Function: test_obf_opt_edge at 0x400fb4

int test_obf_opt_edge()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
	puts(g_401120);
	__printf_chk(1, g_40114d, 10);
	__printf_chk(1, g_401169, call_opaque_predicate() & 4294967295);
	__printf_chk(1, g_401185, 225);
	__printf_chk(1, g_4011a2, param_string_encryption() & 4294967295);
	__printf_chk(1, g_4011be, call_tail_call_optimized() & 4294967295);
	__printf_chk(1, g_4011e8, call_non_tail_call() & 4294967295);
	__printf_chk(1, g_40120d, call_vectorized_loop() & 4294967295);
	__printf_chk(1, g_401233, 20);
	__printf_chk(1, g_401253, call_division_by_zero() & 4294967295);
	__printf_chk(1, g_40126f, call_null_pointer_deref() & 4294967295);
	__printf_chk(1, g_40128c, call_buffer_overflow() & 4294967295);
	__printf_chk(1, g_4012a9, 0x77359400);
	__printf_chk(1, g_4012da, 10);
	return __printf_chk(1, g_4012f7, 48);
}



/* CRT stub function _fini removed by preprocessor */


