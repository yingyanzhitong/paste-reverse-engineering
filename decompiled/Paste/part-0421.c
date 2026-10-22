/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005365d4 | FUN_1005365d4 */

void FUN_1005365d4(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100536648,*(undefined8 *)(lVar2 + 0x48),0);
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100536644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100536648 | FUN_100536648 */

void FUN_100536648(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xc0);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x48) + 0x128,unaff_x22 + 0x28,0x21,0);
  FUN_1005064d4(lVar2,uVar3,uVar1);
  _swift_endAccess(unaff_x22 + 0x28);
  if (lVar2 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xb8));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    FUN_100004550(lVar2,uVar3);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
    Swift::CheckedContinuation::resume((undefined8 *)(unaff_x22 + 0x40),uVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100536700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100536704 | FUN_100536704 */

void FUN_100536704(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fcf058;
  FUN_1000f7830(&DAT_100fcf058,&DAT_100c56ea0);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_1005367a8,in_x3,0);
  return;
}



/* Address: 0x1005367a8 | FUN_1005367a8 */

void FUN_1005367a8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fcf050;
  FUN_1000f7830(&DAT_100fcf050,&DAT_100c56e80);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fcf058,&DAT_100c56ea0);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100ede098;
  _swift_allocObject(&DAT_100ede098,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fcf058,&DAT_100c56ea0);
  _swift_beginAccess(lVar4 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054bf64,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x128) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100536024;
                    /* WARNING: Could not recover jumptable at 0x000100536960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x100536964 | FUN_100536964 */

void FUN_100536964(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fcf038;
  FUN_1000f7830(&DAT_100fcf038,&DAT_100c56e50);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_100536a08,in_x3,0);
  return;
}



/* Address: 0x100536a08 | FUN_100536a08 */

void FUN_100536a08(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fcf030;
  FUN_1000f7830(&DAT_100fcf030,&DAT_100c56e30);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fcf038,&DAT_100c56e50);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100eddff8;
  _swift_allocObject(&DAT_100eddff8,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fcf038,&DAT_100c56e50);
  _swift_beginAccess(lVar4 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054bce0,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x128) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100536024;
                    /* WARNING: Could not recover jumptable at 0x000100536bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x100536bc4 | FUN_100536bc4 */

void FUN_100536bc4(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fcefa0;
  FUN_1000f7830(&DAT_100fcefa0,&DAT_100c56cd0);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_100536c68,in_x3,0);
  return;
}



/* Address: 0x100536c68 | FUN_100536c68 */

void FUN_100536c68(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fcefa0,&DAT_100c56cd0);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100eddf58;
  _swift_allocObject(&DAT_100eddf58,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fcefa0,&DAT_100c56cd0);
  _swift_beginAccess(lVar4 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(thunk_FUN_10054affc,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x128) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100536024;
                    /* WARNING: Could not recover jumptable at 0x000100536e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x100536e24 | FUN_100536e24 */

void FUN_100536e24(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fcf008;
  FUN_1000f7830(&DAT_100fcf008,&DAT_100c56dc0);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_100536ec8,in_x3,0);
  return;
}



/* Address: 0x100536ec8 | FUN_100536ec8 */

void FUN_100536ec8(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fcf000;
  FUN_1000f7830(&DAT_100fcf000,&DAT_100c56da0);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fcf008,&DAT_100c56dc0);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100eddeb8;
  _swift_allocObject(&DAT_100eddeb8,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fcf008,&DAT_100c56dc0);
  _swift_beginAccess(lVar4 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054b8a8,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x128) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100536024;
                    /* WARNING: Could not recover jumptable at 0x000100537080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x100537084 | FUN_100537084 */

void FUN_100537084(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fcefe8;
  FUN_1000f7830(&DAT_100fcefe8,&DAT_100c56d70);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_100537128,in_x3,0);
  return;
}



/* Address: 0x100537128 | FUN_100537128 */

void FUN_100537128(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fcefe0;
  FUN_1000f7830(&DAT_100fcefe0,&DAT_100c56d50);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fcefe8,&DAT_100c56d70);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100edde18;
  _swift_allocObject(&DAT_100edde18,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fcefe8,&DAT_100c56d70);
  _swift_beginAccess(lVar4 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054b66c,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x128) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100536024;
                    /* WARNING: Could not recover jumptable at 0x0001005372e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x1005372e4 | FUN_1005372e4 */

void FUN_1005372e4(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  puVar1 = &DAT_100fcefc8;
  FUN_1000f7830(&DAT_100fcefc8,&DAT_100c56d20);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  _swift_task_switch(FUN_100537374,in_x3,0);
  return;
}



/* Address: 0x100537374 | FUN_100537374 */

