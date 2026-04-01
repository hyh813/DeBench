/* Auto-injected type definitions by preprocessor */
#include <stdbool.h>
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
typedef unsigned int uint;
typedef int __pid_t;
typedef unsigned char byte;

// Decompiled by BinaryAI
// SHA256: c199d0e9febecaa84216953d540a5b5fd77d477edd49a807302bdc62c63794f1

/* Global variable declarations */
char completed_0 = 0;
void *__dso_handle;
int global_counter = 0;
unsigned int global_array[10];
int static_local_counter = 0;
int extern_global_var = 0;
const char const_string[] = "Hello";
unsigned int file_scope_static = 0;
unsigned long long (*global_func_ptr)(void);
unsigned int *global_heap_ptr;

/* Forward declarations */
int __attribute__((weak)) call_weak_fn(int);
static int extern_function(int);
static int double_value(int param_1);

// Function: DataMemoryBarrier
static void DataMemoryBarrier(int param_1, int param_2)
{
    __asm__ __volatile__("dmb ish" ::: "memory");
    return;
}

/* Stack symbols (decompiler artifacts) */

/* Decompiler macro definitions */
#define CONCAT16(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15) \
    (((unsigned long long)(b0) << 112) | ((unsigned long long)(b1) << 104) | \
     ((unsigned long long)(b2) << 96) | ((unsigned long long)(b3) << 88) | \
     ((unsigned long long)(b4) << 80) | ((unsigned long long)(b5) << 72) | \
     ((unsigned long long)(b6) << 64) | ((unsigned long long)(b7) << 56) | \
     ((unsigned long long)(b8) << 48) | ((unsigned long long)(b9) << 40) | \
     ((unsigned long long)(b10) << 32) | ((unsigned long long)(b11) << 24) | \
     ((unsigned long long)(b12) << 16) | ((unsigned long long)(b13) << 8) | \
     (unsigned long long)(b14))

#define CONCAT17(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14,b15,b16) \
    ((((unsigned long long)(b16) << 120) | ((unsigned long long)(b15) << 112) | \
      ((unsigned long long)(b14) << 104) | ((unsigned long long)(b13) << 96) | \
      ((unsigned long long)(b12) << 88) | ((unsigned long long)(b11) << 80) | \
      ((unsigned long long)(b10) << 72) | ((unsigned long long)(b9) << 64) | \
      ((unsigned long long)(b8) << 56) | ((unsigned long long)(b7) << 48) | \
      ((unsigned long long)(b6) << 40) | ((unsigned long long)(b5) << 32) | \
      ((unsigned long long)(b4) << 24) | ((unsigned long long)(b3) << 16) | \
      ((unsigned long long)(b2) << 8) | (unsigned long long)(b1)) | \
      ((unsigned long long)(b0) << 128))

#define CONCAT15(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13,b14) \
    (((unsigned long long)(b0) << 104) | ((unsigned long long)(b1) << 96) | \
     ((unsigned long long)(b2) << 88) | ((unsigned long long)(b3) << 80) | \
     ((unsigned long long)(b4) << 72) | ((unsigned long long)(b5) << 64) | \
     ((unsigned long long)(b6) << 56) | ((unsigned long long)(b7) << 48) | \
     ((unsigned long long)(b8) << 40) | ((unsigned long long)(b9) << 32) | \
     ((unsigned long long)(b10) << 24) | ((unsigned long long)(b11) << 16) | \
     ((unsigned long long)(b12) << 8) | (unsigned long long)(b13))

#define CONCAT11(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10) \
    (((unsigned long long)(b0) << 72) | ((unsigned long long)(b1) << 64) | \
     ((unsigned long long)(b2) << 56) | ((unsigned long long)(b3) << 48) | \
     ((unsigned long long)(b4) << 40) | ((unsigned long long)(b5) << 32) | \
     ((unsigned long long)(b6) << 24) | ((unsigned long long)(b7) << 16) | \
     ((unsigned long long)(b8) << 8) | (unsigned long long)(b9))

#define CONCAT12(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11) \
    (((unsigned long long)(b0) << 80) | ((unsigned long long)(b1) << 72) | \
     ((unsigned long long)(b2) << 64) | ((unsigned long long)(b3) << 56) | \
     ((unsigned long long)(b4) << 48) | ((unsigned long long)(b5) << 40) | \
     ((unsigned long long)(b6) << 32) | ((unsigned long long)(b7) << 24) | \
     ((unsigned long long)(b8) << 16) | ((unsigned long long)(b9) << 8) | \
     (unsigned long long)(b10))

#define CONCAT13(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12) \
    (((unsigned long long)(b0) << 88) | ((unsigned long long)(b1) << 80) | \
     ((unsigned long long)(b2) << 72) | ((unsigned long long)(b3) << 64) | \
     ((unsigned long long)(b4) << 56) | ((unsigned long long)(b5) << 48) | \
     ((unsigned long long)(b6) << 40) | ((unsigned long long)(b7) << 32) | \
     ((unsigned long long)(b8) << 24) | ((unsigned long long)(b9) << 16) | \
     ((unsigned long long)(b10) << 8) | (unsigned long long)(b11))

#define CONCAT14(b0,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,b11,b12,b13) \
    (((unsigned long long)(b0) << 96) | ((unsigned long long)(b1) << 88) | \
     ((unsigned long long)(b2) << 80) | ((unsigned long long)(b3) << 72) | \
     ((unsigned long long)(b4) << 64) | ((unsigned long long)(b5) << 56) | \
     ((unsigned long long)(b6) << 48) | ((unsigned long long)(b7) << 40) | \
     ((unsigned long long)(b8) << 32) | ((unsigned long long)(b9) << 24) | \
     ((unsigned long long)(b10) << 16) | ((unsigned long long)(b11) << 8) | \
     (unsigned long long)(b12))

