/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10054c330 | FUN_10054c330 */

void FUN_10054c330(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  plVar7 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_100542e40(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054c3e0 | FUN_10054c3e0 */

void FUN_10054c3e0(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uStack_48 = puVar1[1];
  local_50 = *puVar1;
  uStack_38 = puVar1[3];
  uStack_40 = puVar1[2];
  uStack_28 = puVar1[5];
  local_30 = puVar1[4];
  uStack_18 = puVar1[7];
  uStack_20 = puVar1[6];
  FUN_100533f98(param_1,*(undefined8 *)(unaff_x20 + 0x10),&local_50,
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10054c41c | thunk_FUN_10054c550 */

void thunk_FUN_10054c550(void)

{
  FUN_10054c550();
  return;
}



/* Address: 0x10054c420 | FUN_10054c420 */

void FUN_10054c420(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcf088;
  FUN_1000f7830(&DAT_100fcf088,&DAT_100c56f18);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x68 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_100542f40(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054c510 | FUN_10054c510 */

void FUN_10054c510(void)

{
  FUN_10054d160(&DAT_100fcf090,&DAT_100c56f38,&DAT_100fcf088,&DAT_100c56f18);
  return;
}



/* Address: 0x10054c534 | FUN_10054c534 */

void FUN_10054c534(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcf090,&DAT_100c56f38,FUN_100585edc);
  return;
}



/* Address: 0x10054c550 | FUN_10054c550 */

void FUN_10054c550(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = &DAT_100fcf088;
  FUN_1000f7830(&DAT_100fcf088,&DAT_100c56f18);
  lVar3 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x68 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,puVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar5));
  puVar1 = (undefined8 *)(unaff_x20 + uVar5 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054c624 | FUN_10054c624 */

void FUN_10054c624(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocObject();
  return;
}



/* Address: 0x10054c674 | FUN_10054c674 */

void FUN_10054c674(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
  plVar7 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_100542cc8(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054c724 | FUN_10054c724 */

void FUN_10054c724(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  local_20 = puVar1[4];
  FUN_100533d4c(param_1,*(undefined8 *)(unaff_x20 + 0x10),&local_40,
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10054c760 | thunk_FUN_10054c854 */

void thunk_FUN_10054c854(void)

{
  FUN_10054c854();
  return;
}



/* Address: 0x10054c764 | FUN_10054c764 */

void FUN_10054c764(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0x50 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_100542d94(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054c854 | FUN_10054c854 */

void FUN_10054c854(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  lVar3 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x50 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,puVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar5));
  puVar1 = (undefined8 *)(unaff_x20 + uVar5 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054c918 | FUN_10054c918 */

void FUN_10054c918(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005387e0(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10054c924 | FUN_10054c924 */

void FUN_10054c924(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  CheckedContinuation CVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  FUN_1004e3b34(0,uVar2,uVar3);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar9 = uVar8 + 0x38 & (uVar8 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  _swift_getAssociatedTypeWitness(0xff,uVar3,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb274c)
  ;
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar6 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar10 = *(long *)(CVar6.unknown + -8);
  uVar8 = (ulong)*(byte *)(lVar10 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  puVar1 = (undefined8 *)(unaff_x20 + uVar9);
  FUN_1004dc818(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
  _swift_bridgeObjectRelease(puVar1[4]);
  iVar4 = *(int *)(lVar5 + 0x28);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb2744);
  (**(code **)(*(long *)(lVar5 + -8) + 8))((long)puVar1 + (long)iVar4,lVar5);
  (**(code **)(lVar10 + 8))
            (unaff_x20 + (uVar9 + lVar7 + uVar8 & (uVar8 ^ 0xffffffffffffffff)),CVar6.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054ca74 | FUN_10054ca74 */

void FUN_10054ca74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  long lVar6;
  CheckedContinuation CVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar6 = 0;
  FUN_1004e3b34(0,uVar1,uVar3);
  uVar9 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar9 = uVar9 + 0x38 & (uVar9 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  _swift_getAssociatedTypeWitness(0xff,uVar3,uVar1,0x100cb270c,&TargetProtocolRequirement_100cb274c)
  ;
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar7 = Swift::CheckedContinuation::typeMetadataAccessor();
  bVar5 = *(byte *)(*(long *)(CVar7.unknown + -8) + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)thunk_FUN_100008284;
  FUN_100538a80(plVar8,param_1,uVar2,uVar4,uVar10,unaff_x20 + uVar9,
                unaff_x20 + (uVar9 + lVar6 + (ulong)bVar5 & ((ulong)bVar5 ^ 0xffffffffffffffff)),
                uVar1,uVar3);
  return;
}



/* Address: 0x10054cb94 | FUN_10054cb94 */

void FUN_10054cb94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100535738(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10054cbc4 | FUN_10054cbc4 */

void FUN_10054cbc4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  CheckedContinuation CVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  FUN_1004e3b34(0,uVar2,uVar3);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar10 = uVar8 + 0x38 & (uVar8 ^ 0xffffffffffffffff);
  lVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  _swift_getAssociatedTypeWitness(0xff,uVar3,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb274c)
  ;
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar6 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar11 = *(long *)(CVar6.unknown + -8);
  uVar8 = uVar10 + lVar7 + (ulong)*(byte *)(lVar11 + 0x50) &
          ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff);
  uVar9 = *(long *)(lVar11 + 0x40) + uVar8 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  FUN_1004dc818(*puVar1,puVar1[1],*(undefined1 *)(puVar1 + 2));
  _swift_bridgeObjectRelease(puVar1[4]);
  iVar4 = *(int *)(lVar5 + 0x28);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar3,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb2744);
  (**(code **)(*(long *)(lVar5 + -8) + 8))((long)puVar1 + (long)iVar4,lVar5);
  (**(code **)(lVar11 + 8))(unaff_x20 + uVar8,CVar6.unknown);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar9));
  puVar1 = (undefined8 *)(unaff_x20 + uVar9 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054cd4c | FUN_10054cd4c */

void FUN_10054cd4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  CheckedContinuation CVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  long unaff_x22;
  undefined8 uVar16;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar10 = 0;
  FUN_1004e3b34(0,uVar2,uVar6);
  uVar13 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  uVar14 = uVar13 + 0x38 & (uVar13 ^ 0xffffffffffffffff);
  lVar10 = *(long *)(*(long *)(lVar10 + -8) + 0x40);
  _swift_getAssociatedTypeWitness(0xff,uVar6,uVar2,0x100cb270c,&TargetProtocolRequirement_100cb274c)
  ;
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar11 = Swift::CheckedContinuation::typeMetadataAccessor();
  uVar13 = (ulong)*(byte *)(*(long *)(CVar11.unknown + -8) + 0x50);
  uVar15 = uVar14 + lVar10 + uVar13 & (uVar13 ^ 0xffffffffffffffff);
  uVar13 = *(long *)(*(long *)(CVar11.unknown + -8) + 0x40) + uVar15 + 7 & 0xfffffffffffffff8;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar1 = (undefined8 *)(unaff_x20 + uVar13);
  uVar4 = *puVar1;
  uVar8 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar13 + 0x10);
  uVar5 = *puVar1;
  uVar9 = puVar1[1];
  plVar12 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)thunk_FUN_100008284;
  FUN_100537a14(plVar12,param_1,uVar3,uVar7,uVar16,unaff_x20 + uVar14,unaff_x20 + uVar15,uVar4,uVar8
                ,uVar5,uVar9,uVar2,uVar6);
  return;
}



/* Address: 0x10054ceac | FUN_10054ceac */

void FUN_10054ceac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xc0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 200));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0xd0));
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8));
  _swift_deallocObject();
  return;
}



/* Address: 0x10054cf3c | FUN_10054cf3c */

void FUN_10054cf3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xe8);
  plVar7 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_100008284;
  FUN_100542af4(plVar7,param_1,uVar1,uVar4,uVar8,unaff_x20 + 0x28,uVar2,uVar5,uVar3,uVar6);
  return;
}



/* Address: 0x10054cfec | FUN_10054cfec */

void FUN_10054cfec(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uStack_38 = puVar1[0x11];
  local_40 = puVar1[0x10];
  uStack_28 = puVar1[0x13];
  uStack_30 = puVar1[0x12];
  local_20 = puVar1[0x14];
  uStack_78 = puVar1[9];
  local_80 = puVar1[8];
  uStack_68 = puVar1[0xb];
  uStack_70 = puVar1[10];
  uStack_58 = puVar1[0xd];
  local_60 = puVar1[0xc];
  uStack_48 = puVar1[0xf];
  uStack_50 = puVar1[0xe];
  uStack_b8 = puVar1[1];
  local_c0 = *puVar1;
  uStack_a8 = puVar1[3];
  uStack_b0 = puVar1[2];
  uStack_98 = puVar1[5];
  local_a0 = puVar1[4];
  uStack_88 = puVar1[7];
  uStack_90 = puVar1[6];
  FUN_100533aa8(param_1,*(undefined8 *)(unaff_x20 + 0x10),&local_c0,
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10054d048 | thunk_FUN_10054d240 */

void thunk_FUN_10054d240(void)

{
  FUN_10054d240();
  return;
}



/* Address: 0x10054d04c | FUN_10054d04c */

void FUN_10054d04c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcf0d8;
  FUN_1000f7830(&DAT_100fcf0d8,&DAT_100c56ff0);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0xd0 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_100008284;
  FUN_100542bfc(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054d13c | FUN_10054d13c */

void FUN_10054d13c(void)

{
  FUN_10054d160(&DAT_100fcf0e0,&DAT_100c57010,&DAT_100fcf0d8,&DAT_100c56ff0);
  return;
}



/* Address: 0x10054d160 | FUN_10054d160 */

void FUN_10054d160(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long unaff_x20;
  ulong uVar1;
  
  FUN_1000f7830();
  uVar1 = (ulong)*(byte *)(*(long *)(param_1 + -8) + 0x50);
  FUN_1000f7830(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 8))
            (unaff_x20 + (uVar1 + 0x10 & (uVar1 ^ 0xffffffffffffffff)),param_3);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054d1d4 | FUN_10054d1d4 */

void FUN_10054d1d4(undefined8 param_1)

{
  FUN_10054d1f0(param_1,&DAT_100fcf0e0,&DAT_100c57010,FUN_1005857b4);
  return;
}



/* Address: 0x10054d1f0 | FUN_10054d1f0 */

void FUN_10054d1f0(undefined8 param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  long unaff_x20;
  
  FUN_1000f7830(param_2,param_3);
  uVar1 = (ulong)*(byte *)(*(long *)(param_2 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010054d23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,unaff_x20 + (uVar1 + 0x10 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10054d240 | FUN_10054d240 */

void FUN_10054d240(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = &DAT_100fcf0d8;
  FUN_1000f7830(&DAT_100fcf0d8,&DAT_100c56ff0);
  lVar3 = *(long *)(puVar2 + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0xd0 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  uVar5 = *(long *)(lVar3 + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1004dc818(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined1 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xc0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 200));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,puVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + uVar5));
  puVar1 = (undefined8 *)(unaff_x20 + uVar5 + 0x10);
  FUN_10003bf2c(*puVar1,puVar1[1]);
  _swift_deallocObject();
  return;
}



/* Address: 0x10054d344 | FUN_10054d344 */

void FUN_10054d344(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar8 = &DAT_100fcf0d8;
  FUN_1000f7830(&DAT_100fcf0d8,&DAT_100c56ff0);
  uVar10 = (ulong)*(byte *)(*(long *)(puVar8 + -8) + 0x50);
  uVar12 = uVar10 + 0xd0 & (uVar10 ^ 0xffffffffffffffff);
  uVar10 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar1 = (undefined8 *)(unaff_x20 + uVar10);
  uVar3 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + uVar10 + 0x10);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_100008284;
  FUN_100542bfc(plVar9,param_1,uVar2,uVar5,uVar11,unaff_x20 + 0x28,unaff_x20 + uVar12,uVar3,uVar6,
                uVar4,uVar7);
  return;
}



/* Address: 0x10054d434 | FUN_10054d434 */

void FUN_10054d434(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fcf100 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcf0f8;
  FUN_1000f8b08(&DAT_100fcf0f8,&DAT_100c57030);
  puVar2 = &DAT_100fcf108;
  FUN_100134584(&DAT_100fcf108,&DAT_100fcb3e0,&DAT_100c50230,
                &TargetProtocolConformanceDescriptor_100c52c80);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_100fcf100 = puVar3;
  return;
}



/* Address: 0x10054d4c4 | FUN_10054d4c4 */

undefined8 FUN_10054d4c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ce654(param_2,param_1);
  return param_2;
}



/* Address: 0x10054d500 | FUN_10054d500 */

void FUN_10054d500(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf120 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56140;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56140,&DAT_100edd6b8);
  DAT_100fcf120 = pTVar1;
  return;
}



/* Address: 0x10054d540 | FUN_10054d540 */

void FUN_10054d540(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf128 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56190;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56190,&DAT_100edd778);
  DAT_100fcf128 = pTVar1;
  return;
}



/* Address: 0x10054d580 | FUN_10054d580 */

void FUN_10054d580(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fcc360;
    FUN_1000f8b08(&DAT_100fcc360,&DAT_100c519e8);
    local_40 = param_2;
    uStack_38 = param_2;
    _swift_getWitnessTable(param_3,puVar1,&local_40);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x10054d5e8 | FUN_10054d5e8 */

void FUN_10054d5e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf138 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55c10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55c10,&DAT_100edd638);
  DAT_100fcf138 = pTVar1;
  return;
}



/* Address: 0x10054d628 | FUN_10054d628 */

void FUN_10054d628(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fce820;
    FUN_1000f8b08(&DAT_100fce820,&DAT_100c5cfa0);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x10054d698 | FUN_10054d698 */

void FUN_10054d698(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf150 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52220;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52220,&DAT_100edae10);
  DAT_100fcf150 = pTVar1;
  return;
}



/* Address: 0x10054d6d8 | thunk_FUN_1005459a4 */

void thunk_FUN_1005459a4(void)

{
  FUN_1005459a4();
  return;
}



/* Address: 0x10054d6dc | thunk_FUN_1005459a4 */

void thunk_FUN_1005459a4(void)

{
  FUN_1005459a4();
  return;
}



/* Address: 0x10054d6e0 | thunk_FUN_1005459a4 */

void thunk_FUN_1005459a4(void)

{
  FUN_1005459a4();
  return;
}



/* Address: 0x10054d6e4 | thunk_FUN_1005459a4 */

void thunk_FUN_1005459a4(void)

{
  FUN_1005459a4();
  return;
}



/* Address: 0x10054d6e8 | thunk_FUN_1005459a4 */

void thunk_FUN_1005459a4(void)

{
  FUN_1005459a4();
  return;
}



/* Address: 0x10054d6ec | thunk_FUN_10053cea8 */

void thunk_FUN_10053cea8(void)

{
  FUN_10053cea8();
  return;
}



/* Address: 0x10054d6f0 | thunk_FUN_100535d08 */

void thunk_FUN_100535d08(void)

{
  FUN_100535d08();
  return;
}



/* Address: 0x10054d6f4 | thunk_FUN_100536648 */

void thunk_FUN_100536648(void)

{
  FUN_100536648();
  return;
}



/* Address: 0x10054d6f8 | thunk_FUN_10052a178 */

void thunk_FUN_10052a178(void)

{
  FUN_10052a178();
  return;
}



/* Address: 0x10054d6fc | thunk_FUN_10020df20 */

void thunk_FUN_10020df20(void)

{
  FUN_10020df20();
  return;
}



/* Address: 0x10054d700 | thunk_FUN_1005431e0 */

void thunk_FUN_1005431e0(void)

{
  FUN_1005431e0();
  return;
}



/* Address: 0x10054d704 | thunk_FUN_100243aec */

void thunk_FUN_100243aec(void)

{
  FUN_100243aec();
  return;
}



/* Address: 0x10054d708 | thunk_FUN_1001b27f8 */

void thunk_FUN_1001b27f8(void)

{
  FUN_1001b27f8();
  return;
}



/* Address: 0x10054d70c | thunk_FUN_100530118 */

void thunk_FUN_100530118(void)

{
  FUN_100530118();
  return;
}



/* Address: 0x10054d710 | thunk_FUN_100530158 */

void thunk_FUN_100530158(void)

{
  FUN_100530158();
  return;
}



/* Address: 0x10054d714 | thunk_FUN_100546cd0 */

void thunk_FUN_100546cd0(void)

{
  FUN_100546cd0();
  return;
}



/* Address: 0x10054d718 | thunk_FUN_10052a2fc */

void thunk_FUN_10052a2fc(void)

{
  thunk_FUN_10052a2fc();
  return;
}



/* Address: 0x10054d71c | thunk_FUN_10052a348 */

void thunk_FUN_10052a348(void)

{
  thunk_FUN_10052a348();
  return;
}



/* Address: 0x10054d720 | thunk_FUN_10054a004 */

void thunk_FUN_10054a004(void)

{
  thunk_FUN_10054a004();
  return;
}



/* Address: 0x10054d724 | thunk_FUN_100546ce4 */

void thunk_FUN_100546ce4(void)

{
  FUN_100546ce4();
  return;
}



/* Address: 0x10054d728 | thunk_FUN_1005430c0 */

void thunk_FUN_1005430c0(void)

{
  FUN_1005430c0();
  return;
}



/* Address: 0x10054d72c | thunk_FUN_10052a3ac */

void thunk_FUN_10052a3ac(void)

{
  thunk_FUN_10052a3ac();
  return;
}



/* Address: 0x10054d730 | thunk_FUN_10052a18c */

void thunk_FUN_10052a18c(void)

{
  thunk_FUN_10052a18c();
  return;
}



/* Address: 0x10054d734 | thunk_FUN_10052a1ec */

void thunk_FUN_10052a1ec(void)

{
  thunk_FUN_10052a1ec();
  return;
}



/* Address: 0x10054d738 | thunk_FUN_10054affc */

void thunk_FUN_10054affc(void)

{
  FUN_10054affc();
  return;
}



/* Address: 0x10054d73c | thunk_FUN_10052a180 */

void thunk_FUN_10052a180(void)

{
  FUN_10052a180();
  return;
}


