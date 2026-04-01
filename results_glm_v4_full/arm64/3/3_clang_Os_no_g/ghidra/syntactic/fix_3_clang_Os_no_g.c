/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t removed - conflicts with system header definition */
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Decompiler-specific type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned long long ulonglong;
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined1;
typedef unsigned char undefined2;
/* bool type - standard library provides this, but we'll define as fallback if needed */
#ifndef __cplusplus
#ifndef bool
#define bool int
#define true 1
#define false 0
#endif
#endif
typedef int __pid_t;
typedef void (*code)(void);
extern long stack0xfffffffffffffff4;
extern long stack0xfffffffffffffff0;

/* CRT function declarations */
extern void __cxa_finalize(void *dso_handle);
extern void deregister_tm_clones(void);

/* System function declarations */
extern __pid_t fork(void);
extern __pid_t waitpid(__pid_t pid, int *status, int options);
extern void perror(const char *s);

/* External function forward declarations - functions are defined below */




/* Ghidra CONCAT macros for byte manipulation */
#define CONCAT17(a,b,c,d,e,f,g,h) ((ulonglong)(a) << 56 | (ulonglong)(b) << 48 | (ulonglong)(c) << 40 | (ulonglong)(d) << 32 | (ulonglong)(e) << 24 | (ulonglong)(f) << 16 | (ulonglong)(g) << 8 | (ulonglong)(h))
#define CONCAT17_2(a,b) ((ulonglong)(a) << 8 | (ulonglong)(b))
#define CONCAT16(a,b,c,d,e,f,g,h) ((ulonglong)(a) << 56 | (ulonglong)(b) << 48 | (ulonglong)(c) << 40 | (ulonglong)(d) << 32 | (ulonglong)(e) << 24 | (ulonglong)(f) << 16 | (ulonglong)(g) << 8 | (ulonglong)(h))
#define CONCAT16_2(a,b) ((ulonglong)(a) << 8 | (ulonglong)(b))
#define CONCAT15(a,b,c,d,e,f,g,h) ((ulonglong)(a) << 56 | (ulonglong)(b) << 48 | (ulonglong)(c) << 40 | (ulonglong)(d) << 32 | (ulonglong)(e) << 24 | (ulonglong)(f) << 16 | (ulonglong)(g) << 8 | (ulonglong)(h))
#define CONCAT15_2(a,b) ((ulonglong)(a) << 8 | (ulonglong)(b))
#define CONCAT14(a,b,c,d,e,f,g,h) ((ulonglong)(a) << 56 | (ulonglong)(b) << 48 | (ulonglong)(c) << 40 | (ulonglong)(d) << 32 | (ulonglong)(e) << 24 | (ulonglong)(f) << 16 | (ulonglong)(g) << 8 | (ulonglong)(h))
#define CONCAT14_2(a,b) ((ulonglong)(a) << 8 | (ulonglong)(b))
#define CONCAT13(a,b,c,d,e,f,g,h) ((ulonglong)(a) << 56 | (ulonglong)(b) << 48 | (ulonglong)(c) << 40 | (ulonglong)(d) << 32 | (ulonglong)(e) << 24 | (ulonglong)(f) << 16 | (ulonglong)(g) << 8 | (ulonglong)(h))
#define CONCAT13_2(a,b) ((ulonglong)(a) << 8 | (ulonglong)(b))
#define CONCAT12(a,b,c,d,e,f,g,h) ((ulonglong)(a) << 56 | (ulonglong)(b) << 48 | (ulonglong)(c) << 40 | (ulonglong)(d) << 32 | (ulonglong)(e) << 24 | (ulonglong)(f) << 16 | (ulonglong)(g) << 8 | (ulonglong)(h))
#define CONCAT12_2(a,b) ((ulonglong)(a) << 8 | (ulonglong)(b))
#define CONCAT11(a,b,c,d,e,f,g,h) ((ulonglong)(a) << 56 | (ulonglong)(b) << 48 | (ulonglong)(c) << 40 | (ulonglong)(d) << 32 | (ulonglong)(e) << 24 | (ulonglong)(f) << 16 | (ulonglong)(g) << 8 | (ulonglong)(h))
#define CONCAT11_2(a,b) ((ulonglong)(a) << 8 | (ulonglong)(b))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/3/3_clang_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001008e0 @ 001008e0 */