static inline __attribute__((always_inline)) unsigned long long NEON_cmhi(unsigned long long a, unsigned long long b, int size) {
    return (a > b) ? ~0ULL : 0;
}

static inline __attribute__((always_inline)) unsigned long long NEON_cmhs(unsigned long long a, unsigned long long b, int size) {
    return (a >= b) ? ~0ULL : 0;
}

/* Data references */
char DAT_001022e9[] = "Testing stack memory...\n";
char DAT_00102307[] = "Testing heap memory...\n";
char DAT_00102325[] = "Testing static and global variables...\n";
char DAT_00102349[] = "Testing memory operation functions...\n";
char DAT_00101f95[] = "%d\n";
char DAT_0010200b[] = "fork";
char DAT_00101fa5[] = "exit status: %d\n";
char DAT_00101fca[] = "signal: %d\n";

// Function: _init @ 0x1008c8
static void _init(void)
{
}

// Function: FUN_001008e0 @ 0x1008e0
static void FUN_001008e0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x100900
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::memmove @ 0x100910
extern void * memmove(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::exit @ 0x100920
extern void exit(int __status);

// Function: <EXTERNAL>::__libc_start_main @ 0x100930
extern void __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

// Function: <EXTERNAL>::perror @ 0x100940
extern void perror(char *__s);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100950
extern void __cxa_finalize(void *d);

// Function: <EXTERNAL>::fork @ 0x100960
extern __pid_t fork(void);

// Function: <EXTERNAL>::malloc @ 0x100970
extern void * malloc(size_t __size);

// Function: <EXTERNAL>::memset @ 0x100980
extern void * memset(void *__s,int __c,size_t __n);

// Function: <EXTERNAL>::calloc @ 0x100990
extern void * calloc(size_t __nmemb,size_t __size);

// Function: <EXTERNAL>::realloc @ 0x1009a0
extern void * realloc(void *__ptr,size_t __size);

// alloca is a compiler intrinsic, not an external function
extern void *alloca(size_t size);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1009b0
extern void __gmon_start__(void);

// Function: <EXTERNAL>::abort @ 0x1009c0
extern void abort(void);

// Function: <EXTERNAL>::puts @ 0x1009d0
extern int puts(char *__s);

// Function: <EXTERNAL>::memcmp @ 0x1009e0
extern int memcmp(void *__s1,void *__s2,size_t __n);

// Function: <EXTERNAL>::free @ 0x1009f0
extern void free(void *__ptr);

// Function: <EXTERNAL>::printf @ 0x100a00
extern int printf(char *__format,...);

// Function: <EXTERNAL>::waitpid @ 0x100a10
extern __pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options);





// Function: deregister_tm_clones @ 0x100a90
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100ac0
static void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100afc @ 0x100afc
static void FUN_00100afc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100b00
static void __do_global_dtors_aux(void)
{
 FUN_00100afc();
 return;
}

// Function: local_vars @ 0x100b54
static int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x100b60
static unsigned int local_array(int param_1)
{
 char auVar1 [16];
 char auVar2 [16];
 int iVar3;
 long lVar4;
 long lVar5;
 long lVar6;
 char auVar7 [16];
 char auVar8 [16];
 int local_28 [10];
 iVar3 = 0;
 lVar4 = 0;
 lVar6 = 1;
 lVar5 = 0;
 do {
 lVar5 = lVar5 + 2;
 lVar6 = lVar6 + 2;
 lVar4 = lVar4 + 8;
 iVar3 = iVar3 + param_1 * 2;
 } while (lVar4 != 0x28);
 return local_28[5];
}

// Function: local_struct @ 0x100be0
static int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x100be8
static unsigned long long address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x100bfc
static int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x100c08
static char large_stack_frame(void)
{
 long lVar1;
 unsigned long long uVar2;
 unsigned long long uVar3;
 unsigned long long local_810 [128];
 char local_410;
 lVar1 = 0;
 uVar3 = 0xf0e0d0c0b0a0908;
 uVar2 = 0x706050403020100;
 do {
 *(unsigned long long *)((long)local_810 + lVar1 + 8) = uVar3;
 *(unsigned long long *)((long)local_810 + lVar1) = uVar2;
 lVar1 = lVar1 + 0x10;
 uVar2 = uVar2 + 0x1010101010101010ULL;
 uVar3 = uVar3 + 0x1010101010101010ULL;
 } while (lVar1 != 0x800);
 return local_410;
}

// Function: vla_stack @ 0x100c48
static unsigned long long vla_stack(uint param_1,unsigned long long param_2)
{
 char auVar1 [16];
 long lVar2;
 unsigned long uVar3;
 unsigned long uVar4;
 int *piVar5;
 long lVar6;
 long lVar7;
 char auVar8 [16];
 int *vla_ptr;
 union {
 char bytes[16];
 unsigned long long _0_8_;
 unsigned long long _8_8_;
 } auVar9;
 union {
 char bytes[16];
 unsigned long long _0_4_;
 unsigned long long _4_4_;
 unsigned long long _8_8_;
 } auVar10;
 if (param_1 - 0x3e9 < 0xfffffc18) {
 auVar9._8_8_ = param_2;
 auVar9._0_8_ = 0xffffffff;
 return *(unsigned long long *)auVar9.bytes;
 }
 uVar4 = (unsigned long)param_1;
 vla_ptr = (int *)alloca((size_t)(uVar4 * 4));
 lVar2 = 0;
 uVar3 = 0;
 piVar5 = vla_ptr;
 lVar7 = 1;
 lVar6 = 0;
 do {
 lVar6 = lVar6 + 2;
 lVar7 = lVar7 + 2;
 piVar5 = piVar5 + 2;
 uVar3 = uVar3 + 4;
 } while ((uVar4 * 2 + 2 & 0x3fffffffc) != uVar3);
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 auVar10._4_4_ = 0;
 auVar10._0_4_ = *(uint *)(vla_ptr + (unsigned long)(uint)((int)param_1 >> 1));
 auVar10._8_8_ = (unsigned long long)vla_ptr;
 return *(unsigned long long *)auVar10.bytes;
}

