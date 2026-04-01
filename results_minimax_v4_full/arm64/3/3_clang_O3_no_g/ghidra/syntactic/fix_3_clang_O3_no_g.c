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

/* Additional types from decompiler */
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned char undefined;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef int __pid_t;
typedef void (*code)(void);

/* Additional CONCAT macros - these combine two values into a larger value */
#define CONCAT44(a,b) ((((uint64_t)(uint32_t)(a)) << 32) | ((uint32_t)(b)))
#define CONCAT17(a,b) ((((uint32_t)(uint16_t)(a)) << 16) | ((uint16_t)(b)))
#define CONCAT11(a,b) ((((uint32_t)(uint8_t)(a)) << 8) | ((uint8_t)(b)))
#define CONCAT12(a,b) ((((uint32_t)(uint16_t)(a)) << 16) | ((uint16_t)(b)))
#define CONCAT13(a,b) ((((uint32_t)(uint16_t)(a)) << 16) | ((uint16_t)(b)))
#define CONCAT14(a,b) ((((uint32_t)(uint16_t)(a)) << 16) | ((uint16_t)(b)))
#define CONCAT15(a,b) ((((uint32_t)(uint16_t)(a)) << 16) | ((uint16_t)(b)))
#define CONCAT16(a,b) ((((uint32_t)(uint16_t)(a)) << 16) | ((uint16_t)(b)))

/* Global variables - declared as static to prevent multiple definition */
static int global_counter;
static undefined4 global_array[10];
static int static_local_counter;
static int file_scope_static;
static code global_func_ptr;
static undefined4 *global_heap_ptr;
int extern_global_var;
static char const_string[16];
static undefined4 local_24;
char completed_0;

/* Stack address symbols (used in VLA functions) */
char stack0x00000000[1];
char stack0xfffffffffffffff0[1];

/* CRT stubs that need declarations */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);

/* Ghidra CONCAT macros - renamed to avoid conflict with byte-combining macros */
#define CONCAT_PASTE1(a,b) (a##b)
#define CONCAT_PASTE2(a,b) CONCAT_PASTE1(a,b)
#define CONCAT_PASTE3(a,b) CONCAT_PASTE2((a),(b))
#define CONCAT_PASTE4(a,b) CONCAT_PASTE3((a),(b))
#define CONCAT_PASTE5(a,b) CONCAT_PASTE4((a),(b))
#define CONCAT_PASTE6(a,b) CONCAT_PASTE5((a),(b))
#define CONCAT_PASTE7(a,b) CONCAT_PASTE6((a),(b))
#define CONCAT_PASTE8(a,b) CONCAT_PASTE7((a),(b))
#define CONCAT_PASTE9(a,b) CONCAT_PASTE8((a),(b))
#define CONCAT_PASTE10(a,b) CONCAT_PASTE9((a),(b))
#define CONCAT_PASTE11(a,b) CONCAT_PASTE10((a),(b))
#define CONCAT_PASTE12(a,b) CONCAT_PASTE11((a),(b))
#define CONCAT_PASTE13(a,b) CONCAT_PASTE12((a),(b))
#define CONCAT_PASTE14(a,b) CONCAT_PASTE13((a),(b))
#define CONCAT_PASTE15(a,b) CONCAT_PASTE14((a),(b))
#define CONCAT_PASTE16(a,b) CONCAT_PASTE15((a),(b))
#define CONCAT_PASTE17(a,b) CONCAT_PASTE16((a),(b))

/* Data symbols from binary - defined as string literals */
char DAT_001022b9[] = "Testing Stack Memory\n";
char DAT_001022d7[] = "Testing Heap Memory\n";
char DAT_001022f5[] = "Testing Static/Global Variables\n";
char DAT_00102319[] = "Testing Memory Operations\n";
char DAT_00101f65[] = "value after free: %d\n";
char DAT_00101fdb[] = "fork failed\n";
char DAT_00101f75[] = "exit status: %d\n";
char DAT_00101f9a[] = "signal: %d\n";

/* External functions */
extern int fork(void);
extern int waitpid(int, int *, int);
extern void exit(int);
extern void perror(char *);
extern int printf(char *, ...);
extern int puts(char *);
extern void *malloc(long);
extern void *realloc(void *, long);
extern void *calloc(long, long);
extern void free(void *);
extern void *memset(void *, int, long);
extern void *memcpy(void *, void *, long);
extern void *memmove(void *, void *, long);
extern int memcmp(void *, void *, long);
extern void DataMemoryBarrier(int, int);
extern int extern_function(int);
extern int double_value(int);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_clang_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001008e0 @ 001008e0 */

void FUN_001008e0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 00100b54 */

static static int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00100b60 */

static int local_array(int param_1)

