/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10080a448 | FUN_10080a448 */

undefined1  [16] FUN_10080a448(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x10;
  return auVar1;
}



/* Address: 0x10080a454 | FUN_10080a454 */

void FUN_10080a454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long *plVar8;
  uint uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = (uint)*(byte *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x98);
  plVar8 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)thunk_FUN_1005c804c;
  FUN_100809288(plVar8,param_1,param_2,param_3,param_4,uVar9,uVar2,uVar5,uVar11,uVar16,uVar18,uVar3,
                uVar6,uVar7,uVar9,uVar12,uVar14,uVar17,uVar19,uVar13,uVar15,uVar10,uVar1,uVar4);
  return;
}



/* Address: 0x10080a558 | FUN_10080a558 */

void FUN_10080a558(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_deallocObject();
  return;
}



/* Address: 0x10080a5b8 | FUN_10080a5b8 */

void FUN_10080a5b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008095c4(param_1,*(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x10080a614 | FUN_10080a614 */

void FUN_10080a614(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe7220 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe7210;
  FUN_1000f8b08(&DAT_100fe7210,&DAT_100c7bbd0);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7d4e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d4e0,puVar1);
  DAT_100fe7220 = pTVar2;
  return;
}



/* Address: 0x10080a664 | FUN_10080a664 */

void FUN_10080a664(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10080607c(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10080a674 | FUN_10080a674 */

undefined8 FUN_10080a674(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7238;
  FUN_1000f7830(&DAT_100fe7238,&DAT_100c7c0c0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10080a6bc | FUN_10080a6bc */

void FUN_10080a6bc(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  FUN_1007fb2ec();
  return;
}



/* Address: 0x10080a6d0 | FUN_10080a6d0 */

void FUN_10080a6d0(long *param_1,long param_2,long param_3,ushort param_4)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = param_2;
  (**(code **)(unaff_x20 + 0x20))();
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,uVar4,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  uVar3 = 0x100;
  if (*(char *)(param_2 + *(int *)(lVar2 + 0x30)) == '\0') {
    uVar3 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = param_3;
  *(ushort *)(param_1 + 2) = uVar3 | param_4 & 0xff;
  return;
}



/* Address: 0x10080a754 | FUN_10080a754 */

undefined8 FUN_10080a754(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1007fb264();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10080a790 | FUN_10080a790 */

void FUN_10080a790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long *plVar6;
  uint uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = (uint)*(byte *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar5 = *(undefined1 *)(unaff_x20 + 0x68);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xa0);
  plVar6 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1005c804c;
  FUN_1008086d4(plVar6,param_1,param_2,param_3,param_4,uVar7,uVar2,uVar4,uVar10,uVar17,uVar19,uVar11
                ,uVar14,uVar9,uVar5,uVar7,uVar18,uVar20,uVar12,uVar15,uVar13,uVar16,uVar8,uVar1,
                uVar3);
  return;
}



/* Address: 0x10080a8a0 | FUN_10080a8a0 */

void FUN_10080a8a0(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar3 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x38 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  uVar4 = *(long *)(lVar5 + 0x40) + uVar6 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,lVar3);
  plVar1 = (long *)(unaff_x20 + uVar4);
  if (*plVar1 != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(plVar1[1]);
  }
  _swift_release(plVar1[2]);
  puVar2 = (undefined8 *)(unaff_x20 + uVar4 + 0x18);
  _swift_bridgeObjectRelease(*puVar2);
  _swift_bridgeObjectRelease(puVar2[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar4 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar4 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x10080a97c | FUN_10080a97c */

void FUN_10080a97c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint uVar19;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar20;
  ulong uVar21;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar14 = *(long *)(lVar2 + -8);
  uVar16 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar21 = uVar16 + 0x38 & (uVar16 ^ 0xffffffffffffffff);
  uVar16 = *(long *)(lVar14 + 0x40) + uVar21 + 7 & 0xfffffffffffffff8;
  uVar19 = (uint)*(byte *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1 = (undefined8 *)(unaff_x20 + uVar16);
  uVar4 = *puVar1;
  uVar9 = puVar1[1];
  uVar15 = puVar1[2];
  puVar1 = (undefined8 *)(unaff_x20 + uVar16 + 0x18);
  uVar17 = *puVar1;
  uVar18 = puVar1[1];
  uVar12 = *(undefined1 *)(puVar1 + 2);
  puVar1 = (undefined8 *)(unaff_x20 + uVar16 + 0x30);
  uVar20 = *(undefined8 *)(unaff_x20 + uVar16 + 0x40);
  uVar5 = *puVar1;
  uVar10 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar16 + 0x48);
  uVar6 = *puVar1;
  uVar11 = puVar1[1];
  plVar13 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)thunk_FUN_1005c804c;
  FUN_100808b00(plVar13,param_1,param_2,uVar19,uVar3,uVar8,unaff_x20 + uVar21,uVar4,uVar9,uVar15,
                uVar17,uVar18,uVar12,uVar19,uVar5,uVar10,uVar20,uVar6,uVar11,lVar2,uVar7);
  return;
}



/* Address: 0x10080aad4 | FUN_10080aad4 */

void FUN_10080aad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long *plVar8;
  uint uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = (uint)*(byte *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x98);
  plVar8 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1005c804c;
  FUN_100807c70(plVar8,param_1,param_2,param_3,param_4,uVar9,uVar2,uVar5,uVar11,uVar16,uVar18,uVar3,
                uVar6,uVar7,uVar9,uVar12,uVar14,uVar17,uVar19,uVar13,uVar15,uVar10,uVar1,uVar4);
  return;
}



/* Address: 0x10080abd8 | FUN_10080abd8 */

void FUN_10080abd8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_deallocObject();
  return;
}



/* Address: 0x10080ac38 | FUN_10080ac38 */

void FUN_10080ac38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long *plVar10;
  uint uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = (uint)*(byte *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar9 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x88);
  plVar10 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1005c804c;
  FUN_100807fd8(plVar10,param_1,param_2,uVar11,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar13,uVar9,
                uVar11,uVar16,uVar17,uVar14,uVar15,uVar12,uVar1,uVar5);
  return;
}



/* Address: 0x10080ad18 | FUN_10080ad18 */

void FUN_10080ad18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008090a4(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2);
  return;
}



/* Address: 0x10080ad38 | FUN_10080ad38 */

void FUN_10080ad38(long *param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = param_2;
  (**(code **)(unaff_x20 + 0x20))();
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,uVar4,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  uVar1 = *(undefined1 *)(param_2 + *(int *)(lVar3 + 0x30));
  *param_1 = lVar2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  *(undefined1 *)((long)param_1 + 0x11) = uVar1;
  return;
}



/* Address: 0x10080adc0 | FUN_10080adc0 */

void FUN_10080adc0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008078b8(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10080add0 | FUN_10080add0 */

void FUN_10080add0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008071d8(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10080ade4 | thunk_FUN_10080ae48 */

void thunk_FUN_10080ae48(void)

{
  FUN_10080ae48();
  return;
}



/* Address: 0x10080ade8 | FUN_10080ade8 */

void FUN_10080ade8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100806a2c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10080adf4 | FUN_10080adf4 */

void FUN_10080adf4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100806bb0(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10080ae00 | FUN_10080ae00 */

void FUN_10080ae00(void)

{
  FUN_10080af3c();
  return;
}



/* Address: 0x10080ae14 | FUN_10080ae14 */

void FUN_10080ae14(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10080ae38 | thunk_FUN_10080af20 */

void thunk_FUN_10080af20(void)

{
  FUN_10082ebc8();
  return;
}



/* Address: 0x10080ae3c | FUN_10080ae3c */

void FUN_10080ae3c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10080607c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10080ae48 | FUN_10080ae48 */

void FUN_10080ae48(long *param_1,long param_2,long param_3,ushort param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = param_2;
  (**(code **)(unaff_x20 + 0x18))();
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,uVar1,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  uVar4 = 0x100;
  if (*(char *)(param_2 + *(int *)(lVar3 + 0x30)) == '\0') {
    uVar4 = 0;
  }
  *param_1 = lVar2;
  param_1[1] = param_3;
  *(ushort *)(param_1 + 2) = uVar4 | param_4 & 0xff;
  return;
}



/* Address: 0x10080aecc | FUN_10080aecc */

void FUN_10080aecc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008058fc(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Address: 0x10080aeec | FUN_10080aeec */

undefined8 FUN_10080aeec(undefined8 param_1)

{
  FUN_1007fc114();
  return param_1;
}



/* Address: 0x10080af20 | FUN_10080af20 */

void FUN_10080af20(void)

{
  FUN_10082ebc8();
  return;
}



/* Address: 0x10080af3c | FUN_10080af3c */

void FUN_10080af3c(long *param_1,long param_2,long param_3,ushort param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = param_2;
  (**(code **)(unaff_x20 + 0x18))();
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,uVar1,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  uVar4 = 0x100;
  if (*(char *)(param_2 + *(int *)(lVar3 + 0x30)) == '\0') {
    uVar4 = 0;
  }
  *param_1 = lVar2;
  param_1[1] = param_3;
  *(ushort *)(param_1 + 2) = uVar4 | param_4 & 0xff;
  return;
}



/* Address: 0x10080afd0 | thunk_FUN_10080ae14 */

void thunk_FUN_10080ae14(void)

{
  FUN_10080ae14();
  return;
}



/* Address: 0x10080afd4 | thunk_FUN_10080ae14 */

void thunk_FUN_10080ae14(void)

{
  FUN_10080ae14();
  return;
}



/* Address: 0x10080afd8 | thunk_FUN_100807c10 */

void thunk_FUN_100807c10(void)

{
  FUN_100807c10();
  return;
}



/* Address: 0x10080afdc | FUN_10080afdc */

void FUN_10080afdc(void)

{
  FUN_10080a40c();
  return;
}



/* Address: 0x10080aff0 | FUN_10080aff0 */

void FUN_10080aff0(void)

{
  FUN_10080aecc();
  return;
}



/* Address: 0x10080b004 | thunk_FUN_10080af20 */

void thunk_FUN_10080af20(void)

{
  FUN_10082ebc8();
  return;
}



/* Address: 0x10080b008 | FUN_10080b008 */

void FUN_10080b008(void)

{
  FUN_10080ae00();
  return;
}



/* Address: 0x10080b01c | thunk_FUN_10080a3b0 */

void thunk_FUN_10080a3b0(void)

{
  FUN_10080a3b0();
  return;
}



/* Address: 0x10080b020 | thunk_FUN_10080a3b0 */

void thunk_FUN_10080a3b0(void)

{
  FUN_10080a3b0();
  return;
}



/* Address: 0x10080b024 | thunk_FUN_10080a3b0 */

void thunk_FUN_10080a3b0(void)

{
  FUN_10080a3b0();
  return;
}



/* Address: 0x10080b028 | FUN_10080b028 */

void FUN_10080b028(void)

{
  FUN_10080ad18();
  return;
}



/* Address: 0x10080b03c | thunk_FUN_10080ae48 */

void thunk_FUN_10080ae48(void)

{
  FUN_10080ae48();
  return;
}



/* Address: 0x10080b040 | FUN_10080b040 */

undefined1  [16]
FUN_10080b040(undefined1 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  byte bVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 **ppuVar11;
  long lVar12;
  Date DVar13;
  undefined1 *puVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  undefined *puVar21;
  ushort uVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 *apuStack_130 [2];
  undefined8 local_120;
  undefined1 **local_118;
  undefined1 *local_110 [2];
  uint local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined1 *local_d0;
  long local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined1 *local_78;
  long lStack_70;
  
  uVar23 = *(ulong *)(param_9 + 0x10);
  local_f8 = param_6;
  uStack_f0 = param_4;
  local_e8 = param_5;
  _swift_bridgeObjectRetain(uVar23);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar15 = 0;
  uVar17 = uVar23;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082ebc8();
  puVar14 = param_1;
  lVar20 = param_2;
  uVar18 = uVar15;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  local_e0 = param_3;
  local_c8 = lVar20;
  FUN_1007fb2c4(param_2,uVar15,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  lVar20 = local_c8;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar14;
    bVar8 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar8 & 1) != 0) {
      puVar21 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar21,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar21 = (undefined *)0x0;
  }
  else if ((uVar16 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar14,local_c8,uVar18,uVar16 >> 0x10);
    puVar21 = (undefined *)0x0;
  }
  else {
    if ((uVar18 & 0xff) == 0) {
      FUN_1007fb28c(puVar14,local_c8,uVar18);
      puVar21 = (undefined *)0x0;
      uVar22 = (ushort)uVar18 & 0x100;
      puVar9 = puVar14;
      goto LAB_10080b1e8;
    }
    puVar9 = puVar14;
    FUN_1000f4a4c(puVar14,local_c8,uVar18);
    puVar10 = puVar9;
    FUN_10080b43c();
    puVar21 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar10,0,0);
    *puVar10 = (char)puVar9;
    puVar10[1] = 0;
    _swift_willThrow();
  }
  lVar20 = 0;
  uVar22 = 0;
  puVar9 = (undefined1 *)0x0;
LAB_10080b1e8:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar21);
    FUN_1007fb2c4(puVar14,local_c8,uVar18,uVar16 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_fc = uVar16 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    local_110[0] = local_78;
    local_120 = lStack_70;
    ppuVar11 = local_90;
    FUN_100004640();
    lVar12 = 0;
    local_118 = ppuVar11;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar10 = (undefined1 *)((long)apuStack_130 + lVar4);
    apuStack_130[1] = puVar14;
    local_110[1] = (undefined1 *)apuStack_130;
    FUN_1007fb128();
    puVar6 = local_e8;
    DVar13.unknown = local_e8;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar13);
    *puVar10 = 0;
    lVar7 = local_d8;
    *(undefined1 **)((long)apuStack_130 + lVar4 + 8) = local_d0;
    *(long *)((long)&local_120 + lVar4) = lVar7;
    *(undefined1 *)((long)&local_118 + lVar4) = 0;
    uVar5 = local_f8;
    *(undefined8 *)((long)local_110 + lVar4) = uStack_f0;
    *(undefined **)((long)local_110 + lVar4 + 8) = puVar6;
    *(undefined8 *)(&stack0xffffffffffffff00 + lVar4) = uVar5;
    puVar14 = (undefined1 *)0x0;
    if (lVar20 != 0) {
      puVar14 = puVar9;
    }
    uVar2 = 0x200;
    if (lVar20 != 0) {
      uVar2 = uVar22;
    }
    iVar3 = *(int *)(lVar12 + 0x18);
    *(undefined8 *)(puVar10 + *(int *)(lVar12 + 0x14)) = local_e0;
    *(undefined **)(puVar10 + iVar3) = puVar21;
    puVar1 = (undefined8 *)(puVar10 + *(int *)(lVar12 + 0x1c));
    *puVar1 = puVar14;
    puVar1[1] = lVar20;
    *(ushort *)(puVar1 + 2) = uVar2;
    lVar4 = local_120;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar19 = *(code **)(local_120 + 8);
    _swift_bridgeObjectRetain(lVar20);
    _swift_errorRetain(puVar21);
    (*pcVar19)(puVar10,local_110[0],lVar4);
    FUN_1007fb2c4(apuStack_130[1],local_c8,uVar18,local_fc);
    _swift_errorRelease(puVar21);
    FUN_10080a754(puVar10);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(uVar23);
  puVar14 = (undefined1 *)0x0;
  if (lVar20 != 0) {
    puVar14 = puVar9;
  }
  auVar24._8_8_ = lVar20;
  auVar24._0_8_ = puVar14;
  return auVar24;
}



/* Address: 0x10080b3ec | FUN_10080b3ec */

undefined8 FUN_10080b3ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7238;
  FUN_1000f7830(&DAT_100fe7238,&DAT_100c7c0c0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10080b43c | FUN_10080b43c */

void FUN_10080b43c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe7248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7b9f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7b9f8,&DAT_100f04860);
  DAT_100fe7248 = pTVar1;
  return;
}



/* Address: 0x10080b47c | FUN_10080b47c */

undefined1  [16]
FUN_10080b47c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined *param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,long param_11)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  byte bVar6;
  long lVar7;
  Date DVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined2 uVar17;
  code *pcVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined1 *apuStack_130 [2];
  undefined8 local_120;
  undefined1 *local_118;
  undefined *local_110 [3];
  uint local_f4;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  local_f0 = param_11;
  uVar20 = *(ulong *)(param_11 + 0x10);
  local_110[0] = param_6;
  local_110[1] = param_7;
  local_110[2] = (undefined *)param_8;
  local_d0 = param_4;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_9,param_10);
  uVar12 = 0;
  uVar15 = uVar20;
  local_e0 = param_2;
  local_d8 = param_1;
  FUN_10082ebc8();
  local_f4 = (uint)param_3;
  puVar11 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_e8 = param_3;
  local_c8 = uVar13;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  uVar13 = local_c8;
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar11;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar16 & 0xff) == 0) {
        local_f4 = uVar14 >> 8 & 1;
        FUN_1007fb28c(puVar11,local_c8,uVar16);
        puVar19 = (undefined *)0x0;
        local_d0 = puVar11;
      }
      else {
        puVar9 = puVar11;
        FUN_1000f4a4c(puVar11,local_c8,uVar16);
        puVar10 = puVar9;
        FUN_10080b43c();
        puVar19 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar10,0,0);
        *puVar10 = (char)puVar9;
        puVar10[1] = 0;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_5);
        uVar13 = param_5;
      }
      goto LAB_10080b5e0;
    }
    FUN_1007fb2c4(puVar11,local_c8,uVar16,uVar14 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_5);
  puVar19 = (undefined *)0x0;
  uVar13 = param_5;