// Function: alloca_usage @ 0x100d08
static unsigned int alloca_usage(uint param_1)
{
 char auVar1 [16];
 long lVar2;
 long lVar3;
 unsigned long uVar4;
 int *piVar5;
 long lVar6;
 long lVar7;
 char auVar8 [16];
 if (0 < (int)param_1) {
 uVar4 = (unsigned long)param_1;
 piVar5 = (int *)alloca((size_t)(uVar4 * 4));
 lVar2 = 0;
 lVar3 = 0;
 lVar7 = 1;
 lVar6 = 0;
 do {
 lVar6 = lVar6 + 2;
 lVar7 = lVar7 + 2;
 piVar5 = piVar5 + 2;
 lVar3 = lVar3 + 6;
 } while (((uVar4 + 1 & 0xfffffffffffffffe) + (uVar4 + 1 >> 1)) * 2 - lVar3 != 0);
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 return *(unsigned int *)(piVar5 + (unsigned long)(uint)((int)param_1 >> 1));
 }
 return 0xffffffff;
}

// Function: stack_alias @ 0x100dc4
static unsigned long long stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x100dcc
static int test_stack_memory(void)
{
 char auVar1 [16];
 char auVar2 [16];
 char auVar3 [16];
 char auVar4 [16];
 char auVar5 [16];
 long lVar6;
 char auVar7 [16];
 char auVar8 [16];
 char auVar9 [16];
 int iVar10;
 long lVar11;
 int *piVar12;
 char uVar13;
 char uVar14;
 char uVar15;
 char uVar16;
 char uVar17;
 char uVar18;
 char uVar19;
 char uVar20;
 char uVar21;
 char uVar22;
 char uVar23;
 char uVar24;
 char uVar25;
 char uVar26;
 char uVar27;
 char uVar28;
 char cVar29;
 char cVar30;
 char cVar31;
 char cVar32;
 char cVar33;
 char cVar34;
 char cVar35;
 char cVar36;
 char cVar37;
 char cVar38;
 char cVar39;
 char cVar40;
 char cVar41;
 char cVar42;
 char cVar43;
 char cVar44;
 char auVar45 [16];
 char auVar46 [16];
 char auVar47 [16];
 char auVar48 [16];
 unsigned long long local_820;
 unsigned long long uStack_818;
 uint local_80c;
 byte local_420;
 puts(DAT_001022e9);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 lVar11 = 0;
 piVar12 = (int *)((long)&local_820 + 4);
 uVar21 = 1;
 uVar22 = 0;
 uVar23 = 0;
 uVar24 = 0;
 uVar25 = 0;
 uVar26 = 0;
 uVar27 = 0;
 uVar28 = 0;
 uVar13 = 0;
 uVar14 = 0;
 uVar15 = 0;
 uVar16 = 0;
 uVar17 = 0;
 uVar18 = 0;
 uVar19 = 0;
 uVar20 = 0;
 do {
 auVar45[1] = uVar14;
 auVar45[0] = uVar13;
 auVar45[2] = uVar15;
 auVar45[3] = uVar16;
 auVar45[4] = uVar17;
 auVar45[5] = uVar18;
 auVar45[6] = uVar19;
 auVar45[7] = uVar20;
 auVar45[8] = uVar21;
 auVar45[9] = uVar22;
 auVar45[10] = uVar23;
 auVar45[11] = uVar24;
 auVar45[12] = uVar25;
 auVar45[13] = uVar26;
 auVar45[14] = uVar27;
 auVar45[15] = uVar28;
 if (uVar13 < 10) {
 piVar12[-1] = (int)lVar11;
 }
 auVar1[1] = uVar14;
 auVar1[0] = uVar13;
 auVar1[2] = uVar15;
 auVar1[3] = uVar16;
 auVar1[4] = uVar17;
 auVar1[5] = uVar18;
 auVar1[6] = uVar19;
 auVar1[7] = uVar20;
 auVar1[8] = uVar21;
 auVar1[9] = uVar22;
 auVar1[10] = uVar23;
 auVar1[11] = uVar24;
 auVar1[12] = uVar25;
 auVar1[13] = uVar26;
 auVar1[14] = uVar27;
 auVar1[15] = uVar28;
 if (uVar13 < 10) {
 *piVar12 = (int)lVar11 + 2;
 }
 lVar6 = (((unsigned long long)uVar20 << 120) | ((unsigned long long)uVar19 << 112) | ((unsigned long long)uVar18 << 104) | ((unsigned long long)uVar17 << 96) | ((unsigned long long)uVar16 << 88) | ((unsigned long long)uVar15 << 80) | ((unsigned long long)uVar14 << 72) | ((unsigned long long)uVar13 << 64)) + 2;
 uVar13 = (char)lVar6;
 uVar14 = (char)((unsigned long)lVar6 >> 8);
 uVar15 = (char)((unsigned long)lVar6 >> 0x10);
 uVar16 = (char)((unsigned long)lVar6 >> 0x18);
 uVar17 = (char)((unsigned long)lVar6 >> 0x20);
 uVar18 = (char)((unsigned long)lVar6 >> 0x28);
 uVar19 = (char)((unsigned long)lVar6 >> 0x30);
 uVar20 = (char)((unsigned long)lVar6 >> 0x38);
 lVar6 = (((((unsigned long long)uVar28 << 56) | \
          ((unsigned long long)uVar27 << 48) | \
          ((unsigned long long)uVar26 << 40) | \
          ((unsigned long long)uVar25 << 32) | \
          ((unsigned long long)uVar24 << 24) | \
          ((unsigned long long)uVar23 << 16) | \
          ((unsigned long long)uVar22 << 8) | \
          (unsigned long long)uVar21) << 64) | \
         (((unsigned long long)uVar28 << 56) | \
          ((unsigned long long)uVar27 << 48) | \
          ((unsigned long long)uVar26 << 40) | \
          ((unsigned long long)uVar25 << 32) | \
          ((unsigned long long)uVar24 << 24) | \
          ((unsigned long long)uVar23 << 16) | \
          ((unsigned long long)uVar22 << 8) | \
          (unsigned long long)uVar21)) + 2;
 uVar21 = (char)lVar6;
 uVar22 = (char)((unsigned long)lVar6 >> 8);
 uVar23 = (char)((unsigned long)lVar6 >> 0x10);
 uVar24 = (char)((unsigned long)lVar6 >> 0x18);
 uVar25 = (char)((unsigned long)lVar6 >> 0x20);
 uVar26 = (char)((unsigned long)lVar6 >> 0x28);
 uVar27 = (char)((unsigned long)lVar6 >> 0x30);
 uVar28 = (char)((unsigned long)lVar6 >> 0x38);
 piVar12 = piVar12 + 2;
 lVar11 = lVar11 + 4;
 } while (lVar11 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",(unsigned long)local_80c);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 lVar11 = 0;
 cVar37 = '\b';
 cVar38 = '\t';
 cVar39 = '\n';
 cVar40 = '\v';
 cVar41 = '\f';
 cVar42 = '\r';
 cVar43 = '\x0e';
 cVar44 = '\x0f';
 cVar29 = '\0';
 cVar30 = '\x01';
 cVar31 = '\x02';
 cVar32 = '\x03';
 cVar33 = '\x04';
 cVar34 = '\x05';
 cVar35 = '\x06';
 cVar36 = '\a';
 do {
 *(unsigned long long *)((long)&uStack_818 + lVar11) =
 ((unsigned long long)cVar44 << 120) | ((unsigned long long)cVar43 << 112) | ((unsigned long long)cVar42 << 104) | ((unsigned long long)cVar41 << 96) | ((unsigned long long)cVar40 << 88) | ((unsigned long long)cVar39 << 80) | ((unsigned long long)cVar38 << 72) | ((unsigned long long)cVar37 << 64);
 *(unsigned long long *)((long)&local_820 + lVar11) =
 ((unsigned long long)cVar36 << 120) | ((unsigned long long)cVar35 << 112) | ((unsigned long long)cVar34 << 104) | ((unsigned long long)cVar33 << 96) | ((unsigned long long)cVar32 << 88) | ((unsigned long long)cVar31 << 80) | ((unsigned long long)cVar30 << 72) | ((unsigned long long)cVar29 << 64);
 lVar11 = lVar11 + 0x10;
 cVar29 = cVar29 + '\x10';
 cVar30 = cVar30 + '\x10';
 cVar31 = cVar31 + '\x10';
 cVar32 = cVar32 + '\x10';
 cVar33 = cVar33 + '\x10';
 cVar34 = cVar34 + '\x10';
 cVar35 = cVar35 + '\x10';
 cVar36 = cVar36 + '\x10';
 cVar37 = cVar37 + '\x10';
 cVar38 = cVar38 + '\x10';
 cVar39 = cVar39 + '\x10';
 cVar40 = cVar40 + '\x10';
 cVar41 = cVar41 + '\x10';
 cVar42 = cVar42 + '\x10';
 cVar43 = cVar43 + '\x10';
 cVar44 = cVar44 + '\x10';
 } while (lVar11 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(unsigned long)local_420);
 lVar11 = 0;
 piVar12 = (int *)((long)&local_820 + 4);
 uVar21 = 1;
 uVar22 = 0;
 uVar23 = 0;
 uVar24 = 0;
 uVar25 = 0;
 uVar26 = 0;
 uVar27 = 0;
 uVar28 = 0;
 uVar13 = 0;
 uVar14 = 0;
 uVar15 = 0;
 uVar16 = 0;
 uVar17 = 0;
 uVar18 = 0;
 uVar19 = 0;
 uVar20 = 0;
 do {
 auVar2[1] = uVar14;
 auVar2[0] = uVar13;
 auVar2[2] = uVar15;
 auVar2[3] = uVar16;
 auVar2[4] = uVar17;
 auVar2[5] = uVar18;
 auVar2[6] = uVar19;
 auVar2[7] = uVar20;
 auVar2[8] = uVar21;
 auVar2[9] = uVar22;
 auVar2[10] = uVar23;
 auVar2[11] = uVar24;
 auVar2[12] = uVar25;
 auVar2[13] = uVar26;
 auVar2[14] = uVar27;
 auVar2[15] = uVar28;
 if (uVar13 < 10) {
 piVar12[-1] = (int)lVar11;
 }
 auVar3[1] = uVar14;
 auVar3[0] = uVar13;
 auVar3[2] = uVar15;
 auVar3[3] = uVar16;
 auVar3[4] = uVar17;
 auVar3[5] = uVar18;
 auVar3[6] = uVar19;
 auVar3[7] = uVar20;
 auVar3[8] = uVar21;
 auVar3[9] = uVar22;
 auVar3[10] = uVar23;
 auVar3[11] = uVar24;
 auVar3[12] = uVar25;
 auVar3[13] = uVar26;
 auVar3[14] = uVar27;
 auVar3[15] = uVar28;
 if (uVar13 < 10) {
 *piVar12 = (int)lVar11 + 2;
 }
 lVar6 = (((unsigned long long)uVar20 << 120) | ((unsigned long long)uVar19 << 112) | ((unsigned long long)uVar18 << 104) | ((unsigned long long)uVar17 << 96) | ((unsigned long long)uVar16 << 88) | ((unsigned long long)uVar15 << 80) | ((unsigned long long)uVar14 << 72) | ((unsigned long long)uVar13 << 64)) + 2;
 uVar13 = (char)lVar6;
 uVar14 = (char)((unsigned long)lVar6 >> 8);
 uVar15 = (char)((unsigned long)lVar6 >> 0x10);
 uVar16 = (char)((unsigned long)lVar6 >> 0x18);
 uVar17 = (char)((unsigned long)lVar6 >> 0x20);
 uVar18 = (char)((unsigned long)lVar6 >> 0x28);
 uVar19 = (char)((unsigned long)lVar6 >> 0x30);
 uVar20 = (char)((unsigned long)lVar6 >> 0x38);
 uVar21 = uVar21 + 2;
 uVar22 = (char)((unsigned long)(uVar22 + 2) >> 8);
 uVar23 = (char)((unsigned long)(uVar23 + 2) >> 0x10);
 uVar24 = (char)((unsigned long)(uVar24 + 2) >> 0x18);
 uVar25 = (char)((unsigned long)(uVar25 + 2) >> 0x20);
 uVar26 = (char)((unsigned long)(uVar26 + 2) >> 0x28);
 uVar27 = (char)((unsigned long)(uVar27 + 2) >> 0x30);
 uVar28 = (char)((unsigned long)(uVar28 + 2) >> 0x38);
 piVar12 = piVar12 + 2;
 lVar11 = lVar11 + 4;
 } while (lVar11 != 0x14);
 printf("MEM-L2-02 (vla_stack): %d\n",(unsigned long)local_80c);
 lVar11 = 0;
 piVar12 = (int *)((unsigned long)&local_820 | 4);
 uVar21 = 1;
 uVar22 = 0;
 uVar23 = 0;
 uVar24 = 0;
 uVar25 = 0;
 uVar26 = 0;
 uVar27 = 0;
 uVar28 = 0;
 uVar13 = 0;
 uVar14 = 0;
 uVar15 = 0;
 uVar16 = 0;
 uVar17 = 0;
 uVar18 = 0;
 uVar19 = 0;
 uVar20 = 0;
 do {
 auVar4[1] = uVar14;
 auVar4[0] = uVar13;
 auVar4[2] = uVar15;
 auVar4[3] = uVar16;
 auVar4[4] = uVar17;
 auVar4[5] = uVar18;
 auVar4[6] = uVar19;
 auVar4[7] = uVar20;
 auVar4[8] = uVar21;
 auVar4[9] = uVar22;
 auVar4[10] = uVar23;
 auVar4[11] = uVar24;
 auVar4[12] = uVar25;
 auVar4[13] = uVar26;
 auVar4[14] = uVar27;
 auVar4[15] = uVar28;
 if (uVar13 < 10) {
 piVar12[-1] = (int)lVar11;
 }
 auVar5[1] = uVar14;
 auVar5[0] = uVar13;
 auVar5[2] = uVar15;
 auVar5[3] = uVar16;
 auVar5[4] = uVar17;
 auVar5[5] = uVar18;
 auVar5[6] = uVar19;
 auVar5[7] = uVar20;
 auVar5[8] = uVar21;
 auVar5[9] = uVar22;
 auVar5[10] = uVar23;
 auVar5[11] = uVar24;
 auVar5[12] = uVar25;
 auVar5[13] = uVar26;
 auVar5[14] = uVar27;
 auVar5[15] = uVar28;
 if (uVar13 < 10) {
 *piVar12 = (int)lVar11 + 3;
 }
 lVar6 = (((unsigned long long)uVar20 << 120) | ((unsigned long long)uVar19 << 112) | ((unsigned long long)uVar18 << 104) | ((unsigned long long)uVar17 << 96) | ((unsigned long long)uVar16 << 88) | ((unsigned long long)uVar15 << 80) | ((unsigned long long)uVar14 << 72) | ((unsigned long long)uVar13 << 64)) + 2;
 uVar13 = (char)lVar6;
 uVar14 = (char)((unsigned long)lVar6 >> 8);
 uVar15 = (char)((unsigned long)lVar6 >> 0x10);
 uVar16 = (char)((unsigned long)lVar6 >> 0x18);
 uVar17 = (char)((unsigned long)lVar6 >> 0x20);
 uVar18 = (char)((unsigned long)lVar6 >> 0x28);
 uVar19 = (char)((unsigned long)lVar6 >> 0x30);
 uVar20 = (char)((unsigned long)lVar6 >> 0x38);
 uVar21 = uVar21 + 2;
 uVar22 = (char)((unsigned long)(uVar22 + 2) >> 8);
 uVar23 = (char)((unsigned long)(uVar23 + 2) >> 0x10);
 uVar24 = (char)((unsigned long)(uVar24 + 2) >> 0x18);
 uVar25 = (char)((unsigned long)(uVar25 + 2) >> 0x20);
 uVar26 = (char)((unsigned long)(uVar26 + 2) >> 0x28);
 uVar27 = (char)((unsigned long)(uVar27 + 2) >> 0x30);
 uVar28 = (char)((unsigned long)(uVar28 + 2) >> 0x38);
 piVar12 = piVar12 + 2;
 lVar11 = lVar11 + 6;
 } while (lVar11 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",(unsigned long)local_80c);
 iVar10 = printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return iVar10;
}

// Function: heap_basic @ 0x100fe4
static unsigned int heap_basic(unsigned long param_1)
{
 char auVar1 [16];
 void *__ptr;
 unsigned long uVar2;
 int *piVar3;
 int iVar4;
 unsigned int uVar5;
 long lVar6;
 long lVar7;
 char auVar8 [16];
 param_1 = param_1 & 0xffffffff;
 __ptr = malloc(-(param_1 >> 0x1f) & 0xfffffffc00000000 | param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 iVar4 = (int)param_1;
 if (0 < iVar4) {
 uVar2 = 0;
 piVar3 = (int *)((long)__ptr + 4);
 lVar7 = 1;
 lVar6 = 0;
 do {
 if (lVar6 < param_1) {
 piVar3[-1] = (int)uVar2;
 }
 if (lVar6 < param_1) {
 *piVar3 = (int)uVar2 + 2;
 }
 lVar6 = lVar6 + 2;
 lVar7 = lVar7 + 2;
 piVar3 = piVar3 + 2;
 uVar2 = uVar2 + 4;
 } while ((param_1 * 2 + 2 & 0x3fffffffc) != uVar2);
 }
 if (iVar4 < 0) {
 iVar4 = iVar4 + 1;
 }
 uVar5 = *(unsigned int *)((long)__ptr + (long)(iVar4 >> 1) * 4);
 free(__ptr);
 }
 return uVar5;
}

// Function: heap_calloc @ 0x10109c
static int heap_calloc(uint param_1)
{
 int *__ptr;
 long lVar1;
 int *piVar2;
 int iVar3;
 __ptr = (int *)calloc((long)(int)param_1,4);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 if (((int)param_1 < 1) || (param_1 == 1)) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 lVar1 = (unsigned long)param_1 - 1;
 piVar2 = __ptr;
 do {
 piVar2 = piVar2 + 1;
 lVar1 = lVar1 + -1;
 iVar3 = *piVar2 + iVar3;
 } while (lVar1 != 0);
 }
 free(__ptr);
 }
 return iVar3;
}

