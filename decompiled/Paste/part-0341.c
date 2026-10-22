/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10043233c | FUN_10043233c */

void FUN_10043233c(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x100432344 | FUN_100432344 */

void FUN_100432344(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100432e30();
  iVar1 = *(int *)(lVar2 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010043238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x100432390 | FUN_100432390 */

void FUN_100432390(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100432e30();
  iVar1 = *(int *)(lVar2 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004323d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x28))(unaff_x20 + iVar1,param_1,DVar3.unknown);
  return;
}



/* Address: 0x1004323dc | FUN_1004323dc */

undefined1  [16] FUN_1004323dc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x20);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100432404 | FUN_100432404 */

void FUN_100432404(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  FUN_100432e68(unaff_x20 + *(int *)(lVar1 + 0x24),param_1);
  return;
}



/* Address: 0x100432434 | FUN_100432434 */

void FUN_100432434(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  FUN_100432eb8(param_1,unaff_x20 + *(int *)(lVar1 + 0x24));
  return;
}



/* Address: 0x100432464 | FUN_100432464 */

undefined1  [16] FUN_100432464(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x24);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x10043248c | FUN_10043248c */

void FUN_10043248c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  FUN_100432e68(unaff_x20 + *(int *)(lVar1 + 0x28),param_1);
  return;
}



/* Address: 0x1004324bc | FUN_1004324bc */

void FUN_1004324bc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  FUN_100432eb8(param_1,unaff_x20 + *(int *)(lVar1 + 0x28));
  return;
}



/* Address: 0x1004324ec | FUN_1004324ec */

undefined1  [16] FUN_1004324ec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x28);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100432514 | FUN_100432514 */

void FUN_100432514(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  FUN_100432e68(unaff_x20 + *(int *)(lVar1 + 0x2c),param_1);
  return;
}



/* Address: 0x100432544 | FUN_100432544 */

void FUN_100432544(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  FUN_100432eb8(param_1,unaff_x20 + *(int *)(lVar1 + 0x2c));
  return;
}



/* Address: 0x100432574 | FUN_100432574 */

undefined1  [16] FUN_100432574(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x2c);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x10043259c | FUN_10043259c */

undefined1 FUN_10043259c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x30));
}



/* Address: 0x1004325bc | FUN_1004325bc */

void FUN_1004325bc(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x30)) = param_1;
  return;
}



/* Address: 0x1004325e8 | FUN_1004325e8 */

undefined1  [16] FUN_1004325e8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x30);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100432610 | FUN_100432610 */

undefined1 FUN_100432610(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x34));
}



/* Address: 0x100432630 | FUN_100432630 */

void FUN_100432630(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x34)) = param_1;
  return;
}



/* Address: 0x10043265c | FUN_10043265c */

undefined1  [16] FUN_10043265c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x34);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100432684 | FUN_100432684 */

undefined1  [16] FUN_100432684(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._9_7_ = 0;
  auVar2._0_9_ = *(unkuint9 *)(unaff_x20 + *(int *)(lVar1 + 0x38));
  return auVar2;
}



/* Address: 0x1004326ac | FUN_1004326ac */

void FUN_1004326ac(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100432e30();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x38));
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  return;
}



/* Address: 0x1004326ec | FUN_1004326ec */

undefined1  [16] FUN_1004326ec(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x38);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100432714 | FUN_100432714 */

undefined1  [16] FUN_100432714(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_100432e30();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x3c));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100432750 | FUN_100432750 */

void FUN_100432750(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100432e30();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x3c));
  _swift_bridgeObjectRelease(puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x100432794 | FUN_100432794 */

undefined1  [16] FUN_100432794(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x3c);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1004327bc | FUN_1004327bc */

undefined8 FUN_1004327bc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  return *(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x40));
}



/* Address: 0x1004327dc | FUN_1004327dc */

void FUN_1004327dc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100432e30();
  *(undefined8 *)(unaff_x20 + *(int *)(lVar1 + 0x40)) = param_1;
  return;
}



/* Address: 0x100432808 | FUN_100432808 */

undefined1  [16] FUN_100432808(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100432e30();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x40);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100432830 | FUN_100432830 */

bool FUN_100432830(void)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  code *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar3.unknown + -8);
  puVar11 = &stack0xffffffffffffffa0 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc67d0;
  FUN_1000f7830(&DAT_100fc67d0,&DAT_100c4a8a0);
  lVar9 = (long)puVar11 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  uVar8 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = lVar9 - uVar8;
  lVar13 = lVar12 - uVar8;
  lVar6 = 0;
  FUN_100432e30();
  iVar1 = *(int *)(lVar6 + 0x28);
  (**(code **)(lVar14 + 0x38))(lVar13,1,1,DVar3.unknown);
  lVar6 = (long)*(int *)(puVar4 + 0x30);
  FUN_100432e68(unaff_x20 + iVar1,lVar9);
  FUN_100432e68(lVar13,lVar9 + lVar6);
  pcVar10 = *(code **)(lVar14 + 0x30);
  lVar7 = lVar9;
  (*pcVar10)(lVar9,1,DVar3.unknown);
  if ((int)lVar7 == 1) {
    FUN_1000fb4c4(lVar13,&DAT_100fc67c8,&DAT_100c4a330);
    lVar6 = lVar9 + lVar6;
    (*pcVar10)(lVar6,1,DVar3.unknown);
    if ((int)lVar6 == 1) {
      FUN_1000fb4c4(lVar9,&DAT_100fc67c8,&DAT_100c4a330);
      return false;
    }
  }
  else {
    FUN_100432e68(lVar9,lVar12);
    lVar7 = lVar9 + lVar6;
    (*pcVar10)(lVar7,1,DVar3.unknown);
    if ((int)lVar7 != 1) {
      (**(code **)(lVar14 + 0x20))(puVar11,lVar9 + lVar6,DVar3.unknown);
      puVar4 = &DAT_100fc67d8;
      FUN_1000e8c70(&DAT_100fc67d8,PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar2 = Swift::Equatable::___infix(lVar12,puVar11,DVar3.unknown,puVar4);
      pcVar10 = *(code **)(lVar14 + 8);
      (*pcVar10)(puVar11,DVar3.unknown);
      FUN_1000fb4c4(lVar13,&DAT_100fc67c8,&DAT_100c4a330);
      (*pcVar10)(lVar12,DVar3.unknown);
      FUN_1000fb4c4(lVar9,&DAT_100fc67c8,&DAT_100c4a330);
      return !bVar2;
    }
    FUN_1000fb4c4(lVar13,&DAT_100fc67c8,&DAT_100c4a330);
    (**(code **)(lVar14 + 8))(lVar12,DVar3.unknown);
  }
  FUN_1000fb4c4(lVar9,&DAT_100fc67d0,&DAT_100c4a8a0);
  return true;
}



/* Address: 0x100432ab4 | FUN_100432ab4 */

bool FUN_100432ab4(undefined *param_1)