LAB_10080b5e0:
  FUN_10080b3ec(local_f0 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(puVar11,local_c8,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    local_f0 = CONCAT44(local_f0._4_4_,uVar14 >> 0x10);
    FUN_100076508(auStack_b8,local_90);
    FUN_100004640(local_90,local_78);
    lVar7 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar9 = (undefined1 *)((long)apuStack_130 + lVar3);
    local_120 = uVar20;
    local_118 = (undefined1 *)apuStack_130;
    FUN_1007fb128();
    puVar4 = local_110[1];
    DVar8.unknown = local_110[1];
    apuStack_130[1] = puVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar8);
    *puVar9 = 0;
    uVar5 = local_e0;
    *(undefined1 **)((long)apuStack_130 + lVar3 + 8) = local_d8;
    *(undefined8 *)((long)&local_120 + lVar3) = uVar5;
    *(undefined1 *)((long)&local_118 + lVar3) = 0;
    *(undefined **)((long)local_110 + lVar3) = local_110[0];
    *(undefined **)((long)local_110 + lVar3 + 8) = puVar4;
    *(undefined **)((long)local_110 + lVar3 + 0x10) = local_110[2];
    uVar17 = 0x100;
    if ((local_f4 & 1) == 0) {
      uVar17 = 0;
    }
    iVar2 = *(int *)(lVar7 + 0x18);
    *(undefined8 *)(puVar9 + *(int *)(lVar7 + 0x14)) = local_e8;
    *(undefined **)(puVar9 + iVar2) = puVar19;
    puVar11 = local_d0;
    puVar1 = (undefined8 *)(puVar9 + *(int *)(lVar7 + 0x1c));
    *puVar1 = local_d0;
    puVar1[1] = uVar13;
    *(undefined2 *)(puVar1 + 2) = uVar17;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar18 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    _swift_bridgeObjectRetain(uVar13);
    (*pcVar18)(puVar9,local_78,lStack_70);
    FUN_1007fb2c4(apuStack_130[1],local_c8,uVar16,local_f0 & 0xffffffff);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar9);
    FUN_100004594(local_90);
    _swift_bridgeObjectRelease(local_120);
    local_d0 = puVar11;
  }
  auVar21._8_8_ = uVar13;
  auVar21._0_8_ = local_d0;
  return auVar21;
}



/* Address: 0x10080b844 | FUN_10080b844 */