// Function: heap_realloc @ 0x101110
static unsigned int heap_realloc(unsigned long long param_1)
{
 long lVar1;
 int iVar2;
 void *__ptr;
 void *pvVar3;
 unsigned int uVar4;
 long lVar5;
 __ptr = malloc(0x14);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 lVar5 = 0;
 do {
 lVar1 = lVar5 + 1;
 *(int *)((long)__ptr + lVar5 * 4) = (int)lVar1;
 lVar5 = lVar1;
 } while (lVar1 != 5);
 iVar2 = *(int *)((long)__ptr + 8);
 pvVar3 = realloc(__ptr,0x28);
 if (pvVar3 == (void *)0x0) {
 uVar4 = 0xfffffffe;
 }
 else {
 *(unsigned int *)((long)pvVar3 + 0x24) = 0x5a;
 uVar4 = 0x32;
 if (*(int *)((long)pvVar3 + 8) != iVar2) {
 uVar4 = 0xfffffffd;
 }
 *(unsigned long long *)((long)pvVar3 + 0x1c) = 0x5000000046;
 *(unsigned long long *)((long)pvVar3 + 0x14) = 0x3c00000032;
 __ptr = pvVar3;
 }
 free(__ptr);
 }
 return uVar4;
}

// Function: heap_array @ 0x1011ac
static unsigned int heap_array(unsigned long param_1)
{
 char auVar1 [16];
 void *__ptr;
 long lVar2;
 int *piVar3;
 int iVar4;
 unsigned int uVar5;
 long lVar6;
 long lVar7;
 char auVar8 [16];
 param_1 = param_1 & 0xffffffff;
 __ptr = malloc(-(param_1 >> 0x1f) & 0xfffffffc00000000 | param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 iVar4 = (int)param_1;
 if (0 < iVar4) {
 lVar2 = 0;
 piVar3 = (int *)((long)__ptr + 4);
 lVar7 = 1;
 lVar6 = 0;
 do {
 if (lVar6 < param_1) {
 piVar3[-1] = (int)lVar2;
 }
 if (lVar6 < param_1) {
 *piVar3 = (int)lVar2 + 3;
 }
 lVar6 = lVar6 + 2;
 lVar7 = lVar7 + 2;
 piVar3 = piVar3 + 2;
 lVar2 = lVar2 + 6;
 } while (((param_1 + 1 & 0xfffffffffffffffe) + (param_1 + 1 >> 1)) * 2 - lVar2 != 0);
 }
 if (iVar4 < 0) {
 iVar4 = iVar4 + 1;
 }
 uVar5 = *(unsigned int *)((long)__ptr + (long)(iVar4 >> 1) * 4);
 free(__ptr);
 }
 return uVar5;
}