{
  int iVar1;
  Date DVar2;
  Date DVar3;
  bool bVar4;
  Date DVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  Date DVar10;
  ulong uVar11;
  code *pcVar12;
  long unaff_x20;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  Date local_80;
  Date local_78;
  long local_70;
  
  local_78.unknown = param_1;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  uVar11 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_80.unknown = (undefined *)((long)&local_80 - uVar11);
  lVar17 = (long)local_80.unknown - uVar11;
  puVar6 = &DAT_100fc67d0;
  FUN_1000f7830(&DAT_100fc67d0,&DAT_100c4a8a0);
  lVar16 = lVar17 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  uVar11 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar16 - uVar11;
  lVar18 = lVar15 - uVar11;
  lVar19 = lVar18 - uVar11;
  lVar8 = 0;
  FUN_100432e30();
  iVar1 = *(int *)(lVar8 + 0x2c);
  local_70 = lVar8;
  (**(code **)(lVar14 + 0x38))(lVar19,1,1,DVar5.unknown);
  lVar8 = (long)*(int *)(puVar6 + 0x30);
  FUN_100432e68(unaff_x20 + iVar1,lVar16);
  FUN_100432e68(lVar19,lVar16 + lVar8);
  pcVar13 = *(code **)(lVar14 + 0x30);
  lVar9 = lVar16;
  (*pcVar13)(lVar16,1,DVar5.unknown);
  if ((int)lVar9 == 1) {
    FUN_1000fb4c4(lVar19,&DAT_100fc67c8,&DAT_100c4a330);
    lVar8 = lVar16 + lVar8;
    (*pcVar13)(lVar8,1,DVar5.unknown);
    if ((int)lVar8 == 1) {
      FUN_1000fb4c4(lVar16,&DAT_100fc67c8,&DAT_100c4a330);
LAB_100432d34:
      lVar8 = local_70;
      FUN_100432e68(unaff_x20 + *(int *)(local_70 + 0x28),lVar15);
      lVar9 = lVar15;
      (*pcVar13)(lVar15,1,DVar5.unknown);
      DVar2.unknown = local_80.unknown;
      if ((int)lVar9 != 1) {
        (**(code **)(lVar14 + 0x20))(local_80.unknown,lVar15,DVar5.unknown);
        iVar1 = *(int *)(lVar8 + 0x20);
        puVar6 = &DAT_100fc67e0;
        FUN_1000e8c70(&DAT_100fc67e0,PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
        DVar3.unknown = local_78.unknown;
        DVar10 = DVar5;
        bVar4 = Swift::Comparable::>__infix(local_78.unknown,unaff_x20 + iVar1,DVar5.unknown,puVar6)
        ;
        if (bVar4) {
          bVar4 = Foundation::Date::<_infix(DVar3,DVar2,DVar10);
        }
        else {
          bVar4 = false;
        }
        (**(code **)(lVar14 + 8))(DVar2.unknown,DVar5.unknown);
        return bVar4;
      }
      puVar6 = &DAT_100fc67c8;
      puVar7 = &DAT_100c4a330;
      lVar16 = lVar15;
      goto LAB_100432d74;
    }
  }
  else {
    FUN_100432e68(lVar16,lVar18);
    lVar9 = lVar16 + lVar8;
    (*pcVar13)(lVar9,1,DVar5.unknown);
    if ((int)lVar9 != 1) {
      (**(code **)(lVar14 + 0x20))(lVar17,lVar16 + lVar8,DVar5.unknown);
      puVar6 = &DAT_100fc67d8;
      FUN_1000e8c70(&DAT_100fc67d8,PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar4 = Swift::Equatable::___infix(lVar18,lVar17,DVar5.unknown,puVar6);
      pcVar12 = *(code **)(lVar14 + 8);
      (*pcVar12)(lVar17,DVar5.unknown);
      FUN_1000fb4c4(lVar19,&DAT_100fc67c8,&DAT_100c4a330);
      (*pcVar12)(lVar18,DVar5.unknown);
      FUN_1000fb4c4(lVar16,&DAT_100fc67c8,&DAT_100c4a330);
      if (!bVar4) {
        return false;
      }
      goto LAB_100432d34;
    }
    FUN_1000fb4c4(lVar19,&DAT_100fc67c8,&DAT_100c4a330);
    (**(code **)(lVar14 + 8))(lVar18,DVar5.unknown);
  }
  puVar6 = &DAT_100fc67d0;
  puVar7 = &DAT_100c4a8a0;
LAB_100432d74:
  FUN_1000fb4c4(lVar16,puVar6,puVar7);
  return false;
}



/* Address: 0x100432e1c | FUN_100432e1c */

int FUN_100432e1c(int param_1)

{
  int iVar1;
  
  iVar1 = 5;
  if (param_1 + 1U < 5) {
    iVar1 = param_1 + 1;
  }
  return iVar1;
}



/* Address: 0x100432e30 | FUN_100432e30 */

void FUN_100432e30(undefined8 param_1)

{
  if (DAT_100fc6848 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cb0484);
  return;
}



/* Address: 0x100432e68 | FUN_100432e68 */

undefined8 FUN_100432e68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100432eb8 | FUN_100432eb8 */

undefined8 FUN_100432eb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100432f08 | thunk_FUN_100432f0c */

void thunk_FUN_100432f0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc67e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a1e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a1e8,&DAT_100ed4a30);
  DAT_100fc67e8 = pTVar1;
  return;
}



/* Address: 0x100432f0c | FUN_100432f0c */

void FUN_100432f0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc67e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a1e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a1e8,&DAT_100ed4a30);
  DAT_100fc67e8 = pTVar1;
  return;
}



/* Address: 0x100432f4c | FUN_100432f4c */

long * FUN_100432f4c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  Date DVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar9;
    *(char *)(param_1 + 2) = (char)param_2[2];
    lVar12 = param_2[4];
    param_1[3] = param_2[3];
    param_1[4] = lVar12;
    lVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[6] = lVar3;
    iVar6 = *(int *)(param_3 + 0x20);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar7.unknown + -8);
    pcVar14 = *(code **)(lVar13 + 0x10);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(lVar3);
    (*pcVar14)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,DVar7.unknown);
    lVar12 = (long)*(int *)(param_3 + 0x24);
    pcVar11 = *(code **)(lVar13 + 0x30);
    lVar9 = (long)param_2 + lVar12;
    (*pcVar11)(lVar9,1,DVar7.unknown);
    if ((int)lVar9 == 0) {
      (*pcVar14)((long)param_1 + lVar12,(long)param_2 + lVar12,DVar7.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar7.unknown);
    }
    else {
      puVar8 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    lVar12 = (long)*(int *)(param_3 + 0x28);
    lVar9 = (long)param_2 + lVar12;
    (*pcVar11)(lVar9,1,DVar7.unknown);
    if ((int)lVar9 == 0) {
      (*pcVar14)((long)param_1 + lVar12,(long)param_2 + lVar12,DVar7.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar7.unknown);
    }
    else {
      puVar8 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    lVar12 = (long)*(int *)(param_3 + 0x2c);
    lVar9 = (long)param_2 + lVar12;
    (*pcVar11)(lVar9,1,DVar7.unknown);
    if ((int)lVar9 == 0) {
      (*pcVar14)((long)param_1 + lVar12,(long)param_2 + lVar12,DVar7.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar7.unknown);
    }
    else {
      puVar8 = &DAT_100fc67c8;
      FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar6 = *(int *)(param_3 + 0x34);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
    iVar6 = *(int *)(param_3 + 0x3c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    _swift_bridgeObjectRetain();
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar9 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004331b8 | FUN_1004331b8 */

void FUN_1004331b8(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  iVar1 = *(int *)(param_2 + 0x20);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  pcVar3 = *(code **)(lVar5 + 8);
  (*pcVar3)(param_1 + iVar1,DVar2.unknown);
  iVar1 = *(int *)(param_2 + 0x24);
  pcVar4 = *(code **)(lVar5 + 0x30);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,DVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x28);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,DVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  lVar5 = param_1 + iVar1;
  (*pcVar4)(lVar5,1,DVar2.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar3)(param_1 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  return;
}



/* Address: 0x1004332a8 | FUN_1004332a8 */

undefined8 * FUN_1004332a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  Date DVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar4;
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar5;
  iVar6 = *(int *)(param_3 + 0x20);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar7.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar13)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,DVar7.unknown);
  lVar11 = (long)*(int *)(param_3 + 0x24);
  pcVar10 = *(code **)(lVar12 + 0x30);
  lVar8 = (long)param_2 + lVar11;
  (*pcVar10)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar13)((long)param_1 + lVar11,(long)param_2 + lVar11,DVar7.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar11 = (long)*(int *)(param_3 + 0x28);
  lVar8 = (long)param_2 + lVar11;
  (*pcVar10)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar13)((long)param_1 + lVar11,(long)param_2 + lVar11,DVar7.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar11 = (long)*(int *)(param_3 + 0x2c);
  lVar8 = (long)param_2 + lVar11;
  (*pcVar10)(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (*pcVar13)((long)param_1 + lVar11,(long)param_2 + lVar11,DVar7.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
  iVar6 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1004334e8 | FUN_1004334e8 */

undefined8 * FUN_1004334e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Date DVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  
  *param_1 = *param_2;
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  uVar8 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  param_1[5] = param_2[5];
  uVar8 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  iVar3 = *(int *)(param_3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x18);
  (*pcVar10)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar4.unknown);
  lVar12 = (long)*(int *)(param_3 + 0x24);
  pcVar11 = *(code **)(lVar9 + 0x30);
  lVar5 = (long)param_1 + lVar12;
  (*pcVar11)(lVar5,1,DVar4.unknown);
  lVar6 = (long)param_2 + lVar12;
  (*pcVar11)(lVar6,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar12,DVar4.unknown);
      goto LAB_100433618;
    }
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,DVar4.unknown);
  }
  else {
LAB_100433618:
    puVar7 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x28);
  lVar5 = (long)param_1 + lVar12;
  (*pcVar11)(lVar5,1,DVar4.unknown);
  lVar6 = (long)param_2 + lVar12;
  (*pcVar11)(lVar6,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar9 + 8))((long)param_1 + lVar12,DVar4.unknown);
      goto LAB_1004336b4;
    }
    (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,DVar4.unknown);
  }
  else {
LAB_1004336b4:
    puVar7 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x2c);
  lVar5 = (long)param_1 + lVar12;
  (*pcVar11)(lVar5,1,DVar4.unknown);
  lVar6 = (long)param_2 + lVar12;
  (*pcVar11)(lVar6,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (*pcVar10)((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
      goto LAB_100433778;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar12,DVar4.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,DVar4.unknown);
    goto LAB_100433778;
  }
  puVar7 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
          *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_100433778:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar8 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  return param_1;
}



