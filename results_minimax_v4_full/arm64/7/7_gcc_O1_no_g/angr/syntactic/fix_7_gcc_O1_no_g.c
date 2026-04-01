// Angr Decompilation of 7_gcc_O1_no_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <setjmp.h>

// Forward declarations for CRT stub functions
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
int frame_dummy(void);

// __longjmp_chk wrapper - using longjmp from setjmp.h
#define __longjmp_chk(buf, val, ...) longjmp(buf, val)

// Forward declarations for functions
char* decrypt_string(char *a0, char *a1, unsigned long n, char a3);

// String constants (originally at specific addresses in binary)
// Note: g_401230, g_401260, g_4012d0, g_401330 are defined locally with _str suffix
// String constants - define locally (originally from binary rodata section)
static const char __dollar_d_str[] __attribute__((used)) = "Testing Obfuscation and Optimizations:\n";
static char g_4011b0_str[] __attribute__((used)) = "Obfuscation Tests:\n";
static char g_4011d0_str[] __attribute__((used)) = "Fake branch: %u\n";
static char g_4011f0_str[] __attribute__((used)) = "Instruction substitution: %u\n";
static char g_401210_str[] __attribute__((used)) = "String encryption: %u\n";
static char g_401288_str[] __attribute__((used)) = "Vectorized loop: %u\n";
static char g_4012b0_str[] __attribute__((used)) = "LTO: %u\n";
static char g_4012d0_str[] __attribute__((used)) = "Division by zero: %u\n";
static char g_4012f0_str[] __attribute__((used)) = "Null pointer: %u\n";
static char g_401310_str[] __attribute__((used)) = "Buffer overflow: %u\n";
static char g_401330_str[] __attribute__((used)) = "Integer overflow: %u\n";
static char g_401368_str[] __attribute__((used)) = "Undefined behavior: %u\n";
static char g_401388_str[] __attribute__((used)) = "Implementation defined: %u\n";
static char g_401230_str[] __attribute__((used)) = "Tail call optimized: %u\n";
static char g_401260_str[] __attribute__((used)) = "Non-tail call: %u\n";

// Define pointers to string constants (matching extern declarations)
#define __dollar_d __dollar_d_str
#define g_4011b0 g_4011b0_str
#define g_4011d0 g_4011d0_str
#define g_4011f0 g_4011f0_str
#define g_401210 g_401210_str
#define g_401288 g_401288_str
#define g_4012b0 g_4012b0_str
#define g_4012d0 g_4012d0_str
#define g_4012f0 g_4012f0_str
#define g_401310 g_401310_str
#define g_401330 g_401330_str
#define g_401368 g_401368_str
#define g_401388 g_401388_str
#define g_401230 g_401230_str
#define g_401260 g_401260_str

// ARM64 rotate left macro
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))

// ARM64 condition calculation function declaration
int arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep)
{
    // Stub implementation for ARM64 condition flag calculation
    // cc_op: condition operation (determines which flags to compute)
    // cc_dep1, cc_dep2: dependent values
    // cc_ndep: non-dependent value
    
    unsigned long n = cc_ndep;
    
    switch (cc_op & 0xF)
    {
        case 0:  // EQ - Equal
            return (cc_dep1 == cc_dep2) ? 1 : 0;
        case 1:  // NE - Not Equal
            return (cc_dep1 != cc_dep2) ? 1 : 0;
        case 2:  // CS/HS - Carry Set / Unsigned >= 
            return (cc_dep1 >= cc_dep2) ? 1 : 0;
        case 3:  // CC/LO - Carry Clear / Unsigned <
            return (cc_dep1 < cc_dep2) ? 1 : 0;
        case 4:  // MI - Minus/Negative
            return ((long)cc_dep1 < 0) ? 1 : 0;
        case 5:  // PL - Plus/Positive or Zero
            return ((long)cc_dep1 >= 0) ? 1 : 0;
        case 6:  // VS - Overflow
            return (((cc_dep1 ^ cc_dep2) & (cc_dep1 ^ n)) >> 31) & 1;
        case 7:  // VC - No overflow
            return ((((cc_dep1 ^ cc_dep2) & (cc_dep1 ^ n)) >> 31) & 1) ^ 1;
        case 8:  // HI - Unsigned >
            return (cc_dep1 > cc_dep2) ? 1 : 0;
        case 9:  // LS - Unsigned <=
            return (cc_dep1 <= cc_dep2) ? 1 : 0;
        case 10: // GE - Signed >=
            return ((long)cc_dep1 >= (long)cc_dep2) ? 1 : 0;
        case 11: // LT - Signed <
            return ((long)cc_dep1 < (long)cc_dep2) ? 1 : 0;
        case 12: // GT - Signed >
            return ((long)cc_dep1 > (long)cc_dep2) ? 1 : 0;
        case 13: // LE - Signed <=
            return ((long)cc_dep1 <= (long)cc_dep2) ? 1 : 0;
        case 14: // AL - Always
            return 1;
        case 15: // NV - Never (or special)
            return 0;
        default:
            return 0;
    }
}