// Function: heap_struct @ 0x10126c
static int heap_struct(int param_1)
{
 return param_1 * 3;
}

// Function: heap_nested @ 0x101274
static unsigned long long heap_nested(void **param_1)
{
 unsigned int *__ptr;
 unsigned int *puVar1;
 unsigned long long uVar2;
 __ptr = (unsigned int *)malloc(0x10);
 *param_1 = __ptr;
 if (__ptr == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = (unsigned int *)malloc(0x10);
 *(unsigned int **)(__ptr + 2) = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0;
 *(unsigned long long *)(puVar1 + 2) = 0;
 *puVar1 = 0x14;
 }
 }
 return uVar2;
}

// Function: linked_list_heap @ 0x1012e8
static int linked_list_heap(void)
{
 int **ppiVar1;
 uint uVar2;
 bool bVar3;
 int *piVar4;
 int *piVar5;
 int *piVar6;
 int *__ptr;
 int iVar7;
 uint uVar8;
 int *piVar9;
 piVar4 = (int *)malloc(0x10);
 if (piVar4 == (int *)0x0) {
 __ptr = (int *)0x0;
 bVar3 = true;
 }
 else {
 iVar7 = 0;
 piVar6 = (int *)0x0;
 piVar9 = (int *)0x0;
 uVar2 = 0;
 do {
 uVar8 = uVar2;
 piVar5 = piVar4;
 *piVar5 = iVar7;
 *(unsigned long long *)(piVar5 + 2) = 0;
 __ptr = piVar5;
 if (piVar6 != (int *)0x0) {
 *(int **)(piVar9 + 2) = piVar5;
 __ptr = piVar6;
 }
 if (uVar8 == 4) {
 if (3 < uVar8) goto LAB_00101394;
 goto LAB_00101384;
 }
 piVar4 = (int *)malloc(0x10);
 iVar7 = iVar7 + 10;
 piVar6 = __ptr;
 piVar9 = piVar5;
 uVar2 = uVar8 + 1;
 } while (piVar4 != (int *)0x0);
 bVar3 = uVar8 < 4;
 while (__ptr != (int *)0x0) {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 }
 }
 if (bVar3) {
LAB_00101384:
 iVar7 = -1;
 }
 else {
LAB_00101394:
 iVar7 = 0;
 piVar4 = __ptr;
 if (__ptr != (int *)0x0) {
 do {
 ppiVar1 = (int **)(piVar4 + 2);
 iVar7 = *piVar4 + iVar7;
 piVar4 = *ppiVar1;
 } while (*ppiVar1 != (int *)0x0);
 while (__ptr != (int *)0x0) {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 }
 }
 }
 return iVar7;
}