{
 return param_1 * 5;
}



/* Function: local_struct @ 00100b68 */

static int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00100b70 */

static undefined8 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00100b84 */

static int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



/* Function: large_stack_frame @ 00100b90 */

undefined1 large_stack_frame(void)

{
 long lVar1;
 long lVar2;
 char cVar4;
 char cVar5;
 char cVar6;
 char cVar7;
 char cVar8;
 char cVar9;
 undefined8 uVar3;
 char cVar10;
 char cVar12;
 char cVar13;
 char cVar14;
 char cVar15;
 char cVar16;
 char cVar17;
 undefined8 uVar11;
 char cVar18;
 undefined8 local_810 [128];
 undefined1 local_410;
 
 uVar11 = 0xf0e0d0c0b0a0908;
 uVar3 = 0x706050403020100;
 lVar2 = 0;
 do {
 cVar4 = (char)((ulong)uVar3 >> 8);
 cVar5 = (char)((ulong)uVar3 >> 0x10);
 cVar6 = (char)((ulong)uVar3 >> 0x18);
 cVar7 = (char)((ulong)uVar3 >> 0x20);
 cVar8 = (char)((ulong)uVar3 >> 0x28);
 cVar9 = (char)((ulong)uVar3 >> 0x30);
 cVar10 = (char)((ulong)uVar3 >> 0x38);
 cVar12 = (char)((ulong)uVar11 >> 8);
 cVar13 = (char)((ulong)uVar11 >> 0x10);
 cVar14 = (char)((ulong)uVar11 >> 0x18);
 cVar15 = (char)((ulong)uVar11 >> 0x20);
 cVar16 = (char)((ulong)uVar11 >> 0x28);
 cVar17 = (char)((ulong)uVar11 >> 0x30);
 cVar18 = (char)((ulong)uVar11 >> 0x38);
 lVar1 = lVar2 + 0x20;
 *(undefined8 *)((long)local_810 + lVar2 + 8) = uVar11;
 *(undefined8 *)((long)local_810 + lVar2) = uVar3;
 *(ulong *)((long)local_810 + lVar2 + 0x18) =
 ((ulong)(uint)((char)uVar11 + '\x10') << 0x38) |
 ((ulong)(uint)(cVar12 + '\x10') << 0x30) |
 ((ulong)(uint)(cVar13 + '\x10') << 0x28) |
 ((ulong)(uint)(cVar14 + '\x10') << 0x20) |
 ((ulong)(uint)(cVar15 + '\x10') << 0x18) |
 ((ulong)(uint)(cVar16 + '\x10') << 0x10) |
 ((ulong)(uint)(cVar17 + '\x10') << 8) |
 (uint)(cVar18 + '\x10');
 *(ulong *)((long)local_810 + lVar2 + 0x10) =
 CONCAT17(cVar10 + '\x10',
 CONCAT16(cVar9 + '\x10',
 CONCAT15(cVar8 + '\x10',
 CONCAT14(cVar7 + '\x10',
 CONCAT13(cVar6 + '\x10',
 CONCAT12(cVar5 + '\x10',
 CONCAT11(cVar4 + '\x10',
 (char)uVar3 + '\x10')))))));
 uVar3 = CONCAT17(cVar10 + ' ',
 CONCAT16(cVar9 + ' ',
 CONCAT15(cVar8 + ' ',
 CONCAT14(cVar7 + ' ',
 CONCAT13(cVar6 + ' ',
 CONCAT12(cVar5 + ' ',
 CONCAT11(cVar4 + ' ',
 (char)uVar3 + ' ')))))));
 uVar11 = CONCAT17(cVar18 + ' ',
 CONCAT16(cVar17 + ' ',
 CONCAT15(cVar16 + ' ',
 CONCAT14(cVar15 + ' ',
 CONCAT13(cVar14 + ' ',
 CONCAT12(cVar13 + ' ',
 CONCAT11(cVar12 + ' ',
 (char)uVar11 + ' '))))))
 );
 lVar2 = lVar1;
 } while (lVar1 != 0x800);
 return local_410;
}



/* Function: vla_stack @ 00100bdc */

undefined4 vla_stack(uint param_1)