void FUN_100537374(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar15 = *(long *)(unaff_x22 + 0x48);
  uVar17 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar17;
  uVar18 = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  uVar7 = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(unaff_x22 + 200) = uVar7;
  puVar8 = &DAT_100fcefc0;
  FUN_1000f7830(&DAT_100fcefc0,&DAT_100c56d00);
  *(undefined **)(unaff_x22 + 0xb0) = puVar8;
  (**(code **)(*(long *)(puVar8 + -8) + 0x10))(uVar13,uVar6,puVar8);
  FUN_10011532c(uVar13,uVar9,&DAT_100fcefc8,&DAT_100c56d20);
  uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar16 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100eddd78;
  _swift_allocObject(&DAT_100eddd78,uVar16 + lVar4,uVar12 | 7);
  FUN_10011532c(uVar9,puVar8 + uVar16,&DAT_100fcefc8,&DAT_100c56d20);
  _swift_beginAccess(lVar15 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar17,uVar18,uVar7);
  uVar9 = *(undefined8 *)(lVar15 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  uVar13 = *(undefined8 *)(lVar15 + 0x128);
  *(undefined8 *)(lVar15 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054b350,puVar8,uVar17,uVar18,uVar7,uVar9);
  FUN_1004dc818(uVar17,uVar18,uVar7);
  *(undefined8 *)(lVar15 + 0x128) = uVar13;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar10);
  piVar14 = *(int **)(lVar5 + 0x28);
  iVar1 = *piVar14;
  plVar11 = (long *)(ulong)(uint)piVar14[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_100536300;
                    /* WARNING: Could not recover jumptable at 0x000100537548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar14))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),uVar10,
             *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x10053754c | FUN_10053754c */

void FUN_10053754c(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  puVar1 = &DAT_100fcefa0;
  FUN_1000f7830(&DAT_100fcefa0,&DAT_100c56cd0);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  uVar5 = *in_x4;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xc0) = *(undefined1 *)(in_x4 + 2);
  _swift_task_switch(FUN_1005375f0,in_x3,0);
  return;
}



/* Address: 0x1005375f0 | FUN_1005375f0 */

void FUN_1005375f0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  lVar6 = *(long *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar9 = *(undefined1 *)(unaff_x22 + 0xc0);
  puVar10 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  *(undefined **)(unaff_x22 + 0xa8) = puVar10;
  (**(code **)(*(long *)(puVar10 + -8) + 0x10))(uVar15,uVar8,puVar10);
  FUN_10011532c(uVar15,uVar11,&DAT_100fcefa0,&DAT_100c56cd0);
  uVar14 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar17 = uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100eddcd8;
  _swift_allocObject(&DAT_100eddcd8,uVar17 + lVar6,uVar14 | 7);
  FUN_10011532c(uVar11,puVar10 + uVar17,&DAT_100fcefa0,&DAT_100c56cd0);
  _swift_beginAccess(lVar4 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar2,uVar5,uVar9);
  uVar11 = *(undefined8 *)(lVar4 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar11);
  uVar15 = *(undefined8 *)(lVar4 + 0x128);
  *(undefined8 *)(lVar4 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054affc,puVar10,uVar2,uVar5,uVar9,uVar11);
  FUN_1004dc818(uVar2,uVar5,uVar9);
  *(undefined8 *)(lVar4 + 0x128) = uVar15;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar12);
  piVar16 = *(int **)(lVar7 + 0x28);
  iVar1 = *piVar16;
  plVar13 = (long *)(ulong)(uint)piVar16[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_100536024;
                    /* WARNING: Could not recover jumptable at 0x0001005377a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar16))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),uVar12,
             *(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x1005377ac | FUN_1005377ac */

void FUN_1005377ac(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x78) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x58) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x3;
  puVar1 = &DAT_100fcef80;
  FUN_1000f7830(&DAT_100fcef80,&DAT_100c56c80);
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x88) = lVar4;
  uVar3 = lVar4 + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  _swift_task_switch(FUN_10053783c,in_x3,0);
  return;
}



/* Address: 0x10053783c | FUN_10053783c */

void FUN_10053783c(void)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 uVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar5 = *(long *)(unaff_x22 + 0x68);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar15 = *(long *)(unaff_x22 + 0x48);
  uVar17 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar17;
  uVar18 = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  uVar7 = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(unaff_x22 + 200) = uVar7;
  puVar8 = &DAT_100fcef78;
  FUN_1000f7830(&DAT_100fcef78,&DAT_100c56c60);
  *(undefined **)(unaff_x22 + 0xb0) = puVar8;
  (**(code **)(*(long *)(puVar8 + -8) + 0x10))(uVar13,uVar6,puVar8);
  FUN_10011532c(uVar13,uVar9,&DAT_100fcef80,&DAT_100c56c80);
  uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar16 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100eddc38;
  _swift_allocObject(&DAT_100eddc38,uVar16 + lVar4,uVar12 | 7);
  FUN_10011532c(uVar9,puVar8 + uVar16,&DAT_100fcef80,&DAT_100c56c80);
  _swift_beginAccess(lVar15 + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1004a7398(uVar17,uVar18,uVar7);
  uVar9 = *(undefined8 *)(lVar15 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  uVar13 = *(undefined8 *)(lVar15 + 0x128);
  *(undefined8 *)(lVar15 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(FUN_10054aca0,puVar8,uVar17,uVar18,uVar7,uVar9);
  FUN_1004dc818(uVar17,uVar18,uVar7);
  *(undefined8 *)(lVar15 + 0x128) = uVar13;
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_getObjectType(uVar10);
  piVar14 = *(int **)(lVar5 + 0x28);
  iVar1 = *piVar14;
  plVar11 = (long *)(ulong)(uint)piVar14[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_100536300;
                    /* WARNING: Could not recover jumptable at 0x000100537a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar14))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x78),uVar10,
             *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x100537a14 | FUN_100537a14 */

void FUN_100537a14(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_stack_00000010;
  *(undefined8 *)(unaff_x22 + 0x70) = in_stack_00000018;
  *(undefined8 *)(unaff_x22 + 0x60) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x58) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x48) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x38) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x3;
  _swift_task_switch(FUN_100537a48,in_x3,0);
  return;
}



/* Address: 0x100537a48 | FUN_100537a48 */

void FUN_100537a48(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar5 = *(long *)(unaff_x22 + 0x50);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar12 = *puVar3;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar12;
  uVar13 = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
  uVar7 = *(undefined1 *)(puVar3 + 2);
  *(undefined1 *)(unaff_x22 + 0xa0) = uVar7;
  uVar8 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
  _swift_getAssociatedConformanceWitness
            (uVar4,uVar2,uVar8,0x100cb270c,&TargetProtocolRequirement_100cb272c);
  FUN_10053816c(uVar12,uVar13,uVar7,uVar6);
  _swift_getObjectType(uVar9);
  piVar11 = *(int **)(lVar5 + 0x28);
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_100537b6c;
                    /* WARNING: Could not recover jumptable at 0x000100537b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))
            (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60),uVar9,
             *(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x100537b6c | FUN_100537b6c */

void FUN_100537b6c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x90));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100537bd0,*(undefined8 *)(lVar1 + 0x30),0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100537bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100537bd0 | FUN_100537bd0 */

void FUN_100537bd0(void)

{
  undefined1 uVar1;
  long lVar2;
  CheckedContinuation CVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar2 = *(long *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xa0);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x30) + 0x128,unaff_x22 + 0x10,0x21,0);
  FUN_1005064d4(lVar2,uVar4,uVar1);
  _swift_endAccess(unaff_x22 + 0x10);
  if (lVar2 == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x98));
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
    FUN_100004550(lVar2,uVar4);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
    FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
    CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
    Swift::CheckedContinuation::resume((undefined8 *)(unaff_x22 + 0x28),CVar3.unknown);
  }
                    /* WARNING: Could not recover jumptable at 0x000100537ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100537cac | FUN_100537cac */