undefined1  [16]
FUN_10080b844(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  long lVar10;
  Date DVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined8 **local_140 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *local_118 [3];
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  uVar19 = *(ulong *)(param_9 + 0x10);
  local_118[0] = param_4;
  local_118[1] = (undefined8 *)param_5;
  local_118[2] = (undefined8 *)param_6;
  _swift_bridgeObjectRetain(uVar19);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 0;
  puVar22 = param_1;
  uVar23 = param_2;
  uVar17 = uVar19;
  FUN_10082ebc8();
  puVar13 = puVar22;
  uVar15 = uVar23;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar23,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar7 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar20 = uVar16 & 0x1ff;
      bVar5 = (uVar18 & 0xff) == 0;
      if (bVar5) {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar22 = (undefined8 *)0x0;
        uVar23 = uVar15;
      }
      else {
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar8 = puVar7;
        FUN_10080b43c();
        puVar22 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar8,0,0);
        *(char *)puVar8 = (char)puVar7;
        *(undefined1 *)((long)puVar8 + 1) = 0;
        _swift_willThrow();
        _swift_errorRetain(puVar22);
        local_54 = 0;
        puVar7 = puVar22;
        uVar23 = 0;
      }
      bVar5 = !bVar5;
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      local_f8 = puVar13;
      uStack_f0 = uVar15;
      goto LAB_10080ba90;
    }
    FUN_10080a3bc();
    puVar7 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar22,0,0);
    *puVar22 = param_1;
    puVar22[1] = param_2;
    puVar22[2] = 0;
    puVar22[3] = 0;
    *(undefined1 *)(puVar22 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar7);
  uVar23 = 0;
  puVar22 = (undefined8 *)0x0;
  uStack_f0 = 0;
  uVar20 = 0;
  bVar5 = true;
  local_58 = 1;
  local_54 = 0;
  local_f8 = puVar7;
LAB_10080ba90:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_128 = local_78;
    local_130 = local_70;
    ppuVar9 = local_90;
    FUN_100004640();
    lVar10 = 0;
    local_140[0] = ppuVar9;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar21 = (undefined1 *)((long)local_140 + lVar4);
    local_140[1] = local_140;
    uStack_120._4_4_ = uVar20;
    FUN_1007fb128();
    puVar8 = local_118[1];
    DVar11.unknown = (undefined *)local_118[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar11);
    *puVar21 = 0;
    *(undefined8 **)((long)local_140 + lVar4 + 8) = param_1;
    *(undefined8 *)((long)&local_130 + lVar4) = param_2;
    *(undefined1 *)((long)&local_128 + lVar4) = 0;
    *(undefined8 **)((long)&uStack_120 + lVar4) = local_118[0];
    *(undefined8 **)((long)local_118 + lVar4) = puVar8;
    uVar1 = 0;
    if (bVar5 == false) {
      uVar1 = (short)(local_54 << 8);
    }
    uVar2 = 0;
    if (bVar5 == false) {
      uVar2 = uVar23;
    }
    *(undefined8 **)((long)local_118 + lVar4 + 8) = local_118[2];
    _swift_errorRetain(puVar22);
    FUN_100813fa8(puVar7,uVar23,local_54,bVar5);
    _swift_errorRelease(0);
    iVar3 = *(int *)(lVar10 + 0x18);
    *(undefined8 *)(puVar21 + *(int *)(lVar10 + 0x14)) = param_3;
    *(undefined8 **)(puVar21 + iVar3) = puVar22;
    puVar8 = (undefined8 *)(puVar21 + *(int *)(lVar10 + 0x1c));
    *puVar8 = puVar7;
    puVar8[1] = uVar2;
    *(undefined2 *)(puVar8 + 2) = uVar1;
    *(bool *)((long)puVar8 + 0x12) = bVar5;
    (**(code **)(local_130 + 8))(puVar21,local_128);
    uVar20 = uStack_120._4_4_;
    FUN_10080a754(puVar21);
    FUN_100004594(local_90);
  }
  if (bVar5 == false) {
    _swift_bridgeObjectRetain(uVar23);
    FUN_10080a6bc(local_f8,uStack_f0,uVar20,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_100813f90(puVar7,uVar23,local_54,0);
    _swift_errorRelease(puVar22);
    _swift_bridgeObjectRelease(uVar19);
  }
  else {
    local_90[0] = puVar7;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar7);
    if ((bVar6 & 1) != 0) {
      puVar12 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar12,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_f8,uStack_f0,uVar20,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_100813f90(puVar7,uVar23,local_54,1);
    _swift_errorRelease(puVar22);
    _swift_bridgeObjectRelease(uVar19);
  }
  auVar24._8_8_ = uVar23;
  auVar24._0_8_ = puVar7;
  return auVar24;
}



/* Address: 0x10080bd80 | FUN_10080bd80 */

undefined1  [16]
FUN_10080bd80(undefined1 ***param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 ***pppuVar7;
  undefined1 ***pppuVar8;
  undefined8 ***pppuVar9;
  long lVar10;
  Date DVar11;
  undefined1 ***pppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  undefined8 uVar17;
  short sVar18;
  uint uVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  code *pcVar23;
  undefined1 auVar24 [16];
  undefined1 ***local_120 [2];
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined *local_f8 [5];
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 **local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar22 = *(ulong *)(param_9 + 0x10);
  local_f8[0] = param_4;
  local_f8[1] = param_5;
  local_f8[2] = (undefined *)param_6;
  _swift_bridgeObjectRetain(uVar22);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar13 = 1;
  uVar16 = uVar22;
  local_f8[4] = (undefined *)param_2;
  local_d0 = param_1;
  FUN_10082ebc8();
  pppuVar12 = param_1;
  uVar14 = param_2;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  local_f8[3] = (undefined *)param_3;
  local_c8 = uVar14;
  FUN_1007fb2c4(param_2,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = pppuVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar20 = (undefined *)0x0;
  }
  else if ((uVar15 & 0xff00) == 0x200) {
    FUN_1007fb2c4(pppuVar12,local_c8,uVar17,uVar15 >> 0x10);
    puVar20 = (undefined *)0x0;
  }
  else {
    if ((uVar15 & 0xff) == 1) {
      uVar19 = uVar15 >> 8 & 1;
      FUN_1007fb28c(pppuVar12,local_c8,uVar17);
      puVar20 = (undefined *)0x0;
      pppuVar7 = pppuVar12;
      goto LAB_10080bf58;
    }
    pppuVar7 = pppuVar12;
    FUN_1000f4a4c(pppuVar12,local_c8,uVar17);
    pppuVar8 = pppuVar7;
    FUN_10080b43c();
    puVar20 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,pppuVar8,0,0);
    *(char *)pppuVar8 = (char)pppuVar7;
    *(undefined1 *)((long)pppuVar8 + 1) = 1;
    _swift_willThrow();
  }
  uVar19 = 2;
  pppuVar7 = (undefined1 ***)0x0;
LAB_10080bf58:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(pppuVar12,local_c8,uVar17,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_f8[4]);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_f8[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    uStack_100._4_4_ = uVar15 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    pppuVar9 = local_90;
    FUN_100004640(pppuVar9,local_78);
    lVar10 = 0;
    local_120[1] = (undefined1 ***)pppuVar9;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar21 = (undefined1 *)((long)local_120 + lVar3);
    local_120[0] = pppuVar12;
    local_108 = (undefined1 *)local_120;
    FUN_1007fb128();
    puVar4 = local_f8[1];
    DVar11.unknown = local_f8[1];
    local_110 = uVar22;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar11);
    *puVar21 = 0;
    puVar5 = local_f8[4];
    *(undefined8 ***)((long)local_120 + lVar3 + 8) = local_d0;
    *(undefined **)((long)&local_110 + lVar3) = puVar5;
    *(undefined1 *)((long)&local_108 + lVar3) = 1;
    *(undefined **)((long)&uStack_100 + lVar3) = local_f8[0];
    *(undefined **)((long)local_f8 + lVar3) = puVar4;
    puVar4 = local_f8[3];
    *(undefined **)((long)local_f8 + lVar3 + 8) = local_f8[2];
    pppuVar12 = (undefined1 ***)0x0;
    if (uVar19 != 2) {
      pppuVar12 = pppuVar7;
    }
    sVar18 = 0x200;
    if (uVar19 != 2) {
      sVar18 = ((ushort)uVar19 & 1) * 0x100 + 1;
    }
    iVar2 = *(int *)(lVar10 + 0x18);
    *(undefined **)(puVar21 + *(int *)(lVar10 + 0x14)) = puVar4;
    *(undefined **)(puVar21 + iVar2) = puVar20;
    puVar1 = (undefined8 *)(puVar21 + *(int *)(lVar10 + 0x1c));
    *puVar1 = pppuVar12;
    puVar1[1] = 0;
    *(short *)(puVar1 + 2) = sVar18;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar23 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar20);
    (*pcVar23)(puVar21,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar17,uStack_100._4_4_);
    _swift_errorRelease(puVar20);
    FUN_10080a754(puVar21);
    FUN_100004594(local_90);
    uVar22 = local_110;
  }
  _swift_bridgeObjectRelease(uVar22);
  pppuVar12 = (undefined1 ***)0x0;
  if (uVar19 != 2) {
    pppuVar12 = pppuVar7;
  }
  auVar24[8] = uVar19 == 2;
  auVar24._0_8_ = pppuVar12;
  auVar24._9_7_ = 0;
  return auVar24;
}



/* Address: 0x10080c12c | FUN_10080c12c */

