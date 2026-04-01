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
typedef unsigned int uint;
typedef unsigned char byte;
typedef int __pid_t;

// Forward declarations
void __gmon_start__(void);
int main(void);
int extern_function(int param_1);
int double_value(int);
void __libc_start_main(int (*)(void), void *, void *);
void test_memory_op_functions(void);
char * test_heap_memory_impl(void);

// Stack placeholder addresses (used in VLA/alloca functions)
// Note: These are decompiler artifacts - actual stack addresses are managed by the runtime
// Using dummy values to satisfy the decompiler output - actual stack is managed by runtime
static unsigned long stack_placeholder_base = 0;
static unsigned long stack_placeholder_top = (unsigned long)(-16L);
#define stack0x00000000 (stack_placeholder_base)
#define stack0xfffffffffffffff0 (stack_placeholder_top)

// CONCAT macros for combining bytes into larger integers
#define CONCAT44(a, b) (((unsigned long long)(a) << 32) | ((unsigned long long)(b) & 0xFFFFFFFF))
#define CONCAT11(a, b) (((unsigned int)(a) << 8) | ((unsigned int)(b) & 0xFF))
#define CONCAT12(a, b) (((unsigned int)(a) << 8) | ((unsigned int)(b) & 0xFF))
#define CONCAT13(a, b) (((unsigned int)(a) << 8) | ((unsigned int)(b) & 0xFF))
#define CONCAT14(a, b) (((unsigned int)(a) << 8) | ((unsigned int)(b) & 0xFF))
#define CONCAT15(a, b) (((unsigned int)(a) << 8) | ((unsigned int)(b) & 0xFF))
#define CONCAT16(a, b) (((unsigned int)(a) << 8) | ((unsigned int)(b) & 0xFF))
#define CONCAT17(a, b) (((unsigned int)(a) << 8) | ((unsigned int)(b) & 0xFF))

// Global variables
unsigned int global_counter = 0;
unsigned int global_array[10];
int extern_global_var = 0;
int file_scope_static = 0;
unsigned long long global_func_ptr = 0;
unsigned int *global_heap_ptr = 0;
int static_local_counter = 0;
char completed_0 = 0;
void *__dso_handle = 0;
char const_string[] = "Hello World";

// Data references (string constants)
char DAT_00102229[] = "\n=== Stack Memory Test ===\n";
char DAT_00102247[] = "\n=== Heap Memory Test ===\n";
char DAT_00102265[] = "\n=== Static/Global Memory Test ===\n";
char DAT_00102289[] = "\n=== Memory Operations Test ===\n";
char DAT_00101ed5[] = "%d\n";
char DAT_00101ee5[] = "Child exited with status %d\n";
char DAT_00101f0a[] = "Child terminated by signal %d\n";
char DAT_00101f4b[] = "fork or waitpid failed";

// Decompiled by BinaryAI
// SHA256: 3928a62ac836e84c7ac387ea013e0418b43cd6980a1eca73c2e4beddebb29402