ulong FUN_100537cac(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                   undefined *param_5,undefined8 param_6)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_a0 [8];
  ulong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  long lStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_a0 + -extraout_x8;
  local_70 = param_4;
  puStack_68 = param_5;
  FUN_1000f8cac(param_3,puVar9,&DAT_100fcd1c8,&DAT_100c53750);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar9,&DAT_100fcd1c8,&DAT_100c53750);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_1000fb4c4(param_3,&DAT_100fcd1c8,&DAT_100c53750);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_90 = 0;
      uStack_88 = 0;
      puVar8 = &local_90;
      local_80 = UVar6.unknown;
      lStack_78 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,param_6,param_4,param_5);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    FUN_100542748(&local_98,CVar7.unknown + 0x20,*(undefined8 *)(CVar7.unknown + 0x10),uVar10,
                  UVar6.unknown,lVar11,&local_70,param_6);
    _swift_release(CVar7.unknown);
    FUN_1000fb4c4(param_3,&DAT_100fcd1c8,&DAT_100c53750);
    _swift_release(param_5);
    uVar10 = local_98;
  }
  return uVar10;
}



/* Address: 0x100537ee4 | FUN_100537ee4 */

void FUN_100537ee4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined1 *)(unaff_x22 + 0x69) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  _swift_task_switch(FUN_100537f08);
  return;
}



/* Address: 0x100537f08 | FUN_100537f08 */

void FUN_100537f08(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  code *pcVar3;
  CancellationError CVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 *puVar8;
  
  pcVar3 = *(code **)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x69);
  _swift_beginAccess(*(long *)(unaff_x22 + 0xa8) + 0x128,unaff_x22 + 0x70,0x21,0);
  FUN_1005064d4(pcVar3,uVar7,uVar2);
  _swift_endAccess(unaff_x22 + 0x70);
  if (pcVar3 != (code *)0x0) {
    CVar4 = Swift::CancellationError::typeMetadataAccessor();
    puVar5 = &DAT_100fce8c0;
    FUN_1003b6598(&DAT_100fce8c0,0xff,PTR_typeMetadataAccessor_100eaeb38,
                  PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
    _swift_allocError(CVar4.unknown,puVar5,0,0);
    Swift::CancellationError::init();
    puVar8 = (undefined8 *)(unaff_x22 + 0x48);
    *puVar8 = CVar4.unknown;
    *(undefined1 *)(unaff_x22 + 0x68) = 1;
    _swift_errorRetain(CVar4.unknown);
    (*pcVar3)(puVar8);
    FUN_100004550(pcVar3,uVar7);
    FUN_1000fb4c4(puVar8,&DAT_100fcd0b8,&DAT_100c53690);
    _swift_errorRelease(CVar4.unknown);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x10) = 0xd000000000000017;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x8000000100dad110;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  uVar2 = *(undefined1 *)(unaff_x22 + 0x69);
  *(undefined1 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0xa0));
  FUN_1004a7398(uVar7,uVar1,uVar2);
  plVar6 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005380a8;
  FUN_100530198((undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1005380a8 | FUN_1005380a8 */

void FUN_1005380a8(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar1 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xb0));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100538128,*(undefined8 *)(lVar1 + 0xa8),0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0xa0);
  FUN_1004dc818(*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x90),
                *(undefined1 *)(lVar1 + 0x69));
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100538124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100538128 | FUN_100538128 */

void FUN_100538128(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90),
                *(undefined1 *)(unaff_x22 + 0x69));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100538168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10053816c | FUN_10053816c */

void FUN_10053816c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  CheckedContinuation CVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_88 = param_7;
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar4 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  FUN_1004e85b8(0,param_6);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)puVar5 - extraout_x8_00;
  (**(code **)(lVar4 + 0x10))(puVar5,param_4,CVar1.unknown);
  FUN_1004e847c(lVar2,puVar5,param_6);
  FUN_1004e84e8(lVar2,param_6,local_88);
  _swift_beginAccess(unaff_x20 + 0x128,auStack_78,0x21,0);
  FUN_1004a7398(param_1,param_2,param_3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x128);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  local_80 = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x20 + 0x128) = 0x8000000000000000;
  FUN_1004b58a8(lVar2,param_6,param_1,param_2,param_3,uVar3);
  FUN_1004dc818(param_1,param_2,param_3);
  *(undefined8 *)(unaff_x20 + 0x128) = local_80;
  _swift_endAccess(auStack_78);
  return;
}



/* Address: 0x10053830c | FUN_10053830c */

void FUN_10053830c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  puVar1 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  lVar3 = 0;
  FUN_1004e3b34(0,param_2,param_3);
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar3;
  lVar3 = *(long *)(lVar3 + 0x40);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  uVar2 = lVar3 + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  _swift_task_switch(FUN_1005383c4);
  return;
}



/* Address: 0x1005383c4 | FUN_1005383c4 */

/* WARNING: Removing unreachable block (ram,0x000100538420) */

void FUN_1005383c4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  TaskPriority TVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x22;
  code *pcVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  pcVar16 = *(code **)(*(long *)(unaff_x22 + 0xa8) + 0x10);
  (*pcVar16)(uVar13,*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0xa0));
  FUN_1004e2fd0(unaff_x22 + 0x10,uVar13,uVar1,uVar3);
  lVar14 = *(long *)(unaff_x22 + 0x90);
  _swift_beginAccess(lVar14 + 0x78,unaff_x22 + 0x60,0x21,0);
  uVar17 = *(ulong *)(lVar14 + 0x78);
  uVar12 = uVar17;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar14 + 0x78) = uVar17;
  uVar15 = uVar17;
  if ((uVar12 & 1) == 0) {
    uVar15 = 0;
    FUN_1004a4d18(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
    *(ulong *)(lVar14 + 0x78) = uVar15;
  }
  uVar12 = *(ulong *)(uVar15 + 0x10);
  uVar17 = uVar15;
  if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar12) {
    uVar17 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
    FUN_1004a4d18(uVar17,uVar12 + 1,1,uVar15);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar11 = uVar17 + uVar12 * 0x50;
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
  *(ulong *)(uVar17 + 0x10) = uVar12 + 1;
  uVar20 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(lVar11 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(lVar11 + 0x20) = uVar20;
  uVar22 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x49);
  *(undefined8 *)(lVar11 + 0x61) = *(undefined8 *)(unaff_x22 + 0x51);
  *(undefined8 *)(lVar11 + 0x59) = uVar27;
  *(undefined8 *)(lVar11 + 0x48) = uVar24;
  *(undefined8 *)(lVar11 + 0x40) = uVar23;
  *(undefined8 *)(lVar11 + 0x58) = uVar26;
  *(undefined8 *)(lVar11 + 0x50) = uVar25;
  *(undefined8 *)(lVar11 + 0x38) = uVar22;
  *(undefined8 *)(lVar11 + 0x30) = uVar20;
  *(ulong *)(lVar14 + 0x78) = uVar17;
  _swift_endAccess(unaff_x22 + 0x60);
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar3,1,1,TVar7.unknown);
  (*pcVar16)(uVar1,uVar18,uVar10);
  puVar8 = &DAT_100fce8c8;
  FUN_1003b6598();
  uVar12 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar15 = uVar12 + 0x38 & (uVar12 ^ 0xffffffffffffffff);
  puVar9 = &DAT_100edd330;
  _swift_allocObject(&DAT_100edd330,uVar15 + lVar5,uVar12 | 7);
  *(undefined8 *)(puVar9 + 0x10) = uVar6;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  *(undefined8 *)(puVar9 + 0x28) = uVar21;
  *(undefined8 *)(puVar9 + 0x20) = uVar19;
  *(undefined8 *)(puVar9 + 0x30) = uVar6;
  (**(code **)(lVar2 + 0x20))(puVar9 + uVar15,uVar1,uVar10);
  uVar10 = 0;
  _swift_getAssociatedTypeWitness(0,uVar13,uVar19,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  _swift_retain_n(uVar6,2);
  uVar13 = 0;
  FUN_100537cac(0,0,uVar3,&DAT_100c55860,puVar9,uVar10);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100538640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar13);
  return;
}