undefined1 *
FUN_10080c12c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined1 *local_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined8 local_108;
  undefined *local_100 [2];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined1 *local_78;
  long lStack_70;
  
  uVar18 = *(ulong *)(param_10 + 0x10);
  local_108 = param_5;
  local_100[0] = param_6;
  local_100[1] = (undefined *)param_7;
  local_c8 = param_4;
  _swift_bridgeObjectRetain(uVar18);
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar11 = 1;
  puVar6 = param_1;
  local_e0 = param_2;
  local_d8 = uVar18;
  FUN_10082ebc8();
  local_ec = (uint)param_3;
  puVar10 = puVar6;
  uVar12 = param_2;
  uVar14 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar14;
  local_e8 = param_3;
  local_d0 = uVar12;
  FUN_1007fb2c4(param_2,uVar11,uVar18,uVar18 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar6);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar17 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar17,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar17 = (undefined *)0x0;
  }
  else if ((uVar13 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar10,local_d0,uVar14,uVar13 >> 0x10);
    puVar17 = (undefined *)0x0;
  }
  else if ((uVar13 & 0xff) == 1) {
    local_ec = uVar13 >> 8 & 1;
    FUN_1007fb28c(puVar10,local_d0,uVar14);
    puVar17 = (undefined *)0x0;
    local_c8 = puVar10;
  }
  else {
    puVar6 = puVar10;
    FUN_1000f4a4c(puVar10,local_d0,uVar14);
    puVar7 = puVar6;
    FUN_10080b43c();
    puVar17 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar7,0,0);
    *puVar7 = (char)puVar6;
    puVar7[1] = 1;
    _swift_willThrow();
  }
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar17);
    FUN_1007fb2c4(puVar10,local_d0,uVar14,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_10c = uVar13 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    local_120[0] = local_78;
    FUN_100004640(local_90);
    lVar8 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar6 = (undefined1 *)((long)local_120 + lVar3);
    local_120[1] = (undefined1 *)local_120;
    FUN_1007fb128();
    puVar4 = local_100[0];
    DVar9.unknown = local_100[0];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar6 = 0;
    uVar11 = local_e0;
    uVar12 = local_e8;
    *(undefined1 **)((long)local_120 + lVar3 + 8) = param_1;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar11;
    *(undefined1 *)((long)&local_108 + lVar3) = 1;
    *(undefined8 *)((long)local_100 + lVar3) = local_108;
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar4;
    *(undefined **)(&stack0xffffffffffffff10 + lVar3) = local_100[1];
    uVar15 = 0x101;
    if ((local_ec & 1) == 0) {
      uVar15 = 1;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar6 + *(int *)(lVar8 + 0x14)) = uVar12;
    *(undefined **)(puVar6 + iVar2) = puVar17;
    puVar1 = (undefined8 *)(puVar6 + *(int *)(lVar8 + 0x1c));
    *puVar1 = local_c8;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar17);
    (*pcVar16)(puVar6,local_120[0],lStack_70);
    FUN_1007fb2c4(puVar10,local_d0,uVar14,local_10c);
    _swift_errorRelease(puVar17);
    FUN_10080a754(puVar6);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_d8);
  return local_c8;
}



/* Address: 0x10080c4b4 | FUN_10080c4b4 */

undefined8 *
FUN_10080c4b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ushort uVar22;
  uint uVar23;
  undefined8 **local_140 [2];
  ushort uStack_130;
  undefined1 auStack_12e [2];
  uint local_12c;
  undefined8 *local_128;
  undefined *local_120 [3];
  uint local_fc;
  undefined8 *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_120[0] = param_4;
  local_120[1] = param_5;
  local_120[2] = (undefined *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 1;
  puVar19 = param_1;
  uVar12 = param_2;
  uVar17 = uVar20;
  FUN_10082ebc8();
  puVar13 = puVar19;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar6 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar23 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) == 1;
      bVar1 = !bVar4;
      if (bVar4) {
        puVar19 = (undefined8 *)0x0;
        local_fc = uVar16 >> 8 & 1;
      }
      else {
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar19 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 1;
        _swift_willThrow();
        _swift_errorRetain(puVar19);
        local_fc = 0;
        puVar6 = puVar19;
      }
      FUN_1007fb28c(puVar13,uVar15,uVar18);
      local_ec = 0;
      local_f8 = puVar13;
      local_e8 = uVar15;
      goto LAB_10080c6cc;
    }
    FUN_10080a3bc();
    puVar6 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar19,0,0);
    *puVar19 = param_1;
    puVar19[1] = param_2;
    puVar19[2] = 0;
    puVar19[3] = 0;
    *(undefined1 *)(puVar19 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar6);
  local_fc = 0;
  puVar19 = (undefined8 *)0x0;
  local_e8 = 0;
  uVar23 = 0;
  bVar1 = true;
  local_ec = 1;
  local_f8 = puVar6;
LAB_10080c6cc:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_12c = uVar23;
    local_128 = puVar13;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_140[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar21 = (undefined1 *)((long)local_140 + lVar3);
    local_140[1] = local_140;
    FUN_1007fb128();
    puVar11 = local_120[1];
    DVar10.unknown = local_120[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar21 = 0;
    *(undefined8 **)((long)local_140 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&uStack_130 + lVar3) = param_2;
    *(undefined1 *)((long)&local_128 + lVar3) = 1;
    *(undefined **)((long)local_120 + lVar3) = local_120[0];
    *(undefined **)((long)local_120 + lVar3 + 8) = puVar11;
    *(undefined **)((long)local_120 + lVar3 + 0x10) = local_120[2];
    if (!bVar1) {
      uVar22 = (ushort)(local_fc << 8) | 1;
    }
    else {
      _swift_errorRetain(puVar6);
      uVar22 = 0;
    }
    _swift_errorRetain(puVar19);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar21 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar21 + iVar2) = puVar19;
    puVar13 = (undefined8 *)(puVar21 + *(int *)(lVar9 + 0x1c));
    *puVar13 = puVar6;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar22;
    *(bool *)((long)puVar13 + 0x12) = bVar1;
    (**(code **)(lStack_70 + 8))(puVar21,local_78,lStack_70);
    FUN_10080a754(puVar21);
    FUN_100004594(local_90);
    puVar13 = local_128;
    uVar23 = local_12c;
  }
  if (bVar1) {
    local_90[0] = puVar6;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar6);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_f8,local_e8,uVar23,local_ec);
    FUN_1007fb2c4(puVar13,uVar15,uVar16,uVar16 >> 0x10);
    FUN_10080d5a4(puVar6,local_fc,1);
    _swift_errorRelease(puVar19);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    FUN_10080a6bc(local_f8,local_e8,uVar23,local_ec);
    FUN_1007fb2c4(puVar13,uVar15,uVar16,uVar16 >> 0x10);
    _swift_errorRelease(puVar19);
    _swift_bridgeObjectRelease(uVar20);
  }
  return puVar6;
}



/* Address: 0x10080c984 | FUN_10080c984 */

undefined1  [16]
FUN_10080c984(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  undefined1 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  code *pcVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  undefined1 auVar22 [16];
  undefined1 **local_120 [2];
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined *local_f8 [5];
  undefined1 *local_d0;
  ulong local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar18 = *(ulong *)(param_9 + 0x10);
  local_f8[0] = param_4;
  local_f8[1] = param_5;
  local_f8[2] = (undefined *)param_6;
  _swift_bridgeObjectRetain(uVar18);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar13 = 2;
  local_f8[4] = (undefined *)param_2;
  local_d0 = param_1;
  local_c8 = uVar18;
  FUN_10082ebc8();
  puVar12 = param_1;
  uVar14 = param_2;
  uVar16 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar16;
  local_f8[3] = (undefined *)param_3;
  FUN_1007fb2c4(param_2,uVar13,uVar18,uVar18 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar12;
    bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar7 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      if ((uVar15 & 0xff) == 2) {
        uVar17 = uVar15 >> 8 & 1;
        FUN_1007fb28c(puVar12,uVar14,uVar16);
        puVar20 = (undefined *)0x0;
        puVar21 = puVar12;
      }
      else {
        puVar21 = puVar12;
        FUN_1000f4a4c(puVar12,uVar14,uVar16);
        puVar11 = puVar21;
        FUN_10080b43c();
        puVar20 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *puVar11 = (char)puVar21;
        uVar17 = 2;
        puVar11[1] = 2;
        _swift_willThrow();
        puVar21 = (undefined1 *)0x0;
      }
      goto LAB_10080cae0;
    }
    FUN_1007fb2c4(puVar12,uVar14,uVar16,uVar15 >> 0x10);
  }
  puVar20 = (undefined *)0x0;
  uVar17 = 2;
  puVar21 = (undefined1 *)0x0;
LAB_10080cae0:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(puVar12,uVar14,uVar16,uVar15 >> 0x10);
    _swift_bridgeObjectRelease(local_f8[4]);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_f8[3]);
    FUN_10080a674(auStack_b8);
  }
  else {
    uStack_100._4_4_ = uVar15 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    local_120[1] = (undefined1 **)puVar12;
    local_108 = uVar14;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_120[0] = ppuVar8;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined1 *)((long)local_120 + lVar4);
    local_110 = local_120;
    FUN_1007fb128();
    puVar5 = local_f8[1];
    DVar10.unknown = local_f8[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar12 = 0;
    puVar6 = local_f8[4];
    *(undefined1 **)((long)local_120 + lVar4 + 8) = local_d0;
    *(undefined **)((long)&local_110 + lVar4) = puVar6;
    *(undefined1 *)((long)&local_108 + lVar4) = 2;
    *(undefined **)((long)&uStack_100 + lVar4) = local_f8[0];
    *(undefined **)((long)local_f8 + lVar4) = puVar5;
    puVar5 = local_f8[3];
    *(undefined **)((long)local_f8 + lVar4 + 8) = local_f8[2];
    uVar2 = 0x200;
    if (uVar17 != 2) {
      uVar2 = (ushort)((uVar17 & 1) << 8) | 2;
    }
    puVar11 = (undefined1 *)0x0;
    if (uVar17 != 2) {
      puVar11 = puVar21;
    }
    iVar3 = *(int *)(lVar9 + 0x18);
    *(undefined **)(puVar12 + *(int *)(lVar9 + 0x14)) = puVar5;
    *(undefined **)(puVar12 + iVar3) = puVar20;
    puVar1 = (undefined8 *)(puVar12 + *(int *)(lVar9 + 0x1c));
    *puVar1 = puVar11;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar19 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar20);
    (*pcVar19)(puVar12,local_78,lStack_70);
    FUN_1007fb2c4(local_120[1],local_108,uVar16,uStack_100._4_4_);
    _swift_errorRelease(puVar20);
    FUN_10080a754(puVar12);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_c8);
  puVar12 = (undefined1 *)0x0;
  if (uVar17 != 2) {
    puVar12 = puVar21;
  }
  auVar22[8] = uVar17 == 2;
  auVar22._0_8_ = puVar12;
  auVar22._9_7_ = 0;
  return auVar22;
}