// __stack_chk_fail declaration
void __stack_chk_fail(void);

// Define missing global variables referenced in the code
jmp_buf jmp_buffer;
jmp_buf segv_buffer;
unsigned int div_zero_caught;
char encrypted_0[32];
unsigned long long g_411f50 = 0;



// Function: __dollar_x at 0x400860
extern unsigned long long g_411f50;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return ((long long (*)(void))g_411f50)();
}


// Function: sub_400874 at 0x400874
long long sub_400874()
{
 char *v0; // x0
 unsigned long long len; // x0

 len = strlen(v0);
 return strlen(v0);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009b0 at 0x4009b0
void sub_4009b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_4009c8 at 0x4009c8
void sub_4009c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) { }




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400a3c at 0x400a3c
void sub_400a3c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void) { }



// Function: sub_400a88 at 0x400a88
long long sub_400a88()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */
int frame_dummy(void) { return 0; }



// Function: div_zero_handler at 0x400a94
extern unsigned int div_zero_caught;
extern jmp_buf jmp_buffer;

void div_zero_handler(int sig)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 div_zero_caught = 1;
 longjmp(jmp_buffer, 1); /* do not return */
}


// Function: segv_handler at 0x400ab4
extern jmp_buf segv_buffer;
unsigned int segv_caught = 0;

void segv_handler(int sig)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = v3;
 segv_caught = 1;
 __longjmp_chk(segv_buffer, 1); /* do not return */
}


// Function: param_fake_branch at 0x400ad4
long long param_fake_branch()
{
 unsigned long v0; // x0

 return v0;
}


// Function: call_fake_branch at 0x400ad8
unsigned long long call_fake_branch()
{
 return 10;
}


// Function: param_opaque_predicate at 0x400ae0
int param_opaque_predicate(unsigned int a0)
{
 unsigned int flag1; // w1
 unsigned int v1; // w2
 unsigned int v2; // w3
 unsigned long v3; // cc_dep1
 unsigned long v4; // cc_dep2
 unsigned int result; // w6
 unsigned int v6; // w2
 unsigned long v7; // x3

 flag1 = a0 + 1;
 v1 = (__ROL__(a0, 1) & 4294967294) + a0 * a0 + 1;
 v2 = flag1 * flag1;
 v3 = v1;
 v4 = v2;
 if (v1 != v2)
 result = 0;
 else
 result = 1;
 if (flag1)
 {
 v6 = a0;
 do
 {
 flag1 = v6 - flag1 * v6 / flag1;
 v6 = flag1;
 } while (flag1);
 if (result)
 {
 if (!((char)arm64g_calculate_condition(19, ((char)arm64g_calculate_condition(19, v3, v4, 0) ? v7 & 4294967295 : 0), ((char)arm64g_calculate_condition(19, v3, v4, 0) ? 1 : 0), 0)))
 return (__ROL__(a0, 1) & 4294967294) + 10;
 }
 else
 {
 if (!((char)arm64g_calculate_condition(16, ((char)arm64g_calculate_condition(19, v3, v4, 0) ? v7 & 4294967295 : 0), ((char)arm64g_calculate_condition(19, v3, v4, 0) ? 1 : 0), 0)))
 return (__ROL__(a0, 1) & 4294967294) + 10;
 }
 }
 return a0 * 3 + 20;
}


// Function: call_opaque_predicate at 0x400b38
int call_opaque_predicate()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_opaque_predicate(5);
}


// Function: param_instruction_substitution at 0x400b50
int param_instruction_substitution(unsigned int a0)
{
 return ((a0 * 8 | a0 >> 29) & 0xfffffff8) - a0 * 2 + (a0 >> 1) + (a0 & 15) + ((a0 * 16 | a0 >> 28) & 0xfffffff0) - a0;
}


// Function: call_instruction_substitution at 0x400b74
unsigned long long call_instruction_substitution()
{
 return 225;
}


// Function: decrypt_string at 0x400b7c
char* decrypt_string(char *a0, char *a1, unsigned long n, char a3)
{
 char *p; // x20
 unsigned int result; // w2
 char *ptr; // x3
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 p = a1;
 strncpy(p, a0, n);
 p[1 + n] = 0;
 result = p[0];
 if (!result)
 return p;
 ptr = p;
 do
 {
 ptr[0] = a3 ^ (char)result;
 result = ptr[1];
 ptr = &ptr[1];
 } while (result);
 return p;
}