{
 long lVar1;
 ulong uVar2;
 long lVar3;
 ulong uVar4;
 undefined8 *puVar5;
 ulong uVar6;
 int *piVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 
 if (param_1 - 0x3e9 < 0xfffffc18) {
 return 0xffffffff;
 }
 uVar2 = (ulong)param_1;
 lVar3 = -(uVar2 * 4 + 0xf & 0x7fffffff0);
 lVar1 = lVar3 + -0x10;
 if (param_1 < 8) {
 uVar4 = 0;
 }
 else {
 uVar4 = uVar2 & 0xfffffff8;
 iVar10 = 2;
 iVar11 = 3;
 iVar8 = 0;
 iVar9 = 1;
 puVar5 = (undefined8 *)(&stack0x00000000 + lVar3);
 uVar6 = uVar4;
 do {
 iVar12 = iVar8 * 2;
 iVar13 = iVar9 * 2;
 iVar14 = iVar10 * 2;
 iVar15 = iVar11 * 2;
 uVar6 = uVar6 - 8;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 iVar10 = iVar10 + 8;
 iVar11 = iVar11 + 8;
 puVar5[-1] = CONCAT44(iVar15 + 0,iVar14 + 0);
 puVar5[-2] = CONCAT44(iVar13 + 0,iVar12 + 0);
 puVar5[1] = CONCAT44(iVar15 + 8,iVar14 + 8);
 *puVar5 = CONCAT44(iVar13 + 8,iVar12 + 8);
 puVar5 = puVar5 + 4;
 } while (uVar6 != 0);
 if (uVar4 == uVar2) goto LAB_00100c80;
 }
 iVar8 = (int)uVar4 << 1;
 lVar3 = uVar2 - uVar4;
 piVar7 = (int *)(&stack0xfffffffffffffff0 + uVar4 * 4 + lVar1 + 0x10);
 do {
 *piVar7 = iVar8;
 iVar8 = iVar8 + 2;
 lVar3 = lVar3 + -1;
 piVar7 = piVar7 + 1;
 } while (lVar3 != 0);
LAB_00100c80:
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 return *(undefined4 *)
 (&stack0xfffffffffffffff0 + (ulong)(uint)((int)param_1 >> 1) * 4 + lVar1 + 0x10);
}



/* Function: alloca_usage @ 00100ca0 */

undefined4 alloca_usage(uint param_1)

{
 long lVar1;
 ulong uVar2;
 long lVar3;
 ulong uVar4;
 undefined8 *puVar5;
 ulong uVar6;
 int *piVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 
 if ((int)param_1 < 1) {
 return 0xffffffff;
 }
 uVar2 = (ulong)param_1;
 lVar3 = -(uVar2 * 4 + 0xf & 0x7fffffff0);
 lVar1 = lVar3 + -0x10;
 if (param_1 < 8) {
 uVar4 = 0;
 }
 else {
 uVar4 = uVar2 & 0xfffffff8;
 iVar10 = 2;
 iVar11 = 3;
 iVar8 = 0;
 iVar9 = 1;
 puVar5 = (undefined8 *)(&stack0x00000000 + lVar3);
 uVar6 = uVar4;
 do {
 iVar12 = iVar8 * 3;
 iVar13 = iVar9 * 3;
 iVar14 = iVar10 * 3;
 iVar15 = iVar11 * 3;
 uVar6 = uVar6 - 8;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 iVar10 = iVar10 + 8;
 iVar11 = iVar11 + 8;
 puVar5[-1] = CONCAT44(iVar15 + 0,iVar14 + 0);
 puVar5[-2] = CONCAT44(iVar13 + 0,iVar12 + 0);
 puVar5[1] = CONCAT44(iVar15 + 0xc,iVar14 + 0xc);
 *puVar5 = CONCAT44(iVar13 + 0xc,iVar12 + 0xc);
 puVar5 = puVar5 + 4;
 } while (uVar6 != 0);
 if (uVar4 == uVar2) goto LAB_00100d44;
 }
 iVar8 = (int)uVar4 * 3;
 lVar3 = uVar2 - uVar4;
 piVar7 = (int *)(&stack0xfffffffffffffff0 + uVar4 * 4 + lVar1 + 0x10);
 do {
 *piVar7 = iVar8;
 iVar8 = iVar8 + 3;
 lVar3 = lVar3 + -1;
 piVar7 = piVar7 + 1;
 } while (lVar3 != 0);
LAB_00100d44:
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 return *(undefined4 *)
 (&stack0xfffffffffffffff0 + (ulong)(uint)((int)param_1 >> 1) * 4 + lVar1 + 0x10);
}



/* Function: stack_alias @ 00100d60 */

static undefined8 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00100d68 */

int test_stack_memory(void)