/* Address: 0x100433840 | FUN_100433840 */

undefined8 * FUN_100433840(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar11 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar11;
  uVar11 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar11;
  iVar3 = *(int *)(param_3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x20);
  (*pcVar8)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar4.unknown);
  lVar10 = (long)*(int *)(param_3 + 0x24);
  pcVar9 = *(code **)(lVar7 + 0x30);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x28);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x2c);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar9)(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (*pcVar8)((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar10,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  return param_1;
}



/* Address: 0x100433a54 | FUN_100433a54 */

undefined8 * FUN_100433a54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  Date DVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  
  uVar3 = param_2[1];
  uVar5 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar3 = param_2[4];
  uVar5 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  uVar3 = param_2[6];
  uVar5 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  iVar4 = *(int *)(param_3 + 0x20);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar6.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x28);
  (*pcVar11)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,DVar6.unknown);
  lVar13 = (long)*(int *)(param_3 + 0x24);
  pcVar12 = *(code **)(lVar10 + 0x30);
  lVar7 = (long)param_1 + lVar13;
  (*pcVar12)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar12)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar13,DVar6.unknown);
      goto LAB_100433b54;
    }
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
  }
  else {
LAB_100433b54:
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x28);
  lVar7 = (long)param_1 + lVar13;
  (*pcVar12)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar12)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar13,DVar6.unknown);
      goto LAB_100433bf0;
    }
    (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
  }
  else {
LAB_100433bf0:
    puVar9 = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar13 = (long)*(int *)(param_3 + 0x2c);
  lVar7 = (long)param_1 + lVar13;
  (*pcVar12)(lVar7,1,DVar6.unknown);
  lVar8 = (long)param_2 + lVar13;
  (*pcVar12)(lVar8,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar8 == 0) {
      (*pcVar11)((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
      goto LAB_100433cb4;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar13,DVar6.unknown);
  }
  else if ((int)lVar8 == 0) {
    (**(code **)(lVar10 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar13,0,1,DVar6.unknown);
    goto LAB_100433cb4;
  }
  puVar9 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_100433cb4:
  iVar4 = *(int *)(param_3 + 0x34);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  return param_1;
}



/* Address: 0x100433d64 | FUN_100433d64 */

void FUN_100433d64(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100433d70 | FUN_100433d70 */

ulong FUN_100433d70(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x20);
  }
  else {
    DVar2.unknown = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    lVar4 = *(long *)(DVar2.unknown + -8);
    iVar1 = *(int *)(param_3 + 0x24);
  }
  uVar3 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x000100433e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,DVar2.unknown);
  return uVar3;
}



/* Address: 0x100433e1c | FUN_100433e1c */

void FUN_100433e1c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100433e28 | FUN_100433e28 */

void FUN_100433e28(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(DVar2.unknown + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x20);
  }
  else {
    DVar2.unknown = &DAT_100fc67c8;
    FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
    lVar3 = *(long *)(DVar2.unknown + -8);
    iVar1 = *(int *)(param_4 + 0x24);
  }
                    /* WARNING: Could not recover jumptable at 0x000100433ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,DVar2.unknown);
  return;
}



/* Address: 0x100433ed0 | FUN_100433ed0 */

void FUN_100433ed0(long param_1,ulong param_2)