// Function: create_tree_node @ 0x1013dc
static void create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)malloc(0x18);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 *(unsigned long long *)(puVar1 + 2) = 0;
 *(unsigned long long *)(puVar1 + 4) = 0;
 }
 return;
}

// Function: tree_heap_traversal @ 0x10140c
static unsigned long long tree_heap_traversal(void)
{
 return 0x3c;
}

// Function: memory_leak @ 0x101414
static unsigned int memory_leak(unsigned long param_1)
{
 unsigned int uVar1;
 void *pvVar2;
 unsigned long uVar3;
 int iVar4;
 param_1 = param_1 & 0xffffffff;
 pvVar2 = malloc(-(param_1 >> 0x1f) & 0xfffffffc00000000 | param_1 << 2);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 iVar4 = (int)param_1;
 if (0 < iVar4) {
 uVar3 = 0;
 do {
 *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
 uVar3 = uVar3 + 1;
 } while (param_1 != uVar3);
 }
 if (iVar4 < 0) {
 iVar4 = iVar4 + 1;
 }
 uVar1 = *(unsigned int *)((long)pvVar2 + (long)(iVar4 >> 1) * 4);
 }
 return uVar1;
}

// Function: dangling_pointer @ 0x101474
static unsigned int dangling_pointer(void)
{
 unsigned int uVar1;
 unsigned int *__ptr;
 __ptr = (unsigned int *)malloc(4);
 if (__ptr == (unsigned int *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}

// Function: double_free @ 0x1014c0
static unsigned int double_free(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}

// Function: heap_overflow @ 0x1014d4
static unsigned int heap_overflow(void)
{
 char auVar1 [16];
 char auVar2 [16];
 unsigned int *__ptr;
 long lVar3;
 int *piVar4;
 unsigned int uVar5;
 long lVar6;
 long lVar7;
 char auVar8 [16];
 char auVar9 [16];
 __ptr = (unsigned int *)malloc(0x28);
 if (__ptr == (unsigned int *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 lVar3 = 0;
 lVar7 = 1;
 lVar6 = 0;
 piVar4 = __ptr + 1;
 do {
 if (lVar6 < 0xb) {
 piVar4[-1] = (int)lVar3;
 }
 if (lVar7 < 0xb) {
 *piVar4 = (int)lVar3 + 100;
 }
 lVar6 = lVar6 + 2;
 lVar7 = lVar7 + 2;
 piVar4 = piVar4 + 2;
 lVar3 = lVar3 + 200;
 } while (lVar3 != 0x4b0);
 uVar5 = *__ptr;
 free(__ptr);
 }
 return uVar5;
}

// Function: test_heap_memory @ 0x101570
static char * test_heap_memory(void)
{
 uint uVar1;
 int iVar2;
 __pid_t __pid;
 uint uVar3;
 unsigned long uVar4;
 void *pvVar5;
 char *__format;
 char *puVar6;
 long lVar7;
 uint local_24;
 void *local_8;
 puts(DAT_00102307);
 uVar4 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar4 & 0xffffffff);
 uVar4 = heap_calloc(5);
 iVar2 = printf("HEAP-L2-02 (heap_calloc): %d\n",uVar4 & 0xffffffff);
 uVar4 = heap_realloc(iVar2);
 printf("HEAP-L2-03 (heap_realloc): %d\n",uVar4 & 0xffffffff);
 uVar4 = heap_array(10);
 printf("HEAP-L2-04 (heap_array): %d\n",uVar4 & 0xffffffff);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 local_8 = (void *)0x0;
 uVar4 = heap_nested(&local_8);
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar4 & 0xffffffff);
 pvVar5 = local_8;
 if (local_8 != (void *)0x0) {
 free(*(void **)((long)local_8 + 8));
 free(pvVar5);
 }
 uVar4 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar4 & 0xffffffff);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 pvVar5 = malloc(0x14);
 if (pvVar5 == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 lVar7 = 0;
 do {
 *(int *)((long)pvVar5 + lVar7 * 4) = (int)lVar7;
 lVar7 = lVar7 + 1;
 } while (lVar7 != 5);
 uVar4 = (unsigned long)*(uint *)((long)pvVar5 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar4);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 uVar4 = dangling_pointer();
 printf(DAT_00101f95,uVar4 & 0xffffffff);
 exit(0);
 }
 if (__pid < 1) {
 perror(DAT_0010200b);
 return (char *)DAT_0010200b;
 }
 uVar3 = waitpid(__pid,(int *)&local_24,0);
 uVar1 = local_24 & 0x7f;
 if (uVar1 == 0) {
 uVar1 = local_24 >> 8 & 0xff;
 __format = DAT_00101fa5;
 }
 else {
 if ((int)(uVar1 * 0x1000000 + 0x1000000) < 0x2000000) goto LAB_001016ec;
 __format = DAT_00101fca;
 }
 uVar3 = printf(__format,(unsigned long)uVar1);
LAB_001016ec:
 return (char *)(unsigned long)uVar3;
}