{
 long lVar1;
 int iVar2;
 long lVar3;
 char cVar5;
 char cVar6;
 char cVar7;
 char cVar8;
 char cVar9;
 char cVar10;
 undefined8 uVar4;
 char cVar11;
 char cVar13;
 char cVar14;
 char cVar15;
 char cVar16;
 char cVar17;
 char cVar18;
 undefined8 uVar12;
 char cVar19;
 undefined8 local_820 [128];
 byte local_420;
 
 puts(DAT_001022b9);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 printf("MEM-L1-02 (local_array): %d\n",10);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 uVar12 = 0xf0e0d0c0b0a0908;
 uVar4 = 0x706050403020100;
 lVar3 = 0;
 do {
 cVar5 = (char)((ulong)uVar4 >> 8);
 cVar6 = (char)((ulong)uVar4 >> 0x10);
 cVar7 = (char)((ulong)uVar4 >> 0x18);
 cVar8 = (char)((ulong)uVar4 >> 0x20);
 cVar9 = (char)((ulong)uVar4 >> 0x28);
 cVar10 = (char)((ulong)uVar4 >> 0x30);
 cVar11 = (char)((ulong)uVar4 >> 0x38);
 cVar13 = (char)((ulong)uVar12 >> 8);
 cVar14 = (char)((ulong)uVar12 >> 0x10);
 cVar15 = (char)((ulong)uVar12 >> 0x18);
 cVar16 = (char)((ulong)uVar12 >> 0x20);
 cVar17 = (char)((ulong)uVar12 >> 0x28);
 cVar18 = (char)((ulong)uVar12 >> 0x30);
 cVar19 = (char)((ulong)uVar12 >> 0x38);
 lVar1 = lVar3 + 0x20;
 *(undefined8 *)((long)local_820 + lVar3 + 8) = uVar12;
 *(undefined8 *)((long)local_820 + lVar3) = uVar4;
 *(ulong *)((long)local_820 + lVar3 + 0x18) =
 CONCAT17(cVar19 + '\x10',
 CONCAT16(cVar18 + '\x10',
 CONCAT15(cVar17 + '\x10',
 CONCAT14(cVar16 + '\x10',
 CONCAT13(cVar15 + '\x10',
 CONCAT12(cVar14 + '\x10',
 CONCAT11(cVar13 + '\x10',
 (char)uVar12 + '\x10')))))))
 ;
 *(ulong *)((long)local_820 + lVar3 + 0x10) =
 CONCAT17(cVar11 + '\x10',
 CONCAT16(cVar10 + '\x10',
 CONCAT15(cVar9 + '\x10',
 CONCAT14(cVar8 + '\x10',
 CONCAT13(cVar7 + '\x10',
 CONCAT12(cVar6 + '\x10',
 CONCAT11(cVar5 + '\x10',
 (char)uVar4 + '\x10')))))));
 uVar4 = CONCAT17(cVar11 + ' ',
 CONCAT16(cVar10 + ' ',
 CONCAT15(cVar9 + ' ',
 CONCAT14(cVar8 + ' ',
 CONCAT13(cVar7 + ' ',
 CONCAT12(cVar6 + ' ',
 CONCAT11(cVar5 + ' ',
 (char)uVar4 + ' ')))))));
 uVar12 = CONCAT17(cVar19 + ' ',
 CONCAT16(cVar18 + ' ',
 CONCAT15(cVar17 + ' ',
 CONCAT14(cVar16 + ' ',
 CONCAT13(cVar15 + ' ',
 CONCAT12(cVar14 + ' ',
 CONCAT11(cVar13 + ' ',
 (char)uVar12 + ' '))))))
 );
 lVar3 = lVar1;
 } while (lVar1 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)local_420);
 printf("MEM-L2-02 (vla_stack): %d\n",10);
 printf("MEM-L2-03 (alloca_usage): %d\n",0xf);
 iVar2 = printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return iVar2;
}



/* Function: heap_basic @ 00100e54 */

static undefined4 heap_basic(uint param_1)

{
 undefined4 uVar1;
 void *__ptr;
 long lVar2;
 ulong uVar3;
 undefined8 *puVar4;
 ulong uVar5;
 int *piVar6;
 ulong uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 
 uVar7 = (ulong)param_1;
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2);
 if (__ptr == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 if (param_1 < 8) {
 uVar3 = 0;
 }
 else {
 uVar3 = uVar7 & 0xfffffff8;
 iVar10 = 2;
 iVar11 = 3;
 iVar8 = 0;
 iVar9 = 1;
 puVar4 = (undefined8 *)((long)__ptr + 0x10);
 uVar5 = uVar3;
 do {
 iVar12 = iVar8 * 2;
 iVar13 = iVar9 * 2;
 iVar14 = iVar10 * 2;
 iVar15 = iVar11 * 2;
 uVar5 = uVar5 - 8;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 iVar10 = iVar10 + 8;
 iVar11 = iVar11 + 8;
 puVar4[-1] = CONCAT44(iVar15 + 0,iVar14 + 0);
 puVar4[-2] = CONCAT44(iVar13 + 0,iVar12 + 0);
 puVar4[1] = CONCAT44(iVar15 + 8,iVar14 + 8);
 *puVar4 = CONCAT44(iVar13 + 8,iVar12 + 8);
 puVar4 = puVar4 + 4;
 } while (uVar5 != 0);
 if (uVar3 == uVar7) goto LAB_00100ef8;
 }
 iVar8 = (int)uVar3 << 1;
 lVar2 = uVar7 - uVar3;
 piVar6 = (int *)((long)__ptr + uVar3 * 4);
 do {
 *piVar6 = iVar8;
 iVar8 = iVar8 + 2;
 lVar2 = lVar2 + -1;
 piVar6 = piVar6 + 1;
 } while (lVar2 != 0);
 }