void FUN_001008e0(void)

{
 (*(code *)(void *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Global variables */
int global_counter = 0;
undefined4 file_scope_static = 0;
code *global_func_ptr = (code *)0x0;
void *global_heap_ptr = (void *)0x0;
int extern_global_var = 0;
int static_local_counter = 0;
const char const_string[10] = "test";
int global_array[10];
char completed_0 = '\0';
void *__dso_handle = (void *)0x0;
char DAT_001022e9[] = "Testing stack memory operations:";
char DAT_00102307[] = "Testing heap memory operations:";
char DAT_00102325[] = "Testing static and global variables:";
char DAT_00102349[] = "Testing memory operation functions:";
char DAT_00101f95[] = "%d\n";
char DAT_0010200b[] = "fork error";
char DAT_00101fa5[] = "exited with status %d\n";
char DAT_00101fca[] = "killed by signal %d\n";

/* Function: FUN_00100afc @ 00100afc */

static void FUN_00100afc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 /* deregister_tm_clones removed - CRT stub function */
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: local_vars @ 00100b54 */

static int local_vars(int param_1)

{
 return param_1 * 2 + 10;
}



/* Function: local_array @ 00100b60 */

static undefined4 local_array(int param_1)

{
 int iVar1;
 long lVar2;
 ulong uVar3;
 ulong uVar4;
 int local_28 [10];
 
 iVar1 = 0;
 lVar2 = 0;
 uVar4 = 1;
 uVar3 = 0;
 do {
 if (uVar3 < 10) {
 *(int *)((long)local_28 + lVar2) = iVar1;
 }
 if (uVar4 < 10) {
 *(int *)((long)local_28 + lVar2 + 4) = param_1 + iVar1;
 }
 uVar3 = uVar3 + 2;
 uVar4 = uVar4 + 2;
 lVar2 = lVar2 + 8;
 iVar1 = iVar1 + param_1 * 2;
 } while (lVar2 != 0x28);
 return local_28[5];
}



/* Function: local_struct @ 00100be0 */

static int local_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: address_of_local @ 00100be8 */

static undefined8 address_of_local(undefined4 *param_1)

{
 *param_1 = 0x2a;
 return 0x2a;
}



/* Function: address_of_array @ 00100bfc */

static int address_of_array(int *param_1)

{
 return *param_1 << 1;
}



/* Function: large_stack_frame @ 00100c08 */

static undefined1 large_stack_frame(void)

{
 long lVar1;
 undefined8 uVar2;
 undefined8 uVar3;
 undefined8 local_810 [128];
 undefined1 local_410;
 
 lVar1 = 0;
 uVar3 = 0xf0e0d0c0b0a0908;
 uVar2 = 0x706050403020100;
 do {
 *(undefined8 *)((long)local_810 + lVar1 + 8) = uVar3;
 *(undefined8 *)((long)local_810 + lVar1) = uVar2;
 lVar1 = lVar1 + 0x10;
 uVar2 = CONCAT17_2((char)((ulong)uVar2 >> 0x38) + '\x10',
 CONCAT16_2((char)((ulong)uVar2 >> 0x30) + '\x10',
 CONCAT15_2((char)((ulong)uVar2 >> 0x28) + '\x10',
 CONCAT14_2((char)((ulong)uVar2 >> 0x20) + '\x10',
 CONCAT13_2((char)((ulong)uVar2 >> 0x18) + '\x10',
 CONCAT12_2((char)((ulong)uVar2 >> 0x10) +
 '\x10',CONCAT11_2((char)((ulong)
 uVar2 >> 8) + '\x10',(char)uVar2 + '\x10')))))));
 uVar3 = CONCAT17_2((char)((ulong)uVar3 >> 0x38) + '\x10',
 CONCAT16_2((char)((ulong)uVar3 >> 0x30) + '\x10',
 CONCAT15_2((char)((ulong)uVar3 >> 0x28) + '\x10',
 CONCAT14_2((char)((ulong)uVar3 >> 0x20) + '\x10',
 CONCAT13_2((char)((ulong)uVar3 >> 0x18) + '\x10',
 CONCAT12_2((char)((ulong)uVar3 >> 0x10) +
 '\x10',CONCAT11_2((char)((ulong)
 uVar3 >> 8) + '\x10',(char)uVar3 + '\x10')))))));
 } while (lVar1 != 0x800);
 return local_410;
}



/* Function: vla_stack @ 00100c48 */

static undefined4 vla_stack(uint param_1)

{
 long lVar1;
 ulong uVar2;
 ulong uVar3;
 int *piVar4;
 ulong uVar5;
 ulong uVar6;
 
 if (param_1 - 0x3e9 < 0xfffffc18) {
 return 0xffffffff;
 }
 uVar3 = (ulong)param_1;
 lVar1 = -(uVar3 * 4 + 0xf & 0x7fffffff0);
 uVar2 = 0;
 /* Use alloca for VLA instead of external stack reference */
 piVar4 = (int *)alloca(uVar3 * 4);
 uVar6 = 1;
 uVar5 = 0;
 do {
 if (uVar5 <= uVar3 - 1) {
 piVar4[-1] = (int)uVar2;
 }
 if (uVar6 <= uVar3 - 1) {
 *piVar4 = (int)uVar2 + 2;
 }
 uVar5 = uVar5 + 2;
 uVar6 = uVar6 + 2;
 piVar4 = piVar4 + 2;
 uVar2 = uVar2 + 4;
 } while ((uVar3 * 2 + 2 & 0x3fffffffc) != uVar2);
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 return *(undefined4 *)((char *)piVar4 + (ulong)(uint)((int)param_1 >> 1) * 4 + lVar1);
}



/* Function: alloca_usage @ 00100d08 */

static undefined4 alloca_usage(uint param_1)

{
 long lVar1;
 long lVar2;
 ulong uVar3;
 int *piVar4;
 ulong uVar5;
 ulong uVar6;
 
 if (0 < (int)param_1) {
 uVar3 = (ulong)param_1;
 lVar1 = -(uVar3 * 4 + 0xf & 0x7fffffff0);
 lVar2 = 0;
 /* Use alloca instead of external stack reference */
 piVar4 = (int *)alloca(uVar3 * 4);
 uVar6 = 1;
 uVar5 = 0;
 do {
 if (uVar5 <= uVar3 - 1) {
 piVar4[-1] = (int)lVar2;
 }
 if (uVar6 <= uVar3 - 1) {
 *piVar4 = (int)lVar2 + 3;
 }
 uVar5 = uVar5 + 2;
 uVar6 = uVar6 + 2;
 piVar4 = piVar4 + 2;
 lVar2 = lVar2 + 6;
 } while (((uVar3 + 1 & 0xfffffffffffffffe) + (uVar3 + 1 >> 1)) * 2 - lVar2 != 0);
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 return *(undefined4 *)((char *)piVar4 + (ulong)(uint)((int)param_1 >> 1) * 4 + lVar1);
 }
 return 0xffffffff;
}



/* Function: stack_alias @ 00100dc4 */

static undefined8 stack_alias(void)

{
 return 0x14;
}



/* Function: test_stack_memory @ 00100dcc */

static int test_stack_memory(void)

{
 int iVar1;
 long lVar2;
 int *piVar3;
 ulong uVar4;
 ulong uVar5;
 undefined8 uVar6;
 undefined8 uVar7;
 int local_820 [2];
 undefined8 uStack_818;
 uint local_80c;
 byte local_420;
 
 puts(DAT_001022e9);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 lVar2 = 0;
 piVar3 = local_820 + 1;
 uVar5 = 1;
 uVar4 = 0;
 do {
 if (uVar4 < 10) {
 piVar3[-1] = (int)lVar2;
 }
 if (uVar5 < 10) {
 *piVar3 = (int)lVar2 + 2;
 }
 uVar4 = uVar4 + 2;
 uVar5 = uVar5 + 2;
 piVar3 = piVar3 + 2;
 lVar2 = lVar2 + 4;
 } while (lVar2 != 0x14);
 printf("MEM-L1-02 (local_array): %d\n",(ulong)local_80c);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 lVar2 = 0;
 uVar7 = 0xf0e0d0c0b0a0908;
 uVar6 = 0x706050403020100;
 do {
 *(undefined8 *)((long)&uStack_818 + lVar2) = uVar7;
 *(undefined8 *)((long)local_820 + lVar2) = uVar6;
 lVar2 = lVar2 + 0x10;
 uVar6 = CONCAT17_2((char)((ulong)uVar6 >> 0x38) + '\x10',
 CONCAT16_2((char)((ulong)uVar6 >> 0x30) + '\x10',
 CONCAT15_2((char)((ulong)uVar6 >> 0x28) + '\x10',
 CONCAT14_2((char)((ulong)uVar6 >> 0x20) + '\x10',
 CONCAT13_2((char)((ulong)uVar6 >> 0x18) + '\x10',
 CONCAT12_2((char)((ulong)uVar6 >> 0x10) +
 '\x10',CONCAT11_2((char)((ulong)
 uVar6 >> 8) + '\x10',(char)uVar6 + '\x10')))))));
 uVar7 = CONCAT17_2((char)((ulong)uVar7 >> 0x38) + '\x10',
 CONCAT16_2((char)((ulong)uVar7 >> 0x30) + '\x10',
 CONCAT15_2((char)((ulong)uVar7 >> 0x28) + '\x10',
 CONCAT14_2((char)((ulong)uVar7 >> 0x20) + '\x10',
 CONCAT13_2((char)((ulong)uVar7 >> 0x18) + '\x10',
 CONCAT12_2((char)((ulong)uVar7 >> 0x10) +
 '\x10',CONCAT11_2((char)((ulong)
 uVar7 >> 8) + '\x10',(char)uVar7 + '\x10')))))));
 } while (lVar2 != 0x800);
 printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)local_420);
 lVar2 = 0;
 piVar3 = local_820 + 1;
 uVar5 = 1;
 uVar4 = 0;
 do {
 if (uVar4 < 10) {
 piVar3[-1] = (int)lVar2;
 }
 if (uVar5 < 10) {
 *piVar3 = (int)lVar2 + 2;
 }
 uVar4 = uVar4 + 2;
 uVar5 = uVar5 + 2;
 piVar3 = piVar3 + 2;
 lVar2 = lVar2 + 4;
 } while (lVar2 != 0x14);
 printf("MEM-L2-02 (vla_stack): %d\n",(ulong)local_80c);
 lVar2 = 0;
 piVar3 = (int *)((ulong)local_820 | 4);
 uVar5 = 1;
 uVar4 = 0;
 do {
 if (uVar4 < 10) {
 piVar3[-1] = (int)lVar2;
 }
 if (uVar5 < 10) {
 *piVar3 = (int)lVar2 + 3;
 }
 uVar4 = uVar4 + 2;
 uVar5 = uVar5 + 2;
 piVar3 = piVar3 + 2;
 lVar2 = lVar2 + 6;
 } while (lVar2 != 0x1e);
 printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)local_80c);
 iVar1 = printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return iVar1;
}