/* Address: 0x100538688 | FUN_100538688 */

void FUN_100538688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  _swift_task_switch(FUN_1005386a8,param_4,0);
  return;
}



/* Address: 0x1005386a8 | FUN_1005386a8 */

void FUN_1005386a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = &DAT_100fce8c8;
  FUN_1003b6598(&DAT_100fce8c8,param_2,FUN_10054574c,&TargetProtocolConformanceDescriptor_100c560f0)
  ;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  plVar2 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  uVar3 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,uVar6,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005387a4;
  FUN_1005289d4(*(undefined8 *)(unaff_x22 + 0x40),uVar5,puVar1,0x6575716552646461,0xee00293a5f287473
                ,FUN_10054c918,unaff_x22 + 0x10,uVar3);
  return;
}



/* Address: 0x1005387a4 | FUN_1005387a4 */

void FUN_1005387a4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001005387dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005387e0 | FUN_1005387e0 */

void FUN_1005387e0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  CheckedContinuation CVar3;
  long lVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 auStack_90 [8];
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_78 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar3 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar8 = *(long *)(CVar3.unknown + -8);
  local_80 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(local_80 + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_90 + -extraout_x8;
  lVar4 = 0;
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_1004e3b34(0,param_4,param_5);
  lVar9 = *(long *)(lVar4 + -8);
  lVar12 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar12 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar14 - extraout_x8_00;
  puVar5 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar11 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/Client.swift",0x10,1,0x1fa,param_2,0);
  }
  TVar6 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(lVar10 - extraout_x8_01,1,1,TVar6.unknown);
  (**(code **)(lVar9 + 0x10))(lVar10,local_78,lVar4);
  (**(code **)(lVar8 + 0x10))(puVar14,param_1,CVar3.unknown);
  puVar5 = &DAT_100fce8c8;
  FUN_1003b6598();
  bVar1 = *(byte *)(lVar9 + 0x50);
  uVar11 = (ulong)bVar1 + 0x38 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  bVar2 = *(byte *)(lVar8 + 0x50);
  uVar13 = lVar12 + uVar11 + (ulong)bVar2 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100ede2c8;
  local_88 = lVar4;
  local_78 = lVar10 - extraout_x8_01;
  _swift_allocObject(&DAT_100ede2c8,uVar13 + local_80,bVar1 | bVar2 | 7);
  *(ulong *)(puVar7 + 0x10) = param_2;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(undefined8 *)(puVar7 + 0x20) = local_70;
  *(undefined8 *)(puVar7 + 0x28) = uStack_68;
  *(ulong *)(puVar7 + 0x30) = param_2;
  (**(code **)(lVar9 + 0x20))(puVar7 + uVar11,lVar10,local_88);
  (**(code **)(lVar8 + 0x20))(puVar7 + uVar13,puVar14,CVar3.unknown);
  _swift_retain_n(param_2,2);
  FUN_1004e9c98(0,0,local_78,&DAT_100c56fa0,puVar7);
  _swift_release();
  return;
}



/* Address: 0x100538a80 | FUN_100538a80 */

void FUN_100538a80(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_100538aa0,in_x3,0);
  return;
}



/* Address: 0x100538aa0 | FUN_100538aa0 */

void FUN_100538aa0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0x70);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar5;
  _swift_unownedRetainStrong(uVar5);
  *(undefined8 *)(unaff_x22 + 0x40) = *puVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = puVar3[1];
  *(undefined1 *)(unaff_x22 + 0x58) = *(undefined1 *)(puVar3 + 2);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness(0,uVar2,uVar1,0x100cb270c,&TargetProtocolRequirement_100cb274c);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  _swift_task_switch(FUN_100538b30,uVar5,0);
  return;
}



/* Address: 0x100538b30 | FUN_100538b30 */

void FUN_100538b30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x58);
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x28),
             *(undefined8 *)(unaff_x22 + 0x50),0x100cb270c,&TargetProtocolRequirement_100cb272c);
  FUN_10053816c(uVar3,uVar1,uVar4,uVar5);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100538bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100538bbc | FUN_100538bbc */

void FUN_100538bbc(void)