/* Address: 0x10080cd30 | FUN_10080cd30 */

undefined1 *
FUN_10080cd30(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined2 uVar16;
  code *pcVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined1 *apuStack_130 [2];
  undefined1 auStack_11e [2];
  uint local_11c;
  ulong local_118;
  undefined *local_110 [3];
  uint local_f4;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_c8 [24];
  long local_b0;
  undefined1 *local_a0 [3];
  undefined8 local_88;
  long lStack_80;
  
  uVar19 = *(ulong *)(param_10 + 0x10);
  local_110[0] = param_5;
  local_110[1] = param_6;
  local_110[2] = (undefined *)param_7;
  _swift_bridgeObjectRetain(uVar19);
  FUN_1007ffcdc(param_2,param_3,param_8,param_9);
  uVar11 = 2;
  uVar14 = uVar19;
  local_e8 = param_2;
  local_e0 = param_3;
  FUN_10082ebc8();
  local_f4 = (uint)param_4;
  puVar10 = param_2;
  uVar12 = param_3;
  uVar15 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar15;
  local_f0 = param_4;
  local_d8 = uVar12;
  FUN_1007fb2c4(param_3,uVar11,uVar14,uVar14 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_2);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_a0[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar18 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_a0,puVar18,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar18 = (undefined *)0x0;
  }
  else if ((uVar13 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar10,local_d8,uVar15,uVar13 >> 0x10);
    puVar18 = (undefined *)0x0;
  }
  else if ((uVar13 & 0xff) == 2) {
    local_f4 = uVar13 >> 8 & 1;
    FUN_1007fb28c(puVar10,local_d8,uVar15);
    puVar18 = (undefined *)0x0;
    param_1 = puVar10;
  }
  else {
    puVar6 = puVar10;
    FUN_1000f4a4c(puVar10,local_d8,uVar15);
    puVar7 = puVar6;
    FUN_10080b43c();
    puVar18 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar7,0,0);
    *puVar7 = (char)puVar6;
    puVar7[1] = 2;
    _swift_willThrow();
  }
  FUN_10080b3ec(param_10 + 0x18,auStack_c8);
  if (local_b0 == 0) {
    _swift_errorRelease(puVar18);
    FUN_1007fb2c4(puVar10,local_d8,uVar15,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_e8);
    _swift_bridgeObjectRelease(local_f0);
    FUN_10080a674(auStack_c8);
  }
  else {
    local_11c = uVar13 >> 0x10;
    FUN_100076508(auStack_c8,local_a0);
    local_118 = uVar19;
    FUN_100004640(local_a0,local_88);
    lVar8 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar6 = (undefined1 *)((long)apuStack_130 + lVar3);
    apuStack_130[1] = (undefined1 *)apuStack_130;
    FUN_1007fb128();
    puVar4 = local_110[1];
    DVar9.unknown = local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar6 = 0;
    uVar12 = local_e0;
    *(undefined1 **)((long)apuStack_130 + lVar3 + 8) = local_e8;
    *(undefined8 *)(&stack0xfffffffffffffee0 + lVar3) = uVar12;
    *(undefined1 *)((long)&local_118 + lVar3) = 2;
    *(undefined **)((long)local_110 + lVar3) = local_110[0];
    *(undefined **)((long)local_110 + lVar3 + 8) = puVar4;
    *(undefined **)((long)local_110 + lVar3 + 0x10) = local_110[2];
    uVar16 = 0x102;
    if ((local_f4 & 1) == 0) {
      uVar16 = 2;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar6 + *(int *)(lVar8 + 0x14)) = local_f0;
    *(undefined **)(puVar6 + iVar2) = puVar18;
    puVar1 = (undefined8 *)(puVar6 + *(int *)(lVar8 + 0x1c));
    *puVar1 = param_1;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar16;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar17 = *(code **)(lStack_80 + 8);
    _swift_errorRetain(puVar18);
    (*pcVar17)(puVar6,local_88,lStack_80);
    FUN_1007fb2c4(puVar10,local_d8,uVar15,local_11c);
    _swift_errorRelease(puVar18);
    FUN_10080a754(puVar6);
    FUN_100004594(local_a0);
    uVar19 = local_118;
  }
  _swift_bridgeObjectRelease(uVar19);
  return param_1;
}



/* Address: 0x10080d0d4 | FUN_10080d0d4 */

void FUN_10080d0d4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ushort uVar22;
  uint uVar23;
  undefined8 **local_140 [2];
  ushort uStack_130;
  undefined1 auStack_12e [2];
  uint local_12c;
  undefined8 *local_128;
  undefined *local_120 [3];
  uint local_fc;
  undefined8 *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_120[0] = param_4;
  local_120[1] = param_5;
  local_120[2] = (undefined *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 2;
  puVar19 = param_1;
  uVar12 = param_2;
  uVar17 = uVar20;
  FUN_10082ebc8();
  puVar13 = puVar19;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar6 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar23 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) == 2;
      bVar1 = !bVar4;
      if (bVar4) {
        puVar19 = (undefined8 *)0x0;
        local_fc = uVar16 >> 8 & 1;
      }
      else {
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar19 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 2;
        _swift_willThrow();
        _swift_errorRetain(puVar19);
        local_fc = 0;
        puVar6 = puVar19;
      }
      FUN_1007fb28c(puVar13,uVar15,uVar18);
      local_ec = 0;
      local_f8 = puVar13;
      local_e8 = uVar15;
      goto LAB_10080d2ec;
    }
    FUN_10080a3bc();
    puVar6 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar19,0,0);
    *puVar19 = param_1;
    puVar19[1] = param_2;
    puVar19[2] = 0;
    puVar19[3] = 0;
    *(undefined1 *)(puVar19 + 4) = 0;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar6);
  local_fc = 0;
  puVar19 = (undefined8 *)0x0;
  local_e8 = 0;
  uVar23 = 0;
  bVar1 = true;
  local_ec = 1;
  local_f8 = puVar6;
LAB_10080d2ec:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_12c = uVar23;
    local_128 = puVar13;
    FUN_100076508(auStack_b8,local_90);
    ppuVar8 = local_90;
    FUN_100004640(ppuVar8,local_78);
    lVar9 = 0;
    local_140[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar21 = (undefined1 *)((long)local_140 + lVar3);
    local_140[1] = local_140;
    FUN_1007fb128();
    puVar11 = local_120[1];
    DVar10.unknown = local_120[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar21 = 0;
    *(undefined8 **)((long)local_140 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&uStack_130 + lVar3) = param_2;
    *(undefined1 *)((long)&local_128 + lVar3) = 2;
    *(undefined **)((long)local_120 + lVar3) = local_120[0];
    *(undefined **)((long)local_120 + lVar3 + 8) = puVar11;
    *(undefined **)((long)local_120 + lVar3 + 0x10) = local_120[2];
    if (!bVar1) {
      uVar22 = (ushort)(local_fc << 8) | 2;
    }
    else {
      _swift_errorRetain(puVar6);
      uVar22 = 0;
    }
    _swift_errorRetain(puVar19);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar21 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar21 + iVar2) = puVar19;
    puVar13 = (undefined8 *)(puVar21 + *(int *)(lVar9 + 0x1c));
    *puVar13 = puVar6;
    puVar13[1] = 0;
    *(ushort *)(puVar13 + 2) = uVar22;
    *(bool *)((long)puVar13 + 0x12) = bVar1;
    (**(code **)(lStack_70 + 8))(puVar21,local_78,lStack_70);
    FUN_10080a754(puVar21);
    FUN_100004594(local_90);
    puVar13 = local_128;
    uVar23 = local_12c;
  }
  if (bVar1) {
    local_90[0] = puVar6;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar6);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_f8,local_e8,uVar23,local_ec);
    FUN_1007fb2c4(puVar13,uVar15,uVar16,uVar16 >> 0x10);
    FUN_10080d5a4(puVar6,local_fc,1);
    _swift_errorRelease(puVar19);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    FUN_10080a6bc(local_f8,local_e8,uVar23,local_ec);
    FUN_1007fb2c4(puVar13,uVar15,uVar16,uVar16 >> 0x10);
    _swift_errorRelease(puVar19);
    _swift_bridgeObjectRelease(uVar20);
  }
  return;
}



/* Address: 0x10080d5a4 | FUN_10080d5a4 */

void FUN_10080d5a4(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  return;
}



/* Address: 0x10080d5b8 | FUN_10080d5b8 */

uint FUN_10080d5b8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  ulong *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  Date DVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined1 *puVar17;
  ulong uVar18;
  undefined *puVar19;
  uint uVar20;
  ulong uStack_120;
  undefined1 *local_118;
  ulong *local_110;
  undefined1 auStack_10e [6];
  undefined1 auStack_108 [4];
  uint local_104;
  undefined1 *local_100 [6];
  ulong local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar18 = *(ulong *)(param_9 + 0x10);
  local_100[0] = param_4;
  local_100[1] = param_5;
  local_100[2] = (undefined1 *)param_6;
  _swift_bridgeObjectRetain(uVar18);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar12 = 3;
  local_100[3] = (undefined1 *)param_2;
  local_100[5] = param_1;
  local_d0 = uVar18;
  FUN_10082ebc8();
  puVar11 = param_1;
  uVar13 = param_2;
  uVar15 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar15;
  local_100[4] = (undefined1 *)param_3;
  FUN_1007fb2c4(param_2,uVar12,uVar18,uVar18 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  local_c8 = uVar13;
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar11;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar19 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar19,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar19 = (undefined *)0x0;
  }
  else if ((uVar14 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar11,uVar13,uVar15,uVar14 >> 0x10);
    puVar19 = (undefined *)0x0;
  }
  else {
    if ((uVar14 & 0xff) == 3) {
      uVar20 = uVar14 & 0x100 | (uint)puVar11 & 1;
      FUN_1007fb28c(puVar11,uVar13,uVar15);
      puVar19 = (undefined *)0x0;
      goto LAB_10080d788;
    }
    puVar7 = puVar11;
    FUN_1000f4a4c(puVar11,uVar13,uVar15);
    puVar8 = puVar7;
    FUN_10080b43c();
    puVar19 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar8,0,0);
    *puVar8 = (char)puVar7;
    puVar8[1] = 3;
    _swift_willThrow();
  }
  uVar20 = 2;