/* Function: heap_basic @ 00100fe4 */

static undefined4 heap_basic(uint param_1)

{
 void *__ptr;
 ulong uVar1;
 int *piVar2;
 ulong uVar3;
 undefined4 uVar4;
 ulong uVar5;
 ulong uVar6;
 
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 if (0 < (int)param_1) {
 uVar3 = (ulong)param_1 - 1;
 uVar1 = 0;
 piVar2 = (int *)((long)__ptr + 4);
 uVar6 = 1;
 uVar5 = 0;
 do {
 if (uVar5 <= uVar3) {
 piVar2[-1] = (int)uVar1;
 }
 if (uVar6 <= uVar3) {
 *piVar2 = (int)uVar1 + 2;
 }
 uVar5 = uVar5 + 2;
 uVar6 = uVar6 + 2;
 piVar2 = piVar2 + 2;
 uVar1 = uVar1 + 4;
 } while (((ulong)param_1 * 2 + 2 & 0x3fffffffc) != uVar1);
 }
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 uVar4 = *(undefined4 *)((long)__ptr + (long)((int)param_1 >> 1) * 4);
 free(__ptr);
 }
 return uVar4;
}



/* Function: heap_calloc @ 0010109c */

static int heap_calloc(uint param_1)

{
 int *__ptr;
 long lVar1;
 int *piVar2;
 int iVar3;
 
 __ptr = calloc((long)(int)param_1,4);
 if (__ptr == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 if (((int)param_1 < 1) || (param_1 == 1)) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 lVar1 = (ulong)param_1 - 1;
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



/* Function: heap_realloc @ 00101110 */

static undefined4 heap_realloc(int param_1)

{
 long lVar1;
 int iVar2;
 void *__ptr;
 void *pvVar3;
 undefined4 uVar4;
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
 *(undefined4 *)((long)pvVar3 + 0x24) = 0x5a;
 uVar4 = 0x32;
 if (*(int *)((long)pvVar3 + 8) != iVar2) {
 uVar4 = 0xfffffffd;
 }
 *(undefined8 *)((long)pvVar3 + 0x1c) = 0x5000000046;
 *(undefined8 *)((long)pvVar3 + 0x14) = 0x3c00000032;
 __ptr = pvVar3;
 }
 free(__ptr);
 }
 return uVar4;
}