LAB_00100ef8:
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 uVar1 = *(undefined4 *)((long)__ptr + (long)((int)param_1 >> 1) * 4);
 free(__ptr);
 return uVar1;
}



/* Function: heap_calloc @ 00100f1c */

int heap_calloc(uint param_1)

{
 undefined8 *puVar1;
 undefined8 *puVar2;
 undefined8 *puVar3;
 void *__ptr;
 long lVar4;
 ulong uVar5;
 int *piVar6;
 ulong uVar7;
 ulong uVar8;
 undefined8 *puVar9;
 ulong uVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 undefined8 uVar19;
 
 __ptr = calloc((long)(int)param_1,4);
 if (__ptr == (void *)0x0) {
 return -1;
 }
 if (((int)param_1 < 1) || (param_1 == 1)) {
 iVar11 = 0;
 }
 else {
 uVar7 = (ulong)param_1 - 1;
 if (uVar7 < 8) {
 iVar11 = 0;
 uVar5 = 1;
 }
 else {
 uVar8 = uVar7 & 0xfffffffffffffff8;
 puVar9 = (undefined8 *)((long)__ptr + 0x14);
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 uVar5 = uVar8 | 1;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 iVar18 = 0;
 uVar10 = uVar8;
 do {
 puVar1 = puVar9 + -2;
 puVar2 = puVar9 + -1;
 puVar3 = puVar9 + 1;
 uVar19 = *puVar9;
 puVar9 = puVar9 + 4;
 uVar10 = uVar10 - 8;
 iVar11 = (int)*puVar1 + iVar11;
 iVar12 = (int)((ulong)*puVar1 >> 0x20) + iVar12;
 iVar13 = (int)*puVar2 + iVar13;
 iVar14 = (int)((ulong)*puVar2 >> 0x20) + iVar14;
 iVar15 = (int)uVar19 + iVar15;
 iVar16 = (int)((ulong)uVar19 >> 0x20) + iVar16;
 iVar17 = (int)*puVar3 + iVar17;
 iVar18 = (int)((ulong)*puVar3 >> 0x20) + iVar18;
 } while (uVar10 != 0);
 iVar11 = iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13 + iVar18 + iVar14;
 if (uVar7 == uVar8) goto LAB_00100fe0;
 }
 lVar4 = param_1 - uVar5;
 piVar6 = (int *)((long)__ptr + uVar5 * 4);
 do {
 lVar4 = lVar4 + -1;
 iVar11 = *piVar6 + iVar11;
 piVar6 = piVar6 + 1;
 } while (lVar4 != 0);
 }
LAB_00100fe0:
 free(__ptr);
 return iVar11;
}



/* Function: heap_realloc @ 00100ff4 */

undefined4 heap_realloc(void)

{
 undefined8 *__ptr;
 undefined8 *puVar1;
 undefined4 uVar2;
 
 __ptr = malloc(0x14);
 if (__ptr != (undefined8 *)0x0) {
 __ptr[1] = 0x400000003;
 *__ptr = 0x200000001;
 *(undefined4 *)(__ptr + 2) = 5;
 puVar1 = realloc(__ptr,0x28);
 if (puVar1 == (undefined8 *)0x0) {
 uVar2 = 0xfffffffe;
 }
 else {
 *(undefined4 *)((long)puVar1 + 0x24) = 0x5a;
 uVar2 = 0x32;
 if (*(int *)(puVar1 + 1) != 3) {
 uVar2 = 0xfffffffd;
 }
 *(undefined8 *)((long)puVar1 + 0x1c) = 0x5000000046;
 *(undefined8 *)((long)puVar1 + 0x14) = 0x3c00000032;
 __ptr = puVar1;
 }
 free(__ptr);
 return uVar2;
 }
 return 0xffffffff;
}



/* Function: heap_array @ 00101090 */

undefined4 heap_array(uint param_1)