{
  long unaff_x20;
  
  _swift_unownedRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100538be8 | FUN_100538be8 */

void FUN_100538be8(void)

{
  long unaff_x20;
  
  _swift_unownedRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x100538c14 | FUN_100538c14 */

void FUN_100538c14(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x3b8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x3b0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x3a8) = param_1;
  _swift_task_switch(FUN_100538c34);
  return;
}



/* Address: 0x100538c34 | FUN_100538c34 */

void FUN_100538c34(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  int *piVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x3b8);
  lVar4 = *(long *)(lVar5 + 0x70);
  *(long *)(unaff_x22 + 0x3c0) = lVar4;
  if (lVar4 != 0) {
    piVar6 = *(int **)(unaff_x22 + 0x3a8);
    *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(lVar5 + 0x78);
    FUN_10054574c();
    _swift_allocObject();
    *(undefined8 **)(unaff_x22 + 0x3d0) = param_1;
    _swift_unknownObjectRetain(lVar4);
    _swift_defaultActor_initialize(param_1);
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    param_1[0xe] = lVar5;
    param_1[0xf] = puVar2;
    _swift_unownedRetain(lVar5);
    iVar1 = *piVar6;
    plVar3 = (long *)(ulong)(uint)piVar6[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3d8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100538d60;
                    /* WARNING: Could not recover jumptable at 0x000100538cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))(param_1);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,param_1,0,0);
  *param_1 = 0xd000000000000021;
  param_1[1] = 0x8000000100dad330;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 4;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100538d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100538d60 | FUN_100538d60 */

void FUN_100538d60(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x3e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x3d8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x3d0);
    pcVar1 = FUN_100538dc0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x3b8);
    pcVar1 = FUN_1005396d4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100538dc0 | FUN_100538dc0 */

void FUN_100538dc0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x3d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3b8);
  _swift_beginAccess(lVar1 + 0x78,unaff_x22 + 0x350,0,0);
  *(undefined8 *)(unaff_x22 + 1000) = *(undefined8 *)(lVar1 + 0x78);
  _swift_bridgeObjectRetain();
  _swift_task_switch(FUN_100538e1c,uVar2,0);
  return;
}



/* Address: 0x100538e1c | FUN_100538e1c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100538f50 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100538e1c(void)

{
  int iVar1;
  UnownedSerialExecutor UVar2;
  undefined *puVar3;
  undefined *puVar4;
  Data DVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  JSONEncoder *pJVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x3b8);
  if (*(long *)(*(long *)(unaff_x22 + 1000) + 0x10) == 0) {
    _swift_bridgeObjectRelease();
    lVar8 = *(long *)(lVar8 + 0x70);
    *(long *)(unaff_x22 + 0x438) = lVar8;
    if (lVar8 == 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x3c0);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x3d0));
      _swift_unknownObjectRelease(uVar13);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_100538fa8;
    }
    lVar12 = *(long *)(*(long *)(unaff_x22 + 0x3b8) + 0x78);
    *(long *)(unaff_x22 + 0x440) = lVar12;
    lVar10 = lVar8;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x448) = lVar10;
    *(undefined8 *)(unaff_x22 + 0x450) = *(undefined8 *)(lVar12 + 0x10);
    uVar13 = *(undefined8 *)(lVar12 + 8);
    _swift_unknownObjectRetain(lVar8);
    UVar2 = Swift::Actor::get_unownedExecutor();
    UNRECOVERED_JUMPTABLE = FUN_1005394ac;
  }
  else {
    lVar10 = *(long *)(lVar8 + 0x70);
    *(long *)(unaff_x22 + 0x3f0) = lVar10;
    if (lVar10 == 0) {
      lVar10 = *(long *)(unaff_x22 + 0x3e0);
      pJVar11 = *(JSONEncoder **)(lVar8 + 0x130);
      *(long *)(unaff_x22 + 0x3a0) = *(long *)(unaff_x22 + 1000);
      puVar3 = &DAT_100fce8d0;
      FUN_1000f7830(&DAT_100fce8d0,&DAT_100c55870);
      puVar4 = puVar3;
      FUN_1005458e0();
      DVar5 = Foundation::JSONEncoder::_encode(pJVar11,puVar4,puVar3,puVar4);
      *(undefined **)(unaff_x22 + 0x418) = DVar5.unknown;
      *(undefined **)(unaff_x22 + 0x420) = puVar3;
      uVar9 = *(undefined8 *)(unaff_x22 + 1000);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x3c0);
      if (lVar10 == 0) {
        lVar8 = *(long *)(unaff_x22 + 0x3c8);
        _swift_bridgeObjectRelease(uVar9);
        _swift_getObjectType(uVar13);
        piVar7 = *(int **)(lVar8 + 0x28);
        iVar1 = *piVar7;
        plVar6 = (long *)(ulong)(uint)piVar7[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x428) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_100539400;
                    /* WARNING: Could not recover jumptable at 0x000100539034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar7))(DVar5.unknown,puVar3,uVar13,lVar8);
        return;
      }
      _swift_release(*(undefined8 *)(unaff_x22 + 0x3d0));
      _swift_bridgeObjectRelease(uVar9);
      _swift_unknownObjectRelease(uVar13);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100538fa8:
                    /* WARNING: Could not recover jumptable at 0x000100538fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    lVar12 = *(long *)(lVar8 + 0x78);
    *(long *)(unaff_x22 + 0x3f8) = lVar12;
    lVar8 = lVar10;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x400) = lVar8;
    *(undefined8 *)(unaff_x22 + 0x408) = *(undefined8 *)(lVar12 + 0x10);
    uVar13 = *(undefined8 *)(lVar12 + 8);
    _swift_unknownObjectRetain(lVar10);
    UVar2 = Swift::Actor::get_unownedExecutor();
    UNRECOVERED_JUMPTABLE = FUN_100539038;
  }
  _swift_task_switch(UNRECOVERED_JUMPTABLE,UVar2.unknown,uVar13);
  return;
}



/* Address: 0x100539038 | FUN_100539038 */

void FUN_100539038(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3b8);
  (**(code **)(unaff_x22 + 0x408))(uVar1,*(undefined8 *)(unaff_x22 + 0x3f8));
  *(undefined8 *)(unaff_x22 + 0x410) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_100539090,uVar2,0);
  return;
}