// Function: param_string_encryption at 0x400bdc
extern char __stack_chk_guard;
extern char encrypted_0[32];

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
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (unsigned long long)v1 + len;
}


// Function: call_string_encryption at 0x400c54
unsigned long long call_string_encryption()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_string_encryption();
 return param_string_encryption();
}


// Function: param_tail_call_optimized at 0x400c68
int param_tail_call_optimized(unsigned long a0, unsigned long a1)
{
 unsigned long long v3; // x30
 char *v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]
 char v2; // [bp+0x0]

 if ((unsigned int)a0 <= 0)
 return a1;
 v0 = &v2;
 v1 = v3;
 return param_tail_call_optimized((unsigned int)a0 - 1, a0 + a1);
}


// Function: call_tail_call_optimized at 0x400c94
int call_tail_call_optimized()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_tail_call_optimized(1000, 0);
}


// Function: param_non_tail_call at 0x400cb0
unsigned long long param_non_tail_call(unsigned long a0)
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 if ((unsigned int)a0 <= 0)
 return 0;
 v0 = &v3;
 v1 = v4;
 v2 = v5;
 return param_non_tail_call((unsigned int)a0 - 1) + (a0 & 4294967295);
}


// Function: call_non_tail_call at 0x400ce8
unsigned long long call_non_tail_call()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_non_tail_call(100);
 return param_non_tail_call(100);
}


// Function: param_vectorized_loop at 0x400d00
unsigned long long param_vectorized_loop(unsigned long a0, unsigned long a1, unsigned long ptr, unsigned int i)
{
 unsigned long long idx; // x4
 unsigned long long v1; // x1
 unsigned long long v2; // x0

 if (i <= 0)
 return 0;
 idx = 0;
 do
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 idx += 1;
 } while ((unsigned int)idx < i);
 v1 = 0;
 v2 = 0;
 do
 {
 v2 += *((int *)(ptr + v1 * 4));
 v1 += 1;
 } while ((unsigned int)v1 < i);
 return v2;
}


// Function: call_vectorized_loop at 0x400d50
extern char __stack_chk_guard;

unsigned long long call_vectorized_loop()
{
 unsigned long long v8; // x0
 char *v0; // [bp-0x80]
 unsigned long long v1; // [bp-0x68]
 unsigned long long v2; // [bp-0x58]
 unsigned long long v3; // [bp-0x48]
 unsigned long long v4; // [bp-0x38]
 char v5; // [bp-0x28]
 unsigned long v6; // [bp-0x8]
 char v7; // [bp+0x0]

 v0 = &v7;
 v6 = *((long long *)&__stack_chk_guard);
 v1 = 316912650112397582603894390785;
 v2 = 633825300243241909290088267781;
 v3 = 396140812682002152440041832456;
 v4 = 79228162551157825753847955460;
 memset(&v5, 0, 32);
 v8 = param_vectorized_loop((unsigned long)&v1, (unsigned long)&v3, (unsigned long)&v5, 8);
 if (v6 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v8;
}


// Function: param_link_time_optimization at 0x400dc8
unsigned int param_link_time_optimization(unsigned int a0)
{
 return ((a0 + 5) * 2 | a0 + 5 >> 31) & 4294967294;
}


// Function: call_link_time_optimization at 0x400dd4
unsigned long long call_link_time_optimization()
{
 return 20;
}


// Function: param_division_by_zero at 0x400ddc
extern jmp_buf jmp_buffer;

unsigned long long param_division_by_zero(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 signal(8, div_zero_handler);
 if (_setjmp(jmp_buffer))
 return 4294967295;
 return 10 / a0;
}


// Function: call_division_by_zero at 0x400e28
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


// Function: param_null_pointer_deref at 0x400e68
extern jmp_buf segv_buffer;

unsigned long long param_null_pointer_deref(unsigned int *a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 signal(11, segv_handler);
 if (_setjmp(segv_buffer))
 return 4294967295;
 return *(a0);
}


// Function: call_null_pointer_deref at 0x400eb0
extern char __stack_chk_guard;

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
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return (v4 & 4294967295) + (v5 & 4294967295);
}


// Function: param_buffer_overflow_stack at 0x400f2c
long long param_buffer_overflow_stack()
{
 unsigned long v0; // x0

 return v0;
}


// Function: param_buffer_overflow_heap at 0x400f30
unsigned int param_buffer_overflow_heap(unsigned int a0)
{
 void* ptr; // x0
 unsigned int result; // w1
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 ptr = malloc(16);
 if (!ptr)
 return 4294967294;
 result = 33;
 do
 {
 result -= 1;
 } while (result != 1);
 free(ptr);
 return a0;
}