{
 undefined4 uVar1;
 void *__ptr;
 long lVar2;
 ulong uVar3;
 undefined8 *puVar4;
 ulong uVar5;
 int *piVar6;
 ulong uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 
 uVar7 = (ulong)param_1;
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2);
 if (__ptr == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 if (param_1 < 8) {
 uVar3 = 0;
 }
 else {
 uVar3 = uVar7 & 0xfffffff8;
 iVar10 = 2;
 iVar11 = 3;
 iVar8 = 0;
 iVar9 = 1;
 puVar4 = (undefined8 *)((long)__ptr + 0x10);
 uVar5 = uVar3;
 do {
 iVar12 = iVar8 * 3;
 iVar13 = iVar9 * 3;
 iVar14 = iVar10 * 3;
 iVar15 = iVar11 * 3;
 uVar5 = uVar5 - 8;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 iVar10 = iVar10 + 8;
 iVar11 = iVar11 + 8;
 puVar4[-1] = CONCAT44(iVar15,iVar14);
 puVar4[-2] = CONCAT44(iVar13,iVar12);
 puVar4[1] = CONCAT44(iVar15 + 0xc,iVar14 + 0xc);
 *puVar4 = CONCAT44(iVar13 + 0xc,iVar12 + 0xc);
 puVar4 = puVar4 + 4;
 } while (uVar5 != 0);
 if (uVar3 == uVar7) goto LAB_0010113c;
 }
 iVar8 = (int)uVar3 * 3;
 lVar2 = uVar7 - uVar3;
 piVar6 = (int *)((long)__ptr + uVar3 * 4);
 do {
 *piVar6 = iVar8;
 iVar8 = iVar8 + 3;
 lVar2 = lVar2 + -1;
 piVar6 = piVar6 + 1;
 } while (lVar2 != 0);
 }
LAB_0010113c:
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 uVar1 = *(undefined4 *)((long)__ptr + (long)((int)param_1 >> 1) * 4);
 free(__ptr);
 return uVar1;
}



/* Function: heap_struct @ 00101160 */

static int heap_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: heap_nested @ 00101168 */

undefined8 heap_nested(undefined8 *param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 
 __ptr = malloc(0x10);
 *param_1 = (undefined8)__ptr;
 if (__ptr == (undefined4 *)0x0) {
 return 0xffffffff;
 }
 *__ptr = 10;
 puVar1 = malloc(0x10);
 *(undefined4 **)(__ptr + 2) = puVar1;
 if (puVar1 != (undefined4 *)0x0) {
 *(undefined8 *)(puVar1 + 2) = 0;
 *puVar1 = 0x14;
 return 0;
 }
 free(__ptr);
 return 0xfffffffe;
}



/* Function: linked_list_heap @ 001011ec */

int linked_list_heap(void)