LAB_10080d788:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar19);
    FUN_1007fb2c4(puVar11,local_c8,uVar15,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_100[3]);
    _swift_bridgeObjectRelease(local_100[5]);
    _swift_bridgeObjectRelease(local_100[4]);
    FUN_10080a674(auStack_b8);
    _swift_bridgeObjectRelease(local_d0);
  }
  else {
    local_104 = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    local_118 = puVar11;
    FUN_100004640(local_90,local_78);
    lVar9 = 0;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar17 = (undefined1 *)((long)&uStack_120 + lVar4);
    local_110 = &uStack_120;
    FUN_1007fb128();
    puVar11 = local_100[1];
    DVar10.unknown = local_100[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar17 = 0;
    puVar8 = local_100[4];
    puVar7 = local_100[3];
    *(undefined1 **)((long)&local_118 + lVar4) = local_100[5];
    *(undefined1 **)(auStack_108 + lVar4 + -8) = puVar7;
    auStack_108[lVar4] = 3;
    *(undefined1 **)((long)local_100 + lVar4) = local_100[0];
    *(undefined1 **)((long)local_100 + lVar4 + 8) = puVar11;
    *(undefined1 **)((long)local_100 + lVar4 + 0x10) = local_100[2];
    bVar5 = (uVar20 & 0xff) != 2;
    uVar14 = 0;
    if (bVar5) {
      uVar14 = uVar20 & 1;
    }
    uVar2 = 0x200;
    if (bVar5) {
      uVar2 = (ushort)uVar20 & 0x100 | 3;
    }
    iVar3 = *(int *)(lVar9 + 0x18);
    *(undefined1 **)(puVar17 + *(int *)(lVar9 + 0x14)) = puVar8;
    *(undefined **)(puVar17 + iVar3) = puVar19;
    puVar1 = (ulong *)(puVar17 + *(int *)(lVar9 + 0x1c));
    *puVar1 = (ulong)uVar14;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar19);
    (*pcVar16)(puVar17,local_78,lStack_70);
    FUN_1007fb2c4(local_118,local_c8,uVar15,local_104);
    _swift_errorRelease(puVar19);
    FUN_10080a754(puVar17);
    FUN_100004594(local_90);
    _swift_bridgeObjectRelease(local_d0);
  }
  uVar14 = uVar20 & 0xff;
  if ((uVar20 & 0xff) != 2) {
    uVar14 = uVar20 & 1;
  }
  return uVar14;
}



/* Address: 0x10080d95c | FUN_10080d95c */

uint FUN_10080d95c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  ulong *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  Date DVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong local_120;
  undefined1 *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined *local_100 [2];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  ulong local_78;
  long lStack_70;
  
  uVar17 = *(ulong *)(param_10 + 0x10);
  local_108 = param_5;
  local_100[0] = param_6;
  local_100[1] = (undefined *)param_7;
  local_c8 = param_4;
  _swift_bridgeObjectRetain(uVar17);
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar11 = 3;
  puVar6 = param_1;
  local_e0 = param_2;
  local_d8 = uVar17;
  FUN_10082ebc8();
  local_ec = (uint)param_3;
  puVar10 = puVar6;
  uVar12 = param_2;
  uVar14 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar14;
  local_e8 = param_3;
  local_d0 = uVar12;
  FUN_1007fb2c4(param_2,uVar11,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(puVar6);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar18 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar18,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    puVar18 = (undefined *)0x0;
  }
  else if ((uVar13 & 0xff00) == 0x200) {
    FUN_1007fb2c4(puVar10,local_d0,uVar14,uVar13 >> 0x10);
    puVar18 = (undefined *)0x0;
  }
  else if ((uVar13 & 0xff) == 3) {
    local_ec = uVar13 >> 8 & 1;
    FUN_1007fb28c(puVar10,local_d0,uVar14);
    puVar18 = (undefined *)0x0;
    local_c8 = puVar10;
  }
  else {
    puVar6 = puVar10;
    FUN_1000f4a4c(puVar10,local_d0,uVar14);
    puVar7 = puVar6;
    FUN_10080b43c();
    puVar18 = &DAT_100f04860;
    _swift_allocError(&DAT_100f04860,puVar7,0,0);
    *puVar7 = (char)puVar6;
    puVar7[1] = 3;
    _swift_willThrow();
  }
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar18);
    FUN_1007fb2c4(puVar10,local_d0,uVar14,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    uStack_110._4_4_ = uVar13 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    local_120 = local_78;
    FUN_100004640(local_90);
    lVar8 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar6 = (undefined1 *)((long)&local_120 + lVar3);
    local_118 = (undefined1 *)&local_120;
    FUN_1007fb128();
    puVar4 = local_100[0];
    DVar9.unknown = local_100[0];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar6 = 0;
    uVar11 = local_e0;
    uVar12 = local_e8;
    *(undefined1 **)((long)&local_118 + lVar3) = param_1;
    *(undefined8 *)((long)&uStack_110 + lVar3) = uVar11;
    *(undefined1 *)((long)&local_108 + lVar3) = 3;
    *(undefined8 *)((long)local_100 + lVar3) = local_108;
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar4;
    *(undefined **)(&stack0xffffffffffffff10 + lVar3) = local_100[1];
    uVar17 = (ulong)local_c8 & 1;
    uVar15 = 0x103;
    if ((local_ec & 1) == 0) {
      uVar15 = 3;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar6 + *(int *)(lVar8 + 0x14)) = uVar12;
    *(undefined **)(puVar6 + iVar2) = puVar18;
    puVar1 = (ulong *)(puVar6 + *(int *)(lVar8 + 0x1c));
    *puVar1 = uVar17;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar18);
    (*pcVar16)(puVar6,local_120,lStack_70);
    FUN_1007fb2c4(puVar10,local_d0,uVar14,uStack_110._4_4_);
    _swift_errorRelease(puVar18);
    FUN_10080a754(puVar6);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_d8);
  return (uint)local_c8 & 1;
}



/* Address: 0x10080dcf0 | FUN_10080dcf0 */

uint FUN_10080dcf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  undefined8 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ushort uVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined1 auStack_118 [4];
  uint local_114;
  undefined8 *local_110 [3];
  undefined8 *local_f0;
  undefined4 local_dc;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_110[0] = param_4;
  local_110[1] = (undefined8 *)param_5;
  local_110[2] = (undefined8 *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar13 = 3;
  puVar22 = param_1;
  uVar11 = param_2;
  uVar16 = uVar20;
  FUN_10082ebc8();
  puVar12 = puVar22;
  uVar14 = uVar11;
  uVar17 = uVar13;
  FUN_100804a74();
  uVar15 = (uint)uVar17;
  FUN_1007fb2c4(uVar11,uVar13,uVar16,uVar16 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  if ((uVar15 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar12);
    puVar18 = puVar12;
  }
  else {
    if ((uVar15 & 0xff00) != 0x200) {
      uVar23 = uVar15 & 0x1ff;
      bVar5 = (uVar15 & 0xff) == 3;
      bVar1 = !bVar5;
      if (bVar5) {
        puVar22 = (undefined8 *)0x0;
        puVar18 = (undefined8 *)(uVar17 & 0x100 | (ulong)puVar12 & 1);
      }
      else {
        puVar22 = puVar12;
        FUN_1000f4a4c(puVar12,uVar14,uVar17);
        puVar24 = puVar22;
        FUN_10080b43c();
        puVar18 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar24,0,0);
        *(char *)puVar24 = (char)puVar22;
        *(undefined1 *)((long)puVar24 + 1) = 3;
        _swift_willThrow();
        _swift_errorRetain(puVar18);
        puVar22 = puVar18;
      }
      FUN_1007fb28c(puVar12,uVar14,uVar17);
      local_dc = 0;
      uVar11 = uVar14;
      local_f0 = puVar12;
      goto LAB_10080df08;
    }
    FUN_10080a3bc();
    puVar18 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar22,0,0);
    *puVar22 = param_1;
    puVar22[1] = param_2;
    puVar22[2] = 0;
    puVar22[3] = 0;
    *(undefined1 *)(puVar22 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar18);
  puVar22 = (undefined8 *)0x0;
  uVar23 = 0;
  bVar1 = true;
  local_dc = 1;
  uVar11 = 0;
  local_f0 = puVar18;
LAB_10080df08:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_120 = uVar11;
    local_114 = uVar23;
    FUN_100076508(auStack_b8,local_90);
    ppuVar7 = local_90;
    FUN_100004640(ppuVar7,local_78);
    lVar8 = 0;
    local_130[0] = ppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar21 = (undefined1 *)((long)local_130 + lVar4);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar24 = local_110[1];
    DVar9.unknown = (undefined *)local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar21 = 0;
    *(undefined8 **)((long)local_130 + lVar4 + 8) = param_1;
    *(undefined8 *)(auStack_118 + lVar4 + -8) = param_2;
    auStack_118[lVar4] = 3;
    *(undefined8 **)((long)local_110 + lVar4) = local_110[0];
    *(undefined8 **)((long)local_110 + lVar4 + 8) = puVar24;
    *(undefined8 **)((long)local_110 + lVar4 + 0x10) = local_110[2];
    if (!bVar1) {
      puVar24 = (undefined8 *)((ulong)puVar18 & 1);
      uVar19 = (ushort)puVar18 & 0x100 | 3;
    }
    else {
      _swift_errorRetain(puVar18);
      uVar19 = 0;
      puVar24 = puVar18;
    }
    _swift_errorRetain(puVar22);
    _swift_errorRelease(0);
    iVar3 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar21 + *(int *)(lVar8 + 0x14)) = param_3;
    *(undefined8 **)(puVar21 + iVar3) = puVar22;
    puVar2 = (undefined8 *)(puVar21 + *(int *)(lVar8 + 0x1c));
    *puVar2 = puVar24;
    puVar2[1] = 0;
    *(ushort *)(puVar2 + 2) = uVar19;
    *(bool *)((long)puVar2 + 0x12) = bVar1;
    (**(code **)(lStack_70 + 8))(puVar21,local_78,lStack_70);
    FUN_10080a754(puVar21);
    FUN_100004594(local_90);
    uVar11 = local_120;
    uVar23 = local_114;
  }
  if (bVar1) {
    local_90[0] = puVar18;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar18);
    if ((bVar6 & 1) != 0) {
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_f0,uVar11,uVar23,local_dc);
    FUN_1007fb2c4(puVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
    FUN_1002ec258(puVar18,1);
    _swift_errorRelease(puVar22);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    FUN_10080a6bc(local_f0,uVar11,uVar23,local_dc);
    FUN_1007fb2c4(puVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
    _swift_errorRelease(puVar22);
    _swift_bridgeObjectRelease(uVar20);
  }
  return (uint)puVar18 & 1;
}