/* Address: 0x100539090 | FUN_100539090 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100539320 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100539090(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  Data DVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  int *piVar9;
  undefined8 uVar10;
  JSONEncoder *pJVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  long lVar15;
  String SVar16;
  String SVar17;
  
  lVar14 = *(long *)(unaff_x22 + 0x410);
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar14 + 0x20,unaff_x22 + 0x368);
  FUN_100076688(lVar14 + 0x20,unaff_x22 + 0x2b0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
  lVar13 = *(long *)(unaff_x22 + 0x2d0);
  FUN_100004640(unaff_x22 + 0x2b0,uVar10);
  (**(code **)(lVar13 + 0x70))(uVar10,lVar13);
  FUN_100004594(unaff_x22 + 0x2b0);
  if (((uint)uVar10 & 0xff) < 2) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x410);
    lVar15 = *(long *)(unaff_x22 + 1000);
    FUN_100076688(lVar14 + 0x20,unaff_x22 + 0x2d8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x2f0);
    lVar13 = *(long *)(unaff_x22 + 0x2f8);
    FUN_100004640(unaff_x22 + 0x2d8,uVar12);
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar6 = (char *)(unaff_x22 + 0x130);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x20) = 0x746e756f63;
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined1 **)(puVar2 + 0x28) = &DAT_e500000000000000;
    SVar16.bridgeObject = pcVar7;
    SVar16.str = pcVar6;
    Swift::String::reserveCapacity(2,SVar16);
    *(undefined8 *)(unaff_x22 + 0x398) = *(undefined8 *)(lVar15 + 0x10);
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar17.bridgeObject = pvVar8;
    SVar17.str = pcVar7;
    Swift::String::append(SVar16,SVar17);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
    puVar2[0x58] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    *(undefined1 *)(unaff_x22 + 0xd0) = 1;
    *(undefined1 *)(unaff_x22 + 0x10) = 1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000015;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad380;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dad360;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x267;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000015;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dad380;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad360;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x267;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 400);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xd0));
    (**(code **)(lVar13 + 0x28))(unaff_x22 + 0x10,uVar12,lVar13);
    _swift_release(uVar10);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x2d8);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x410));
  }
  lVar13 = *(long *)(unaff_x22 + 0x3e0);
  pJVar11 = *(JSONEncoder **)(*(long *)(unaff_x22 + 0x3b8) + 0x130);
  *(undefined8 *)(unaff_x22 + 0x3a0) = *(undefined8 *)(unaff_x22 + 1000);
  puVar2 = &DAT_100fce8d0;
  FUN_1000f7830(&DAT_100fce8d0,&DAT_100c55870);
  puVar3 = puVar2;
  FUN_1005458e0();
  DVar4 = Foundation::JSONEncoder::_encode(pJVar11,puVar3,puVar2,puVar3);
  *(undefined **)(unaff_x22 + 0x418) = DVar4.unknown;
  *(undefined **)(unaff_x22 + 0x420) = puVar2;
  if (lVar13 != 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 1000);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x3c0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x3d0));
    _swift_bridgeObjectRelease(uVar12);
    _swift_unknownObjectRelease(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100539374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar13 = *(long *)(unaff_x22 + 0x3c8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3c0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 1000));
  _swift_getObjectType(uVar10);
  piVar9 = *(int **)(lVar13 + 0x28);
  iVar1 = *piVar9;
  plVar5 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x428) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100539400;
                    /* WARNING: Could not recover jumptable at 0x0001005393fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(DVar4.unknown,puVar2,uVar10,lVar13);
  return;
}



/* Address: 0x100539400 | FUN_100539400 */

void FUN_100539400(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x430) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x428));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10053945c;
  }
  else {
    pcVar1 = FUN_100539714;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x3b8),0);
  return;
}



/* Address: 0x10053945c | FUN_10053945c */

void FUN_10053945c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3c0);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x418),*(undefined8 *)(unaff_x22 + 0x420));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005394a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005394ac | FUN_1005394ac */

void FUN_1005394ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3b8);
  (**(code **)(unaff_x22 + 0x450))(uVar1,*(undefined8 *)(unaff_x22 + 0x440));
  *(undefined8 *)(unaff_x22 + 0x458) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_100539504,uVar2,0);
  return;
}



/* Address: 0x100539504 | FUN_100539504 */

void FUN_100539504(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x458);
  _swift_beginAccess(lVar5 + 0x20,unaff_x22 + 0x380,0,0);
  FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x300);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x318);
  lVar3 = *(long *)(unaff_x22 + 800);
  FUN_100004640(unaff_x22 + 0x300,uVar1);
  (**(code **)(lVar3 + 0x70))(uVar1,lVar3);
  FUN_100004594(unaff_x22 + 0x300);
  if (((uint)uVar1 & 0xff) < 2) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x458);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x3c0);
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x328);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x340);
    lVar3 = *(long *)(unaff_x22 + 0x348);
    FUN_100004640(unaff_x22 + 0x328,uVar6);
    *(undefined1 *)(unaff_x22 + 0x70) = 1;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000002b;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad3a0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dad360;
    *(undefined8 *)(unaff_x22 + 200) = 0x263;
    *(undefined1 *)(unaff_x22 + 0x1f0) = 1;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd00000000000002b;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dad3a0;
    *(undefined8 *)(unaff_x22 + 0x210) = 0;
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = 0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dad360;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x263;
    FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x250);
    FUN_1004eaa3c(unaff_x22 + 0x1f0);
    (**(code **)(lVar3 + 0x28))(unaff_x22 + 0x70,uVar6,lVar3);
    _swift_release(uVar4);
    _swift_unknownObjectRelease(uVar2);
    _swift_release(uVar1);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    FUN_100004594(unaff_x22 + 0x328);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x3c0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x458));
    _swift_release(uVar2);
    _swift_unknownObjectRelease(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005396d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005396d4 | FUN_1005396d4 */

void FUN_1005396d4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3c0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x3d0));
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100539710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100539714 | FUN_100539714 */

void FUN_100539714(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3c0);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x418),*(undefined8 *)(unaff_x22 + 0x420));
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100539760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100539764 | FUN_100539764 */

void FUN_100539764(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  plVar1 = (long *)0x330;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005397b4;
  FUN_100539828(plVar1,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005397b4 | FUN_1005397b4 */

void FUN_1005397b4(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x98);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    uVar10 = *(undefined8 *)(lVar2 + 0x58);
    uVar9 = *(undefined8 *)(lVar2 + 0x50);
    puVar1[7] = *(undefined8 *)(lVar2 + 0x48);
    puVar1[6] = uVar8;
    puVar1[9] = uVar10;
    puVar1[8] = uVar9;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    uVar5 = *(undefined8 *)(lVar2 + 0x68);
    uVar4 = *(undefined8 *)(lVar2 + 0x60);
    uVar7 = *(undefined8 *)(lVar2 + 0x78);
    uVar6 = *(undefined8 *)(lVar2 + 0x70);
    uVar9 = *(undefined8 *)(lVar2 + 0x88);
    uVar8 = *(undefined8 *)(lVar2 + 0x80);
    puVar1[0x10] = *(undefined8 *)(lVar2 + 0x90);
    puVar1[0xd] = uVar7;
    puVar1[0xc] = uVar6;
    puVar1[0xf] = uVar9;
    puVar1[0xe] = uVar8;
    puVar1[0xb] = uVar5;
    puVar1[10] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100539824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100539828 | FUN_100539828 */

void FUN_100539828(undefined8 param_1)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2b0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x2a8) = param_1;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x2b8) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x2c0) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2c8) = uVar2;
  _swift_task_switch(FUN_10053988c);
  return;
}