// Function: global_var_access @ 0x101730
static void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x101744
static int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x101754
static unsigned int global_array_access(uint param_1)
{
 if (9 < param_1) {
 return 0xffffffff;
 }
 return *(unsigned int *)(&global_array + (unsigned long)param_1 * 4);
}

// Function: static_local @ 0x101774
static void static_local(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = static_local_counter + 1;
 }
 static_local_counter = iVar1;
 return;
}

// Function: call_static_func @ 0x10178c
static uint call_static_func(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: access_extern_global @ 0x10179c
static int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x1017b0
static void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x1017b8
static int read_const_data(void)
{
 return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x1017cc
static unsigned long long access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x1017d4
static unsigned long long access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x1017dc
static unsigned long long global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x1017e4
static void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x1017f0
static unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x1017fc
static void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = (unsigned long long (*)(void))param_1;
 return;
}

// Function: call_global_callback @ 0x101808
static unsigned long long call_global_callback(void)
{
 unsigned long long uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x101820
static unsigned int global_heap_store(unsigned int *param_1)
{
 global_heap_ptr = param_1;
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x10183c
static unsigned long long static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x101844
static int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x10184c
static unsigned long long init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x101854
static int test_static_global(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned int local_24;
 puts(DAT_00102325);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): called\n");
 printf("STM-L1-01 (global_var_read): %d\n",(unsigned long)(uint)(global_counter << 1));
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): called\n");
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",(unsigned long)(extern_global_var + 100));
 uVar2 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar2 & 0xffffffff);
 printf("STM-L2-03 (read_const_data): %d\n",(unsigned long)((byte)const_string[4] + 0x2a));
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = (unsigned long long (*)(void))double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_24;
 local_24 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 iVar1 = printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return iVar1;
}