/* Address: 0x10080e1c8 | FUN_10080e1c8 */

undefined1 ***
FUN_10080e1c8(undefined1 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 ***pppuVar10;
  undefined1 ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ushort uVar18;
  undefined1 ***pppuVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 ***local_120 [2];
  undefined8 local_110;
  undefined1 auStack_108 [4];
  uint local_104;
  ulong local_100 [3];
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 **local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar21 = *(ulong *)(param_9 + 0x10);
  local_100[1] = param_6;
  local_100[2] = param_4;
  local_e8 = param_5;
  _swift_bridgeObjectRetain(uVar21);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar12 = 4;
  uVar15 = uVar21;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082ebc8();
  pppuVar11 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_e0 = param_3;
  local_c8 = uVar13;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = pppuVar11;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 4) {
        FUN_1007fb28c(pppuVar11,local_c8,uVar16);
        puVar20 = (undefined *)0x0;
        uVar18 = (ushort)uVar16 & 0x104;
        pppuVar19 = pppuVar11;
      }
      else {
        pppuVar19 = pppuVar11;
        FUN_1000f4a4c(pppuVar11,local_c8,uVar16);
        pppuVar10 = pppuVar19;
        FUN_10080b43c();
        puVar20 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,pppuVar10,0,0);
        *(char *)pppuVar10 = (char)pppuVar19;
        uVar18 = 4;
        *(undefined1 *)((long)pppuVar10 + 1) = 4;
        _swift_willThrow();
        pppuVar19 = (undefined1 ***)0x0;
      }
      goto LAB_10080e318;
    }
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
  }
  puVar20 = (undefined *)0x0;
  uVar18 = 4;
  pppuVar19 = (undefined1 ***)0x0;
LAB_10080e318:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_104 = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    pppuVar7 = local_90;
    FUN_100004640(pppuVar7,local_78);
    lVar8 = 0;
    local_120[1] = (undefined1 ***)pppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_120 + lVar4);
    local_110 = local_120;
    local_100[0] = uVar21;
    FUN_1007fb128();
    puVar5 = local_e8;
    DVar9.unknown = local_e8;
    local_120[0] = pppuVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar22 = 0;
    uVar13 = local_d8;
    *(undefined8 ***)((long)local_120 + lVar4 + 8) = local_d0;
    *(undefined8 *)(auStack_108 + lVar4 + -8) = uVar13;
    auStack_108[lVar4] = 4;
    uVar21 = local_100[1];
    *(ulong *)((long)local_100 + lVar4) = local_100[2];
    *(undefined **)((long)local_100 + lVar4 + 8) = puVar5;
    *(ulong *)((long)local_100 + lVar4 + 0x10) = uVar21;
    uVar2 = 0x200;
    if (pppuVar19 != (undefined1 ***)0x0) {
      uVar2 = uVar18;
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar22 + iVar3) = puVar20;
    puVar1 = (undefined8 *)(puVar22 + *(int *)(lVar8 + 0x1c));
    *puVar1 = pppuVar19;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar17 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(pppuVar19);
    _swift_errorRetain(puVar20);
    (*pcVar17)(puVar22,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar16,local_104);
    _swift_errorRelease(puVar20);
    uVar21 = local_100[0];
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(uVar21);
  return pppuVar19;
}



/* Address: 0x10080e55c | FUN_10080e55c */

undefined1 *
FUN_10080e55c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  Date DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 *local_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined8 local_108;
  undefined *local_100 [2];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar17 = *(ulong *)(param_10 + 0x10);
  local_108 = param_5;
  local_100[0] = param_6;
  local_100[1] = (undefined *)param_7;
  _swift_bridgeObjectRetain(uVar17);
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar11 = 4;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = uVar17;
  FUN_10082ebc8();
  local_ec = (uint)param_3;
  puVar10 = param_1;
  uVar12 = param_2;
  uVar14 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar14;
  local_e8 = param_3;
  local_c8 = uVar12;
  FUN_1007fb2c4(param_2,uVar11,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar18 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar18,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar13 & 0xff00) != 0x200) {
      if ((uVar13 & 0xff) == 4) {
        local_ec = uVar13 >> 8 & 1;
        FUN_1007fb28c(puVar10,local_c8,uVar14);
        puVar18 = (undefined *)0x0;
        param_4 = puVar10;
      }
      else {
        puVar8 = puVar10;
        FUN_1000f4a4c(puVar10,local_c8,uVar14);
        puVar9 = puVar8;
        FUN_10080b43c();
        puVar18 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar9,0,0);
        *puVar9 = (char)puVar8;
        puVar9[1] = 4;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_10080e6bc;
    }
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar18 = (undefined *)0x0;
LAB_10080e6bc:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar18);
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_10c = uVar13 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    FUN_100004640(local_90,local_78);
    lVar6 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = (undefined1 *)((long)local_120 + lVar3);
    local_120[1] = (undefined1 *)local_120;
    FUN_1007fb128();
    puVar4 = local_100[0];
    DVar7.unknown = local_100[0];
    local_120[0] = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar7);
    *puVar8 = 0;
    uVar12 = local_e0;
    *(undefined1 **)((long)local_120 + lVar3 + 8) = local_d8;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar12;
    *(undefined1 *)((long)&local_108 + lVar3) = 4;
    *(undefined8 *)((long)local_100 + lVar3) = local_108;
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar4;
    *(undefined **)(&stack0xffffffffffffff10 + lVar3) = local_100[1];
    uVar15 = 0x104;
    if ((local_ec & 1) == 0) {
      uVar15 = 4;
    }
    iVar2 = *(int *)(lVar6 + 0x18);
    *(undefined8 *)(puVar8 + *(int *)(lVar6 + 0x14)) = local_e8;
    *(undefined **)(puVar8 + iVar2) = puVar18;
    puVar1 = (undefined8 *)(puVar8 + *(int *)(lVar6 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar18);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar16)(puVar8,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar14,local_10c);
    _swift_errorRelease(puVar18);
    FUN_10080a754(puVar8);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_d0);
  return param_4;
}



/* Address: 0x10080e90c | FUN_10080e90c */

undefined8 *
FUN_10080e90c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  Date DVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 **local_130 [2];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *local_110 [3];
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long local_70;
  undefined4 local_58;
  uint local_54;
  
  uVar20 = *(ulong *)(param_9 + 0x10);
  local_110[0] = param_4;
  local_110[1] = (undefined8 *)param_5;
  local_110[2] = (undefined8 *)param_6;
  _swift_bridgeObjectRetain(uVar20);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar14 = 4;
  puVar21 = param_1;
  uVar12 = param_2;
  uVar17 = uVar20;
  FUN_10082ebc8();
  puVar13 = puVar21;
  uVar15 = uVar12;
  uVar18 = uVar14;
  FUN_100804a74();
  uVar16 = (uint)uVar18;
  FUN_1007fb2c4(uVar12,uVar14,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  local_f0 = puVar13;
  if ((uVar16 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar13);
  }
  else {
    if ((uVar16 & 0xff00) != 0x200) {
      uVar19 = uVar16 & 0x1ff;
      bVar4 = (uVar16 & 0xff) != 4;
      if (bVar4) {
        puVar6 = puVar13;
        FUN_1000f4a4c(puVar13,uVar15,uVar18);
        puVar7 = puVar6;
        FUN_10080b43c();
        puVar21 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar7,0,0);
        *(char *)puVar7 = (char)puVar6;
        *(undefined1 *)((long)puVar7 + 1) = 4;
        _swift_willThrow();
        _swift_errorRetain(puVar21);
        local_54 = 0;
        local_f0 = puVar21;
      }
      else {
        local_54 = uVar16 >> 8 & 1;
        FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
        puVar21 = (undefined8 *)0x0;
      }
      FUN_1007fb278(puVar13,uVar15,uVar18,uVar16 >> 0x10);
      local_58 = 0;
      uVar12 = uVar15;
      local_e8 = puVar13;
      goto LAB_10080eb30;
    }
    FUN_10080a3bc();
    local_f0 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar21,0,0);
    *puVar21 = param_1;
    puVar21[1] = param_2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(undefined1 *)(puVar21 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(local_f0);
  puVar21 = (undefined8 *)0x0;
  uVar19 = 0;
  bVar4 = true;
  local_58 = 1;
  local_54 = 0;
  uVar12 = 0;
  local_e8 = local_f0;
LAB_10080eb30:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    FUN_100076508(auStack_b8,local_90);
    local_118 = local_78;
    local_120 = local_70;
    ppuVar8 = local_90;
    FUN_100004640();
    lVar9 = 0;
    local_130[0] = ppuVar8;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_130 + lVar3);
    local_130[1] = local_130;
    FUN_1007fb128();
    puVar6 = local_110[1];
    DVar10.unknown = (undefined *)local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar10);
    *puVar22 = 0;
    *(undefined8 **)((long)local_130 + lVar3 + 8) = param_1;
    *(undefined8 *)((long)&local_120 + lVar3) = param_2;
    *(undefined1 *)((long)&local_118 + lVar3) = 4;
    *(undefined8 **)((long)local_110 + lVar3) = local_110[0];
    *(undefined8 **)((long)local_110 + lVar3 + 8) = puVar6;
    *(undefined8 **)((long)local_110 + lVar3 + 0x10) = local_110[2];
    uVar1 = 0;
    if (bVar4 == false) {
      uVar1 = (ushort)(local_54 << 8) | 4;
    }
    _swift_errorRetain(puVar21);
    FUN_10081c834(local_f0,local_54,bVar4);
    _swift_errorRelease(0);
    iVar2 = *(int *)(lVar9 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar9 + 0x14)) = param_3;
    *(undefined8 **)(puVar22 + iVar2) = puVar21;
    puVar6 = (undefined8 *)(puVar22 + *(int *)(lVar9 + 0x1c));
    *puVar6 = local_f0;
    puVar6[1] = 0;
    *(ushort *)(puVar6 + 2) = uVar1;
    *(bool *)((long)puVar6 + 0x12) = bVar4;
    (**(code **)(local_120 + 8))(puVar22,local_118);
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  if (bVar4 == false) {
    _swift_bridgeObjectRetain(local_f0);
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,0);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  else {
    local_90[0] = local_f0;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(local_f0);
    if ((bVar5 & 1) != 0) {
      puVar11 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar11,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_e8,uVar12,uVar19,local_58);
    FUN_1007fb2c4(puVar13,uVar15,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(local_f0,local_54,1);
    _swift_errorRelease(puVar21);
    _swift_bridgeObjectRelease(uVar20);
  }
  return local_f0;
}