/* Address: 0x10053988c | FUN_10053988c */

/* WARNING: Removing unreachable block (ram,0x000100539a3c) */

void FUN_10053988c(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  UUID UVar8;
  long *plVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  String SVar23;
  undefined7 uStack_c0;
  undefined1 local_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 local_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 local_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 local_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  
  if (DAT_100fce780 != -1) {
    _swift_once(&DAT_100fce780,FUN_1005286e4);
  }
  uVar7 = DAT_101057b38;
  uVar6 = DAT_101057b30;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2c8);
  lVar17 = *(long *)(unaff_x22 + 0x2c0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2b8);
  lVar13 = *(long *)(unaff_x22 + 0x2b0);
  uVar10 = 0;
  uVar11 = 0;
  _swift_beginAccess(lVar13 + 0xd8,unaff_x22 + 0x278);
  uVar4 = *(undefined2 *)(lVar13 + 0xd8);
  uVar1 = *(undefined1 *)(lVar13 + 0xda);
  uVar5 = *(undefined2 *)(lVar13 + 0xdb);
  uVar2 = *(undefined1 *)(lVar13 + 0xdd);
  uVar14 = *(undefined8 *)(lVar13 + 0xe0);
  uVar3 = *(undefined1 *)(lVar13 + 0xe8);
  uVar18 = *(undefined8 *)(lVar13 + 0xa8);
  uVar12 = *(undefined8 *)(lVar13 + 0xa0);
  uVar20 = *(undefined8 *)(lVar13 + 0xb8);
  uVar19 = *(undefined8 *)(lVar13 + 0xb0);
  uVar22 = *(undefined8 *)(lVar13 + 200);
  uVar21 = *(undefined8 *)(lVar13 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(lVar13 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x208) = uVar21;
  *(undefined8 *)(unaff_x22 + 0x1f0) = uVar18;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar12;
  uVar12 = *(undefined8 *)(lVar13 + 0x80);
  uVar19 = *(undefined8 *)(lVar13 + 0x98);
  uVar18 = *(undefined8 *)(lVar13 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(lVar13 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar19;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar18;
  uStack_a1 = (undefined1)*(undefined8 *)(lVar13 + 0x98);
  uStack_a0 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0x98) >> 8);
  local_a9 = (undefined1)*(undefined8 *)(lVar13 + 0x90);
  uStack_a8 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0x90) >> 8);
  uStack_b1 = (undefined1)*(undefined8 *)(lVar13 + 0x88);
  uStack_b0 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0x88) >> 8);
  local_b9 = (undefined1)*(undefined8 *)(lVar13 + 0x80);
  uStack_b8 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0x80) >> 8);
  uVar18 = *(undefined8 *)(lVar13 + 200);
  uVar12 = *(undefined8 *)(lVar13 + 0xd0);
  uStack_71 = (undefined1)uVar18;
  local_79 = (undefined1)*(undefined8 *)(lVar13 + 0xc0);
  uStack_78 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0xc0) >> 8);
  uStack_81 = (undefined1)*(undefined8 *)(lVar13 + 0xb8);
  uStack_80 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0xb8) >> 8);
  local_89 = (undefined1)*(undefined8 *)(lVar13 + 0xb0);
  uStack_88 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0xb0) >> 8);
  uStack_91 = (undefined1)*(undefined8 *)(lVar13 + 0xa8);
  uStack_90 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0xa8) >> 8);
  local_99 = (undefined1)*(undefined8 *)(lVar13 + 0xa0);
  uStack_98 = (undefined7)((ulong)*(undefined8 *)(lVar13 + 0xa0) >> 8);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar7);
  FUN_1004ddb74((undefined8 *)(unaff_x22 + 0x1c8),unaff_x22 + 0x220);
  UVar8 = Foundation::UUID::init();
  SVar23 = Foundation::UUID::get_uuidString(UVar8);
  (**(code **)(lVar17 + 8))(uVar15);
  *(ulong *)(unaff_x22 + 0x81) = CONCAT17(uStack_91,uStack_98);
  *(ulong *)(unaff_x22 + 0x79) = CONCAT17(local_99,uStack_a0);
  *(ulong *)(unaff_x22 + 0x91) = CONCAT17(uStack_81,uStack_88);
  *(ulong *)(unaff_x22 + 0x89) = CONCAT17(local_89,uStack_90);
  *(ulong *)(unaff_x22 + 0xa1) = CONCAT17(uStack_71,uStack_78);
  *(ulong *)(unaff_x22 + 0x99) = CONCAT17(local_79,uStack_80);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar12;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar18;
  *(ulong *)(unaff_x22 + 0x61) = CONCAT17(uStack_b1,uStack_b8);
  *(ulong *)(unaff_x22 + 0x59) = CONCAT17(local_b9,uStack_c0);
  *(String *)(unaff_x22 + 0x10) = SVar23;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x696c616974696e69;
  *(undefined8 *)(unaff_x22 + 0x30) = 0xea0000000000657a;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(undefined2 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x4a) = uVar1;
  *(undefined2 *)(unaff_x22 + 0x4b) = uVar5;
  *(undefined1 *)(unaff_x22 + 0x4d) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar14;
  *(undefined1 *)(unaff_x22 + 0x58) = uVar3;
  *(ulong *)(unaff_x22 + 0x71) = CONCAT17(uStack_a1,uStack_a8);
  *(ulong *)(unaff_x22 + 0x69) = CONCAT17(local_a9,uStack_b0);
  lVar13 = unaff_x22 + 0x10;
  FUN_100530b28();
  *(long *)(unaff_x22 + 0x2d0) = lVar13;
  *(undefined8 *)(unaff_x22 + 0x2d8) = uVar16;
  *(undefined1 *)(unaff_x22 + 800) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x2e0) = uVar11;
  plVar9 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2e8) = plVar9;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100539b18;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0xb8));
  return;
}



/* Address: 0x100539b18 | FUN_100539b18 */