/* Function: heap_array @ 001011ac */

static undefined4 heap_array(uint param_1)

{
 ulong uVar1;
 void *__ptr;
 long lVar2;
 int *piVar3;
 ulong uVar4;
 undefined4 uVar5;
 ulong uVar6;
 ulong uVar7;
 
 __ptr = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2);
 if (__ptr == (void *)0x0) {
 uVar5 = 0xffffffff;
 }
 else {
 if (0 < (int)param_1) {
 uVar1 = (ulong)param_1 + 1;
 uVar4 = (ulong)param_1 - 1;
 lVar2 = 0;
 piVar3 = (int *)((long)__ptr + 4);
 uVar7 = 1;
 uVar6 = 0;
 do {
 if (uVar6 <= uVar4) {
 piVar3[-1] = (int)lVar2;
 }
 if (uVar7 <= uVar4) {
 *piVar3 = (int)lVar2 + 3;
 }
 uVar6 = uVar6 + 2;
 uVar7 = uVar7 + 2;
 piVar3 = piVar3 + 2;
 lVar2 = lVar2 + 6;
 } while (((uVar1 & 0xfffffffffffffffe) + (uVar1 >> 1)) * 2 - lVar2 != 0);
 }
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 uVar5 = *(undefined4 *)((long)__ptr + (long)((int)param_1 >> 1) * 4);
 free(__ptr);
 }
 return uVar5;
}