// Function: <EXTERNAL>::memcpy @ 0x100900
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::memmove @ 0x100910
extern void * memmove(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::exit @ 0x100920
extern void exit(int __status);

// Function: <EXTERNAL>::__libc_start_main @ 0x100930
extern void __libc_start_main(int (*main)(void), void *argc, void *argv);

// Function: <EXTERNAL>::perror @ 0x100940
extern void perror(char *__s);

// Function: <EXTERNAL>::__cxa_finalize @ 0x100950
extern void __cxa_finalize(void);

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

// Function: <EXTERNAL>::DataMemoryBarrier
extern void DataMemoryBarrier(int, int);





// Function: deregister_tm_clones @ 0x100a90
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100ac0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100afc @ 0x100afc
void FUN_00100afc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100b00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: local_vars @ 0x100b54
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x100b60
int local_array(int param_1)
{
 return param_1 * 5;
}

// Function: local_struct @ 0x100b68
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x100b70
unsigned long long address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x100b84
int address_of_array(int *param_1)
{
 return *param_1 << 1;
}

// Function: large_stack_frame @ 0x100b90
char large_stack_frame(void)
{
 long lVar1;
 long lVar2;
 char cVar4;
 char cVar5;
 char cVar6;
 char cVar7;
 char cVar8;
 char cVar9;
 unsigned long long uVar3;
 char cVar10;
 char cVar12;
 char cVar13;
 char cVar14;
 char cVar15;
 char cVar16;
 char cVar17;
 unsigned long long uVar11;
 char cVar18;
 unsigned long long local_810 [128];
 char local_410;
 uVar11 = 0xf0e0d0c0b0a0908;
 uVar3 = 0x706050403020100;
 lVar2 = 0;
 do {
 cVar4 = (char)((unsigned long)uVar3 >> 8);
 cVar5 = (char)((unsigned long)uVar3 >> 0x10);
 cVar6 = (char)((unsigned long)uVar3 >> 0x18);
 cVar7 = (char)((unsigned long)uVar3 >> 0x20);
 cVar8 = (char)((unsigned long)uVar3 >> 0x28);
 cVar9 = (char)((unsigned long)uVar3 >> 0x30);
 cVar10 = (char)((unsigned long)uVar3 >> 0x38);
 cVar12 = (char)((unsigned long)uVar11 >> 8);
 cVar13 = (char)((unsigned long)uVar11 >> 0x10);
 cVar14 = (char)((unsigned long)uVar11 >> 0x18);
 cVar15 = (char)((unsigned long)uVar11 >> 0x20);
 cVar16 = (char)((unsigned long)uVar11 >> 0x28);
 cVar17 = (char)((unsigned long)uVar11 >> 0x30);
 cVar18 = (char)((unsigned long)uVar11 >> 0x38);
 lVar1 = lVar2 + 0x20;
 *(unsigned long long *)((long)local_810 + lVar2 + 8) = uVar11;
 *(unsigned long long *)((long)local_810 + lVar2) = uVar3;
 *(unsigned long *)((long)local_810 + lVar2 + 0x18) =
 CONCAT17(cVar18 + '\x10',
 CONCAT16(cVar17 + '\x10',
 CONCAT15(cVar16 + '\x10',
 CONCAT14(cVar15 + '\x10',
 CONCAT13(cVar14 + '\x10',
 CONCAT12(cVar13 + '\x10',
 CONCAT11(cVar12 + '\x10',
 (char)uVar11 + '\x10')))))))
 ;
 *(unsigned long *)((long)local_810 + lVar2 + 0x10) =
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

// Function: vla_stack @ 0x100bdc
char * vla_stack(uint param_1,unsigned long long param_2)
{
 long lVar1;
 unsigned long uVar2;
 long lVar3;
 unsigned long uVar4;
 unsigned long long *puVar5;
 unsigned long uVar6;
 int *piVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 unsigned long long auVar16;
 char *auVar17;
 if (param_1 - 0x3e9 < 0xfffffc18) {
 auVar16 = (param_2 << 32) | 0xffffffff;
 return (char *)&auVar16;
 }
 uVar2 = (unsigned long)param_1;
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
 puVar5 = (unsigned long long *)(&stack0x00000000 + lVar3);
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
 puVar5[-1] = CONCAT44(iVar15,iVar14);
 puVar5[-2] = CONCAT44(iVar13,iVar12);
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
 auVar17 = (char *)(&stack0xfffffffffffffff0 + (unsigned long)(uint)((int)param_1 >> 1) * 4 + lVar1 + 0x10);
 return auVar17;
}

// Function: alloca_usage @ 0x100ca0
unsigned int alloca_usage(uint param_1)
{
 long lVar1;
 unsigned long uVar2;
 long lVar3;
 unsigned long uVar4;
 unsigned long long *puVar5;
 unsigned long uVar6;
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
 uVar2 = (unsigned long)param_1;
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
 puVar5 = (unsigned long long *)(&stack0x00000000 + lVar3);
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
 puVar5[-1] = CONCAT44(iVar15,iVar14);
 puVar5[-2] = CONCAT44(iVar13,iVar12);
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
 return *(unsigned int *)
 (&stack0xfffffffffffffff0 + (unsigned long)(uint)((int)param_1 >> 1) * 4 + lVar1 + 0x10);
}

// Function: stack_alias @ 0x100d60
unsigned long long stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x100d68
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
 unsigned long long uVar4;
 char cVar11;
 char cVar13;
 char cVar14;
 char cVar15;
 char cVar16;
 char cVar17;
 char cVar18;
 unsigned long long uVar12;
 char cVar19;
 unsigned long long local_820 [128];
 byte local_420;
 puts(DAT_00102229);
 printf("MEM-L1-01 (local_vars): %d\n",0x14);
 printf("MEM-L1-02 (local_array): %d\n",10);
 printf("MEM-L1-03 (local_struct): %d\n",0xf);
 printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
 printf("MEM-L1-05 (address_of_array): %d\n",2);
 uVar12 = 0xf0e0d0c0b0a0908;
 uVar4 = 0x706050403020100;
 lVar3 = 0;
 do {
 cVar5 = (char)((unsigned long)uVar4 >> 8);
 cVar6 = (char)((unsigned long)uVar4 >> 0x10);
 cVar7 = (char)((unsigned long)uVar4 >> 0x18);
 cVar8 = (char)((unsigned long)uVar4 >> 0x20);
 cVar9 = (char)((unsigned long)uVar4 >> 0x28);
 cVar10 = (char)((unsigned long)uVar4 >> 0x30);
 cVar11 = (char)((unsigned long)uVar4 >> 0x38);
 cVar13 = (char)((unsigned long)uVar12 >> 8);
 cVar14 = (char)((unsigned long)uVar12 >> 0x10);
 cVar15 = (char)((unsigned long)uVar12 >> 0x18);
 cVar16 = (char)((unsigned long)uVar12 >> 0x20);
 cVar17 = (char)((unsigned long)uVar12 >> 0x28);
 cVar18 = (char)((unsigned long)uVar12 >> 0x30);
 cVar19 = (char)((unsigned long)uVar12 >> 0x38);
 lVar1 = lVar3 + 0x20;
 *(unsigned long long *)((long)local_820 + lVar3 + 8) = uVar12;
 *(unsigned long long *)((long)local_820 + lVar3) = uVar4;
 *(unsigned long *)((long)local_820 + lVar3 + 0x18) =
 CONCAT17(cVar19 + '\x10',
 CONCAT16(cVar18 + '\x10',
 CONCAT15(cVar17 + '\x10',
 CONCAT14(cVar16 + '\x10',
 CONCAT13(cVar15 + '\x10',
 CONCAT12(cVar14 + '\x10',
 CONCAT11(cVar13 + '\x10',
 (char)uVar12 + '\x10')))))))
 ;
 *(unsigned long *)((long)local_820 + lVar3 + 0x10) =
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
 printf("MEM-L2-01 (large_stack_frame): %d\n",(unsigned long)local_420);
 printf("MEM-L2-02 (vla_stack): %d\n",10);
 printf("MEM-L2-03 (alloca_usage): %d\n",0xf);
 iVar2 = printf("MEM-L2-04 (stack_alias): %d\n",0x14);
 return iVar2;
}

// Function: heap_basic @ 0x100e54
unsigned int heap_basic(unsigned long param_1)
{
 unsigned int uVar1;
 void *__ptr;
 long lVar2;
 unsigned long long *puVar3;
 unsigned long uVar4;
 int *piVar5;
 uint uVar6;
 unsigned long uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 uVar7 = param_1 & 0xffffffff;
 __ptr = malloc(-(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2);
 if (__ptr == (void *)0x0) {
 return 0xffffffff;
 }
 uVar6 = (uint)uVar7;
 if (0 < (int)uVar6) {
 if (uVar6 < 8) {
 param_1 = 0;
 }
 else {
 param_1 = param_1 & 0xfffffff8;
 iVar10 = 2;
 iVar11 = 3;
 iVar8 = 0;
 iVar9 = 1;
 puVar3 = (unsigned long long *)((long)__ptr + 0x10);
 uVar4 = param_1;
 do {
 iVar12 = iVar8 * 2;
 iVar13 = iVar9 * 2;
 iVar14 = iVar10 * 2;
 iVar15 = iVar11 * 2;
 uVar4 = uVar4 - 8;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 iVar10 = iVar10 + 8;
 iVar11 = iVar11 + 8;
 puVar3[-1] = CONCAT44(iVar15,iVar14);
 puVar3[-2] = CONCAT44(iVar13,iVar12);
 puVar3[1] = CONCAT44(iVar15 + 8,iVar14 + 8);
 *puVar3 = CONCAT44(iVar13 + 8,iVar12 + 8);
 puVar3 = puVar3 + 4;
 } while (uVar4 != 0);
 if (param_1 == uVar7) goto LAB_00100eec;
 }
 iVar8 = (int)param_1 << 1;
 lVar2 = uVar7 - param_1;
 piVar5 = (int *)((long)__ptr + param_1 * 4);
 do {
 *piVar5 = iVar8;
 iVar8 = iVar8 + 2;
 lVar2 = lVar2 + -1;
 piVar5 = piVar5 + 1;
 } while (lVar2 != 0);
 }
LAB_00100eec:
 if ((int)uVar6 < 0) {
 uVar6 = uVar6 + 1;
 }
 uVar1 = *(unsigned int *)((long)__ptr + (long)((int)uVar6 >> 1) * 4);
 free(__ptr);
 return uVar1;
}

// Function: heap_calloc @ 0x100f10
int heap_calloc(uint param_1)
{
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long long *puVar3;
 void *__ptr;
 long lVar4;
 unsigned long uVar5;
 int *piVar6;
 unsigned long uVar7;
 unsigned long uVar8;
 unsigned long long *puVar9;
 unsigned long uVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 int iVar18;
 unsigned long long uVar19;
 __ptr = calloc((long)(int)param_1,4);
 if (__ptr == (void *)0x0) {
 return -1;
 }
 if (((int)param_1 < 1) || (param_1 == 1)) {
 iVar11 = 0;
 }
 else {
 uVar7 = (unsigned long)param_1 - 1;
 if (uVar7 < 8) {
 iVar11 = 0;
 uVar5 = 1;
 }
 else {
 uVar8 = uVar7 & 0xfffffffffffffff8;
 puVar9 = (unsigned long long *)((long)__ptr + 0x14);
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
 iVar12 = (int)((unsigned long)*puVar1 >> 0x20) + iVar12;
 iVar13 = (int)*puVar2 + iVar13;
 iVar14 = (int)((unsigned long)*puVar2 >> 0x20) + iVar14;
 iVar15 = (int)uVar19 + iVar15;
 iVar16 = (int)((unsigned long)uVar19 >> 0x20) + iVar16;
 iVar17 = (int)*puVar3 + iVar17;
 iVar18 = (int)((unsigned long)*puVar3 >> 0x20) + iVar18;
 } while (uVar10 != 0);
 iVar11 = iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13 + iVar18 + iVar14;
 if (uVar7 == uVar8) goto LAB_00100fc8;
 }
 lVar4 = param_1 - uVar5;
 piVar6 = (int *)((long)__ptr + uVar5 * 4);
 do {
 lVar4 = lVar4 + -1;
 iVar11 = *piVar6 + iVar11;
 piVar6 = piVar6 + 1;
 } while (lVar4 != 0);
 }
LAB_00100fc8:
 free(__ptr);
 return iVar11;
}

// Function: heap_realloc @ 0x100fdc
unsigned int heap_realloc(void)
{
 unsigned long long *__ptr;
 unsigned long long *puVar1;
 unsigned int uVar2;
 __ptr = (unsigned long long *)malloc(0x14);
 if (__ptr == (unsigned long long *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 __ptr[1] = 0x400000003;
 *__ptr = 0x200000001;
 *(unsigned int *)(__ptr + 2) = 5;
 puVar1 = (unsigned long long *)realloc(__ptr,0x28);
 if (puVar1 == (unsigned long long *)0x0) {
 uVar2 = 0xfffffffe;
 }
 else {
 *(unsigned int *)((long)puVar1 + 0x24) = 0x5a;
 uVar2 = 0x32;
 if (*(int *)(puVar1 + 1) != 3) {
 uVar2 = 0xfffffffd;
 }
 *(unsigned long long *)((long)puVar1 + 0x1c) = 0x5000000046;
 *(unsigned long long *)((long)puVar1 + 0x14) = 0x3c00000032;
 __ptr = puVar1;
 }
 free(__ptr);
 }
 return uVar2;
}

// Function: heap_array @ 0x10106c
unsigned int heap_array(unsigned long param_1)
{
 unsigned int uVar1;
 void *__ptr;
 long lVar2;
 unsigned long long *puVar3;
 unsigned long uVar4;
 int *piVar5;
 uint uVar6;
 unsigned long uVar7;
 int iVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 uVar7 = param_1 & 0xffffffff;
 __ptr = malloc(-(uVar7 >> 0x1f) & 0xfffffffc00000000 | uVar7 << 2);
 if (__ptr == (void *)0x0) {
 return 0xffffffff;
 }
 uVar6 = (uint)uVar7;
 if (0 < (int)uVar6) {
 if (uVar6 < 8) {
 param_1 = 0;
 }
 else {
 param_1 = param_1 & 0xfffffff8;
 iVar10 = 2;
 iVar11 = 3;
 iVar8 = 0;
 iVar9 = 1;
 puVar3 = (unsigned long long *)((long)__ptr + 0x10);
 uVar4 = param_1;
 do {
 iVar12 = iVar8 * 3;
 iVar13 = iVar9 * 3;
 iVar14 = iVar10 * 3;
 iVar15 = iVar11 * 3;
 uVar4 = uVar4 - 8;
 iVar8 = iVar8 + 8;
 iVar9 = iVar9 + 8;
 iVar10 = iVar10 + 8;
 iVar11 = iVar11 + 8;
 puVar3[-1] = CONCAT44(iVar15,iVar14);
 puVar3[-2] = CONCAT44(iVar13,iVar12);
 puVar3[1] = CONCAT44(iVar15 + 0xc,iVar14 + 0xc);
 *puVar3 = CONCAT44(iVar13 + 0xc,iVar12 + 0xc);
 puVar3 = puVar3 + 4;
 } while (uVar4 != 0);
 if (param_1 == uVar7) goto LAB_0010110c;
 }
 iVar8 = (int)param_1 * 3;
 lVar2 = uVar7 - param_1;
 piVar5 = (int *)((long)__ptr + param_1 * 4);
 do {
 *piVar5 = iVar8;
 iVar8 = iVar8 + 3;
 lVar2 = lVar2 + -1;
 piVar5 = piVar5 + 1;
 } while (lVar2 != 0);
 }
LAB_0010110c:
 if ((int)uVar6 < 0) {
 uVar6 = uVar6 + 1;
 }
 uVar1 = *(unsigned int *)((long)__ptr + (long)((int)uVar6 >> 1) * 4);
 free(__ptr);
 return uVar1;
}

// Function: heap_struct @ 0x101130
int heap_struct(int param_1)
{
 return param_1 * 3;
}

// Function: heap_nested @ 0x101138
unsigned long long heap_nested(unsigned int **param_1)
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

// Function: linked_list_heap @ 0x1011ac
int linked_list_heap(void)
{
 int iVar1;
 int *__ptr;
 unsigned int *puVar2;
 unsigned int *puVar3;
 int *piVar4;
 int iVar5;
 __ptr = (int *)malloc(0x10);
 if (__ptr != (int *)0x0) {
 *__ptr = 0;
 puVar2 = (unsigned int *)malloc(0x10);
 if (puVar2 == (unsigned int *)0x0) {
 free(__ptr);
 }
 else {
 *(unsigned long long *)(puVar2 + 2) = 0;
 *(unsigned int **)(__ptr + 2) = puVar2;
 *puVar2 = 10;
 puVar3 = (unsigned int *)malloc(0x10);
 if (puVar3 == (unsigned int *)0x0) {
 do {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 }
 else {
 *(unsigned long long *)(puVar3 + 2) = 0;
 *(unsigned int **)(puVar2 + 2) = puVar3;
 *puVar3 = 0x14;
 puVar2 = (unsigned int *)malloc(0x10);
 if (puVar2 == (unsigned int *)0x0) {
 do {
 piVar4 = *(int **)(__ptr + 2);
 free(__ptr);
 __ptr = piVar4;
 } while (piVar4 != (int *)0x0);
 }
 else {
 *(unsigned long long *)(puVar2 + 2) = 0;
 *(unsigned int **)(puVar3 + 2) = puVar2;
 *puVar2 = 0x1e;
 puVar3 = (unsigned int *)malloc(0x10);
 if (puVar3 != (unsigned int *)0x0) {
 iVar5 = 0;
 *(unsigned long long *)(puVar3 + 2) = 0;
 *(unsigned int **)(puVar2 + 2) = puVar3;
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
 }
 }
 }
 return -1;
}

// Function: create_tree_node @ 0x1012e4
void create_tree_node(unsigned int param_1)
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

// Function: tree_heap_traversal @ 0x101314
unsigned long long tree_heap_traversal(void)
{
 return 0x3c;
}

// Function: memory_leak @ 0x10131c
unsigned int memory_leak(unsigned long param_1)
{
 void *pvVar1;
 unsigned long long *puVar2;
 unsigned long uVar3;
 uint uVar4;
 unsigned long uVar5;
 unsigned long long uVar6;
 int iVar7;
 unsigned long long uVar8;
 int iVar9;
 uVar5 = param_1 & 0xffffffff;
 pvVar1 = malloc(-(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2);
 if (pvVar1 == (void *)0x0) {
 return 0xffffffff;
 }
 uVar4 = (uint)uVar5;
 if (0 < (int)uVar4) {
 if (uVar4 < 8) {
 param_1 = 0;
 }
 else {
 param_1 = param_1 & 0xfffffff8;
 uVar8 = 0x300000002;
 uVar6 = 0x100000000;
 puVar2 = (unsigned long long *)((long)pvVar1 + 0x10);
 uVar3 = param_1;
 do {
 iVar7 = (int)((unsigned long)uVar6 >> 0x20);
 iVar9 = (int)((unsigned long)uVar8 >> 0x20);
 uVar3 = uVar3 - 8;
 puVar2[-1] = uVar8;
 puVar2[-2] = uVar6;
 puVar2[1] = CONCAT44(iVar9 + 4,(int)uVar8 + 4);
 *puVar2 = CONCAT44(iVar7 + 4,(int)uVar6 + 4);
 puVar2 = puVar2 + 4;
 uVar6 = CONCAT44(iVar7 + 8,(int)uVar6 + 8);
 uVar8 = CONCAT44(iVar9 + 8,(int)uVar8 + 8);
 } while (uVar3 != 0);
 if (param_1 == uVar5) goto LAB_001013a8;
 }
 do {
 *(int *)((long)pvVar1 + param_1 * 4) = (int)param_1;
 param_1 = param_1 + 1;
 } while (uVar5 != param_1);
 }
LAB_001013a8:
 if ((int)uVar4 < 0) {
 uVar4 = uVar4 + 1;
 }
 return *(unsigned int *)((long)pvVar1 + (long)((int)uVar4 >> 1) * 4);
}

// Function: dangling_pointer @ 0x1013c4
unsigned int dangling_pointer(void)
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

// Function: double_free @ 0x101410
unsigned int double_free(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xfffffffe;
}

// Function: heap_overflow @ 0x101424
unsigned long long heap_overflow(void)
{
 return 0;
}

// Function: test_heap_memory @ 0x10142c
static char * test_heap_memory_impl(void)
{
 // Function body starts below
 __pid_t __pid;
 uint uVar1;
 unsigned long long *__ptr;
 unsigned long long *puVar2;
 unsigned int *__ptr_00;
 unsigned int *puVar3;
 unsigned long uVar4;
 char *__format;
 char *puVar5;
 unsigned long long uVar6;
 uint uVar7;
 uint local_24;
 puts(DAT_00102247);
 printf("HEAP-L2-01 (heap_basic): %d\n",10);
 printf("HEAP-L2-02 (heap_calloc): %d\n",0);
 __ptr = (unsigned long long *)malloc(0x14);
 if (__ptr == (unsigned long long *)0x0) {
 uVar7 = 0xffffffff;
 }
 else {
 __ptr[1] = 0x400000003;
 *__ptr = 0x200000001;
 *(unsigned int *)(__ptr + 2) = 5;
 puVar2 = (unsigned long long *)realloc(__ptr,0x28);
 if (puVar2 == (unsigned long long *)0x0) {
 uVar7 = 0xfffffffe;
 }
 else {
 *(unsigned int *)((long)puVar2 + 0x24) = 0x5a;
 uVar7 = 0x32;
 if (*(int *)(puVar2 + 1) != 3) {
 uVar7 = 0xfffffffd;
 }
 *(unsigned long long *)((long)puVar2 + 0x1c) = 0x5000000046;
 *(unsigned long long *)((long)puVar2 + 0x14) = 0x3c00000032;
 __ptr = puVar2;
 }
 free(__ptr);
 }
 printf("HEAP-L2-03 (heap_realloc): %d\n",(unsigned long)uVar7);
 printf("HEAP-L2-04 (heap_array): %d\n",0xf);
 printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
 __ptr_00 = (unsigned int *)malloc(0x10);
 if (__ptr_00 == (unsigned int *)0x0) {
 printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
 }
 else {
 *__ptr_00 = 10;
 puVar3 = (unsigned int *)malloc(0x10);
 *(unsigned int **)(__ptr_00 + 2) = puVar3;
 if (puVar3 == (unsigned int *)0x0) {
 free(__ptr_00);
 uVar6 = 0xfffffffe;
 }
 else {
 uVar6 = 0;
 *(unsigned long long *)(puVar3 + 2) = 0;
 *puVar3 = 0x14;
 }
 printf("HEAP-L2-06 (heap_nested): %d\n",uVar6);
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
 printf(DAT_00101ed5,uVar4 & 0xffffffff);
 exit(0);
 }
 if (__pid < 1) {
 puVar5 = DAT_00101f4b;
 perror(DAT_00101f4b);
 return puVar5;
 }
 uVar1 = waitpid(__pid,(int *)&local_24,0);
 uVar7 = local_24 & 0x7f;
 if (uVar7 == 0) {
 uVar7 = local_24 >> 8 & 0xff;
 __format = DAT_00101ee5;
 }
 else {
 if ((int)(uVar7 * 0x1000000 + 0x1000000) < 0x2000000) goto LAB_0010161c;
 __format = DAT_00101f0a;
 }
 uVar1 = printf(__format,(unsigned long)uVar7);
LAB_0010161c:
 return (char *)(unsigned long)uVar1;
}

// Function: global_var_access @ 0x101660
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x101674
int global_var_read(void)
{
 return global_counter << 1;
}

// Function: global_array_access @ 0x101684
unsigned int global_array_access(uint param_1)
{
 if (9 < param_1) {
 return 0xffffffff;
 }
 return *(unsigned int *)(&global_array + (unsigned long)param_1 * 4);
}

// Function: static_local @ 0x1016a4
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

// Function: call_static_func @ 0x1016bc
uint call_static_func(int param_1)
{
 return param_1 << 1 | 1;
}

// Function: access_extern_global @ 0x1016cc
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x1016e0
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x1016e8
int read_const_data(void)
{
 return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x1016fc
unsigned long long access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x101704
unsigned long long access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x10170c
unsigned long long global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x101714
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x101720
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x10172c
void set_global_callback(unsigned long long param_1)
{
 global_func_ptr = (unsigned long long)param_1;
 return;
}

// Function: call_global_callback @ 0x101738
unsigned long long call_global_callback(void)
{
 unsigned long long uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = ((unsigned long long (*)(void))global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x101750
unsigned int global_heap_store(unsigned int *param_1)
{
 global_heap_ptr = param_1;
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x10176c
unsigned long long static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x101774
int tls_access(int param_1)
{
 return param_1 << 1;
}

// Function: init_order_test @ 0x10177c
unsigned long long init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x101784
int test_static_global(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned int local_24;
 puts(DAT_00102265);
 global_counter = global_counter + 1;
 printf("STM-L1-01 (global_var_access): %d\n");
 printf("STM-L1-01 (global_var_read): %d\n",(unsigned long)(uint)(global_counter << 1));
 printf("STM-L1-02 (global_array_access): %d\n",5);
 static_local_counter = 1;
 printf("STM-L1-03 (static_local): %d\n",1);
 static_local_counter = static_local_counter + 1;
 printf("STM-L1-03 (static_local): %d\n");
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
 global_func_ptr = (unsigned long long)(uintptr_t)(int (*)(int))&double_value;
 printf("STM-L2-07 (global_func_ptr): %d\n",10);
 global_heap_ptr = &local_24;
 local_24 = 100;
 printf("STM-L2-08 (global_heap_store): %d\n",100);
 printf("STM-L2-09 (static_complex_init): %d\n",0xf);
 printf("STM-L3-01 (tls_access): %d\n",0x14);
 iVar1 = printf("STM-L3-02 (init_order_test): %d\n",0x14);
 return iVar1;
}

// Function: double_value @ 0x101944
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: memop_memset @ 0x10194c
unsigned long memop_memset(byte *param_1,size_t param_2,int param_3)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
 memset(param_1,param_3,param_2);
 uVar1 = (unsigned long)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x10198c
unsigned int memop_memcpy(void *param_1,void *param_2,unsigned long param_3)
{
 unsigned int uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
 memcpy(param_1,param_2,param_3);
 uVar1 = *(unsigned int *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
 }
 return uVar1;
}

// Function: memop_memmove @ 0x1019d4
unsigned long memop_memmove(void *param_1,unsigned long param_2)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (void *)0x0) && (1 < param_2)) {
 memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
 uVar1 = (unsigned long)*(byte *)((long)param_1 + 1);
 }
 return uVar1;
}

// Function: memop_memcmp @ 0x101a14
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
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

// Function: memop_bzero @ 0x101a50
unsigned long memop_bzero(byte *param_1,size_t param_2)
{
 if (param_1 != (byte *)0x0) {
 memset(param_1,0,param_2);
 return (unsigned long)*param_1;
 }
 return 0xffffffff;
}

// Function: memop_bcopy @ 0x101a88
unsigned long memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
 unsigned long uVar1;
 uVar1 = 0xffffffff;
 if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
 memmove(param_2,param_1,param_3);
 uVar1 = (unsigned long)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x101ac4
unsigned int memop_unaligned_access(long param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}





// Function: main @ 0x101bd4
int main(void)
{
 test_stack_memory();
 test_heap_memory_impl();
 test_static_global();
 return 0;
}

// Function: extern_function @ 0x101bf8
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: _fini @ 0x101c00
void _fini(void)
{
 return;
}