{
  Date DVar1;
  long lVar2;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  long local_68;
  long local_60;
  long lStack_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_88 = &DAT_100c4a2b0;
  puStack_80 = &DAT_100c4a2c8;
  local_78 = &DAT_100c4a2b0;
  puStack_70 = &DAT_100c4a2b0;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_68 = *(long *)(DVar1.unknown + -8) + 0x40;
    lVar2 = 0x13f;
    FUN_100433f9c();
    if (param_2 < 0x40) {
      local_60 = *(long *)(lVar2 + -8) + 0x40;
      puStack_48 = &DAT_100c4a2e0;
      local_40 = &DAT_100c4a2e0;
      puStack_38 = &DAT_100c4a2f8;
      puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
      local_30 = &DAT_100c4a310;
      lStack_58 = local_60;
      local_50 = local_60;
      _swift_initStructMetadata(param_1,0x100,0xd,&local_88,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x100433f9c | FUN_100433f9c */

void FUN_100433f9c(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100fc6858 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100fc6858 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100433ff0 | FUN_100433ff0 */

undefined1  [16] FUN_100433ff0(void)

{
  return ZEXT816(0x100ed4a30);
}



/* Address: 0x100434000 | FUN_100434000 */

/* WARNING: Removing unreachable block (ram,0x000100434324) */
/* WARNING: Removing unreachable block (ram,0x0001004342a4) */

long * FUN_100434000(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar9;
  undefined1 auStack_180 [8];
  long local_178;
  long local_170;
  long local_168;
  code *local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  undefined1 *local_140;
  long local_138;
  long local_130;
  undefined1 auStack_120 [24];
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lVar2 = 0;
  FUN_10043758c();
  lVar7 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  lVar3 = 0;
  local_148 = lVar2;
  local_140 = auStack_180 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  FUN_1004375a0();
  lVar7 = (long)(auStack_180 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc6660;
  local_138 = lVar3;
  local_130 = lVar7;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  lVar2 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  uVar8 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = lVar7 - uVar8;
  lVar3 = 0;
  FUN_10043ee24();
  pcVar9 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
  (*pcVar9)((long)unaff_x20 + lVar2,1,1,lVar3);
  uVar5 = 0;
  FUN_1004490a8(0);
  _swift_initStackObject();
  uVar6 = uVar5;
  FUN_1004375b4();
  FUN_100448cf0(&local_108,&DAT_100ed5c40,param_1,param_2,0,&DAT_100ed5c40,uVar6);
  if (unaff_x21 == 0) {
    local_168 = lVar2;
    unaff_x20[0xf] = lStack_a0;
    unaff_x20[0xe] = local_a8;
    unaff_x20[0x11] = lStack_90;
    unaff_x20[0x10] = local_98;
    unaff_x20[0x13] = lStack_80;
    unaff_x20[0x12] = lStack_88;
    unaff_x20[7] = lStack_e0;
    unaff_x20[6] = local_e8;
    unaff_x20[9] = lStack_d0;
    unaff_x20[8] = local_d8;
    unaff_x20[0xb] = lStack_c0;
    unaff_x20[10] = local_c8;
    unaff_x20[0xd] = lStack_b0;
    unaff_x20[0xc] = local_b8;
    unaff_x20[3] = lStack_100;
    unaff_x20[2] = local_108;
    unaff_x20[5] = lStack_f0;
    unaff_x20[4] = local_f8;
    lVar2 = unaff_x20[8];
    lVar1 = unaff_x20[9];
    local_178 = lVar7;
    local_170 = lVar7 - uVar8;
    local_160 = pcVar9;
    local_158 = lVar3;
    local_150 = param_1;
    FUN_1001037b4(lVar2,lVar1);
    puVar4 = &DAT_100fc69f8;
    FUN_100003a00(&DAT_100fc69f8,FUN_1004375a0,&TargetProtocolConformanceDescriptor_100c4a5d0);
    lVar3 = local_130;
    FUN_100448cf0(local_130,local_138,lVar2,lVar1,0,local_138,puVar4);
    _swift_release(uVar5);
    FUN_10003bf2c(local_150,param_2);
    FUN_10003bf2c(lVar2,lVar1);
    lVar2 = local_170;
    FUN_1000523d8(lVar3,local_170,FUN_10043ee24);
    (*local_160)(lVar2,0,1,local_158);
    lVar3 = local_168;
    _swift_beginAccess((long)unaff_x20 + local_168,auStack_120,0x21,0);
    FUN_1004375f4(lVar2,(long)unaff_x20 + lVar3,&DAT_100fc6660,&DAT_100c49fd0);
    _swift_endAccess(auStack_120);
  }
  else {
    FUN_10003bf2c(param_1,param_2);
    FUN_1000fb4c4((long)unaff_x20 + lVar2,&DAT_100fc6660,&DAT_100c49fd0);
    uVar6 = 0;
    FUN_100436b48(0);
    _swift_deallocPartialClassInstance
              (unaff_x20,uVar6,*(undefined4 *)(*unaff_x20 + 0x30),*(undefined2 *)(*unaff_x20 + 0x34)
              );
  }
  return unaff_x20;
}



/* Address: 0x1004344b0 | FUN_1004344b0 */

void FUN_1004344b0(void)

{
  long unaff_x20;
  
  FUN_100437558(unaff_x20 + 0x10);
  FUN_1000fb4c4(unaff_x20 + _TtC14TPInAppReceipt13_InAppReceipt::payload,&DAT_100fc6660,
                &DAT_100c49fd0);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1004344f8 | FUN_1004344f8 */

long * FUN_1004344f8(void)

{
  long *plVar1;
  long *plVar2;
  
  FUN_10044add8(0);
  plVar1 = (long *)0x11;
  FUN_10044abcc();
  plVar2 = plVar1;
  (**(code **)(*plVar1 + 0x88))();
  _swift_release(plVar1);
  return plVar2;
}



/* Address: 0x100434544 | FUN_100434544 */

undefined1  [16] FUN_100434544(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x746573;
  return auVar1;
}



/* Address: 0x100434554 | FUN_100434554 */

void FUN_100434554(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x746573 && param_3 == -0x1d00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x746573,(_StringGuts)0xe300000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x1004345d8 | FUN_1004345d8 */

String FUN_1004345d8(void)

{
  String SVar1;
  
  FUN_100436c64();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100434600 | FUN_100434600 */

String FUN_100434600(void)

{
  String SVar1;
  
  FUN_100436c64();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100434628 | FUN_100434628 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010043507c) */
/* WARNING: Removing unreachable block (ram,0x000100434d28) */
/* WARNING: Removing unreachable block (ram,0x000100434c7c) */
/* WARNING: Removing unreachable block (ram,0x000100435210) */
/* WARNING: Removing unreachable block (ram,0x00010043498c) */
/* WARNING: Removing unreachable block (ram,0x000100434d2c) */
/* WARNING: Removing unreachable block (ram,0x000100434b44) */
/* WARNING: Removing unreachable block (ram,0x000100434b4c) */
/* WARNING: Removing unreachable block (ram,0x000100434908) */

void FUN_100434628(undefined8 param_1,long param_2)

{
  ID IVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  bool bVar6;
  __int32 _Var7;
  long lVar8;
  undefined *puVar9;
  Date DVar10;
  KeyedDecodingContainer<undefined> KVar11;
  undefined1 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *pvVar17;
  NSString *pNVar18;
  undefined *puVar19;
  long lVar20;
  void *pvVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long unaff_x21;
  long lVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  String SVar29;
  String SVar30;
  code *local_270;
  long local_268;
  char *local_260;
  char *local_258;
  char *local_250;
  undefined8 local_248;
  char *local_240;
  void *local_238;
  long local_230;
  undefined8 local_228;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  void *local_1f8;
  long local_1f0;
  void *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  undefined8 *local_1b0;
  long local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148 [3];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [24];
  void *local_f0;
  long lStack_e8;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  long lStack_c0;
  undefined1 auStack_b8 [24];
  long local_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  lVar8 = 0;
  local_168 = param_1;
  FUN_100432e30();
  local_188 = *(long *)(lVar8 + -8);
  lVar22 = (long)&local_270 - (*(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_100fc69c8;
  local_180 = lVar8;
  local_178 = lVar22;
  FUN_1000f7830(&DAT_100fc69c8,&DAT_100c4a418);
  local_160 = *(long *)(puVar19 + -8);
  lVar22 = lVar22 - (*(long *)(local_160 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100fc67c8;
  local_158 = puVar19;
  local_150 = lVar22;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  uVar23 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_170 = lVar22 - uVar23;
  lVar25 = local_170 - uVar23;
  lVar26 = lVar25 - uVar23;
  lVar28 = lVar26 - uVar23;
  local_148[0] = lVar28 - uVar23;
  local_148[1] = local_148[0] - uVar23;
  lVar22 = local_148[1] - uVar23;
  lVar8 = 0;
  local_148[2] = lVar22;
  FUN_10043ee24();
  puVar24 = (undefined8 *)
            (lVar22 - (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100076688(param_2,auStack_b8);
  puVar19 = &DAT_100fc69d0;
  FUN_1000f7830(&DAT_100fc69d0,&DAT_100c4a420);
  puVar9 = &DAT_100fc69d8;
  FUN_1000f7830(&DAT_100fc69d8,&DAT_100c4a428);
  _swift_dynamicCast(auStack_90,auStack_b8,puVar19,puVar9,7);
  FUN_100004640(auStack_90,local_78);
  (**(code **)(lStack_70 + 0x18))();
  if (unaff_x21 == 0) {
    local_1d0 = lVar28;
    local_1c8 = lVar26;
    local_1c0 = lVar25;
    local_1b8 = lVar8;
    local_1b0 = puVar24;
    local_198 = local_78;
    local_190 = lStack_70;
    DVar10 = Foundation::Date::typeMetadataAccessor();
    local_1a8 = *(long *)(DVar10.unknown + -8);
    pcVar27 = *(code **)(local_1a8 + 0x38);
    (*pcVar27)(local_148[2],1,1,DVar10.unknown);
    (*pcVar27)(local_148[1],1,1,DVar10.unknown);
    (*pcVar27)(local_148[0],1,1,DVar10.unknown);
    FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
    FUN_100436c64();
    KVar11 = Swift::Decoder::_container();
    lVar8 = local_1a8;
    Swift::KeyedDecodingContainer::_nestedUnkeyedContainer(auStack_e0,KVar11.unknown,local_158);
    puVar19 = &DAT_100fc68b8;
    local_270 = pcVar27;
    local_268 = param_2;
    local_1d8 = DVar10.unknown;
    FUN_1000f7830(&DAT_100fc68b8,&DAT_100c4a338);
    puVar9 = &DAT_100fc68c0;
    FUN_1000f7830(&DAT_100fc68c0,&DAT_100c4a340);
    local_1a0 = puVar19;
    _swift_dynamicCast(auStack_b8,auStack_e0,puVar19,puVar9,7);
    local_240 = (char *)0x0;
    local_248 = 0;
    local_1e8 = (void *)0x0;
    local_1f8 = (void *)0x0;
    local_250 = (char *)0x0;
    local_258 = (char *)0x0;
    local_218 = (void *)0x0;
    local_260 = (char *)0x0;
    local_1e0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_1f0 = -0x4000000000000000;
    local_208 = 0xe000000000000000;
    local_210 = 0xe000000000000000;
    local_200 = -0x4000000000000000;
    local_220 = 0xe000000000000000;
    local_228 = 0xe000000000000000;
    local_230 = -0x4000000000000000;
    local_238 = (void *)0xe000000000000000;
    while( true ) {
      lVar22 = local_a0;
      puVar12 = auStack_b8;
      FUN_100004640(puVar12,local_a0);
      lVar26 = *(long *)(lVar22 + -8);
      lVar25 = (long)puVar24 - (*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar26 + 0x10))(lVar25,puVar12,lVar22);
      bVar6 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
      (**(code **)(lVar26 + 8))(lVar25,lVar22);
      lVar25 = local_148[2];
      puVar4 = local_1b0;
      lVar22 = local_1b8;
      if (bVar6) break;
      FUN_10044add8(0);
      plVar13 = (long *)0x10;
      FUN_10044abcc();
      plVar14 = plVar13;
      (**(code **)(*plVar13 + 0x88))();
      _swift_release(plVar13);
      lVar25 = lStack_98;
      lVar22 = local_a0;
      FUN_10007d048(auStack_b8,local_a0);
      (**(code **)(lVar25 + 0x38))(auStack_108,plVar14,lVar22,lVar25);
      _swift_release(plVar14);
      _swift_dynamicCast(auStack_e0,auStack_108,local_1a0,puVar9,7);
      FUN_10007d048(auStack_e0,local_c8);
      _Var7 = Swift::UnkeyedDecodingContainer::_decode();
      uVar15 = 2;
      FUN_10044abcc(2);
      lVar22 = lStack_c0;
      uVar16 = local_c8;
      FUN_10007d048(auStack_e0,local_c8);
      (**(code **)(lVar22 + 0x40))(uVar15,uVar16,lVar22);
      _swift_release(uVar15);
      uVar15 = 4;
      FUN_10044abcc(4);
      lVar22 = lStack_c0;
      uVar16 = local_c8;
      FUN_10007d048(auStack_e0,local_c8);
      (**(code **)(lVar22 + 0x38))(auStack_130,uVar15,uVar16,lVar22);
      _swift_release(uVar15);
      _swift_dynamicCast(auStack_108,auStack_130,local_1a0,puVar9,7);
      lVar22 = lStack_e8;
      pvVar21 = local_f0;
      switch(_Var7) {
      case 0:
        FUN_10007d048(auStack_108,local_f0);
        SVar30 = Swift::UnkeyedDecodingContainer::_decode();
        _swift_bridgeObjectRelease(local_208);
        puVar12 = auStack_108;
        goto LAB_100435388;
      case 2:
        FUN_10007d048(auStack_108,local_f0);
        SVar30 = Swift::UnkeyedDecodingContainer::_decode();
        local_260 = SVar30.str;
        _swift_bridgeObjectRelease(local_238);
        lVar22 = lStack_e8;
        pvVar21 = local_f0;
        puVar12 = auStack_108;
        FUN_100004640(puVar12,local_f0);
        lVar26 = *(long *)((long)pvVar21 + -8);
        lVar25 = (long)puVar24 - (*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar26 + 0x10))(lVar25,puVar12,pvVar21);
        pvVar17 = pvVar21;
        (**(code **)(lVar22 + 0x18))();
        FUN_10003bf2c(local_218,local_230);
        (**(code **)(lVar26 + 8))(lVar25,pvVar21);
        local_238 = SVar30.bridgeObject;
        local_230 = lVar22;
        local_218 = pvVar17;
        break;
      case 3:
        FUN_10007d048(auStack_108,local_f0);
        SVar29 = Swift::UnkeyedDecodingContainer::_decode();
        _swift_bridgeObjectRelease(local_228);
        SVar30.bridgeObject = SVar29.bridgeObject;
        SVar30.str = local_240;
        puVar12 = auStack_128;
        local_258 = SVar29.str;
        goto LAB_100435388;
      case 4:
        puVar12 = auStack_108;
        FUN_100004640(puVar12,local_f0);
        lVar26 = *(long *)((long)pvVar21 + -8);
        lVar25 = (long)puVar24 - (*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar26 + 0x10))(lVar25,puVar12,pvVar21);
        pvVar17 = pvVar21;
        (**(code **)(lVar22 + 0x18))();
        FUN_10003bf2c(local_1f8,local_200);
        (**(code **)(lVar26 + 8))(lVar25,pvVar21);
        local_200 = lVar22;
        local_1f8 = pvVar17;
        break;
      case 5:
        puVar12 = auStack_108;
        FUN_100004640(puVar12,local_f0);
        lVar26 = *(long *)((long)pvVar21 + -8);
        lVar25 = (long)puVar24 - (*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar26 + 0x10))(lVar25,puVar12,pvVar21);
        pvVar17 = pvVar21;
        (**(code **)(lVar22 + 0x18))();
        FUN_10003bf2c(local_1e8,local_1f0);
        (**(code **)(lVar26 + 8))(lVar25,pvVar21);
        local_1f0 = lVar22;
        local_1e8 = pvVar17;
        break;
      case 10:
        uVar15 = 0x16;
        FUN_10044abcc();
        lVar22 = lStack_e8;
        pvVar21 = local_f0;
        FUN_10007d048(auStack_108,local_f0);
        uVar16 = uVar15;
        (**(code **)(lVar22 + 0x20))(uVar15,pvVar21,lVar22);
        _swift_release(uVar15);
        _swift_bridgeObjectRelease(local_210);
        SVar30.bridgeObject = pvVar21;
        SVar30.str = local_240;
        puVar12 = auStack_110;
        local_248 = uVar16;
        goto LAB_100435388;
      case 0xc:
        uVar16 = 0x16;
        FUN_10044abcc(0x16);
        lVar22 = lStack_e8;
        pvVar21 = local_f0;
        FUN_10007d048(auStack_108,local_f0);
        (**(code **)(lVar22 + 0x20))(uVar16,pvVar21,lVar22);
        _swift_release(uVar16);
        if (DAT_100fc6628 != -1) {
          _swift_once(&DAT_100fc6628,FUN_10042ea24);
        }
        IVar1 = DAT_100fc6630;
        pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        DVar10.unknown = (undefined *)objc_stub::dateFromString_(IVar1,pNVar18);
        lVar22 = local_1c0;
        bVar6 = DVar10.unknown == (undefined *)0x0;
        if (!bVar6) {
          Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar10);
        }
        _swift_bridgeObjectRelease(pvVar21);
        puVar12 = &stack0xffffffffffffffb8;
        goto LAB_1004354e0;
      case 0x11:
        FUN_10007d048(auStack_108,local_f0);
        FUN_100003a00(&DAT_100fc68c8,FUN_100432e30,&TargetProtocolConformanceDescriptor_100c4a364);
        Swift::UnkeyedDecodingContainer::_decode();
        puVar19 = local_1e0;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar19 & 1) == 0) {
          puVar19 = (undefined *)0x0;
          FUN_1004373dc(0,*(long *)(local_1e0 + 0x10) + 1,1);
          local_1e0 = puVar19;
        }
        uVar23 = *(ulong *)(local_1e0 + 0x10);
        if (*(ulong *)(local_1e0 + 0x18) >> 1 <= uVar23) {
          puVar19 = (undefined *)(ulong)(1 < *(ulong *)(local_1e0 + 0x18));
          FUN_1004373dc(puVar19,uVar23 + 1,1,local_1e0);
          local_1e0 = puVar19;
        }
        *(ulong *)(local_1e0 + 0x10) = uVar23 + 1;
        FUN_1000523d8(local_178,
                      local_1e0 +
                      *(long *)(local_188 + 0x48) * uVar23 +
                      ((ulong)*(byte *)(local_188 + 0x50) + 0x20 &
                      ((ulong)*(byte *)(local_188 + 0x50) ^ 0xffffffffffffffff)),FUN_100432e30);
        break;
      case 0x12:
        uVar16 = 0x16;
        FUN_10044abcc(0x16);
        lVar22 = lStack_e8;
        pvVar21 = local_f0;
        FUN_10007d048(auStack_108,local_f0);
        (**(code **)(lVar22 + 0x20))(uVar16,pvVar21,lVar22);
        _swift_release(uVar16);
        if (DAT_100fc6628 != -1) {
          _swift_once(&DAT_100fc6628,FUN_10042ea24);
        }
        IVar1 = DAT_100fc6630;
        pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        DVar10.unknown = (undefined *)objc_stub::dateFromString_(IVar1,pNVar18);
        lVar22 = local_1d0;
        bVar6 = DVar10.unknown == (undefined *)0x0;
        if (!bVar6) {
          Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar10);
        }
        _swift_bridgeObjectRelease(pvVar21);
        puVar12 = &stack0xffffffffffffffc8;
        goto LAB_1004354e0;
      case 0x13:
        FUN_10007d048(auStack_108,local_f0);
        SVar29 = Swift::UnkeyedDecodingContainer::_decode();
        _swift_bridgeObjectRelease(local_220);
        SVar30.bridgeObject = SVar29.bridgeObject;
        SVar30.str = local_240;
        puVar12 = auStack_120;
        local_250 = SVar29.str;
LAB_100435388:
        local_240 = SVar30.str;
        *(void **)(puVar12 + -0x100) = SVar30.bridgeObject;
        break;
      case 0x15:
        uVar16 = 0x16;
        FUN_10044abcc(0x16);
        lVar22 = lStack_e8;
        pvVar21 = local_f0;
        FUN_10007d048(auStack_108,local_f0);
        (**(code **)(lVar22 + 0x20))(uVar16,pvVar21,lVar22);
        _swift_release(uVar16);
        if (DAT_100fc6628 != -1) {
          _swift_once(&DAT_100fc6628,FUN_10042ea24);
        }
        IVar1 = DAT_100fc6630;
        pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        DVar10.unknown = (undefined *)objc_stub::dateFromString_(IVar1,pNVar18);
        lVar22 = local_1c8;
        bVar6 = DVar10.unknown == (undefined *)0x0;
        if (!bVar6) {
          Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar10);
        }
        _swift_bridgeObjectRelease(pvVar21);
        puVar12 = &stack0xffffffffffffffc0;
LAB_1004354e0:
        uVar16 = *(undefined8 *)(puVar12 + -0x100);
        FUN_1000fb4c4(uVar16,&DAT_100fc67c8,&DAT_100c4a330);
        (*local_270)(lVar22,bVar6,1,local_1d8);
        FUN_100436a54(lVar22,uVar16);
      }
      FUN_100004594(auStack_108);
      FUN_100004594(auStack_e0);
    }
    FUN_100432e68(local_148[2],(long)local_1b0 + (long)*(int *)(local_1b8 + 0x20));
    lVar5 = local_148[1];
    FUN_100432e68(local_148[1],(long)puVar4 + (long)*(int *)(lVar22 + 0x24));
    lVar28 = local_148[0];
    lVar26 = local_170;
    FUN_100432e68(local_148[0],local_170);
    lVar20 = lVar26;
    (**(code **)(lVar8 + 0x30))(lVar26,1,local_1d8);
    puVar19 = local_1e0;
    if ((int)lVar20 == 1) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x100435818);
      (*pcVar27)();
    }
    pcVar27 = *(code **)(local_160 + 8);
    _swift_bridgeObjectRetain(local_1e0);
    (*pcVar27)(local_150,local_158);
    FUN_1000fb4c4(lVar28,&DAT_100fc67c8,&DAT_100c4a330);
    FUN_1000fb4c4(lVar5,&DAT_100fc67c8,&DAT_100c4a330);
    FUN_1000fb4c4(lVar25,&DAT_100fc67c8,&DAT_100c4a330);
    _swift_bridgeObjectRelease(puVar19);
    pcVar3 = local_258;
    puVar4[2] = local_238;
    pcVar2 = local_260;
    puVar4[3] = pcVar3;
    pcVar3 = local_250;
    puVar4[4] = local_228;
    puVar4[5] = pcVar3;
    puVar4[6] = local_220;
    *puVar4 = puVar19;
    puVar4[1] = pcVar2;
    puVar24 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar22 + 0x28));
    *puVar24 = local_218;
    puVar24[1] = local_230;
    puVar24 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar22 + 0x2c));
    *puVar24 = local_1f8;
    puVar24[1] = local_200;
    puVar24 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar22 + 0x30));
    *puVar24 = local_1e8;
    puVar24[1] = local_1f0;
    (**(code **)(local_1a8 + 0x20))((long)puVar4 + (long)*(int *)(lVar22 + 0x34),lVar26,local_1d8);
    puVar24 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar22 + 0x38));
    *puVar24 = local_248;
    puVar24[1] = local_210;
    puVar24 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar22 + 0x3c));
    *puVar24 = local_240;
    puVar24[1] = local_208;
    puVar24 = (undefined8 *)((long)puVar4 + (long)*(int *)(lVar22 + 0x40));
    *puVar24 = local_198;
    puVar24[1] = local_190;
    FUN_100004594(auStack_b8);
    FUN_100004594(auStack_90);
    FUN_1000523d8(puVar4,local_168,FUN_10043ee24);
    param_2 = local_268;
  }
  else {
    FUN_100004594(auStack_90);
  }
  FUN_100004594(param_2);
  return;
}