/* Function: heap_struct @ 0010126c */

static int heap_struct(int param_1)

{
 return param_1 * 3;
}



/* Function: heap_nested @ 00101274 */

static undefined8 heap_nested(void **param_1)

{
 undefined4 *__ptr;
 undefined4 *puVar1;
 undefined8 uVar2;
 
 __ptr = malloc(0x10);
 *param_1 = __ptr;
 if (__ptr == (undefined4 *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 *__ptr = 10;
 puVar1 = malloc(0x10);
 *(undefined4 **)(__ptr + 2) = puVar1;
 if (puVar1 == (undefined4 *)0x0) {
 free(__ptr);
 uVar2 = 0xfffffffe;
 }
 else {
 uVar2 = 0;
 *(undefined8 *)(puVar1 + 2) = 0;
 *puVar1 = 0x14;
 }
 }
 return uVar2;
}



/* Function: linked_list_heap @ 001012e8 */

static int linked_list_heap(void)

{
 uint uVar1;
 bool bVar2;
 int *piVar3;
 int *piVar4;
 int *__ptr;
 int iVar5;
 uint uVar6;
 int *piVar7;
 int *piVar8;
 
 piVar3 = malloc(0x10);
 if (piVar3 == (int *)0x0) {
 __ptr = (int *)0x0;
 bVar2 = true;
 }
 else {
 iVar5 = 0;
 piVar7 = (int *)0x0;
 piVar8 = (int *)0x0;
 uVar1 = 0;
 do {
 uVar6 = uVar1;
 piVar4 = piVar3;
 *piVar4 = iVar5;
 piVar4[2] = 0;
 piVar4[3] = 0;
 __ptr = piVar4;
 if (piVar7 != (int *)0x0) {
 *(int **)(piVar8 + 2) = piVar4;
 __ptr = piVar7;
 }
 if (uVar6 == 4) goto LAB_00101394;
 piVar3 = malloc(0x10);
 iVar5 = iVar5 + 10;
 piVar7 = __ptr;
 piVar8 = piVar4;
 uVar1 = uVar6 + 1;
 } while (piVar3 != (int *)0x0);
 bVar2 = uVar6 < 4;
 piVar3 = __ptr;
 while (piVar3 != (int *)0x0) {
 piVar7 = *(int **)(piVar3 + 2);
 free(piVar3);
 __ptr = (int *)0x0;
 piVar3 = piVar7;
 }
 }
 if (bVar2) {
 iVar5 = -1;
 }
 else {
LAB_00101394:
 iVar5 = 0;
 piVar3 = __ptr;
 if (__ptr != (int *)0x0) {
 do {
 piVar7 = piVar3 + 2;
 iVar5 = *piVar3 + iVar5;
 piVar3 = *(int **)piVar7;
 } while (*(int **)piVar7 != (int *)0x0);
 while (__ptr != (int *)0x0) {
 piVar3 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar3;
 }
 }
 }
 return iVar5;
}



/* Function: create_tree_node @ 001013dc */

static void create_tree_node(undefined4 param_1)

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



/* Function: tree_heap_traversal @ 0010140c */

static undefined8 tree_heap_traversal(void)

{
 return 0x3c;
}



/* Function: memory_leak @ 00101414 */

static undefined4 memory_leak(uint param_1)

{
 undefined4 uVar1;
 void *pvVar2;
 ulong uVar3;
 
 pvVar2 = malloc(-(ulong)(param_1 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_1 << 2);
 if (pvVar2 == (void *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 if (0 < (int)param_1) {
 uVar3 = 0;
 do {
 *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
 uVar3 = uVar3 + 1;
 } while (param_1 != uVar3);
 }
 if ((int)param_1 < 0) {
 param_1 = param_1 + 1;
 }
 uVar1 = *(undefined4 *)((long)pvVar2 + (long)((int)param_1 >> 1) * 4);
 }
 return uVar1;
}



/* Function: dangling_pointer @ 00101474 */

static undefined4 dangling_pointer(void)

{
 undefined4 uVar1;
 undefined4 *__ptr;
 
 __ptr = malloc(4);
 if (__ptr == (undefined4 *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 printf("value before free: %d\n",0x2a);
 free(__ptr);
 uVar1 = *__ptr;
 }
 return uVar1;
}



/* Function: double_free @ 001014c0 */

static undefined4 double_free(undefined4 *param_1)

{
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}



/* Function: heap_overflow @ 001014d4 */

static undefined4 heap_overflow(void)

{
 undefined4 *__ptr;
 long lVar1;
 int *piVar2;
 undefined4 uVar3;
 ulong uVar4;
 ulong uVar5;
 
 __ptr = malloc(0x28);
 if (__ptr == (undefined4 *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 lVar1 = 0;
 uVar5 = 1;
 uVar4 = 0;
 piVar2 = __ptr + 1;
 do {
 if (uVar4 < 0xb) {
 piVar2[-1] = (int)lVar1;
 }
 if (uVar5 < 0xb) {
 *piVar2 = (int)lVar1 + 100;
 }
 uVar4 = uVar4 + 2;
 uVar5 = uVar5 + 2;
 piVar2 = piVar2 + 2;
 lVar1 = lVar1 + 200;
 } while (lVar1 != 0x4b0);
 uVar3 = *__ptr;
 free(__ptr);
 }
 return uVar3;
}



/* Function: test_heap_memory @ 00101570 */

static ulong test_heap_memory(void)

{
 uint uVar1;
 int iVar2;
 __pid_t __pid;
 uint uVar3;
 ulong uVar4;
 void *pvVar5;
 char *__format;
 ulong extraout_x0;
 long lVar6;
 uint local_24;
 void *local_8;
 
 puts(DAT_00102307);
 uVar4 = heap_basic(10);
 printf("HEAP-L2-01 (heap_basic): %d\n",uVar4 & 0xffffffff);
 uVar4 = heap_calloc(5);
 iVar2 = printf("HEAP-L2-02 (heap_calloc): %d\n",uVar4 & 0xffffffff);
 uVar4 = heap_realloc(0);
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
 lVar6 = 0;
 do {
 *(int *)((long)pvVar5 + lVar6 * 4) = (int)lVar6;
 lVar6 = lVar6 + 1;
 } while (lVar6 != 5);
 uVar4 = (ulong)*(uint *)((long)pvVar5 + 8);
 }
 printf("HEAP-L3-03 (memory_leak): %d\n",uVar4);
 printf("HEAP-L3-04 (dangling_pointer): ");
 __pid = fork();
 if (__pid == 0) {
 uVar4 = dangling_pointer();
 printf(DAT_00101f95,uVar4 & 0xffffffff);
 /* WARNING: Subroutine does not return */
 exit(0);
 }
 if (__pid < 1) {
 perror(DAT_0010200b);
 return extraout_x0;
 }
 uVar3 = waitpid(__pid,(int *)&local_24,0);
 uVar1 = local_24 & 0x7f;
 if ((local_24 & 0x7f) == 0) {
 uVar1 = local_24 >> 8 & 0xff;
 __format = (char *)DAT_00101fa5;
 }
 else {
 if ((int)(uVar1 * 0x1000000 + 0x1000000) < 0x2000000) goto LAB_001016ec;
 __format = (char *)DAT_00101fca;
 }
 uVar3 = printf(__format,uVar1);
LAB_001016ec:
 return (ulong)uVar3;
}



/* Function: global_var_access @ 00101730 */

static void global_var_access(void)

{
 global_counter = global_counter + 1;
 return;
}



/* Function: global_var_read @ 00101744 */

static int global_var_read(void)

{
 return global_counter << 1;
}



/* Function: global_array_access @ 00101754 */

static undefined4 global_array_access(uint param_1)

{
 if (9 < param_1) {
 return 0xffffffff;
 }
 return *(undefined4 *)(&global_array + (ulong)param_1 * 4);
}



/* Function: static_local @ 00101774 */

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



/* Function: call_static_func @ 0010178c */

static uint call_static_func(int param_1)

{
 return param_1 << 1 | 1;
}



/* Function: access_extern_global @ 0010179c */

static int access_extern_global(void)

{
 return extern_global_var + 100;
}



/* Function: call_extern_func @ 001017b0 */

static void call_extern_func(void)

{
 extern_function(5);
 return;
}



/* Function: read_const_data @ 001017b8 */

static int read_const_data(void)

{
 return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 001017cc */

static undefined8 access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 001017d4 */

static undefined8 access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 001017dc */

static undefined8 global_struct_access(void)

{
 return 0x1e;
}



/* Function: set_file_static @ 001017e4 */

static void set_file_static(undefined4 param_1)

{
 file_scope_static = param_1;
 return;
}



/* Function: get_file_static @ 001017f0 */

static undefined4 get_file_static(void)

{
 return file_scope_static;
}



/* Function: set_global_callback @ 001017fc */

static void set_global_callback(undefined8 param_1)

{
 global_func_ptr = (code *)param_1;
 return;
}



/* Function: call_global_callback @ 00101808 */

static undefined8 call_global_callback(void)

{
 undefined8 uVar1;
 
 if (global_func_ptr != (code *)0x0) {
 /* WARNING: Could not recover jumptable at 0x00101814. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*global_func_ptr)();
 return 0;
 }
 return 0xffffffff;
}



/* Function: global_heap_store @ 00101820 */

static undefined4 global_heap_store(undefined4 *param_1)

{
 global_heap_ptr = param_1;
 if (param_1 != (undefined4 *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}



/* Function: static_complex_init @ 0010183c */

static undefined8 static_complex_init(void)

{
 return 0xf;
}



/* Function: tls_access @ 00101844 */

static int tls_access(int param_1)

{
 return param_1 << 1;
}



/* Function: init_order_test @ 0010184c */

static undefined8 init_order_test(void)

{
 return 0x14;
}



/* Function: test_static_global @ 00101854 */

static int test_static_global(void)

{
 int iVar1;
 ulong uVar2;
 undefined4 local_24;
 
 puts(DAT_00102325);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n");
 printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter << 1));
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n");
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
 global_func_ptr = (code *)double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_24;
 local_24 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 iVar1 = printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return iVar1;
}



/* Function: double_value @ 00101a14 */

static int double_value(int param_1)

{
 return param_1 << 1;
}



/* Function: memop_memset @ 00101a1c */

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



/* Function: memop_memcpy @ 00101a5c */

static undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3)

{
 undefined4 uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
}



/* Function: memop_memmove @ 00101aa4 */

static ulong memop_memmove(void *param_1,ulong param_2)

{
 ulong uVar1;
 
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (ulong)*(byte *)((long)param_1 + 1);
 }
 return uVar1;
}



/* Function: memop_memcmp @ 00101ae4 */

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



/* Function: memop_bzero @ 00101b20 */

static ulong memop_bzero(byte *param_1,size_t param_2)

{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (ulong)*param_1;
 }
 return 0xffffffff;
}



/* Function: memop_bcopy @ 00101b58 */

static ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
 ulong uVar1;
 
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (ulong)*param_2;
 }
 return uVar1;
}



/* Function: memop_unaligned_access @ 00101b94 */

static undefined4 memop_unaligned_access(long param_1)

{
 if (param_1 != 0) {
 return *(undefined4 *)(param_1 + 1);
 }
 return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00101ba8 */

static int memop_memory_barrier(int *param_1)

{
 if (param_1 != (int *)0x0) {
 /* DataMemoryBarrier removed - system barrier not available */
 __sync_synchronize();
 return *param_1 + *param_1;
 }
 return -1;
}



/* Function: test_memory_op_functions @ 00101bc8 */

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
 /* DataMemoryBarrier removed - system barrier not available */
 __sync_synchronize();
 iVar1 = printf("MEMOP-L3-02: %d\n",10);
 return iVar1;
}



/* Function: main @ 00101ca4 */

undefined8 main(void)

{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



/* Function: extern_function @ 00101cc8 */

static int extern_function(int param_1)

{
 return param_1 * 3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 65 */