/* Address: 0x10080ee08 | FUN_10080ee08 */

undefined1 ***
FUN_10080ee08(undefined1 ***param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  byte bVar6;
  undefined8 ***pppuVar7;
  long lVar8;
  Date DVar9;
  undefined1 ***pppuVar10;
  undefined1 ***pppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ushort uVar18;
  undefined1 ***pppuVar19;
  undefined *puVar20;
  ulong uVar21;
  undefined1 *puVar22;
  undefined1 ***local_120 [2];
  undefined8 local_110;
  undefined1 auStack_108 [4];
  uint local_104;
  ulong local_100 [3];
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 **local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar21 = *(ulong *)(param_9 + 0x10);
  local_100[1] = param_6;
  local_100[2] = param_4;
  local_e8 = param_5;
  _swift_bridgeObjectRetain(uVar21);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar12 = 5;
  uVar15 = uVar21;
  local_d8 = param_2;
  local_d0 = param_1;
  FUN_10082ebc8();
  pppuVar11 = param_1;
  uVar13 = param_2;
  uVar16 = uVar12;
  FUN_100804a74();
  uVar14 = (uint)uVar16;
  local_e0 = param_3;
  local_c8 = uVar13;
  FUN_1007fb2c4(param_2,uVar12,uVar15,uVar15 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar14 >> 0x10 & 0xff) == 1) {
    local_90[0] = pppuVar11;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar20 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar20,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar14 & 0xff00) != 0x200) {
      if ((uVar14 & 0xff) == 5) {
        FUN_1007fb28c(pppuVar11,local_c8,uVar16);
        puVar20 = (undefined *)0x0;
        uVar18 = (ushort)uVar16 & 0x105;
        pppuVar19 = pppuVar11;
      }
      else {
        pppuVar19 = pppuVar11;
        FUN_1000f4a4c(pppuVar11,local_c8,uVar16);
        pppuVar10 = pppuVar19;
        FUN_10080b43c();
        puVar20 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,pppuVar10,0,0);
        *(char *)pppuVar10 = (char)pppuVar19;
        uVar18 = 5;
        *(undefined1 *)((long)pppuVar10 + 1) = 5;
        _swift_willThrow();
        pppuVar19 = (undefined1 ***)0x0;
      }
      goto LAB_10080ef58;
    }
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
  }
  puVar20 = (undefined *)0x0;
  uVar18 = 5;
  pppuVar19 = (undefined1 ***)0x0;
LAB_10080ef58:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar20);
    FUN_1007fb2c4(pppuVar11,local_c8,uVar16,uVar14 >> 0x10);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_d0);
    _swift_bridgeObjectRelease(local_e0);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_104 = uVar14 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    pppuVar7 = local_90;
    FUN_100004640(pppuVar7,local_78);
    lVar8 = 0;
    local_120[1] = (undefined1 ***)pppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar22 = (undefined1 *)((long)local_120 + lVar4);
    local_110 = local_120;
    local_100[0] = uVar21;
    FUN_1007fb128();
    puVar5 = local_e8;
    DVar9.unknown = local_e8;
    local_120[0] = pppuVar11;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar22 = 0;
    uVar13 = local_d8;
    *(undefined8 ***)((long)local_120 + lVar4 + 8) = local_d0;
    *(undefined8 *)(auStack_108 + lVar4 + -8) = uVar13;
    auStack_108[lVar4] = 5;
    uVar21 = local_100[1];
    *(ulong *)((long)local_100 + lVar4) = local_100[2];
    *(undefined **)((long)local_100 + lVar4 + 8) = puVar5;
    *(ulong *)((long)local_100 + lVar4 + 0x10) = uVar21;
    uVar2 = 0x200;
    if (pppuVar19 != (undefined1 ***)0x0) {
      uVar2 = uVar18;
    }
    iVar3 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar22 + *(int *)(lVar8 + 0x14)) = local_e0;
    *(undefined **)(puVar22 + iVar3) = puVar20;
    puVar1 = (undefined8 *)(puVar22 + *(int *)(lVar8 + 0x1c));
    *puVar1 = pppuVar19;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = uVar2;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar17 = *(code **)(lStack_70 + 8);
    _swift_bridgeObjectRetain(pppuVar19);
    _swift_errorRetain(puVar20);
    (*pcVar17)(puVar22,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar16,local_104);
    _swift_errorRelease(puVar20);
    uVar21 = local_100[0];
    FUN_10080a754(puVar22);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(uVar21);
  return pppuVar19;
}



/* Address: 0x10080f19c | FUN_10080f19c */

undefined1 *
FUN_10080f19c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
             undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,long param_10)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  Date DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined2 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined1 *local_120 [2];
  undefined1 auStack_10e [2];
  uint local_10c;
  undefined8 local_108;
  undefined *local_100 [2];
  uint local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined1 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  uVar17 = *(ulong *)(param_10 + 0x10);
  local_108 = param_5;
  local_100[0] = param_6;
  local_100[1] = (undefined *)param_7;
  _swift_bridgeObjectRetain(uVar17);
  FUN_1007ffcdc(param_1,param_2,param_8,param_9);
  uVar11 = 5;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = uVar17;
  FUN_10082ebc8();
  local_ec = (uint)param_3;
  puVar10 = param_1;
  uVar12 = param_2;
  uVar14 = uVar11;
  FUN_100804a74();
  uVar13 = (uint)uVar14;
  local_e8 = param_3;
  local_c8 = uVar12;
  FUN_1007fb2c4(param_2,uVar11,uVar17,uVar17 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease(param_1);
  if ((uVar13 >> 0x10 & 0xff) == 1) {
    local_90[0] = puVar10;
    bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar5 & 1) != 0) {
      puVar18 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar18,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar13 & 0xff00) != 0x200) {
      if ((uVar13 & 0xff) == 5) {
        local_ec = uVar13 >> 8 & 1;
        FUN_1007fb28c(puVar10,local_c8,uVar14);
        puVar18 = (undefined *)0x0;
        param_4 = puVar10;
      }
      else {
        puVar8 = puVar10;
        FUN_1000f4a4c(puVar10,local_c8,uVar14);
        puVar9 = puVar8;
        FUN_10080b43c();
        puVar18 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar9,0,0);
        *puVar9 = (char)puVar8;
        puVar9[1] = 5;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_4);
      }
      goto LAB_10080f2fc;
    }
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
  }
  _swift_bridgeObjectRetain(param_4);
  puVar18 = (undefined *)0x0;
LAB_10080f2fc:
  FUN_10080b3ec(param_10 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_errorRelease(puVar18);
    FUN_1007fb2c4(puVar10,local_c8,uVar14,uVar13 >> 0x10);
    _swift_bridgeObjectRelease(local_e0);
    _swift_bridgeObjectRelease(local_d8);
    _swift_bridgeObjectRelease(local_e8);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_10c = uVar13 >> 0x10;
    FUN_100076508(auStack_b8,local_90);
    FUN_100004640(local_90,local_78);
    lVar6 = 0;
    FUN_1007fb264();
    lVar3 = -(*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = (undefined1 *)((long)local_120 + lVar3);
    local_120[1] = (undefined1 *)local_120;
    FUN_1007fb128();
    puVar4 = local_100[0];
    DVar7.unknown = local_100[0];
    local_120[0] = puVar10;
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar7);
    *puVar8 = 0;
    uVar12 = local_e0;
    *(undefined1 **)((long)local_120 + lVar3 + 8) = local_d8;
    *(undefined8 *)(&stack0xfffffffffffffef0 + lVar3) = uVar12;
    *(undefined1 *)((long)&local_108 + lVar3) = 5;
    *(undefined8 *)((long)local_100 + lVar3) = local_108;
    *(undefined **)((long)local_100 + lVar3 + 8) = puVar4;
    *(undefined **)(&stack0xffffffffffffff10 + lVar3) = local_100[1];
    uVar15 = 0x105;
    if ((local_ec & 1) == 0) {
      uVar15 = 5;
    }
    iVar2 = *(int *)(lVar6 + 0x18);
    *(undefined8 *)(puVar8 + *(int *)(lVar6 + 0x14)) = local_e8;
    *(undefined **)(puVar8 + iVar2) = puVar18;
    puVar1 = (undefined8 *)(puVar8 + *(int *)(lVar6 + 0x1c));
    *puVar1 = param_4;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = uVar15;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar16 = *(code **)(lStack_70 + 8);
    _swift_errorRetain(puVar18);
    _swift_bridgeObjectRetain(param_4);
    (*pcVar16)(puVar8,local_78,lStack_70);
    FUN_1007fb2c4(local_120[0],local_c8,uVar14,local_10c);
    _swift_errorRelease(puVar18);
    FUN_10080a754(puVar8);
    FUN_100004594(local_90);
  }
  _swift_bridgeObjectRelease(local_d0);
  return param_4;
}