{
 int iVar1;
 int *__ptr;
 undefined4 *puVar2;
 undefined4 *puVar3;
 int *piVar4;
 int iVar5;
 
 __ptr = malloc(0x10);
 if (__ptr != (int *)0x0) {
 *__ptr = 0;
 puVar2 = malloc(0x10);
 if (puVar2 == (undefined4 *)0x0) {
 free(__ptr);
 return -1;
 }
 *(undefined8 *)(puVar2 + 2) = 0;
 *(undefined4 **)(__ptr + 2) = puVar2;
 *puVar2 = 10;
 puVar3 = malloc(0x10);
 if (puVar3 == (undefined4 *)0x0) {
 do {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 return -1;
 }
 *(undefined8 *)(puVar3 + 2) = 0;
 *(undefined4 **)(puVar2 + 2) = puVar3;
 *puVar3 = 0x14;
 puVar2 = malloc(0x10);
 if (puVar2 == (undefined4 *)0x0) {
 do {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 return -1;
 }
 *(undefined8 *)(puVar2 + 2) = 0;
 *(undefined4 **)(puVar3 + 2) = puVar2;
 *puVar2 = 0x1e;
 puVar3 = malloc(0x10);
 if (puVar3 != (undefined4 *)0x0) {
 iVar5 = 0;
 *(undefined8 *)(puVar3 + 2) = 0;
 *(undefined4 **)(puVar2 + 2) = puVar3;
 *puVar3 = 0x28;
 piVar4 = __ptr;
 do {
 iVar1 = *piVar4;
 piVar4 = *(int **)(piVar4 + 2);
 iVar5 = iVar1 + iVar5;
 } while (piVar4 != (int *)0x0);
 do {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 return iVar5;
 }
 do {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 }
 return -1;
}



/* Function: create_tree_node @ 00101370 */

void create_tree_node(undefined4 param_1)

{
 undefined4 *puVar1;
 
 puVar1 = malloc(0x18);
 if (puVar1 != (undefined4 *)0x0) {
 *puVar1 = param_1;
 *(undefined8 *)(puVar1 + 2) = 0;
 *(undefined8 *)(puVar1 + 4) = 0;
 }
 return;
}



/* Function: tree_heap_traversal @ 001013a0 */

undefined8 tree_heap_traversal(void)

{
 return 0x3c;
}



/* Function: memory_leak @ 001013a8 */

static undefined4 memory_leak(uint param_1)

{
 void *pvVar1;
 ulong uVar2;
 undefined8 *puVar3;
 ulong uVar4;
 ulong uVar5;
 undefined8 uVar6;
 int iVar7;
 undefined8 uVar8;
 int iVar9;
 
 uVar5 = (ulong)param_1;
 pvVar1 = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2);
 if (pvVar1 == (void *)0x0) {
 return 0xffffffff;
 }
 if (0 < (int)param_1) {
 if (param_1 < 8) {
 uVar2 = 0;
 }
 else {
 uVar2 = uVar5 & 0xfffffff8;
 uVar8 = 0x300000002;
 uVar6 = 0x100000000;
 puVar3 = (undefined8 *)((long)pvVar1 + 0x10);
 uVar4 = uVar2;
 do {
 iVar7 = (int)((ulong)uVar6 >> 0x20);
 iVar9 = (int)((ulong)uVar8 >> 0x20);
 uVar4 = uVar4 - 8;
 puVar3[-1] = uVar8;
 puVar3[-2] = uVar6;
 puVar3[1] = CONCAT44(iVar9 + 4,(int)uVar8 + 4);
 *puVar3 = CONCAT44(iVar7 + 4,(int)uVar6 + 4);
 puVar3 = puVar3 + 4;
 uVar6 = CONCAT44(iVar7 + 8,(int)uVar6 + 8);
 uVar8 = CONCAT44(iVar9 + 8,(int)uVar8 + 8);
 } while (uVar4 != 0);
 if (uVar2 == uVar5) goto LAB_0010143c;
 }
 do {
 *(int *)((long)pvVar1 + uVar2 * 4) = (int)uVar2;
 uVar2 = uVar2 + 1;
 } while (uVar5 != uVar2);
 }
LAB_0010143c:
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 return *(undefined4 *)((long)pvVar1 + (long)((int)param_1 >> 1) * 4);
}



/* Function: dangling_pointer @ 00101458 */

undefined4 dangling_pointer(void)

{
 undefined4 *__ptr;
 
 __ptr = malloc(4);
 if (__ptr != (undefined4 *)0x0) {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 return *__ptr;
 }
 return 0xffffffff;
}



/* Function: double_free @ 001014ac */

undefined4 double_free(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}



/* Function: heap_overflow @ 001014c0 */

undefined8 heap_overflow(void)

{
 return 0;
}



/* Function: test_heap_memory @ 001014c8 */

ulong test_heap_memory(void)

{
 __pid_t __pid;
 uint uVar1;
 undefined8 *__ptr;
 undefined8 *puVar2;
 undefined4 *__ptr_00;
 undefined4 *puVar3;
 ulong uVar4;
 char *__format;
 ulong extraout_x0;
 undefined8 uVar5;
 uint uVar6;
 uint local_24;
 
 puts(DAT_001022d7);
 printf("HEAP-L2-01 (heap_basic): %d\n",10);
 printf("HEAP-L2-02 (heap_calloc): %d\n",0);
 __ptr = malloc(0x14);
 if (__ptr == (undefined8 *)0x0) {
 uVar6 = 0xffffffff;
 }
 else {
 __ptr[1] = 0x400000003;
 *__ptr = 0x200000001;
 *(undefined4 *)(__ptr + 2) = 5;
 puVar2 = realloc(__ptr,0x28);
 if (puVar2 == (undefined8 *)0x0) {
 uVar6 = 0xfffffffe;
 }
 else {
 *(undefined4 *)((long)puVar2 + 0x24) = 0x5a;
 uVar6 = 0x32;
 if (*(int *)(puVar2 + 1) != 3) {
 uVar6 = 0xfffffffd;
 }
 *(undefined8 *)((long)puVar2 + 0x1c) = 0x5000000046;
 *(undefined8 *)((long)puVar2 + 0x14) = 0x3c00000032;
 __ptr = puVar2;
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar6);
 printf("HEAP-L2-04 (heap_array): %d\n",0xf);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 __ptr_00 = malloc(0x10);
 if (__ptr_00 == (undefined4 *)0x0) {
 printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 *__ptr_00 = 10;
 puVar3 = malloc(0x10);
 *(undefined4 **)(__ptr_00 + 2) = puVar3;
 if (puVar3 == (undefined4 *)0x0) {
 free(__ptr_00);
 uVar5 = 0xfffffffe;
 }
 else {
 uVar5 = 0;
 *(undefined8 *)(puVar3 + 2) = 0;
 *puVar3 = 0x14;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar5);
 free(*(void **)(__ptr_00 + 2));
 free(__ptr_00);
 }
 uVar4 = linked_list_heap();
 printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar4 & 0xffffffff);
 printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
 printf("HEAP-L3-03 (memory_leak): %d\n",2);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 uVar4 = dangling_pointer();
 printf(DAT_00101f65,uVar4 & 0xffffffff);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror(DAT_00101fdb);
 return extraout_x0;
 }
 uVar1 = waitpid(__pid,(int *)&local_24,0);
 uVar6 = local_24 & 0x7f;
 if ((local_24 & 0x7f) == 0) {
 uVar6 = local_24 >> 8 & 0xff;
 __format = DAT_00101f75;
 }
 else {
 if ((int)(uVar6 * 0x1000000 + 0x1000000) < 0x2000000) goto LAB_001016b8;
 __format = DAT_00101f9a;
 }
 uVar1 = printf(__format,(ulong)uVar6);
LAB_001016b8:
 return (ulong)uVar1;
}



/* Function: global_var_access @ 001016fc */

void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 00101710 */

int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101720 */

static undefined4 global_array_access(uint param_1)

{
 if (9 < param_1) {
 return 0xffffffff;
 }
 return *(undefined4 *)(&global_array + (ulong)param_1 * 4);
}



/* Function: static_local @ 00101740 */

void static_local(int param_1)

{
 int iVar1;
 
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = static_local_counter + 1;
 }
 static_local_counter = iVar1;
 return;
}



/* Function: call_static_func @ 00101758 */

static uint call_static_func(int param_1)

{
 return param_1 << 1 | 1;
}



/* Function: access_extern_global @ 00101768 */

int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 0010177c */

void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 00101784 */

int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101798 */

undefined8 access_bss_var(void)

{
 return 0;
}



/* Function: access_bss_buffer @ 001017a0 */

undefined8 access_bss_buffer(void)

{
 return 0;
}



/* Function: global_struct_access @ 001017a8 */

static undefined8 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 001017b0 */

void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 001017bc */

undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 001017c8 */

static void set_global_callback(undefined8 param_1)

{
 global_func_ptr = (code)(void (*)(void))param_1;
 return;
}



/* Function: call_global_callback @ 001017d4 */

undefined8 call_global_callback(void)

{
 if (global_func_ptr != (code *)0x0) {
 /* WARNING: Could not recover jumptable at 0x001017e0. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*global_func_ptr)();
 return 0;
 }
 return 0xffffffff;
}



/* Function: global_heap_store @ 001017ec */

undefined4 global_heap_store(undefined4 *param_1)

{
 global_heap_ptr = param_1;
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}



/* Function: static_complex_init @ 00101808 */

undefined8 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101810 */

int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 00101818 */

undefined8 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00101820 */

int test_static_global(void)

{
 int iVar1;
 ulong uVar2;
 undefined4 local_24;
 
 puts(DAT_001022f5);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n",global_counter);
 printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter << 1));
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n",static_local_counter);
 printf("STM-L1-04 (call_static_func): %d\n",0xb);
 printf("STM-L2-01 (access_extern_global): %d\n",(ulong)(extern_global_var + 100));
 uVar2 = extern_function(5);
 printf("STM-L2-02 (call_extern_func): %d\n",uVar2 & 0xffffffff);
 printf("STM-L2-03 (read_const_data): %d\n",(ulong)((byte)const_string[4] + 0x2a));
 printf("STM-L2-04 (access_bss_var): %d\n",0);
 printf("STM-L2-04 (access_bss_buffer): %d\n",0);
 printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 printf("STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = (code)(void (*)(void))double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_24;
 local_24 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 iVar1 = printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return iVar1;
}



/* Function: double_value @ 001019d8 */

int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 001019e0 */

static ulong memop_memset(byte *param_1,size_t param_2,int param_3)

{
 ulong uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (ulong)*param_1;
 }
 return uVar1;
}



/* Function: memop_memcpy @ 00101a20 */

undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
}



/* Function: memop_memmove @ 00101a68 */

ulong memop_memmove(void *param_1,ulong param_2)

{
 ulong uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (ulong)*(byte *)((long)param_1 + 1);
 }
 return uVar1;
}



/* Function: memop_memcmp @ 00101aa8 */

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



/* Function: memop_bzero @ 00101ae4 */

ulong memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (ulong)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00101b1c */

ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 ulong uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (ulong)*param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00101b58 */

static undefined4 memop_unaligned_access(long param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00101b6c - DELETED (uses CRT symbol DataMemoryBarrier) */

/* Function: test_memory_op_functions @ 00101b8c - stub to fix implicit declaration */

void test_memory_op_functions(void)

{
 return;
}



/* Function: main @ 00101c68 */

int main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00101c8c */

int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 65 */