/* Address: 0x100435870 | FUN_100435870 */

void FUN_100435870(void)

{
  FUN_10044add8(0);
  FUN_10044abcc(4);
  return;
}



/* Address: 0x10043589c | FUN_10043589c */

void FUN_10043589c(void)

{
  FUN_100434628();
  return;
}



/* Address: 0x1004358b0 | FUN_1004358b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100436620) */
/* WARNING: Removing unreachable block (ram,0x0001004367dc) */
/* WARNING: Removing unreachable block (ram,0x000100436800) */
/* WARNING: Removing unreachable block (ram,0x000100436958) */
/* WARNING: Removing unreachable block (ram,0x00010043683c) */
/* WARNING: Removing unreachable block (ram,0x000100436844) */
/* WARNING: Removing unreachable block (ram,0x000100436850) */
/* WARNING: Removing unreachable block (ram,0x000100436970) */
/* WARNING: Removing unreachable block (ram,0x000100436774) */
/* WARNING: Removing unreachable block (ram,0x0001004368b0) */

void FUN_1004358b0(undefined8 param_1,long param_2)

{
  __int64 *p_Var1;
  String *pSVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ID IVar6;
  bool bVar7;
  __int32 _Var8;
  uint uVar9;
  void *pvVar10;
  Date DVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long *plVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined *puVar17;
  _StringGuts _Var18;
  __int64 _Var19;
  NSString *pNVar20;
  long lVar21;
  _StringGuts _Var22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  long unaff_x21;
  code *pcVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lVar30;
  String SVar31;
  String SStack_200;
  long local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  code *local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  String *local_140;
  __int64 *local_138;
  long local_130;
  long local_128;
  undefined8 *local_120;
  long local_118;
  undefined *local_110;
  undefined1 auStack_108 [40];
  undefined1 auStack_e0 [16];
  long lStack_d0;
  undefined *local_c8;
  long lStack_c0;
  long lStack_b8;
  long alStack_b0 [2];
  undefined8 local_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  long local_78;
  long lStack_70;
  
  puVar17 = &DAT_100fc67c8;
  local_1a0 = param_1;
  local_118 = param_2;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  uVar23 = *(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_198 = (long)&SStack_200 - uVar23;
  local_178 = local_198 - uVar23;
  local_180 = local_178 - uVar23;
  local_188 = local_180 - uVar23;
  local_190 = local_188 - uVar23;
  local_168 = local_190 - uVar23;
  lVar24 = local_168 - uVar23;
  pvVar10 = (void *)0x0;
  local_160 = lVar24;
  FUN_100432e30();
  puVar28 = (undefined8 *)
            (lVar24 - (*(long *)(*(long *)((long)pvVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  *(undefined1 *)(puVar28 + 2) = 0;
  iVar4 = *(int *)((long)pvVar10 + 0x24);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  local_1a8 = *(long *)(DVar11.unknown + -8);
  pcVar27 = *(code **)(local_1a8 + 0x38);
  local_158 = (long)iVar4;
  (*pcVar27)((long)puVar28 + (long)iVar4,1,1,DVar11.unknown);
  local_148 = (long)*(int *)((long)pvVar10 + 0x28);
  (*pcVar27)((long)puVar28 + local_148,1,1,DVar11.unknown);
  local_150 = (long)*(int *)((long)pvVar10 + 0x2c);
  local_170 = pcVar27;
  (*pcVar27)((long)puVar28 + local_150,1,1,DVar11.unknown);
  local_128 = (long)*(int *)((long)pvVar10 + 0x30);
  *(undefined1 *)((long)puVar28 + local_128) = 0;
  iVar4 = *(int *)((long)pvVar10 + 0x34);
  *(undefined1 *)((long)puVar28 + (long)iVar4) = 0;
  p_Var1 = (__int64 *)((long)puVar28 + (long)*(int *)((long)pvVar10 + 0x38));
  *p_Var1 = 0;
  *(undefined1 *)(p_Var1 + 1) = 1;
  pSVar2 = (String *)((long)puVar28 + (long)*(int *)((long)pvVar10 + 0x3c));
  pSVar2->str = (char *)0x0;
  pSVar2->bridgeObject = (void *)0x0;
  iVar5 = *(int *)((long)pvVar10 + 0x40);
  local_120 = puVar28;
  *(undefined8 *)((long)puVar28 + (long)iVar5) = 1;
  FUN_100004640(local_118,*(undefined8 *)(local_118 + 0x18));
  Swift::Decoder::_unkeyedContainer();
  if (unaff_x21 == 0) {
    puVar17 = &DAT_100fc68b8;
    SStack_200.bridgeObject = pvVar10;
    local_1f0 = (long)iVar5;
    local_140 = pSVar2;
    local_138 = p_Var1;
    local_130 = (long)iVar4;
    FUN_1000f7830(&DAT_100fc68b8,&DAT_100c4a338);
    puVar12 = &DAT_100fc68c0;
    FUN_1000f7830(&DAT_100fc68c0,&DAT_100c4a340);
    local_110 = puVar17;
    _swift_dynamicCast(auStack_90,&lStack_b8,puVar17,puVar12,7);
    pcVar27 = local_170;
    (*local_170)(local_160,1,1,DVar11.unknown);
    local_1c8 = DVar11.unknown;
    (*pcVar27)(local_168,1,1,DVar11.unknown);
    local_1d8 = (char *)0x0;
    local_1e0 = (char *)0x0;
    local_1e8 = (char *)0x0;
    local_1d0 = 0;
    local_1b0 = 0xe000000000000000;
    local_1b8 = 0xe000000000000000;
    local_1c0 = 0xe000000000000000;
    while( true ) {
      lVar24 = local_78;
      puVar13 = auStack_90;
      FUN_100004640(puVar13,local_78);
      lVar30 = *(long *)(lVar24 + -8);
      lVar26 = (long)puVar28 - (*(long *)(lVar30 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar30 + 0x10))(lVar26,puVar13,lVar24);
      bVar7 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
      (**(code **)(lVar30 + 8))(lVar26,lVar24);
      puVar29 = local_120;
      uVar25 = local_1c0;
      if (bVar7) break;
      FUN_10044add8(0);
      plVar14 = (long *)0x10;
      FUN_10044abcc();
      plVar15 = plVar14;
      (**(code **)(*plVar14 + 0x88))();
      _swift_release(plVar14);
      lVar26 = lStack_70;
      lVar24 = local_78;
      FUN_10007d048(auStack_90,local_78);
      (**(code **)(lVar26 + 0x38))(auStack_e0,plVar15,lVar24,lVar26);
      _swift_release(plVar15);
      _swift_dynamicCast(&lStack_b8,auStack_e0,local_110,puVar12,7);
      FUN_10007d048(&lStack_b8,local_a0);
      _Var8 = Swift::UnkeyedDecodingContainer::_decode();
      uVar16 = 2;
      FUN_10044abcc(2);
      lVar24 = lStack_98;
      uVar25 = local_a0;
      FUN_10007d048(&lStack_b8,local_a0);
      (**(code **)(lVar24 + 0x40))(uVar16,uVar25,lVar24);
      _swift_release(uVar16);
      uVar16 = 4;
      FUN_10044abcc(4);
      lVar24 = lStack_98;
      uVar25 = local_a0;
      FUN_10007d048(&lStack_b8,local_a0);
      (**(code **)(lVar24 + 0x38))(auStack_108,uVar16,uVar25,lVar24);
      _swift_release(uVar16);
      _swift_dynamicCast(auStack_e0,auStack_108,local_110,puVar12,7);
      lVar26 = local_128;
      lVar24 = local_130;
      p_Var1 = local_138;
      pSVar2 = local_140;
      switch(_Var8) {
      case 0x6a5:
        FUN_10007d048(auStack_e0,local_c8);
        _Var19 = Swift::UnkeyedDecodingContainer::_decode();
        *(__int64 *)((long)local_120 + local_1f0) = _Var19;
        break;
      case 0x6a6:
        FUN_10007d048(auStack_e0,local_c8);
        SVar31 = Swift::UnkeyedDecodingContainer::_decode();
        pvVar10 = SVar31.bridgeObject;
        local_1e0 = SVar31.str;
        _swift_bridgeObjectRelease(local_1b8);
        plVar15 = &lStack_b8;
        goto LAB_100435c18;
      case 0x6a7:
        FUN_10007d048(auStack_e0,local_c8);
        SVar31 = Swift::UnkeyedDecodingContainer::_decode();
        pvVar10 = SVar31.bridgeObject;
        local_1d8 = SVar31.str;
        _swift_bridgeObjectRelease(local_1b0);
        plVar15 = alStack_b0;
        goto LAB_100435c18;
      case 0x6a8:
        uVar25 = 0x16;
        FUN_10044abcc(0x16);
        lVar24 = lStack_c0;
        puVar17 = local_c8;
        FUN_10007d048(auStack_e0,local_c8);
        (**(code **)(lVar24 + 0x20))(uVar25,puVar17,lVar24);
        _swift_release(uVar25);
        if (DAT_100fc6628 != -1) {
          _swift_once(&DAT_100fc6628,FUN_10042ea24);
        }
        IVar6 = DAT_100fc6630;
        pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        DVar11.unknown = (undefined *)objc_stub::dateFromString_(IVar6,pNVar20);
        lVar24 = local_190;
        if (DVar11.unknown == (undefined *)0x0) {
          lVar24 = -0x80;
          lVar26 = local_160;
          goto LAB_1004363e4;
        }
        Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar11);
        lVar26 = -0x50;
LAB_10043612c:
        uVar25 = 0;
        lVar26 = *(long *)(auStack_108 + lVar26 + -8);
        goto LAB_1004363e8;
      case 0x6a9:
        FUN_10007d048(auStack_e0,local_c8);
        SVar31 = Swift::UnkeyedDecodingContainer::_decode();
        pvVar10 = SVar31.bridgeObject;
        local_1e8 = SVar31.str;
        _swift_bridgeObjectRelease(local_1c0);
        plVar15 = &lStack_c0;
        goto LAB_100435c18;
      case 0x6aa:
        uVar25 = 0x16;
        FUN_10044abcc(0x16);
        lVar24 = lStack_c0;
        puVar17 = local_c8;
        FUN_10007d048(auStack_e0,local_c8);
        (**(code **)(lVar24 + 0x20))(uVar25,puVar17,lVar24);
        _swift_release(uVar25);
        if (DAT_100fc6628 != -1) {
          _swift_once(&DAT_100fc6628,FUN_10042ea24);
        }
        IVar6 = DAT_100fc6630;
        pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        DVar11.unknown = (undefined *)objc_stub::dateFromString_(IVar6,pNVar20);
        lVar24 = local_188;
        if (DVar11.unknown != (undefined *)0x0) {
          Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar11);
          lVar26 = -0x58;
          goto LAB_10043612c;
        }
        lVar24 = -0x78;
        lVar26 = local_168;
LAB_1004363e4:
        uVar25 = 1;
        lVar24 = *(long *)(auStack_108 + lVar24 + -8);
LAB_1004363e8:
        _swift_bridgeObjectRelease(puVar17);
        FUN_1000fb4c4(lVar26,&DAT_100fc67c8,&DAT_100c4a330);
        (*pcVar27)(lVar24,uVar25,1,local_1c8);
        FUN_100436a54(lVar24,lVar26);
        break;
      case 0x6ab:
        FUN_10007d048(auStack_e0,local_c8);
        uVar9 = Swift::UnkeyedDecodingContainer::_decode();
        cVar3 = '\0';
        if (uVar9 < 4) {
          cVar3 = (char)uVar9 + '\x01';
        }
        *(char *)(local_120 + 2) = cVar3;
        break;
      case 0x6ac:
        puVar17 = (undefined *)0x16;
        FUN_10044abcc();
        lVar24 = lStack_c0;
        _Var22.unknown = local_c8;
        FUN_10007d048(auStack_e0,local_c8);
        _Var18.unknown = puVar17;
        (**(code **)(lVar24 + 0x20))(puVar17,_Var22.unknown,lVar24);
        _swift_release(puVar17);
        if ((_Var18.unknown == (undefined *)0x0) &&
           (_Var22.unknown == (undefined *)0xe000000000000000)) {
LAB_100436284:
          uVar25 = 1;
          lVar24 = local_180;
LAB_1004364b8:
          puVar29 = local_120;
          _swift_bridgeObjectRelease(_Var22.unknown);
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck(_Var18,_Var22,(_StringComparisonResult)0x0);
          lVar24 = local_180;
          if (bVar7) {
            uVar25 = 1;
            goto LAB_1004364b8;
          }
          if (_Var22.unknown != (undefined *)0x0) {
            if (DAT_100fc6628 != -1) {
              _swift_once(&DAT_100fc6628,FUN_10042ea24);
            }
            IVar6 = DAT_100fc6630;
            pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            DVar11.unknown = (undefined *)objc_stub::dateFromString_(IVar6,pNVar20);
            lVar24 = local_180;
            if (DVar11.unknown == (undefined *)0x0) goto LAB_100436284;
            Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar11);
            uVar25 = 0;
            goto LAB_1004364b8;
          }
          uVar25 = 1;
          puVar29 = local_120;
        }
        (*pcVar27)(lVar24,uVar25,1,local_1c8);
        puVar13 = &stack0xffffffffffffffb8;
        goto LAB_10043658c;
      case 0x6af:
        FUN_10007d048(auStack_e0,local_c8);
        _Var19 = Swift::UnkeyedDecodingContainer::_decode();
        *p_Var1 = _Var19;
        *(undefined1 *)(p_Var1 + 1) = 0;
        break;
      case 0x6b0:
        puVar17 = (undefined *)0x16;
        FUN_10044abcc();
        lVar24 = lStack_c0;
        _Var22.unknown = local_c8;
        FUN_10007d048(auStack_e0,local_c8);
        _Var18.unknown = puVar17;
        (**(code **)(lVar24 + 0x20))(puVar17,_Var22.unknown,lVar24);
        _swift_release(puVar17);
        if ((_Var18.unknown == (undefined *)0x0) &&
           (_Var22.unknown == (undefined *)0xe000000000000000)) {
LAB_100436304:
          uVar25 = 1;
          lVar24 = local_178;
LAB_100436568:
          puVar29 = local_120;
          _swift_bridgeObjectRelease(_Var22.unknown);
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck(_Var18,_Var22,(_StringComparisonResult)0x0);
          lVar24 = local_178;
          if (bVar7) {
            uVar25 = 1;
            goto LAB_100436568;
          }
          if (_Var22.unknown != (undefined *)0x0) {
            if (DAT_100fc6628 != -1) {
              _swift_once(&DAT_100fc6628,FUN_10042ea24);
            }
            IVar6 = DAT_100fc6630;
            pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            DVar11.unknown = (undefined *)objc_stub::dateFromString_(IVar6,pNVar20);
            lVar24 = local_178;
            if (DVar11.unknown == (undefined *)0x0) goto LAB_100436304;
            Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar11);
            uVar25 = 0;
            goto LAB_100436568;
          }
          uVar25 = 1;
          puVar29 = local_120;
        }
        (*pcVar27)(lVar24,uVar25,1,local_1c8);
        puVar13 = &stack0xffffffffffffffb0;
LAB_10043658c:
        FUN_1004375f4(lVar24,(long)puVar29 + *(long *)(puVar13 + -0x100),&DAT_100fc67c8,
                      &DAT_100c4a330);
        break;
      case 0x6b1:
        FUN_10007d048(auStack_e0,local_c8);
        _Var8 = Swift::UnkeyedDecodingContainer::_decode();
        *(bool *)((long)local_120 + lVar26) = _Var8 != 0;
        break;
      case 0x6b7:
        FUN_10007d048(auStack_e0,local_c8);
        _Var8 = Swift::UnkeyedDecodingContainer::_decode();
        *(bool *)((long)local_120 + lVar24) = _Var8 != 0;
        break;
      case 0x6b9:
        FUN_10007d048(auStack_e0,local_c8);
        SVar31 = Swift::UnkeyedDecodingContainer::_decode();
        pvVar10 = SVar31.bridgeObject;
        _swift_bridgeObjectRelease(local_1d0);
        *pSVar2 = SVar31;
        plVar15 = &lStack_d0;
LAB_100435c18:
        plVar15[-0x20] = (long)pvVar10;
      }
      FUN_100004594(auStack_e0);
      FUN_100004594(&lStack_b8);
    }
    local_120[5] = local_1e8;
    puVar29[6] = uVar25;
    uVar25 = local_1b8;
    *puVar29 = local_1e0;
    puVar29[1] = uVar25;
    uVar25 = local_1b0;
    puVar29[3] = local_1d8;
    puVar29[4] = uVar25;
    lVar30 = local_160;
    lVar26 = local_198;
    FUN_100432e68(local_160,local_198);
    lVar24 = local_1a8;
    puVar17 = local_1c8;
    lVar21 = lVar26;
    (**(code **)(local_1a8 + 0x30))(lVar26,1,local_1c8);
    pvVar10 = SStack_200.bridgeObject;
    if ((int)lVar21 == 1) {
                    /* WARNING: Does not return */
      pcVar27 = (code *)SoftwareBreakpoint(1,0x100436a00);
      (*pcVar27)();
    }
    FUN_1000fb4c4(lVar30,&DAT_100fc67c8,&DAT_100c4a330);
    (**(code **)(lVar24 + 0x20))
              ((long)puVar29 + (long)*(int *)((long)pvVar10 + 0x20),lVar26,puVar17);
    lVar24 = local_158;
    FUN_1000fb4c4((long)puVar29 + local_158,&DAT_100fc67c8,&DAT_100c4a330);
    FUN_100436a54(local_168,(long)puVar29 + lVar24);
    FUN_100004594(auStack_90);
    FUN_100431a90(puVar29,local_1a0);
    FUN_100004594(local_118);
    FUN_100436aa4(puVar29);
  }
  else {
    FUN_100004594(local_118);
    puVar28 = local_120;
    FUN_1000fb4c4((long)local_120 + local_158,&DAT_100fc67c8,&DAT_100c4a330);
    FUN_1000fb4c4((long)puVar28 + local_148,&DAT_100fc67c8,&DAT_100c4a330);
    FUN_1000fb4c4((long)puVar28 + local_150,&DAT_100fc67c8,&DAT_100c4a330);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x100436a54 | FUN_100436a54 */

undefined8 FUN_100436a54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc67c8;
  FUN_1000f7830(&DAT_100fc67c8,&DAT_100c4a330);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100436aa4 | FUN_100436aa4 */

undefined8 FUN_100436aa4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100432e30();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100436ae0 | FUN_100436ae0 */

void FUN_100436ae0(undefined8 param_1,undefined8 param_2)

{
  FUN_1004371dc(param_1,param_2,0x11,FUN_10044abcc);
  return;
}



/* Address: 0x100436af0 | FUN_100436af0 */

void FUN_100436af0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc68c8;
  FUN_100003a00(&DAT_100fc68c8,FUN_100432e30,&TargetProtocolConformanceDescriptor_100c4a364);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}