// Function: call_buffer_overflow at 0x400f74
int call_buffer_overflow()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_buffer_overflow_heap(20) + 10;
}


// Function: param_integer_overflow at 0x400f90
unsigned long long param_integer_overflow(unsigned long a0, unsigned long a1)
{
 unsigned int v0; // w2
 unsigned long long v1; // x0
 unsigned long v10; // cc_dep2
 unsigned long v11; // cc_ndep
 unsigned long long v16; // cc_op
 unsigned long long v17; // cc_dep1
 unsigned long long v2; // cc_op
 unsigned long long v26; // cc_op
 unsigned long long v27; // cc_dep1
 unsigned long v3; // cc_op
 unsigned long v4; // cc_dep1
 unsigned long v5; // cc_dep2
 unsigned long v6; // cc_ndep
 unsigned long long v7; // cc_dep1
 unsigned long v8; // cc_op
 unsigned long v9; // cc_dep1

 v0 = a0;
 v1 = a0 + a1;
 if (0 < v0)
 {
 v2 = 3;
 v7 = ((char)arm64g_calculate_condition(v3 | 192, v4, v5, v6) ? a1 & 4294967295 : 0x40000000);
 if (!((char)arm64g_calculate_condition(195, v7, 0, 0)))
 goto LABEL_400fa2;
LABEL_400fa1:
 v16 = 3;
 v17 = ((char)arm64g_calculate_condition(v2 | 192, v7, 0, 0) ? v1 & 4294967295 : 0);
 if ((char)arm64g_calculate_condition(179, v17, 0, 0))
 return 4294967295;
 }
 else
 {
 v2 = 0;
 v7 = ((char)arm64g_calculate_condition(v8 | 192, v9, v10, v11) ? a1 & 4294967295 : 0x40000000);
 if ((char)arm64g_calculate_condition(192, v7, 0, 0))
 goto LABEL_400fa1;
LABEL_400fa2:
 v16 = 0;
 v17 = ((char)arm64g_calculate_condition(v2 | 192, v7, 0, 0) ? v1 & 4294967295 : 0);
 if ((char)arm64g_calculate_condition(176, v17, 0, 0))
 return 4294967295;
 }
 if ((char)arm64g_calculate_condition(73, (unsigned long long)(v0 & (unsigned int)a1), 0, 0))
 {
 v26 = 3;
 v27 = ((char)arm64g_calculate_condition(v16 | 64, v17, 0, 0) ? v1 & 4294967295 : 0x40000000);
 }
 else
 {
 v26 = 0;
 v27 = ((char)arm64g_calculate_condition(v16 | 64, v17, 0, 0) ? v1 & 4294967295 : 0x40000000);
 }
 if (!((char)arm64g_calculate_condition(v26 | 208, v27, 0, 0)))
 return 4294967294;
 return v1 & 4294967295;
}


// Function: call_integer_overflow at 0x400fc4
unsigned long long call_integer_overflow()
{
 return 0x77359400;
}


// Function: param_undefined_behavior at 0x400fd0
unsigned int param_undefined_behavior(unsigned int a0)
{
 return (a0 * 2 | a0 >> 31) & 4294967294;
}


// Function: call_undefined_behavior at 0x400fd8
unsigned long long call_undefined_behavior()
{
 return 10;
}


// Function: param_implementation_defined at 0x400fe0
unsigned long long param_implementation_defined()
{
 return 48;
}


// Function: call_implementation_defined at 0x400fe8
unsigned long long call_implementation_defined()
{
 return 48;
}


// Function: test_obf_opt_edge at 0x400ff0
// Note: String pointers are defined via macros at the top of the file

int test_obf_opt_edge()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(__dollar_d);
 __printf_chk(1, g_4011b0, 10);
 __printf_chk(1, g_4011d0, call_opaque_predicate() & 4294967295);
 __printf_chk(1, g_4011f0, 225);
 __printf_chk(1, g_401210, param_string_encryption() & 4294967295);
 __printf_chk(1, g_401230, call_tail_call_optimized() & 4294967295);
 __printf_chk(1, g_401260, call_non_tail_call() & 4294967295);
 __printf_chk(1, g_401288, call_vectorized_loop() & 4294967295);
 __printf_chk(1, g_4012b0, 20);
 __printf_chk(1, g_4012d0, call_division_by_zero() & 4294967295);
 __printf_chk(1, g_4012f0, call_null_pointer_deref() & 4294967295);
 __printf_chk(1, g_401310, call_buffer_overflow() & 4294967295);
 __printf_chk(1, g_401330, 0x77359400);
 __printf_chk(1, g_401368, 10);
 return __printf_chk(1, g_401388, 48);
}


// Function: main at 0x401148
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_obf_opt_edge();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