void FUN_100539b18(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x2f0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x2e8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x2b0);
    pcVar1 = FUN_100539b78;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x2b0);
    pcVar1 = FUN_100539d24;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100539b78 | FUN_100539b78 */

void FUN_100539b78(void)

{
  undefined6 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2e0);
  lVar4 = *(long *)(unaff_x22 + 0x2b0);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x2d0),*(undefined8 *)(unaff_x22 + 0x2d8),
                *(undefined1 *)(unaff_x22 + 800));
  _swift_release(uVar5);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fcf0b8,&DAT_100c56fc0);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x1c0) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 200);
  uVar1 = *(undefined6 *)(unaff_x22 + 0x150);
  *(int *)(lVar4 + 0xea) = (int)*(undefined5 *)(unaff_x22 + 0x150);
  *(short *)(lVar4 + 0xee) = (short)((uint6)uVar1 >> 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x2f8) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x300) = uVar5;
  uVar6 = *(undefined8 *)(lVar4 + 0xf8);
  *(undefined8 *)(lVar4 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(lVar4 + 0xf8) = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = *(undefined8 *)(lVar4 + 0x108);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(lVar4 + 0x108) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(lVar4 + 0x100) = uVar7;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRelease(uVar6);
  lVar4 = *(long *)(lVar4 + 0x70);
  *(long *)(unaff_x22 + 0x308) = lVar4;
  if (lVar4 != 0) {
    uVar5 = 0;
    FUN_1004e9780(0);
    lVar2 = lVar4;
    _swift_dynamicCastClass(lVar4,uVar5);
    *(long *)(unaff_x22 + 0x310) = lVar2;
    if (lVar2 != 0) {
      _swift_unknownObjectRetain(lVar4);
      _swift_task_switch(FUN_100539d8c,lVar2,0);
      return;
    }
  }
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x318) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100539e9c;
  FUN_10052ff14(0xd000000000000019,0x8000000100dab4f0);
  return;
}



/* Address: 0x100539d24 | FUN_100539d24 */

void FUN_100539d24(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2e0);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x2d0),*(undefined8 *)(unaff_x22 + 0x2d8),
                *(undefined1 *)(unaff_x22 + 800));
  _swift_release(uVar1);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fcf0b8,&DAT_100c56fc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2c8));
                    /* WARNING: Could not recover jumptable at 0x000100539d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100539d8c | FUN_100539d8c */

void FUN_100539d8c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2b0);
  puVar1 = (undefined8 *)
           (*(long *)(unaff_x22 + 0x310) + _TtC3MCP19HTTPClientTransport::protocolVersion);
  _swift_beginAccess(puVar1,unaff_x22 + 0x290,1,0);
  uVar4 = puVar1[1];
  *puVar1 = uVar5;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  _swift_task_switch(FUN_100539e1c,uVar2,0);
  return;
}



/* Address: 0x100539e1c | FUN_100539e1c */

void FUN_100539e1c(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x308));
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x318) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100539e9c;
  FUN_10052ff14(0xd000000000000019,0x8000000100dab4f0);
  return;
}



/* Address: 0x100539e9c | FUN_100539e9c */

void FUN_100539e9c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x318));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x2c8);
    puVar2 = *(undefined8 **)(lVar3 + 0x2a8);
    uVar5 = *(undefined8 *)(lVar3 + 0x170);
    uVar7 = *(undefined8 *)(lVar3 + 0x188);
    uVar6 = *(undefined8 *)(lVar3 + 0x180);
    uVar11 = *(undefined8 *)(lVar3 + 0x158);
    uVar10 = *(undefined8 *)(lVar3 + 0x150);
    uVar9 = *(undefined8 *)(lVar3 + 0x168);
    uVar8 = *(undefined8 *)(lVar3 + 0x160);
    puVar2[7] = *(undefined8 *)(lVar3 + 0x178);
    puVar2[6] = uVar5;
    puVar2[9] = uVar7;
    puVar2[8] = uVar6;
    puVar2[3] = uVar11;
    puVar2[2] = uVar10;
    puVar2[5] = uVar9;
    puVar2[4] = uVar8;
    uVar8 = *(undefined8 *)(lVar3 + 0x1a8);
    uVar7 = *(undefined8 *)(lVar3 + 0x1a0);
    uVar6 = *(undefined8 *)(lVar3 + 0x1b8);
    uVar5 = *(undefined8 *)(lVar3 + 0x1b0);
    uVar10 = *(undefined8 *)(lVar3 + 0x198);
    uVar9 = *(undefined8 *)(lVar3 + 400);
    puVar2[0x10] = *(undefined8 *)(lVar3 + 0x1c0);
    puVar2[0xd] = uVar8;
    puVar2[0xc] = uVar7;
    puVar2[0xf] = uVar6;
    puVar2[0xe] = uVar5;
    puVar2[0xb] = uVar10;
    puVar2[10] = uVar9;
    uVar5 = *(undefined8 *)(lVar3 + 0x140);
    puVar2[1] = *(undefined8 *)(lVar3 + 0x148);
    *puVar2 = uVar5;
  }
  else {
    FUN_1004e018c(lVar3 + 0x140);
    uVar1 = *(undefined8 *)(lVar3 + 0x2c8);
  }
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100539f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x100539f28 | FUN_100539f28 */

void FUN_100539f28(void)

{
  UUID UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x40) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  _swift_task_switch(FUN_100539f88);
  return;
}



/* Address: 0x100539f88 | FUN_100539f88 */

/* WARNING: Removing unreachable block (ram,0x00010053a014) */

void FUN_100539f88(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  UUID UVar3;
  long *plVar4;
  Task TVar5;
  undefined8 uVar6;
  String *pSVar7;
  long unaff_x22;
  String SVar8;
  
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  UVar3 = Foundation::UUID::init();
  SVar8 = Foundation::UUID::get_uuidString(UVar3);
  *(void **)(unaff_x22 + 0x58) = SVar8.bridgeObject;
  (**(code **)(lVar1 + 8))(uVar2);
  pSVar7 = (String *)(unaff_x22 + 0x10);
  *pSVar7 = SVar8;
  *(undefined1 *)(unaff_x22 + 0x20) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0x676e6970;
  *(undefined1 **)(unaff_x22 + 0x30) = &DAT_e400000000000000;
  FUN_100530e20();
  *(String **)(unaff_x22 + 0x60) = pSVar7;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  *(undefined1 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  plVar4 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar4;
  TVar5.unknown = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10053a0bc;
  Swift::Task::get_value(TVar5);
  return;
}