// Function: double_value @ 0x101a14
static int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: memop_memset @ 0x101a1c
static unsigned long memop_memset(byte *param_1,size_t param_2,int param_3)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (unsigned long)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x101a5c
static unsigned int memop_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(unsigned int *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
}

// Function: memop_memmove @ 0x101aa4
static unsigned long memop_memmove(void *param_1,unsigned long param_2)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (unsigned long)*(byte *)((long)param_1 + 1);
 }
 return uVar1;
}

// Function: memop_memcmp @ 0x101ae4
static int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
 int iVar1;
 int iVar2;
 iVar2 = 0;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 iVar1 = memcmp(param_1,param_2,param_3);
 iVar2 = -(uint)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 }
 return iVar2;
}

// Function: memop_bzero @ 0x101b20
static unsigned long memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (unsigned long)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x101b58
static unsigned long memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (unsigned long)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x101b94
static unsigned int memop_unaligned_access(long param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x101ba8
static int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 DataMemoryBarrier(2,3);
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x101bc8
static int test_memory_op_functions(void)
{
 int iVar1;
 puts(DAT_00102349);
 printf("MEMOP-L2-01: %d\n",0x41);
 printf("MEMOP-L2-02: %d\n",0x32);
 printf("MEMOP-L2-03: %c\n",0x48);
 printf("MEMOP-L2-04: %d\n",0xffffffff);
 printf("MEMOP-L2-05: %d\n",0);
 printf("MEMOP-L2-06: %d\n",1);
 printf("MEMOP-L3-01: 0x%x\n",0x4030201);
 DataMemoryBarrier(2,3);
 iVar1 = printf("MEMOP-L3-02: %d\n",10);
 return iVar1;
}

// Function: main @ 0x101ca4
int main(int __argc, char **__argv, char **__envp)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: extern_function @ 0x101cc8
static int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: _fini @ 0x101cd0
static void _fini(void)
{
 return;
}

