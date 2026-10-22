/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100273b80 | FUN_100273b80 */

undefined8 * FUN_100273b80(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  DateComponents DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  Product PVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1002716e8);
    uVar3 = 0;
    FUN_1002716e8(0);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,uVar3);
    if ((int)puVar4 == 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      lVar5 = 0;
      FUN_1002abb94();
      lVar12 = (long)*(int *)(lVar5 + 0x14);
      DVar6 = Foundation::DateComponents::typeMetadataAccessor();
      lVar14 = *(long *)(DVar6.unknown + -8);
      puVar7 = (undefined1 *)((long)param_2 + lVar12);
      (**(code **)(lVar14 + 0x30))(puVar7,1,DVar6.unknown);
      if ((int)puVar7 == 0) {
        (**(code **)(lVar14 + 0x10))
                  ((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
                   DVar6.unknown);
        (**(code **)(lVar14 + 0x38))((undefined1 *)((long)param_1 + lVar12),0,1,DVar6.unknown);
      }
      else {
        puVar8 = &DAT_100fb86e0;
        FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
        _memcpy((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
                *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
      lVar12 = 0;
      FUN_1002abbf0();
      lVar13 = *(long *)(lVar12 + -8);
      puVar9 = puVar1;
      (**(code **)(lVar13 + 0x30))(puVar1,1,lVar12);
      if ((int)puVar9 == 0) {
        puVar9 = puVar1;
        _swift_getEnumCaseMultiPayload(puVar1,lVar12);
        if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
          *puVar4 = *puVar1;
          puVar4[1] = puVar1[1];
          _swift_bridgeObjectRetain();
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar15 = *(code **)(lVar14 + 0x10);
          (*pcVar15)((undefined1 *)((long)puVar4 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),DVar6.unknown);
          (*pcVar15)((undefined1 *)((long)puVar4 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),DVar6.unknown);
        }
        else {
          (**(code **)(lVar14 + 0x10))(puVar4,puVar1,DVar6.unknown);
        }
        _swift_storeEnumTagMultiPayload(puVar4,lVar12,(ulong)puVar9 & 0xffffffff);
        (**(code **)(lVar13 + 0x38))(puVar4,0,1,lVar12);
      }
      else {
        puVar8 = &DAT_100fb8db8;
        FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
        _memcpy(puVar4,puVar1,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      iVar2 = *(int *)(lVar5 + 0x1c);
      PVar10 = StoreKit::Product::typeMetadataAccessor();
      (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
                ((undefined1 *)((long)param_1 + (long)iVar2),
                 (undefined1 *)((long)param_2 + (long)iVar2),PVar10.unknown);
      uVar11 = 1;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      uVar11 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,uVar3,uVar11);
  }
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar4 = *param_2;
  uVar3 = puVar4[1];
  puVar4[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar3);
  return param_1;
}



/* Address: 0x100273e40 | FUN_100273e40 */

undefined1 * FUN_100273e40(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  DateComponents DVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  Product PVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  lVar4 = 0;
  FUN_1002716e8();
  puVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar4);
  if ((int)puVar5 == 1) {
    *param_1 = *param_2;
    lVar6 = 0;
    FUN_1002abb94();
    iVar3 = *(int *)(lVar6 + 0x14);
    DVar7 = Foundation::DateComponents::typeMetadataAccessor();
    lVar13 = *(long *)(DVar7.unknown + -8);
    puVar5 = param_2 + iVar3;
    (**(code **)(lVar13 + 0x30))(puVar5,1,DVar7.unknown);
    if ((int)puVar5 == 0) {
      (**(code **)(lVar13 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar7.unknown);
      (**(code **)(lVar13 + 0x38))(param_1 + iVar3,0,1,DVar7.unknown);
    }
    else {
      puVar8 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x18));
    puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x18));
    lVar9 = 0;
    FUN_1002abbf0();
    lVar12 = *(long *)(lVar9 + -8);
    puVar10 = puVar2;
    (**(code **)(lVar12 + 0x30))(puVar2,1,lVar9);
    if ((int)puVar10 == 0) {
      puVar10 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar9);
      if (((int)puVar10 == 2) || ((int)puVar10 == 1)) {
        uVar15 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar15;
        puVar8 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar14 = *(code **)(lVar13 + 0x20);
        (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar7.unknown);
        (*pcVar14)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                   (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar7.unknown);
      }
      else {
        (**(code **)(lVar13 + 0x20))(puVar1,puVar2,DVar7.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar9,(ulong)puVar10 & 0xffffffff);
      (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar9);
    }
    else {
      puVar8 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar3 = *(int *)(lVar6 + 0x1c);
    PVar11 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar11.unknown + -8) + 0x20))
              (param_1 + iVar3,param_2 + iVar3,PVar11.unknown);
    _swift_storeEnumTagMultiPayload(param_1,lVar4,1);
  }
  else {
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar4 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x14);
  uVar15 = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  *(undefined8 *)(param_1 + iVar3) = uVar15;
  return param_1;
}



/* Address: 0x1002740b8 | FUN_1002740b8 */

undefined1 * FUN_1002740b8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  DateComponents DVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  Product PVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1002716e8);
    lVar4 = 0;
    FUN_1002716e8();
    puVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar4);
    if ((int)puVar5 == 1) {
      *param_1 = *param_2;
      lVar6 = 0;
      FUN_1002abb94();
      iVar3 = *(int *)(lVar6 + 0x14);
      DVar7 = Foundation::DateComponents::typeMetadataAccessor();
      lVar14 = *(long *)(DVar7.unknown + -8);
      puVar5 = param_2 + iVar3;
      (**(code **)(lVar14 + 0x30))(puVar5,1,DVar7.unknown);
      if ((int)puVar5 == 0) {
        (**(code **)(lVar14 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar7.unknown);
        (**(code **)(lVar14 + 0x38))(param_1 + iVar3,0,1,DVar7.unknown);
      }
      else {
        puVar8 = &DAT_100fb86e0;
        FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
        _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x18));
      puVar2 = (undefined8 *)(param_2 + *(int *)(lVar6 + 0x18));
      lVar9 = 0;
      FUN_1002abbf0();
      lVar13 = *(long *)(lVar9 + -8);
      puVar10 = puVar2;
      (**(code **)(lVar13 + 0x30))(puVar2,1,lVar9);
      if ((int)puVar10 == 0) {
        puVar10 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar9);
        if (((int)puVar10 == 2) || ((int)puVar10 == 1)) {
          uVar16 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar16;
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar15 = *(code **)(lVar14 + 0x20);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar7.unknown);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar7.unknown);
        }
        else {
          (**(code **)(lVar14 + 0x20))(puVar1,puVar2,DVar7.unknown);
        }
        _swift_storeEnumTagMultiPayload(puVar1,lVar9,(ulong)puVar10 & 0xffffffff);
        (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar9);
      }
      else {
        puVar8 = &DAT_100fb8db8;
        FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      iVar3 = *(int *)(lVar6 + 0x1c);
      PVar11 = StoreKit::Product::typeMetadataAccessor();
      (**(code **)(*(long *)(PVar11.unknown + -8) + 0x20))
                (param_1 + iVar3,param_2 + iVar3,PVar11.unknown);
      _swift_storeEnumTagMultiPayload(param_1,lVar4,1);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar4 + -8) + 0x40));
    }
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  uVar16 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x14)) + 8);
  uVar12 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  puVar1[1] = uVar16;
  _swift_release(uVar12);
  return param_1;
}



/* Address: 0x100274358 | FUN_100274358 */

void FUN_100274358(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100274364 | FUN_100274364 */

ulong FUN_100274364(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  FUN_1002716e8();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001002743b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Address: 0x1002743e4 | FUN_1002743e4 */

void FUN_1002743e4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002743f0 | FUN_1002743f0 */

void FUN_1002743f0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002716e8();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100274448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = (ulong)((int)param_2 - 1);
  return;
}



/* Address: 0x10027446c | FUN_10027446c */

void FUN_10027446c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fb9988,&TargetStructDescriptor_100ca9fe0);
  return;
}



/* Address: 0x100274480 | FUN_100274480 */

void FUN_100274480(void)

{
  FUN_100274494();
  return;
}



/* Address: 0x100274494 | FUN_100274494 */

void FUN_100274494(long param_1,ulong param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  long local_30;
  undefined8 uStack_28;
  
  lVar1 = 0x13f;
  (*param_4)();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    uStack_28 = param_5;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100274500 | FUN_100274500 */

undefined1  [16] FUN_100274500(void)

{
  return ZEXT816(0x100ec4de0);
}



/* Address: 0x100274510 | FUN_100274510 */

void FUN_100274510(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_1002abb94();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &DAT_100c39840;
    local_30 = &DAT_100c39930;
    uVar2 = *(ulong *)(param_1 + 0x10);
    lVar1 = 0x13f;
    _swift_checkMetadataState();
    if (uVar2 < 0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,4,&local_40,param_1 + 0x20);
    }
  }
  return;
}



/* Address: 0x1002745ac | FUN_1002745ac */

long * FUN_1002745ac(long *param_1,long *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  byte bVar8;
  DateComponents DVar9;
  Product PVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  void *pvVar24;
  undefined8 *puVar25;
  ulong uVar26;
  void *pvVar27;
  long lVar28;
  
  DVar9 = Foundation::DateComponents::typeMetadataAccessor();
  lVar28 = *(long *)(DVar9.unknown + -8);
  uVar7 = *(uint *)(lVar28 + 0x50);
  uVar23 = (ulong)uVar7 & 0xff;
  uVar14 = *(ulong *)(lVar28 + 0x40);
  sVar6 = uVar14;
  if (*(int *)(lVar28 + 0x54) == 0) {
    sVar6 = uVar14 + 1;
  }
  uVar26 = uVar23 | 7;
  uVar21 = uVar23 + 0x10;
  lVar2 = uVar14 + uVar23;
  uVar3 = (lVar2 + (uVar21 & (uVar23 ^ 0xffffffffffffffff)) & (uVar23 ^ 0xffffffffffffffff)) +
          uVar14;
  if (uVar3 <= uVar14) {
    uVar3 = uVar14;
  }
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  lVar18 = *(long *)(PVar10.unknown + -8);
  uVar20 = (ulong)*(uint *)(lVar18 + 0x50) & 0xff;
  lVar16 = *(long *)(param_3 + 0x10);
  lVar17 = *(long *)(lVar16 + -8);
  uVar15 = (ulong)*(uint *)(lVar17 + 0x50) & 0xff;
  uVar14 = uVar26 | uVar20 | uVar15;
  if (uVar14 == 7 && ((*(uint *)(lVar18 + 0x50) | uVar7 | *(uint *)(lVar17 + 0x50)) & 0x100000) == 0
     ) {
    sVar1 = uVar3 + 1;
    lVar4 = sVar6 + uVar26;
    lVar5 = (sVar1 + uVar20 + (lVar4 + (uVar23 + 1 & (uVar23 ^ 0xffffffffffffffff)) &
                              (uVar26 ^ 0xffffffffffffffff)) & (uVar20 ^ 0xffffffffffffffff)) +
            *(long *)(lVar18 + 0x40);
    if (0xffffffffffffffe6 <
        ((-0x11 - uVar15) - ((lVar5 + 7U & 0xfffffffffffffff8) + 0x10) | uVar15) -
        *(long *)(lVar17 + 0x40)) {
      uVar14 = ~uVar23;
      *(char *)param_1 = (char)*param_2;
      pvVar24 = (void *)((ulong)((long)param_1 + uVar23 + 1) & uVar14);
      pvVar27 = (void *)((ulong)((long)param_2 + uVar23 + 1) & uVar14);
      pvVar11 = pvVar27;
      (**(code **)(lVar28 + 0x30))(pvVar27,1,DVar9.unknown);
      if ((int)pvVar11 == 0) {
        (**(code **)(lVar28 + 0x10))(pvVar24,pvVar27,DVar9.unknown);
        (**(code **)(lVar28 + 0x38))(pvVar24,0,1,DVar9.unknown);
      }
      else {
        _memcpy(pvVar24,pvVar27,sVar6);
      }
      puVar22 = (undefined8 *)(lVar4 + (long)pvVar24 & ~uVar26);
      puVar25 = (undefined8 *)(lVar4 + (long)pvVar27 & ~uVar26);
      bVar8 = *(byte *)((long)puVar25 + uVar3);
      if (bVar8 < 3) {
        if (bVar8 == 2) {
          *puVar22 = *puVar25;
          puVar22[1] = puVar25[1];
          uVar23 = uVar21 + (long)puVar22 & uVar14;
          uVar21 = uVar21 + (long)puVar25 & uVar14;
          pcVar19 = *(code **)(lVar28 + 0x10);
          _swift_bridgeObjectRetain();
          (*pcVar19)(uVar23,uVar21,DVar9.unknown);
          (*pcVar19)(lVar2 + uVar23 & uVar14,lVar2 + uVar21 & uVar14,DVar9.unknown);
          uVar13 = 2;
        }
        else {
          if (bVar8 != 1) {
            (**(code **)(lVar28 + 0x10))(puVar22,puVar25,DVar9.unknown);
            *(undefined1 *)((long)puVar22 + uVar3) = 0;
            goto LAB_1002748e0;
          }
          *puVar22 = *puVar25;
          puVar22[1] = puVar25[1];
          uVar23 = uVar21 + (long)puVar22 & uVar14;
          uVar21 = uVar21 + (long)puVar25 & uVar14;
          pcVar19 = *(code **)(lVar28 + 0x10);
          _swift_bridgeObjectRetain();
          (*pcVar19)(uVar23,uVar21,DVar9.unknown);
          (*pcVar19)(lVar2 + uVar23 & uVar14,lVar2 + uVar21 & uVar14,DVar9.unknown);
          uVar13 = 1;
        }
        *(undefined1 *)((long)puVar22 + uVar3) = uVar13;
      }
      else {
        _memcpy(puVar22,puVar25,sVar1);
      }
LAB_1002748e0:
      (**(code **)(lVar18 + 0x10))
                ((long)puVar22 + sVar1 + uVar20 & ~uVar20,(long)puVar25 + sVar1 + uVar20 & ~uVar20,
                 PVar10.unknown);
      puVar22 = (undefined8 *)((ulong)((long)param_1 + lVar5 + 7) & 0xfffffffffffffff8);
      puVar25 = (undefined8 *)((ulong)((long)param_2 + lVar5 + 7) & 0xfffffffffffffff8);
      *puVar22 = *puVar25;
      puVar22[1] = puVar25[1];
      uVar14 = puVar25[2];
      _swift_retain();
      if (uVar14 < 0xffffffff) {
        uVar14 = puVar25[2];
        puVar22[3] = puVar25[3];
        puVar22[2] = uVar14;
      }
      else {
        uVar12 = puVar25[3];
        puVar22[2] = uVar14;
        puVar22[3] = uVar12;
        _swift_retain();
      }
      (**(code **)(lVar17 + 0x10))(puVar22 + 4,puVar25 + 4,lVar16);
      return param_1;
    }
  }
  lVar28 = *param_2;
  *param_1 = lVar28;
  _swift_retain();
  return (long *)(lVar28 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
}



/* Address: 0x1002749a4 | FUN_1002749a4 */

void FUN_1002749a4(long param_1,long param_2)

{
  byte bVar1;
  DateComponents DVar2;
  ulong uVar3;
  Product PVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  DVar2 = Foundation::DateComponents::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar12 = ~uVar6;
  uVar9 = uVar6 + 1 + param_1 & (uVar6 ^ 0xffffffffffffffff);
  uVar7 = uVar9;
  (**(code **)(lVar11 + 0x30))(uVar9,1,DVar2.unknown);
  if ((int)uVar7 == 0) {
    (**(code **)(lVar11 + 8))(uVar9,DVar2.unknown);
  }
  uVar5 = *(ulong *)(lVar11 + 0x40);
  uVar7 = uVar5;
  if (*(int *)(lVar11 + 0x54) == 0) {
    uVar7 = uVar5 + 1;
  }
  uVar13 = uVar6 | 7;
  uVar10 = uVar9 + uVar13 + uVar7 & (uVar13 ^ 0xffffffffffffffff);
  uVar9 = (uVar5 + uVar6 + (uVar6 + 0x10 & uVar12) & uVar12) + uVar5;
  if (uVar9 <= uVar5) {
    uVar9 = uVar5;
  }
  bVar1 = *(byte *)(uVar10 + uVar9);
  if (bVar1 < 3) {
    if ((bVar1 == 2) || (bVar1 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(uVar10 + 8));
      uVar3 = uVar6 + 0x10 + uVar10 & uVar12;
      pcVar8 = *(code **)(lVar11 + 8);
      (*pcVar8)(uVar3,DVar2.unknown);
      (*pcVar8)(uVar5 + uVar6 + uVar3 & uVar12,DVar2.unknown);
    }
    else {
      (**(code **)(lVar11 + 8))(uVar10,DVar2.unknown);
    }
  }
  PVar4 = StoreKit::Product::typeMetadataAccessor();
  lVar11 = *(long *)(PVar4.unknown + -8);
  uVar5 = (ulong)*(byte *)(lVar11 + 0x50);
  (**(code **)(lVar11 + 8))(uVar9 + 1 + uVar10 + uVar5 & (uVar5 ^ 0xffffffffffffffff),PVar4.unknown)
  ;
  uVar7 = param_1 + *(long *)(lVar11 + 0x40) +
          (uVar9 + 1 + ((uVar6 + 1 & uVar12) + uVar13 + uVar7 & ~uVar13) + uVar5 &
          (uVar5 ^ 0xffffffffffffffff)) + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar7 + 8));
  if (0xfffffffe < *(ulong *)(uVar7 + 0x10)) {
    _swift_release(*(undefined8 *)(uVar7 + 0x18));
  }
  lVar11 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100274b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 8))((long)(uVar7 + 0x10) + uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x100274b88 | FUN_100274b88 */

undefined1 * FUN_100274b88(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  byte bVar5;
  DateComponents DVar6;
  void *pvVar7;
  Product PVar8;
  undefined8 uVar9;
  code *pcVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  void *pvVar17;
  void *pvVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  *param_1 = *param_2;
  DVar6 = Foundation::DateComponents::typeMetadataAccessor();
  lVar15 = *(long *)(DVar6.unknown + -8);
  uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar16 = uVar11 + 1;
  uVar13 = ~uVar11;
  pvVar18 = (void *)((ulong)(param_1 + uVar16) & (uVar11 ^ 0xffffffffffffffff));
  pvVar17 = (void *)((ulong)(param_2 + uVar16) & (uVar11 ^ 0xffffffffffffffff));
  pvVar7 = pvVar17;
  (**(code **)(lVar15 + 0x30))(pvVar17,1,DVar6.unknown);
  if ((int)pvVar7 == 0) {
    (**(code **)(lVar15 + 0x10))(pvVar18,pvVar17,DVar6.unknown);
    (**(code **)(lVar15 + 0x38))(pvVar18,0,1,DVar6.unknown);
    iVar20 = *(int *)(lVar15 + 0x54);
    uVar22 = *(ulong *)(lVar15 + 0x40);
  }
  else {
    iVar20 = *(int *)(lVar15 + 0x54);
    uVar22 = *(size_t *)(lVar15 + 0x40);
    sVar3 = uVar22;
    if (iVar20 == 0) {
      sVar3 = uVar22 + 1;
    }
    _memcpy(pvVar18,pvVar17,sVar3);
  }
  uVar4 = uVar22;
  if (iVar20 == 0) {
    uVar4 = uVar22 + 1;
  }
  uVar24 = uVar11 | 7;
  puVar19 = (undefined8 *)((long)pvVar18 + uVar24 + uVar4 & (uVar24 ^ 0xffffffffffffffff));
  puVar21 = (undefined8 *)((long)pvVar17 + uVar24 + uVar4 & (uVar24 ^ 0xffffffffffffffff));
  uVar1 = uVar11 + 0x10;
  lVar2 = uVar22 + uVar11;
  uVar11 = (lVar2 + (uVar1 & uVar13) & uVar13) + uVar22;
  if (uVar11 <= uVar22) {
    uVar11 = uVar22;
  }
  sVar3 = uVar11 + 1;
  bVar5 = *(byte *)((long)puVar21 + uVar11);
  if (bVar5 < 3) {
    if (bVar5 == 2) {
      *puVar19 = *puVar21;
      puVar19[1] = puVar21[1];
      uVar23 = uVar1 + (long)puVar19 & uVar13;
      uVar22 = uVar1 + (long)puVar21 & uVar13;
      pcVar10 = *(code **)(lVar15 + 0x10);
      _swift_bridgeObjectRetain();
      (*pcVar10)(uVar23,uVar22,DVar6.unknown);
      (*pcVar10)(lVar2 + uVar23 & uVar13,lVar2 + uVar22 & uVar13,DVar6.unknown);
      *(undefined1 *)((long)puVar19 + uVar11) = 2;
    }
    else if (bVar5 == 1) {
      *puVar19 = *puVar21;
      puVar19[1] = puVar21[1];
      uVar23 = uVar1 + (long)puVar19 & uVar13;
      uVar22 = uVar1 + (long)puVar21 & uVar13;
      pcVar10 = *(code **)(lVar15 + 0x10);
      _swift_bridgeObjectRetain();
      (*pcVar10)(uVar23,uVar22,DVar6.unknown);
      (*pcVar10)(lVar2 + uVar23 & uVar13,lVar2 + uVar22 & uVar13,DVar6.unknown);
      *(undefined1 *)((long)puVar19 + uVar11) = 1;
    }
    else {
      (**(code **)(lVar15 + 0x10))(puVar19,puVar21,DVar6.unknown);
      *(undefined1 *)((long)puVar19 + uVar11) = 0;
    }
  }
  else {
    _memcpy(puVar19,puVar21,sVar3);
  }
  PVar8 = StoreKit::Product::typeMetadataAccessor();
  lVar15 = *(long *)(PVar8.unknown + -8);
  uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
  (**(code **)(lVar15 + 0x10))
            ((long)puVar19 + uVar11 + sVar3 & (uVar11 ^ 0xffffffffffffffff),
             (long)puVar21 + uVar11 + sVar3 & (uVar11 ^ 0xffffffffffffffff),PVar8.unknown);
  lVar15 = (sVar3 + ((uVar16 & uVar13) + uVar24 + uVar4 & ~uVar24) + uVar11 &
           (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40);
  puVar21 = (undefined8 *)((ulong)(param_1 + lVar15 + 7) & 0xfffffffffffffff8);
  puVar19 = (undefined8 *)((ulong)(param_2 + lVar15 + 7) & 0xfffffffffffffff8);
  *puVar21 = *puVar19;
  puVar21[1] = puVar19[1];
  puVar12 = puVar21 + 2;
  puVar14 = puVar19 + 2;
  uVar16 = *puVar14;
  _swift_retain();
  if (uVar16 < 0xffffffff) {
    uVar16 = *puVar14;
    puVar21[3] = puVar19[3];
    *puVar12 = uVar16;
  }
  else {
    uVar9 = puVar19[3];
    *puVar12 = uVar16;
    puVar21[3] = uVar9;
    _swift_retain();
  }
  lVar15 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar16 = (ulong)*(byte *)(lVar15 + 0x50);
  (**(code **)(lVar15 + 0x10))
            ((long)puVar12 + uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff),
             (long)puVar14 + uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x100274ee0 | FUN_100274ee0 */

undefined1 * FUN_100274ee0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  DateComponents DVar5;
  void *pvVar6;
  void *pvVar7;
  uint *puVar8;
  Product PVar9;
  byte bVar10;
  ulong uVar11;
  uint uVar12;
  size_t sVar13;
  ulong uVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  void *pvVar25;
  void *pvVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  ulong uVar31;
  
  *param_1 = *param_2;
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar22 = *(long *)(DVar5.unknown + -8);
  uVar30 = (ulong)*(byte *)(lVar22 + 0x50);
  uVar11 = uVar30 + 1;
  uVar19 = ~uVar30;
  pvVar26 = (void *)((ulong)(param_1 + uVar11) & (uVar30 ^ 0xffffffffffffffff));
  pvVar25 = (void *)((ulong)(param_2 + uVar11) & (uVar30 ^ 0xffffffffffffffff));
  pcVar15 = *(code **)(lVar22 + 0x30);
  pvVar6 = pvVar26;
  (*pcVar15)(pvVar26,1,DVar5.unknown);
  pvVar7 = pvVar25;
  (*pcVar15)(pvVar25,1,DVar5.unknown);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 != 0) {
      (**(code **)(lVar22 + 8))(pvVar26,DVar5.unknown);
      goto LAB_100274fbc;
    }
    (**(code **)(lVar22 + 0x18))(pvVar26,pvVar25,DVar5.unknown);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar22 + 0x10))(pvVar26,pvVar25,DVar5.unknown);
    (**(code **)(lVar22 + 0x38))(pvVar26,0,1,DVar5.unknown);
  }
  else {
LAB_100274fbc:
    sVar13 = *(size_t *)(lVar22 + 0x40);
    if (*(int *)(lVar22 + 0x54) == 0) {
      sVar13 = sVar13 + 1;
    }
    _memcpy(pvVar26,pvVar25,sVar13);
  }
  uVar14 = *(ulong *)(lVar22 + 0x40);
  uVar2 = uVar14;
  if (*(int *)(lVar22 + 0x54) == 0) {
    uVar2 = uVar14 + 1;
  }
  uVar31 = uVar30 | 7;
  puVar27 = (uint *)((long)pvVar26 + uVar31 + uVar2 & (uVar31 ^ 0xffffffffffffffff));
  puVar28 = (uint *)((long)pvVar25 + uVar31 + uVar2 & (uVar31 ^ 0xffffffffffffffff));
  uVar16 = uVar30 + 0x10;
  lVar1 = uVar14 + uVar30;
  uVar30 = (lVar1 + (uVar16 & uVar19) & uVar19) + uVar14;
  if (uVar30 <= uVar14) {
    uVar30 = uVar14;
  }
  sVar13 = uVar30 + 1;
  bVar10 = *(byte *)((long)puVar27 + uVar30);
  bVar4 = *(byte *)((long)puVar28 + uVar30);
  uVar12 = (uint)bVar4;
  if (bVar10 < 3) {
    if (bVar4 < 3) {
      if (puVar27 != puVar28) {
        if ((bVar10 == 2) || (bVar10 == 1)) {
          _swift_bridgeObjectRelease(*(undefined8 *)(puVar27 + 2));
          uVar14 = (ulong)(uVar16 + (long)puVar27) & uVar19;
          pcVar15 = *(code **)(lVar22 + 8);
          (*pcVar15)(uVar14,DVar5.unknown);
          puVar8 = (uint *)(lVar1 + uVar14 & uVar19);
        }
        else {
          pcVar15 = *(code **)(lVar22 + 8);
          puVar8 = puVar27;
        }
        (*pcVar15)(puVar8,DVar5.unknown);
        bVar10 = *(byte *)((long)puVar28 + uVar30);
        uVar12 = (uint)bVar10;
        if (2 < bVar10) {
          uVar29 = (uint)uVar30;
          uVar3 = 4;
          if (uVar29 < 4) {
            uVar3 = uVar29;
          }
          if ((int)uVar3 < 2) {
            if (uVar3 == 0) goto LAB_100275238;
            uVar12 = (uint)(byte)*puVar28;
          }
          else if (uVar3 == 2) {
            uVar12 = (uint)(ushort)*puVar28;
          }
          else if (uVar3 == 3) {
            uVar12 = (uint)(uint3)*puVar28;
          }
          else {
            uVar12 = *puVar28;
          }
          if (uVar29 < 4) {
            uVar12 = (uVar12 | bVar10 - 3 << (ulong)((uVar29 & 3) << 3)) + 3;
          }
          else {
            uVar12 = uVar12 + 3;
          }
        }
LAB_100275238:
        if (uVar12 != 2) goto LAB_1002750a0;
LAB_100275240:
        *(undefined8 *)puVar27 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar28 + 2);
        uVar14 = (ulong)(uVar16 + (long)puVar27) & uVar19;
        uVar16 = (ulong)(uVar16 + (long)puVar28) & uVar19;
        pcVar15 = *(code **)(lVar22 + 0x10);
        _swift_bridgeObjectRetain();
        (*pcVar15)(uVar14,uVar16,DVar5.unknown);
        (*pcVar15)(lVar1 + uVar14 & uVar19,lVar1 + uVar16 & uVar19,DVar5.unknown);
        bVar10 = 2;
        goto LAB_1002752a8;
      }
    }
    else {
      if ((bVar10 == 2) || (bVar10 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar27 + 2));
        uVar30 = (ulong)(uVar16 + (long)puVar27) & uVar19;
        pcVar15 = *(code **)(lVar22 + 8);
        (*pcVar15)(uVar30,DVar5.unknown);
        (*pcVar15)(lVar1 + uVar30 & uVar19,DVar5.unknown);
      }
      else {
        (**(code **)(lVar22 + 8))(puVar27,DVar5.unknown);
      }
LAB_10027519c:
      _memcpy(puVar27,puVar28,sVar13);
    }
  }
  else {
    if (2 < bVar4) goto LAB_10027519c;
    if (bVar4 == 2) goto LAB_100275240;
LAB_1002750a0:
    if (uVar12 != 1) {
      (**(code **)(lVar22 + 0x10))(puVar27,puVar28,DVar5.unknown);
      *(byte *)((long)puVar27 + uVar30) = 0;
      goto LAB_1002752ac;
    }
    *(undefined8 *)puVar27 = *(undefined8 *)puVar28;
    *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar28 + 2);
    uVar14 = (ulong)(uVar16 + (long)puVar27) & uVar19;
    uVar16 = (ulong)(uVar16 + (long)puVar28) & uVar19;
    pcVar15 = *(code **)(lVar22 + 0x10);
    _swift_bridgeObjectRetain();
    (*pcVar15)(uVar14,uVar16,DVar5.unknown);
    (*pcVar15)(lVar1 + uVar14 & uVar19,lVar1 + uVar16 & uVar19,DVar5.unknown);
    bVar10 = 1;
LAB_1002752a8:
    *(byte *)((long)puVar27 + uVar30) = bVar10;
  }
LAB_1002752ac:
  PVar9 = StoreKit::Product::typeMetadataAccessor();
  lVar22 = *(long *)(PVar9.unknown + -8);
  uVar30 = (ulong)*(byte *)(lVar22 + 0x50);
  (**(code **)(lVar22 + 0x18))
            ((ulong)((long)puVar27 + uVar30 + sVar13) & (uVar30 ^ 0xffffffffffffffff),
             (ulong)((long)puVar28 + uVar30 + sVar13) & (uVar30 ^ 0xffffffffffffffff),PVar9.unknown)
  ;
  lVar22 = (sVar13 + ((uVar11 & uVar19) + uVar31 + uVar2 & ~uVar31) + uVar30 &
           (uVar30 ^ 0xffffffffffffffff)) + *(long *)(lVar22 + 0x40);
  puVar17 = (undefined8 *)((ulong)(param_1 + lVar22 + 7) & 0xfffffffffffffff8);
  puVar20 = (undefined8 *)((ulong)(param_2 + lVar22 + 7) & 0xfffffffffffffff8);
  *puVar17 = *puVar20;
  uVar23 = puVar17[1];
  puVar17[1] = puVar20[1];
  _swift_retain();
  _swift_release(uVar23);
  puVar18 = puVar17 + 2;
  puVar21 = puVar20 + 2;
  uVar11 = *puVar21;
  if (*puVar18 < 0xffffffff) {
    if (0xfffffffe < uVar11) {
      uVar23 = puVar20[3];
      *puVar18 = uVar11;
      puVar17[3] = uVar23;
      _swift_retain();
      goto LAB_1002753c4;
    }
  }
  else {
    if (0xfffffffe < uVar11) {
      uVar23 = puVar20[3];
      uVar24 = puVar17[3];
      *puVar18 = uVar11;
      puVar17[3] = uVar23;
      _swift_retain();
      _swift_release(uVar24);
      goto LAB_1002753c4;
    }
    _swift_release(puVar17[3]);
  }
  uVar11 = *puVar21;
  puVar17[3] = puVar20[3];
  *puVar18 = uVar11;
LAB_1002753c4:
  lVar22 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar11 = (ulong)*(byte *)(lVar22 + 0x50);
  (**(code **)(lVar22 + 0x18))
            ((long)puVar18 + uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff),
             (long)puVar21 + uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x100275418 | FUN_100275418 */

undefined1 * FUN_100275418(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  byte bVar5;
  DateComponents DVar6;
  void *pvVar7;
  Product PVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  code *pcVar16;
  void *pvVar17;
  void *pvVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  
  *param_1 = *param_2;
  DVar6 = Foundation::DateComponents::typeMetadataAccessor();
  lVar15 = *(long *)(DVar6.unknown + -8);
  uVar13 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar12 = uVar13 + 1;
  uVar14 = ~uVar13;
  pvVar18 = (void *)((ulong)(param_1 + uVar12) & (uVar13 ^ 0xffffffffffffffff));
  pvVar17 = (void *)((ulong)(param_2 + uVar12) & (uVar13 ^ 0xffffffffffffffff));
  pvVar7 = pvVar17;
  (**(code **)(lVar15 + 0x30))(pvVar17,1,DVar6.unknown);
  if ((int)pvVar7 == 0) {
    (**(code **)(lVar15 + 0x20))(pvVar18,pvVar17,DVar6.unknown);
    (**(code **)(lVar15 + 0x38))(pvVar18,0,1,DVar6.unknown);
    iVar20 = *(int *)(lVar15 + 0x54);
    uVar22 = *(ulong *)(lVar15 + 0x40);
  }
  else {
    iVar20 = *(int *)(lVar15 + 0x54);
    uVar22 = *(size_t *)(lVar15 + 0x40);
    sVar3 = uVar22;
    if (iVar20 == 0) {
      sVar3 = uVar22 + 1;
    }
    _memcpy(pvVar18,pvVar17,sVar3);
  }
  uVar4 = uVar22;
  if (iVar20 == 0) {
    uVar4 = uVar22 + 1;
  }
  uVar24 = uVar13 | 7;
  puVar19 = (undefined8 *)((long)pvVar18 + uVar24 + uVar4 & (uVar24 ^ 0xffffffffffffffff));
  puVar21 = (undefined8 *)((long)pvVar17 + uVar24 + uVar4 & (uVar24 ^ 0xffffffffffffffff));
  uVar1 = uVar13 + 0x10;
  lVar2 = uVar22 + uVar13;
  uVar13 = (lVar2 + (uVar1 & uVar14) & uVar14) + uVar22;
  if (uVar13 <= uVar22) {
    uVar13 = uVar22;
  }
  sVar3 = uVar13 + 1;
  bVar5 = *(byte *)((long)puVar21 + uVar13);
  if (bVar5 < 3) {
    if (bVar5 == 2) {
      uVar11 = *puVar21;
      puVar19[1] = puVar21[1];
      *puVar19 = uVar11;
      uVar23 = uVar1 + (long)puVar19 & uVar14;
      uVar22 = uVar1 + (long)puVar21 & uVar14;
      pcVar16 = *(code **)(lVar15 + 0x20);
      (*pcVar16)(uVar23,uVar22,DVar6.unknown);
      (*pcVar16)(lVar2 + uVar23 & uVar14,lVar2 + uVar22 & uVar14,DVar6.unknown);
      *(undefined1 *)((long)puVar19 + uVar13) = 2;
    }
    else if (bVar5 == 1) {
      uVar11 = *puVar21;
      puVar19[1] = puVar21[1];
      *puVar19 = uVar11;
      uVar23 = uVar1 + (long)puVar19 & uVar14;
      uVar22 = uVar1 + (long)puVar21 & uVar14;
      pcVar16 = *(code **)(lVar15 + 0x20);
      (*pcVar16)(uVar23,uVar22,DVar6.unknown);
      (*pcVar16)(lVar2 + uVar23 & uVar14,lVar2 + uVar22 & uVar14,DVar6.unknown);
      *(undefined1 *)((long)puVar19 + uVar13) = 1;
    }
    else {
      (**(code **)(lVar15 + 0x20))(puVar19,puVar21,DVar6.unknown);
      *(undefined1 *)((long)puVar19 + uVar13) = 0;
    }
  }
  else {
    _memcpy(puVar19,puVar21,sVar3);
  }
  PVar8 = StoreKit::Product::typeMetadataAccessor();
  lVar15 = *(long *)(PVar8.unknown + -8);
  uVar13 = (ulong)*(byte *)(lVar15 + 0x50);
  (**(code **)(lVar15 + 0x20))
            ((long)puVar19 + uVar13 + sVar3 & (uVar13 ^ 0xffffffffffffffff),
             (long)puVar21 + uVar13 + sVar3 & (uVar13 ^ 0xffffffffffffffff),PVar8.unknown);
  lVar15 = (sVar3 + ((uVar12 & uVar14) + uVar24 + uVar4 & ~uVar24) + uVar13 &
           (uVar13 ^ 0xffffffffffffffff)) + *(long *)(lVar15 + 0x40);
  puVar19 = (undefined8 *)((ulong)(param_1 + lVar15 + 7) & 0xfffffffffffffff8);
  puVar21 = (undefined8 *)((ulong)(param_2 + lVar15 + 7) & 0xfffffffffffffff8);
  uVar11 = *puVar21;
  puVar19[1] = puVar21[1];
  *puVar19 = uVar11;
  puVar9 = puVar19 + 2;
  puVar10 = puVar21 + 2;
  if (*puVar10 < 0xffffffff) {
    uVar12 = *puVar10;
    puVar19[3] = puVar21[3];
    *puVar9 = uVar12;
  }
  else {
    uVar11 = puVar21[3];
    *puVar9 = *puVar10;
    puVar19[3] = uVar11;
  }
  lVar15 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
  (**(code **)(lVar15 + 0x20))
            ((long)puVar9 + uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff),
             (long)puVar10 + uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x100275730 | FUN_100275730 */

undefined1 * FUN_100275730(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  DateComponents DVar5;
  void *pvVar6;
  void *pvVar7;
  uint *puVar8;
  Product PVar9;
  undefined8 uVar10;
  ulong uVar11;
  byte bVar12;
  ulong uVar13;
  uint uVar14;
  size_t sVar15;
  ulong uVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 *puVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong *puVar23;
  ulong uVar24;
  void *pvVar25;
  void *pvVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  
  *param_1 = *param_2;
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar31 = *(long *)(DVar5.unknown + -8);
  uVar30 = (ulong)*(byte *)(lVar31 + 0x50);
  uVar13 = uVar30 + 1;
  uVar21 = ~uVar30;
  pvVar26 = (void *)((ulong)(param_1 + uVar13) & (uVar30 ^ 0xffffffffffffffff));
  pvVar25 = (void *)((ulong)(param_2 + uVar13) & (uVar30 ^ 0xffffffffffffffff));
  pcVar18 = *(code **)(lVar31 + 0x30);
  pvVar6 = pvVar26;
  (*pcVar18)(pvVar26,1,DVar5.unknown);
  pvVar7 = pvVar25;
  (*pcVar18)(pvVar25,1,DVar5.unknown);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 != 0) {
      (**(code **)(lVar31 + 8))(pvVar26,DVar5.unknown);
      goto LAB_10027580c;
    }
    (**(code **)(lVar31 + 0x28))(pvVar26,pvVar25,DVar5.unknown);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar31 + 0x20))(pvVar26,pvVar25,DVar5.unknown);
    (**(code **)(lVar31 + 0x38))(pvVar26,0,1,DVar5.unknown);
  }
  else {
LAB_10027580c:
    sVar15 = *(size_t *)(lVar31 + 0x40);
    if (*(int *)(lVar31 + 0x54) == 0) {
      sVar15 = sVar15 + 1;
    }
    _memcpy(pvVar26,pvVar25,sVar15);
  }
  uVar16 = *(ulong *)(lVar31 + 0x40);
  uVar2 = uVar16;
  if (*(int *)(lVar31 + 0x54) == 0) {
    uVar2 = uVar16 + 1;
  }
  uVar24 = uVar30 | 7;
  puVar27 = (uint *)((long)pvVar26 + uVar24 + uVar2 & (uVar24 ^ 0xffffffffffffffff));
  puVar28 = (uint *)((long)pvVar25 + uVar24 + uVar2 & (uVar24 ^ 0xffffffffffffffff));
  uVar11 = uVar30 + 0x10;
  lVar1 = uVar16 + uVar30;
  uVar30 = (lVar1 + (uVar11 & uVar21) & uVar21) + uVar16;
  if (uVar30 <= uVar16) {
    uVar30 = uVar16;
  }
  sVar15 = uVar30 + 1;
  bVar12 = *(byte *)((long)puVar27 + uVar30);
  bVar4 = *(byte *)((long)puVar28 + uVar30);
  uVar14 = (uint)bVar4;
  if (bVar12 < 3) {
    if (bVar4 < 3) {
      if (puVar27 != puVar28) {
        if ((bVar12 == 2) || (bVar12 == 1)) {
          _swift_bridgeObjectRelease(*(undefined8 *)(puVar27 + 2));
          uVar16 = (ulong)(uVar11 + (long)puVar27) & uVar21;
          pcVar18 = *(code **)(lVar31 + 8);
          (*pcVar18)(uVar16,DVar5.unknown);
          puVar8 = (uint *)(lVar1 + uVar16 & uVar21);
        }
        else {
          pcVar18 = *(code **)(lVar31 + 8);
          puVar8 = puVar27;
        }
        (*pcVar18)(puVar8,DVar5.unknown);
        bVar12 = *(byte *)((long)puVar28 + uVar30);
        uVar14 = (uint)bVar12;
        if (2 < bVar12) {
          uVar29 = (uint)uVar30;
          uVar3 = 4;
          if (uVar29 < 4) {
            uVar3 = uVar29;
          }
          if ((int)uVar3 < 2) {
            if (uVar3 == 0) goto LAB_100275a6c;
            uVar14 = (uint)(byte)*puVar28;
          }
          else if (uVar3 == 2) {
            uVar14 = (uint)(ushort)*puVar28;
          }
          else if (uVar3 == 3) {
            uVar14 = (uint)(uint3)*puVar28;
          }
          else {
            uVar14 = *puVar28;
          }
          if (uVar29 < 4) {
            uVar14 = (uVar14 | bVar12 - 3 << (ulong)((uVar29 & 3) << 3)) + 3;
          }
          else {
            uVar14 = uVar14 + 3;
          }
        }
LAB_100275a6c:
        if (uVar14 != 2) goto LAB_1002758f0;
LAB_100275a74:
        uVar10 = *(undefined8 *)puVar28;
        *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar28 + 2);
        *(undefined8 *)puVar27 = uVar10;
        uVar16 = (ulong)(uVar11 + (long)puVar27) & uVar21;
        uVar11 = (ulong)(uVar11 + (long)puVar28) & uVar21;
        pcVar18 = *(code **)(lVar31 + 0x20);
        (*pcVar18)(uVar16,uVar11,DVar5.unknown);
        (*pcVar18)(lVar1 + uVar16 & uVar21,lVar1 + uVar11 & uVar21,DVar5.unknown);
        bVar12 = 2;
        goto LAB_100275ac0;
      }
    }
    else {
      if ((bVar12 == 2) || (bVar12 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(puVar27 + 2));
        uVar30 = (ulong)(uVar11 + (long)puVar27) & uVar21;
        pcVar18 = *(code **)(lVar31 + 8);
        (*pcVar18)(uVar30,DVar5.unknown);
        (*pcVar18)(lVar1 + uVar30 & uVar21,DVar5.unknown);
      }
      else {
        (**(code **)(lVar31 + 8))(puVar27,DVar5.unknown);
      }
LAB_1002759d0:
      _memcpy(puVar27,puVar28,sVar15);
    }
  }
  else {
    if (2 < bVar4) goto LAB_1002759d0;
    if (bVar4 == 2) goto LAB_100275a74;
LAB_1002758f0:
    if (uVar14 != 1) {
      (**(code **)(lVar31 + 0x20))(puVar27,puVar28,DVar5.unknown);
      *(byte *)((long)puVar27 + uVar30) = 0;
      goto LAB_100275ac4;
    }
    uVar10 = *(undefined8 *)puVar28;
    *(undefined8 *)(puVar27 + 2) = *(undefined8 *)(puVar28 + 2);
    *(undefined8 *)puVar27 = uVar10;
    uVar16 = (ulong)(uVar11 + (long)puVar27) & uVar21;
    uVar11 = (ulong)(uVar11 + (long)puVar28) & uVar21;
    pcVar18 = *(code **)(lVar31 + 0x20);
    (*pcVar18)(uVar16,uVar11,DVar5.unknown);
    (*pcVar18)(lVar1 + uVar16 & uVar21,lVar1 + uVar11 & uVar21,DVar5.unknown);
    bVar12 = 1;
LAB_100275ac0:
    *(byte *)((long)puVar27 + uVar30) = bVar12;
  }
LAB_100275ac4:
  PVar9 = StoreKit::Product::typeMetadataAccessor();
  lVar31 = *(long *)(PVar9.unknown + -8);
  uVar30 = (ulong)*(byte *)(lVar31 + 0x50);
  (**(code **)(lVar31 + 0x28))
            ((ulong)((long)puVar27 + uVar30 + sVar15) & (uVar30 ^ 0xffffffffffffffff),
             (ulong)((long)puVar28 + uVar30 + sVar15) & (uVar30 ^ 0xffffffffffffffff),PVar9.unknown)
  ;
  lVar31 = (sVar15 + ((uVar13 & uVar21) + uVar24 + uVar2 & ~uVar24) + uVar30 &
           (uVar30 ^ 0xffffffffffffffff)) + *(long *)(lVar31 + 0x40);
  puVar19 = (undefined8 *)((ulong)(param_1 + lVar31 + 7) & 0xfffffffffffffff8);
  puVar22 = (undefined8 *)((ulong)(param_2 + lVar31 + 7) & 0xfffffffffffffff8);
  *puVar19 = *puVar22;
  uVar10 = puVar19[1];
  puVar19[1] = puVar22[1];
  _swift_release(uVar10);
  puVar20 = puVar19 + 2;
  puVar23 = puVar22 + 2;
  uVar13 = *puVar23;
  if (*puVar20 < 0xffffffff) {
    if (0xfffffffe < uVar13) {
      uVar10 = puVar22[3];
      *puVar20 = uVar13;
      puVar19[3] = uVar10;
      goto LAB_100275bc8;
    }
  }
  else {
    if (0xfffffffe < uVar13) {
      uVar17 = puVar22[3];
      uVar10 = puVar19[3];
      *puVar20 = uVar13;
      puVar19[3] = uVar17;
      _swift_release(uVar10);
      goto LAB_100275bc8;
    }
    _swift_release(puVar19[3]);
  }
  uVar13 = *puVar23;
  puVar19[3] = puVar22[3];
  *puVar20 = uVar13;
LAB_100275bc8:
  lVar31 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar13 = (ulong)*(byte *)(lVar31 + 0x50);
  (**(code **)(lVar31 + 0x28))
            ((long)puVar20 + uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff),
             (long)puVar23 + uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x100275c1c | FUN_100275c1c */

ulong FUN_100275c1c(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  DateComponents DVar11;
  Product PVar12;
  ulong uVar13;
  uint uVar14;
  Product PVar15;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  
  DVar11 = Foundation::DateComponents::typeMetadataAccessor();
  lVar24 = *(long *)(DVar11.unknown + -8);
  uVar18 = *(uint *)(lVar24 + 0x54);
  uVar8 = 0;
  if (uVar18 != 0) {
    uVar8 = uVar18 - 1;
  }
  uVar26 = *(ulong *)(lVar24 + 0x40);
  uVar25 = (ulong)*(byte *)(lVar24 + 0x50);
  uVar13 = (uVar26 + uVar25 + (uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff)) &
           (uVar25 ^ 0xffffffffffffffff)) + uVar26;
  if (uVar13 <= uVar26) {
    uVar13 = uVar26;
  }
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  lVar19 = *(long *)(PVar12.unknown + -8);
  uVar9 = *(uint *)(lVar19 + 0x54);
  uVar4 = uVar8;
  if (uVar8 <= uVar9) {
    uVar4 = uVar9;
  }
  uVar5 = uVar4;
  if (uVar4 < 0xfd) {
    uVar5 = 0xfc;
  }
  PVar15.unknown = *(undefined **)(param_3 + 0x10);
  lVar20 = *(long *)(PVar15.unknown + -8);
  uVar14 = *(uint *)(lVar20 + 0x54);
  uVar6 = uVar4;
  if (uVar4 <= uVar14) {
    uVar6 = uVar14;
  }
  uVar7 = uVar6;
  if (uVar6 < 0x80000000) {
    uVar7 = 0x7fffffff;
  }
  if (uVar18 == 0) {
    uVar26 = uVar26 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar22 = uVar25 | 7;
  uVar21 = (ulong)*(byte *)(lVar19 + 0x50);
  lVar1 = uVar13 + uVar21 + 1;
  lVar2 = (lVar1 + (uVar22 + uVar26 + (uVar25 + 1 & (uVar25 ^ 0xffffffffffffffff)) &
                   (uVar22 ^ 0xffffffffffffffff)) & (uVar21 ^ 0xffffffffffffffff)) +
          *(long *)(lVar19 + 0x40);
  uVar16 = (ulong)*(byte *)(lVar20 + 0x50);
  if (param_2 < uVar7 || param_2 - uVar7 == 0) goto LAB_100275da8;
  lVar3 = (uVar16 + 0x10 + (lVar2 + 7U & 0xfffffffffffffff8) + 0x10 & (uVar16 ^ 0xffffffffffffffff))
          + *(long *)(lVar20 + 0x40);
  uVar17 = (uint)lVar3;
  uVar10 = uVar17 << 3;
  if (uVar17 < 4) {
    uVar23 = (param_2 - uVar7) + ~(-1 << (ulong)(uVar10 & 0x1f)) >> (ulong)(uVar10 & 0x1f);
    if (uVar23 < 0xff) {
      if (uVar23 == 0) goto LAB_100275da8;
      goto LAB_100275d68;
    }
    if (uVar23 < 0xffff) {
      uVar23 = (uint)*(ushort *)((long)param_1 + lVar3);
    }
    else {
      uVar23 = *(uint *)((long)param_1 + lVar3);
    }
  }
  else {
LAB_100275d68:
    uVar23 = (uint)*(byte *)((long)param_1 + lVar3);
  }
  if (uVar23 != 0) {
    uVar8 = 0;
    if (uVar17 < 4) {
      uVar8 = uVar23 - 1 << (ulong)(uVar10 & 0x1f);
    }
    if (uVar17 == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = 4;
      if (uVar17 < 4) {
        uVar18 = uVar17;
      }
      if ((int)uVar18 < 3) {
        if (uVar18 == 1) {
          uVar18 = (uint)(byte)*param_1;
        }
        else {
          uVar18 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar18 == 3) {
        uVar18 = (uint)(uint3)*param_1;
      }
      else {
        uVar18 = *param_1;
      }
    }
    return (ulong)(uVar7 + (uVar18 | uVar8) + 1);
  }
LAB_100275da8:
  if (uVar4 == uVar7) {
    uVar25 = (ulong)((long)param_1 + uVar25 + 1) & ~uVar25;
    if (uVar8 == uVar5) {
      if (uVar18 < 2) {
        return 0;
      }
      (**(code **)(lVar24 + 0x30))(uVar25,uVar18,DVar11.unknown);
      uVar8 = 0;
      if ((int)uVar25 != 0) {
        uVar8 = (int)uVar25 - 1;
      }
      return (ulong)uVar8;
    }
    uVar26 = uVar22 + uVar26 + uVar25 & ~uVar22;
    if (uVar5 == 0xfc) {
      uVar18 = (uint)*(byte *)(uVar26 + uVar13);
      uVar8 = 0;
      if (2 < uVar18) {
        uVar8 = uVar18 ^ 0xff;
      }
      return (ulong)uVar8;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x30);
    uVar13 = lVar1 + uVar26 & ~uVar21;
    PVar15 = PVar12;
    uVar14 = uVar9;
  }
  else {
    uVar13 = (ulong)((long)param_1 + lVar2 + 7) & 0xfffffffffffffff8;
    if (-1 < (int)uVar6) {
      uVar13 = *(ulong *)(uVar13 + 8);
      if (0xfffffffe < uVar13) {
        uVar13 = 0xffffffff;
      }
      return (ulong)((int)uVar13 + 1);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x30);
    uVar13 = uVar16 + 0x10 + uVar13 + 0x10 & ~uVar16;
  }
                    /* WARNING: Could not recover jumptable at 0x000100275eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar13,uVar14,PVar15.unknown);
  return uVar13;
}



/* Address: 0x100275f08 | FUN_100275f08 */

void FUN_100275f08(uint *param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined2 uVar10;
  byte bVar11;
  DateComponents DVar12;
  Product PVar13;
  uint uVar14;
  uint uVar15;
  DateComponents DVar16;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  int iVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  long lVar29;
  
  DVar12 = Foundation::DateComponents::typeMetadataAccessor();
  lVar29 = *(long *)(DVar12.unknown + -8);
  uVar14 = *(uint *)(lVar29 + 0x54);
  uVar18 = 0;
  if (uVar14 != 0) {
    uVar18 = uVar14 - 1;
  }
  uVar27 = *(ulong *)(lVar29 + 0x40);
  uVar25 = (ulong)*(byte *)(lVar29 + 0x50);
  uVar2 = (uVar27 + uVar25 + (uVar25 + 0x10 & (uVar25 ^ 0xffffffffffffffff)) &
          (uVar25 ^ 0xffffffffffffffff)) + uVar27;
  if (uVar2 <= uVar27) {
    uVar2 = uVar27;
  }
  PVar13 = StoreKit::Product::typeMetadataAccessor();
  bVar11 = 0;
  lVar19 = *(long *)(PVar13.unknown + -8);
  uVar9 = *(uint *)(lVar19 + 0x54);
  uVar8 = uVar18;
  if (uVar18 <= uVar9) {
    uVar8 = uVar9;
  }
  uVar5 = uVar8;
  if (uVar8 < 0xfd) {
    uVar5 = 0xfc;
  }
  DVar16.unknown = *(undefined **)(param_4 + 0x10);
  lVar21 = *(long *)(DVar16.unknown + -8);
  uVar15 = *(uint *)(lVar21 + 0x54);
  uVar6 = uVar8;
  if (uVar8 <= uVar15) {
    uVar6 = uVar15;
  }
  uVar7 = uVar6;
  if (uVar6 < 0x80000000) {
    uVar7 = 0x7fffffff;
  }
  if (uVar14 == 0) {
    uVar27 = uVar27 + 1;
  }
  uVar23 = uVar25 | 7;
  uVar22 = (ulong)*(byte *)(lVar19 + 0x50);
  lVar1 = uVar2 + uVar22 + 1;
  sVar3 = (lVar1 + (uVar23 + uVar27 + (uVar25 + 1 & (uVar25 ^ 0xffffffffffffffff)) &
                   (uVar23 ^ 0xffffffffffffffff)) & (uVar22 ^ 0xffffffffffffffff)) +
          *(long *)(lVar19 + 0x40);
  uVar17 = (ulong)*(byte *)(lVar21 + 0x50);
  sVar4 = (uVar17 + (sVar3 + 7 & 0xfffffffffffffff8) + 0x20 & (uVar17 ^ 0xffffffffffffffff)) +
          *(long *)(lVar21 + 0x40);
  uVar28 = (uint)sVar4;
  if (uVar7 <= param_3 && param_3 - uVar7 != 0) {
    if (uVar28 < 4) {
      uVar26 = (param_3 - uVar7) + ~(-1 << (ulong)(uVar28 << 3 & 0x1f)) >>
               (ulong)(uVar28 << 3 & 0x1f);
      bVar11 = 2;
      if (0xfffe < uVar26) {
        bVar11 = 4;
      }
      if (uVar26 < 0xff) {
        bVar11 = uVar26 != 0;
      }
    }
    else {
      bVar11 = 1;
    }
  }
  uVar26 = (uint)param_2;
  if (uVar7 < uVar26) {
    uVar26 = uVar26 + ~uVar7;
    if (uVar28 < 4) {
      iVar24 = (uVar26 >> (ulong)(uVar28 << 3 & 0x1f)) + 1;
      if (uVar28 != 0) {
        uVar18 = uVar26 & (-1 << (ulong)(uVar28 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar4);
        uVar10 = (undefined2)uVar18;
        if (uVar28 == 3) {
          *(undefined2 *)param_1 = uVar10;
          *(char *)((long)param_1 + 2) = (char)(uVar18 >> 0x10);
        }
        else if (uVar28 == 2) {
          *(undefined2 *)param_1 = uVar10;
        }
        else {
          *(char *)param_1 = (char)uVar26;
        }
      }
    }
    else {
      _bzero(param_1,sVar4);
      *param_1 = uVar26;
      iVar24 = 1;
    }
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(char *)((long)param_1 + sVar4) = (char)iVar24;
      }
    }
    else if (bVar11 == 2) {
      *(short *)((long)param_1 + sVar4) = (short)iVar24;
    }
    else {
      *(int *)((long)param_1 + sVar4) = iVar24;
    }
  }
  else {
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(undefined1 *)((long)param_1 + sVar4) = 0;
      }
    }
    else if (bVar11 == 2) {
      *(undefined2 *)((long)param_1 + sVar4) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar4) = 0;
    }
    if (uVar26 != 0) {
      if (uVar8 == uVar7) {
        if (uVar26 <= uVar5) {
          uVar25 = (long)param_1 + uVar25 + 1 & ~uVar25;
          if (uVar18 == uVar5) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar29 + 0x38);
            param_2 = (ulong)(uVar26 + 1);
            DVar16 = DVar12;
            uVar15 = uVar14;
          }
          else {
            uVar27 = uVar23 + uVar27 + uVar25 & ~uVar23;
            if (uVar5 == 0xfc) {
              *(byte *)(uVar27 + uVar2) = ~(byte)param_2;
              return;
            }
            UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x38);
            uVar25 = lVar1 + uVar27 & ~uVar22;
            DVar16.unknown = PVar13.unknown;
            uVar15 = uVar9;
          }
LAB_1002762a4:
                    /* WARNING: Could not recover jumptable at 0x0001002762c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(uVar25,param_2,uVar15,DVar16.unknown);
          return;
        }
        uVar14 = (uint)sVar3;
        uVar18 = 0xffffffff;
        if (uVar14 < 4) {
          uVar18 = ~(-1 << (ulong)((uVar14 & 3) << 3));
        }
        if (uVar14 != 0) {
          uVar18 = uVar18 & (uVar5 - uVar26 ^ 0xffffffff);
          uVar8 = 4;
          if (uVar14 < 4) {
            uVar8 = uVar14;
          }
          _bzero(param_1,sVar3);
          if ((int)uVar8 < 3) {
            if (uVar8 == 1) {
              *(char *)param_1 = (char)uVar18;
            }
            else {
              *(short *)param_1 = (short)uVar18;
            }
          }
          else if (uVar8 == 3) {
            *(short *)param_1 = (short)uVar18;
            *(char *)((long)param_1 + 2) = (char)(uVar18 >> 0x10);
          }
          else {
            *param_1 = uVar18;
          }
        }
      }
      else {
        puVar20 = (ulong *)((long)param_1 + sVar3 + 7 & 0xfffffffffffffff8);
        if ((int)uVar6 < 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
          uVar25 = (long)puVar20 + uVar17 + 0x20 & ~uVar17;
          goto LAB_1002762a4;
        }
        if ((int)uVar26 < 0) {
          *puVar20 = (ulong)(uVar26 & 0x7fffffff);
          puVar20[1] = 0;
        }
        else {
          puVar20[1] = (ulong)(uVar26 - 1);
        }
      }
    }
  }
  return;
}



/* Address: 0x1002762f0 | FUN_1002762f0 */

void FUN_1002762f0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1002762fc | FUN_1002762fc */

void FUN_1002762fc(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa17c,1);
  return;
}



/* Address: 0x10027630c | FUN_10027630c */

bool FUN_10027630c(long param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar9;
  char *unaff_x20;
  char *pcVar10;
  undefined8 uVar11;
  
  lVar4 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  FUN_1002abb94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pcVar10 = puVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar11 = *(undefined8 *)(unaff_x20 + (long)*(int *)(param_1 + 0x24) + 8);
  puVar6 = &DAT_100c39b58;
  _swift_getKeyPath(&DAT_100c39b58);
  puVar7 = &DAT_100c39b80;
  _swift_getKeyPath(&DAT_100c39b80);
  _swift_retain(uVar11);
  Combine::Published::_get_subscript(puVar9);
  _swift_release(uVar11);
  _swift_release(puVar6);
  _swift_release(puVar7);
  puVar8 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar4);
  if ((int)puVar8 == 0) {
    FUN_1000523d8(puVar9,pcVar10,FUN_1002abb94);
    cVar1 = *pcVar10;
    cVar2 = *unaff_x20;
    FUN_10005241c(pcVar10,FUN_1002abb94);
    bVar3 = cVar1 == cVar2;
  }
  else {
    FUN_10005241c(puVar9,FUN_10025cfc4);
    bVar3 = false;
  }
  return bVar3;
}



/* Address: 0x100276468 | FUN_100276468 */

void FUN_100276468(undefined8 param_1,long param_2)

{
  ModifiedContent MVar1;
  undefined *puVar2;
  undefined *puVar3;
  ModifiedContent MVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  TupleView TVar7;
  ZStack ZVar8;
  Alignment alignment;
  ZStack<undefined> ZVar9;
  Animation AVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_e0;
  undefined8 local_d8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined **local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  local_d8 = *(undefined8 *)(param_2 + 0x10);
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  puVar2 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar6 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = uVar12;
  puStack_68 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_70);
  local_b0 = MVar1.unknown;
  puStack_a8 = puVar3;
  _swift_getOpaqueTypeMetadata2(0xff,&local_b0,&DAT_100ca7bfc,0);
  FUN_100005c24(&DAT_100fb9090,&DAT_100c39b40);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  ppuVar5 = &local_b0;
  local_b0 = MVar1.unknown;
  puStack_a8 = puVar3;
  _swift_getOpaqueTypeConformance2(ppuVar5,&DAT_100ca7bfc,1);
  puVar2 = &DAT_100fb9088;
  FUN_100016eac(&DAT_100fb9088,&DAT_100fb9090,&DAT_100c39b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyTransformModifier<undefined>_>SwiftUI__ViewModifier_100eab108
               );
  local_80 = ppuVar5;
  puStack_78 = puVar2;
  _swift_getWitnessTable(puVar6,MVar4.unknown,&local_80);
  local_b0 = MVar4.unknown;
  puStack_a8 = puVar6;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_b0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_keyboardShortcut(SwiftUI_KeyboardShortcut)__>_some>>_100eab490
             ,0);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar2 = &DAT_100fb9a50;
  FUN_100005c24(&DAT_100fb9a50,&DAT_100c39b48);
  _swift_getTupleTypeMetadata2(0xff,MVar1.unknown,puVar2,0,0);
  TVar7 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar7.unknown);
  ZVar8 = SwiftUI::ZStack::typeMetadataAccessor();
  local_e0 = *(long *)(ZVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100005c24(&DAT_100fb9340,&DAT_100c39b50);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  lVar14 = *(long *)(MVar4.unknown + -8);
  MVar1 = MVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar16 = ((long)&local_e0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar16 - extraout_x12;
  local_a0 = local_d8;
  uStack_98 = uVar12;
  alignment = SwiftUI::Alignment::get_center(MVar1.unknown);
  ZVar9 = SwiftUI::ZStack::_init(alignment);
  AVar10 = SwiftUI::Animation::easeOut(0.15,ZVar9.unknown);
  FUN_10027630c();
  local_b0 = (undefined *)(CONCAT71(local_b0._1_7_,(char)param_2) & 0xffffffffffffff01);
  puVar6 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958,ZVar8.unknown);
  (extension_SwiftUI)::SwiftUI::View::_animation
            (lVar16,AVar10.unknown,&local_b0,ZVar8.unknown,
             PTR___type_metadata_for_Swift_Bool_100eac570,puVar6,
             PTR___protocol_witness_table_for_Swift_Bool___Swift_Equatable_in_Swift_100eac588);
  _swift_release(AVar10.unknown);
  (**(code **)(local_e0 + 8))((long)&local_e0 - extraout_x8,ZVar8.unknown);
  puVar2 = &DAT_100fb9338;
  FUN_100016eac(&DAT_100fb9338,&DAT_100fb9340,&DAT_100c39b50,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  local_c0 = puVar6;
  puStack_b8 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar4.unknown,&local_c0);
  pcVar11 = *(code **)(lVar14 + 0x10);
  (*pcVar11)(lVar15,lVar16,MVar4.unknown);
  pcVar13 = *(code **)(lVar14 + 8);
  (*pcVar13)(lVar16,MVar4.unknown);
  (*pcVar11)(param_1,lVar15,MVar4.unknown);
  (*pcVar13)(lVar15,MVar4.unknown);
  return;
}



/* Address: 0x100276824 | FUN_100276824 */

void FUN_100276824(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  KeyboardShortcut KVar6;
  undefined1 *puVar7;
  ControlSize CVar8;
  ModifiedContent MVar9;
  undefined *puVar10;
  ModifiedContent MVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  MainActor *pMVar14;
  undefined8 *puVar15;
  UnownedSerialExecutor UVar16;
  UnownedSerialExecutor UVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  undefined7 extraout_var;
  long extraout_x8;
  long lVar21;
  long extraout_x8_00;
  undefined *puVar22;
  long extraout_x8_01;
  long extraout_x8_02;
  KeyboardShortcut KVar23;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar25;
  code *pcVar26;
  code *pcVar27;
  double dVar28;
  undefined1 auStack_1b0 [8];
  undefined **local_1a8;
  undefined *local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  undefined8 local_148;
  long local_140;
  long local_138;
  MainActor *local_130;
  undefined *local_128;
  KeyboardShortcut local_120;
  long local_118;
  undefined *local_110;
  undefined *local_108;
  long local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined **local_c8;
  undefined *puStack_c0;
  undefined **local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  
  puVar22 = &DAT_100fb9a50;
  local_f0 = param_1;
  FUN_1000037f0(&DAT_100fb9a50,&DAT_100c39b48);
  local_108 = puVar22;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar22 + -8) + 0x40));
  local_f8 = auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = (long)(auStack_1b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_100 = lVar21;
  local_110 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_118 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_118 + 0x40));
  puVar22 = (undefined *)(lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar21 = 0;
  local_120.unknown = puVar22;
  FUN_10025cfc4();
  local_158 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
  lVar24 = (long)puVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_150 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar24 - extraout_x12_00;
  local_178 = lVar24;
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  local_148 = param_3;
  MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar22 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar13 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar10 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_140 = param_4;
  local_98 = param_4;
  puStack_90 = puVar22;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar9.unknown,&local_98);
  lVar21 = 0;
  local_a8 = MVar9.unknown;
  local_a0 = puVar10;
  _swift_getOpaqueTypeMetadata2(0,&local_a8,&DAT_100ca7bfc,0);
  local_168 = *(long *)(lVar21 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_168 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  KVar23.unknown = (undefined *)(lVar24 - extraout_x8_02);
  FUN_100005c24(&DAT_100fb9090,&DAT_100c39b40);
  local_160 = lVar21;
  MVar11 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_170 = *(long *)(MVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_170 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  ppuVar12 = &local_a8;
  local_180 = (long)KVar23.unknown - extraout_x8_03;
  local_a8 = MVar9.unknown;
  local_a0 = puVar10;
  _swift_getOpaqueTypeConformance2(ppuVar12,&DAT_100ca7bfc,1);
  puVar22 = &DAT_100fb9088;
  FUN_100016eac(&DAT_100fb9088,&DAT_100fb9090,&DAT_100c39b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyTransformModifier<undefined>_>SwiftUI__ViewModifier_100eab108
               );
  local_1a8 = ppuVar12;
  local_b8 = ppuVar12;
  puStack_b0 = puVar22;
  _swift_getWitnessTable(puVar13,MVar11.unknown,&local_b8);
  lVar21 = 0;
  local_1a0 = puVar13;
  local_a8 = MVar11.unknown;
  local_a0 = puVar13;
  _swift_getOpaqueTypeMetadata2
            (0,&local_a8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_keyboardShortcut(SwiftUI_KeyboardShortcut)__>_some>>_100eab490
             ,0);
  local_198 = *(long *)(lVar21 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_198 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar24 = ((long)KVar23.unknown - extraout_x8_03) - extraout_x8_04;
  local_190 = lVar21;
  MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_188 = *(long *)(MVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_188 + 0x40));
  puVar22 = (undefined *)(lVar24 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  local_128 = puVar22;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = (long)puVar22 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_138 = lVar21 - extraout_x12_02;
  pMVar14 = Swift::MainActor::typeMetadataAccessor();
  puVar22 = PTR_typeMetadataAccessor_100eaec10;
  pMVar14 = Swift::MainActor::get_shared(pMVar14,pMVar14);
  puVar15 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar22,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_130 = pMVar14;
  UVar16 = Swift::Actor::get_unownedExecutor();
  UVar17 = UVar16;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar17.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x16,UVar16.unknown,puVar15);
  }
  uVar18 = 0;
  FUN_1002762f0(0,local_148,local_140);
  FUN_10027704c(KVar23.unknown);
  uVar25 = *(undefined8 *)(param_2 + *(int *)(uVar18 + 0x24) + 8);
  puVar22 = &DAT_100c39b58;
  _swift_getKeyPath(&DAT_100c39b58);
  puVar13 = &DAT_100c39b80;
  _swift_getKeyPath(&DAT_100c39b80);
  local_140 = param_2;
  _swift_retain(uVar25);
  lVar4 = local_178;
  Combine::Published::_get_subscript(local_178);
  _swift_release(uVar25);
  _swift_release(puVar22);
  _swift_release(puVar13);
  lVar5 = local_150;
  _swift_storeEnumTagMultiPayload(local_150,local_158,3);
  lVar19 = lVar4;
  FUN_10025f09c(lVar4,lVar5);
  FUN_10005241c(lVar5,FUN_10025cfc4);
  FUN_10005241c(lVar4,FUN_10025cfc4);
  lVar5 = local_160;
  lVar4 = local_180;
  (extension_SwiftUI)::SwiftUI::View::_disabled((bool)(((byte)lVar19 ^ 0xff) & 1));
  (**(code **)(local_168 + 8))(KVar23.unknown,lVar5);
  KVar6.unknown = local_120.unknown;
  SwiftUI::KeyboardShortcut::get_defaultAction(KVar23);
  puVar22 = local_1a0;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar6);
  (**(code **)(local_118 + 8))(KVar6.unknown,local_110);
  (**(code **)(local_170 + 8))(lVar4,MVar11.unknown);
  uVar20 = uVar18;
  FUN_10027630c();
  dVar28 = 0.0;
  if ((uVar20 & 1) == 0) {
    dVar28 = 1.0;
  }
  local_a0 = puVar22;
  ppuVar12 = &local_a8;
  local_a8 = MVar11.unknown;
  _swift_getOpaqueTypeConformance2
            (ppuVar12,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_keyboardShortcut(SwiftUI_KeyboardShortcut)__>_some>>_100eab490
             ,1);
  lVar4 = local_190;
  (extension_SwiftUI)::SwiftUI::View::_opacity(dVar28);
  (**(code **)(local_198 + 8))(lVar24,lVar4);
  puStack_c0 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa8b0
  ;
  puVar22 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_c8 = ppuVar12;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar9.unknown,&local_c8);
  lVar4 = local_138;
  lVar24 = local_188;
  pcVar27 = *(code **)(local_188 + 0x10);
  local_110 = puVar22;
  (*pcVar27)(local_138,lVar21,MVar9.unknown);
  pcVar26 = *(code **)(lVar24 + 8);
  (*pcVar26)(lVar21,MVar9.unknown);
  lVar21 = local_100;
  (extension_SwiftUI)::SwiftUI::ProgressView::_init();
  puVar22 = &DAT_100fb96a8;
  FUN_1000037f0(&DAT_100fb96a8,&DAT_100c39ba0);
  iVar2 = *(int *)(puVar22 + 0x24);
  puVar22 = &DAT_100fb90a0;
  FUN_1000037f0(&DAT_100fb90a0,&DAT_100c396d0);
  iVar3 = *(int *)(puVar22 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa610
  ;
  CVar8 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar8.value) + -8) + 0x68))
            (lVar21 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,CVar8.value));
  puVar22 = &DAT_100c39bb0;
  _swift_getKeyPath();
  *(undefined **)(lVar21 + iVar2) = puVar22;
  FUN_10027630c();
  puStack_d0 = local_108;
  puVar22 = local_128;
  uVar25 = 0x3ff0000000000000;
  if ((uVar18 & 1) == 0) {
    uVar25 = 0;
  }
  *(undefined8 *)(lVar21 + *(int *)(local_108 + 0x24)) = uVar25;
  (*pcVar27)(local_128,lVar4,MVar9.unknown);
  puVar7 = local_f8;
  local_a8 = puVar22;
  lVar24 = lVar21;
  FUN_100011090(lVar21,local_f8,&DAT_100fb9a50,&DAT_100c39b48);
  local_a0 = puVar7;
  local_e8 = local_110;
  local_d8 = MVar9.unknown;
  FUN_10027ac40();
  local_e0 = lVar24;
  FUN_10003cad4(local_f0,&local_a8,2,&local_d8,&local_e8);
  FUN_100005808(lVar21,&DAT_100fb9a50,&DAT_100c39b48);
  (*pcVar26)(lVar4,MVar9.unknown);
  FUN_100005808(puVar7,&DAT_100fb9a50,&DAT_100c39b48);
  (*pcVar26)(puVar22,MVar9.unknown);
  _swift_release(local_130);
  return;
}



/* Address: 0x10027704c | FUN_10027704c */

void FUN_10027704c(undefined8 param_1,long param_2)

{
  ModifiedContent MVar1;
  undefined *puVar2;
  Button BVar3;
  undefined *puVar4;
  Color CVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  local_88 = param_1;
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  puVar4 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = uVar6;
  puStack_68 = puVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_70);
  BVar3 = SwiftUI::Button::typeMetadataAccessor();
  lVar13 = *(long *)(BVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + -extraout_x8;
  puVar4 = (undefined *)0x0;
  local_80 = MVar1.unknown;
  puStack_78 = puVar2;
  _swift_getOpaqueTypeMetadata2(0,&local_80,&DAT_100ca7bfc,0);
  lVar7 = *(long *)(puVar4 + -8);
  CVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar12 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar12 - extraout_x12;
  CVar5 = SwiftUI::Color::get_white(CVar5);
  FUN_100278664(puVar10,CVar5.unknown,param_2,&DAT_100ec4e58,FUN_10027af48,FUN_10027af5c);
  _swift_release(CVar5.unknown);
  FUN_1001fa7a0(lVar12,0,1,1,BVar3.unknown);
  (**(code **)(lVar13 + 8))(puVar10,BVar3.unknown);
  pcVar9 = *(code **)(lVar7 + 0x10);
  (*pcVar9)(lVar11,lVar12,puVar4);
  pcVar8 = *(code **)(lVar7 + 8);
  (*pcVar8)(lVar12,puVar4);
  (*pcVar9)(local_88,lVar11,puVar4);
  (*pcVar8)(lVar11,puVar4);
  return;
}



/* Address: 0x100277248 | FUN_100277248 */

void FUN_100277248(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  undefined8 uVar7;
  MainActor *pMVar8;
  code *pcVar9;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x31,UVar4.unknown,puVar3);
  }
  lVar6 = 0;
  FUN_1002762f0(0,param_2,param_3);
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x28));
  pcVar9 = (code *)*puVar3;
  if (pcVar9 == (code *)0x0) {
    pMVar8 = *(MainActor **)(param_1 + *(int *)(lVar6 + 0x24) + 8);
    _swift_retain(pMVar8);
    FUN_100256f44(param_1,0,0);
    _swift_release(pMVar2);
  }
  else {
    uVar7 = puVar3[1];
    _swift_retain(uVar7);
    (*pcVar9)();
    FUN_100004550(pcVar9,uVar7);
    pMVar8 = pMVar2;
  }
  _swift_release(pMVar8);
  return;
}



/* Address: 0x100277370 | FUN_100277370 */

void FUN_100277370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ModifiedContent MVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_1;
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  lVar11 = *(long *)(MVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar10 - extraout_x12;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x37,UVar4.unknown,puVar3);
  }
  FUN_1002762f0(0,param_4,param_5);
  (extension_SwiftUI)::SwiftUI::View::_foregroundColor();
  puVar6 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_70 = param_5;
  puStack_68 = puVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_70);
  pcVar7 = *(code **)(lVar11 + 0x10);
  (*pcVar7)(lVar9,puVar10,MVar1.unknown);
  pcVar8 = *(code **)(lVar11 + 8);
  (*pcVar8)(puVar10,MVar1.unknown);
  (*pcVar7)(local_78,lVar9,MVar1.unknown);
  (*pcVar8)(lVar9,MVar1.unknown);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100277558 | FUN_100277558 */

void FUN_100277558(void)

{
  ObservedObject OVar1;
  undefined8 *unaff_x20;
  
  OVar1.unknown = (undefined *)*unaff_x20;
  FUN_10025cdc8(0);
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  SwiftUI::ObservedObject::_get_projectedValue(OVar1);
  return;
}



/* Address: 0x1002775b4 | thunk_FUN_100276468 */

void thunk_FUN_100276468(void)

{
  FUN_100276468();
  return;
}



/* Address: 0x1002775b8 | FUN_1002775b8 */

void FUN_1002775b8(undefined1 *param_1,undefined1 *param_2)

{
  FUN_1001a7d78(*param_1,*param_2);
  return;
}



/* Address: 0x1002775c4 | FUN_1002775c4 */

void FUN_1002775c4(void)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7dac(*unaff_x20);
  return;
}



/* Address: 0x1002775cc | FUN_1002775cc */

void FUN_1002775cc(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7d88(param_1,*unaff_x20);
  return;
}



/* Address: 0x1002775d4 | FUN_1002775d4 */

void FUN_1002775d4(__int64 param_1)

{
  Hasher HVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1001a7d88(HVar1.unknown,*unaff_x20);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100277610 | FUN_100277610 */

void FUN_100277610(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  ModifiedContent MVar6;
  undefined *puVar7;
  undefined *puVar8;
  Button BVar9;
  PlainButtonStyle PVar10;
  undefined *puVar11;
  _ConditionalContent _Var12;
  ModifiedContent MVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  Wrapper dynamicMember;
  undefined *puVar18;
  long lVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar20;
  long extraout_x8_02;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x13;
  long unaff_x20;
  code *pcVar22;
  undefined8 uVar23;
  code *pcVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 auStack_1a0 [4];
  undefined1 auStack_180 [8];
  undefined *local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  ulong local_128;
  undefined8 local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  byte local_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  
  local_100 = *(long *)(param_2 + -8);
  local_f8 = *(long *)(local_100 + 0x40);
  local_170 = param_2;
  local_e8 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_f0 = auStack_180 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (long)(auStack_180 + -(extraout_x13 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar5 = 0;
  local_108 = lVar19;
  FUN_10025cfc4();
  local_128 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar19 = lVar19 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12_00;
  local_110 = *(undefined8 *)(param_2 + 0x10);
  local_148 = lVar19;
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  uVar23 = *(undefined8 *)(param_2 + 0x18);
  puVar7 = &DAT_100fb9a48;
  local_120 = uVar23;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar8 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_78 = uVar23;
  puStack_70 = puVar7;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar6.unknown,&local_78);
  local_98 = MVar6.unknown;
  puStack_90 = puVar8;
  _swift_getOpaqueTypeMetadata2(0xff,&local_98,&DAT_100ca7bfc,0);
  BVar9 = SwiftUI::Button::typeMetadataAccessor();
  PVar10 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaa9d0;
  puVar11 = PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888,BVar9.unknown);
  puVar7 = &DAT_100fb9b00;
  FUN_100003a00(&DAT_100fb9b00,puVar14,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  local_98 = BVar9.unknown;
  puStack_90 = PVar10.unknown;
  local_88 = puVar11;
  puStack_80 = puVar7;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_98,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,0);
  _Var12 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_178 = *(undefined **)(_Var12.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)((long)local_178 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_00;
  FUN_100005c24(&DAT_100fb9090,&DAT_100c39b40);
  MVar13 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_118 = *(long *)(MVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar19 - extraout_x8_01;
  puVar14 = &DAT_100fb9b08;
  FUN_100005c24(&DAT_100fb9b08,&DAT_100c39d80);
  ppuVar15 = &local_98;
  local_98 = MVar6.unknown;
  puStack_90 = puVar8;
  _swift_getOpaqueTypeConformance2(ppuVar15,&DAT_100ca7bfc,1);
  ppuVar16 = &local_98;
  local_98 = BVar9.unknown;
  puStack_90 = PVar10.unknown;
  local_88 = puVar11;
  puStack_80 = puVar7;
  _swift_getOpaqueTypeConformance2
            (ppuVar16,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,1);
  puVar8 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_a8 = ppuVar15;
  ppuStack_a0 = ppuVar16;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,_Var12.unknown,&local_a8);
  puVar7 = &DAT_100fb9088;
  FUN_100016eac(&DAT_100fb9088,&DAT_100fb9090,&DAT_100c39b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyTransformModifier<undefined>_>SwiftUI__ViewModifier_100eab108
               );
  puVar11 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_158 = MVar13.unknown;
  local_b8 = puVar8;
  puStack_b0 = puVar7;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar13.unknown,&local_b8);
  puVar7 = puVar11;
  local_160 = puVar11;
  FUN_10027b4a4();
  lVar5 = 0;
  local_98 = MVar13.unknown;
  puStack_90 = puVar14;
  local_88 = puVar11;
  puStack_80 = puVar7;
  _swift_getOpaqueTypeMetadata2
            (0,&local_98,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,0);
  local_140 = *(long *)(lVar5 + -8);
  local_138 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_140 + 0x40));
  lVar21 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_168 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = local_170;
  lVar21 = lVar21 - extraout_x12_01;
  local_150 = lVar21;
  FUN_100277dc0(lVar19,local_170);
  uVar23 = *(undefined8 *)(unaff_x20 + 8);
  puVar7 = &DAT_100c39b58;
  _swift_getKeyPath(&DAT_100c39b58);
  puVar14 = &DAT_100c39b80;
  _swift_getKeyPath(&DAT_100c39b80);
  _swift_retain(uVar23);
  lVar1 = local_148;
  Combine::Published::_get_subscript(local_148);
  _swift_release(uVar23);
  _swift_release(puVar7);
  _swift_release(puVar14);
  lVar2 = local_130;
  _swift_storeEnumTagMultiPayload(local_130,local_128,3);
  lVar17 = lVar1;
  FUN_10025f09c(lVar1,lVar2);
  FUN_10005241c(lVar2,FUN_10025cfc4);
  FUN_10005241c(lVar1,FUN_10025cfc4);
  (extension_SwiftUI)::SwiftUI::View::_disabled((bool)(((byte)lVar17 ^ 0xff) & 1));
  (**(code **)((long)local_178 + 8))(lVar19,_Var12.unknown);
  FUN_100277558();
  dynamicMember.unknown = &DAT_100c39c40;
  _swift_getKeyPath();
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(lVar19);
  _swift_release(dynamicMember.unknown);
  lVar2 = local_100;
  lVar1 = local_108;
  local_130 = local_d0;
  local_148 = uStack_c8;
  local_128 = CONCAT44(local_128._4_4_,(uint)local_c0);
  pcVar22 = *(code **)(local_100 + 0x10);
  (*pcVar22)(local_108,unaff_x20,lVar5);
  lVar17 = local_f8;
  uVar26 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar25 = uVar26 + 0x20 & (uVar26 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100ec4f20;
  _swift_allocObject(&DAT_100ec4f20,uVar25 + local_f8,uVar26 | 7);
  uVar3 = local_110;
  uVar23 = local_120;
  *(undefined8 *)(puVar7 + 0x10) = local_110;
  *(undefined8 *)(puVar7 + 0x18) = local_120;
  pcVar24 = *(code **)(lVar2 + 0x20);
  local_178 = puVar7;
  (*pcVar24)(puVar7 + uVar25,lVar1,lVar5);
  puVar4 = local_f0;
  (*pcVar22)(local_f0,unaff_x20,lVar5);
  puVar7 = &DAT_100ec4f48;
  _swift_allocObject(&DAT_100ec4f48,uVar25 + lVar17,uVar26 | 7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  *(undefined8 *)(puVar7 + 0x18) = uVar23;
  (*pcVar24)(puVar7 + uVar25,puVar4,lVar5);
  puVar14 = &DAT_100fb9ac0;
  FUN_1000037f0(&DAT_100fb9ac0,&DAT_100c39c68);
  puVar18 = (undefined *)0xff;
  FUN_10026516c();
  puVar8 = &DAT_100fb9ae0;
  FUN_100003a00(&DAT_100fb9ae0,FUN_10026516c,&TargetProtocolConformanceDescriptor_100c38c08);
  puVar11 = puVar8;
  FUN_10026fe84();
  puStack_90 = &DAT_100ec4128;
  ppuVar15 = &local_98;
  local_98 = puVar18;
  local_88 = puVar8;
  puStack_80 = puVar11;
  _swift_getOpaqueTypeConformance2
            (ppuVar15,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert)__>_some>>_100eab550
             ,1);
  *(undefined ***)(lVar21 + -8) = ppuVar15;
  puVar8 = local_160;
  *(undefined **)(lVar21 + -0x18) = puVar14;
  *(undefined **)(lVar21 + -0x10) = puVar8;
  puVar8 = local_158;
  *(undefined **)(lVar21 + -0x20) = local_158;
  lVar5 = local_168;
  puVar14 = local_178;
  FUN_10021dfac(local_168,local_130,local_148,local_128 & 0xffffffff,FUN_10027b578,local_178,
                FUN_10027b5d0,puVar7,0);
  _swift_release(local_148);
  _swift_release(puVar14);
  _swift_release(puVar7);
  _swift_release(local_130);
  (**(code **)(local_118 + 8))(lVar20,puVar8);
  lVar17 = local_138;
  lVar2 = local_140;
  lVar1 = local_150;
  pcVar22 = *(code **)(local_140 + 0x10);
  (*pcVar22)(local_150,lVar5,local_138);
  pcVar24 = *(code **)(lVar2 + 8);
  (*pcVar24)(lVar5,lVar17);
  (*pcVar22)(local_e8,lVar1,lVar17);
  (*pcVar24)(lVar1,lVar17);
  return;
}



/* Address: 0x100277dc0 | FUN_100277dc0 */

void FUN_100277dc0(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 *puVar2;
  PlainButtonStyle PVar3;
  ModifiedContent MVar4;
  undefined *puVar5;
  Button BVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  Color CVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  code *pcVar15;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  undefined *puVar22;
  undefined1 auStack_130 [8];
  long local_128;
  long local_120;
  undefined1 *local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined **local_a8;
  undefined **ppuStack_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *puStack_70;
  
  local_d0 = param_1;
  PVar3 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar22 = PTR_typeMetadataAccessor_100eaa9d0;
  local_110 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  local_118 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_100 = param_2;
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  uVar16 = *(undefined8 *)(param_2 + 0x18);
  puVar9 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_78 = uVar16;
  puStack_70 = puVar9;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar4.unknown,&local_78);
  BVar6 = SwiftUI::Button::typeMetadataAccessor();
  puVar7 = PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888,BVar6.unknown);
  puVar9 = &DAT_100fb9b00;
  FUN_100003a00(&DAT_100fb9b00,puVar22,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  lVar8 = 0;
  local_d8 = PVar3.unknown;
  local_b8 = puVar9;
  local_b0 = puVar7;
  local_98 = BVar6.unknown;
  local_90 = PVar3.unknown;
  local_88 = puVar7;
  local_80 = puVar9;
  _swift_getOpaqueTypeMetadata2
            (0,&local_98,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,0);
  local_128 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_128 + 0x40));
  lVar17 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined *)0x0;
  local_120 = lVar17 - extraout_x12;
  _swift_checkMetadataState(0,BVar6.unknown);
  local_108 = *(long *)(puVar9 + -8);
  local_c0 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar21 = (lVar17 - extraout_x12) - extraout_x8_01;
  lVar10 = 0;
  local_e8 = puVar5;
  puStack_e0 = MVar4.unknown;
  local_98 = MVar4.unknown;
  local_90 = puVar5;
  _swift_getOpaqueTypeMetadata2(0,&local_98,&DAT_100ca7bfc,0);
  lVar14 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar18 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar18 - extraout_x12_00;
  CVar11.unknown = (undefined *)SwiftUI::_ConditionalContent::typeMetadataAccessor();
  local_f8 = *(long *)(CVar11.unknown + -8);
  local_f0 = CVar11.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar20 - extraout_x8_03;
  cVar1 = *(char *)(unaff_x20 + 0x10);
  CVar11 = SwiftUI::Color::get_primary(CVar11);
  FUN_100278664(lVar21,CVar11.unknown,local_100,&DAT_100ec4f70,FUN_10027b66c,FUN_10027b6e4);
  _swift_release(CVar11.unknown);
  puVar9 = local_c0;
  puVar2 = local_118;
  if (cVar1 == '\x01') {
    SwiftUI::PlainButtonStyle::init();
    puVar5 = local_b0;
    puVar22 = local_b8;
    puVar9 = local_c0;
    puVar7 = local_d8;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (lVar17,puVar2,local_c0,local_d8,local_b0,local_b8);
    (**(code **)(local_110 + 8))(puVar2,puVar7);
    (**(code **)(local_108 + 8))(lVar21,puVar9);
    local_98 = puVar9;
    local_90 = puVar7;
    local_88 = puVar5;
    local_80 = puVar22;
    ppuVar12 = &local_98;
    _swift_getOpaqueTypeConformance2
              (ppuVar12,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
               ,1);
    lVar18 = local_120;
    lVar14 = local_128;
    pcVar15 = *(code **)(local_128 + 0x10);
    (*pcVar15)(local_120,lVar17,lVar8);
    pcVar19 = *(code **)(lVar14 + 8);
    (*pcVar19)(lVar17,lVar8);
    (*pcVar15)(lVar17,lVar18,lVar8);
    puVar5 = puStack_e0;
    puVar22 = local_e8;
    local_98 = puStack_e0;
    local_90 = local_e8;
    ppuVar13 = &local_98;
    _swift_getOpaqueTypeConformance2(ppuVar13,&DAT_100ca7bfc,1);
    FUN_1001fb178(local_c8,lVar17,lVar10,lVar8,ppuVar13,ppuVar12);
    (*pcVar19)(lVar17,lVar8);
    (*pcVar19)(lVar18,lVar8);
  }
  else {
    FUN_1001fa7a0(lVar18,1,1,1,local_c0);
    (**(code **)(local_108 + 8))(lVar21,puVar9);
    puVar5 = puStack_e0;
    puVar22 = local_e8;
    local_98 = puStack_e0;
    local_90 = local_e8;
    ppuVar12 = &local_98;
    _swift_getOpaqueTypeConformance2(ppuVar12,&DAT_100ca7bfc,1);
    pcVar19 = *(code **)(lVar14 + 0x10);
    (*pcVar19)(lVar20,lVar18,lVar10);
    pcVar15 = *(code **)(lVar14 + 8);
    (*pcVar15)(lVar18,lVar10);
    (*pcVar19)(lVar18,lVar20,lVar10);
    puVar7 = local_d8;
    local_98 = puVar9;
    local_90 = local_d8;
    local_88 = local_b0;
    local_80 = local_b8;
    ppuVar13 = &local_98;
    _swift_getOpaqueTypeConformance2
              (ppuVar13,
               PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
               ,1);
    FUN_1001fb0b4(local_c8,lVar18,lVar10,lVar8,ppuVar12,ppuVar13);
    (*pcVar15)(lVar18,lVar10);
    (*pcVar15)(lVar20,lVar10);
  }
  ppuVar12 = &local_98;
  local_98 = puVar5;
  local_90 = puVar22;
  _swift_getOpaqueTypeConformance2(ppuVar12,&DAT_100ca7bfc,1);
  local_98 = local_c0;
  local_88 = local_b0;
  local_80 = local_b8;
  ppuVar13 = &local_98;
  local_90 = puVar7;
  _swift_getOpaqueTypeConformance2
            (ppuVar13,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,1);
  puVar9 = local_f0;
  local_a8 = ppuVar12;
  ppuStack_a0 = ppuVar13;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,local_f0,&local_a8);
  lVar10 = local_c8;
  lVar8 = local_f8;
  (**(code **)(local_f8 + 0x10))(local_d0,local_c8,puVar9);
  (**(code **)(lVar8 + 8))(lVar10,puVar9);
  return;
}



/* Address: 0x10027833c | FUN_10027833c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100278528 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10027833c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_130 [12];
  undefined1 auStack_d0 [112];
  
  lVar2 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)local_130 + lVar1);
  puVar3 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10026516c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = ((long)puVar8 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar4 = 0;
  FUN_1002abb94();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))((long)puVar8 - extraout_x8_00,1,1,lVar4);
  _swift_retain(uVar9);
  FUN_10025fc5c(lVar7);
  puVar3 = &DAT_100c39b58;
  _swift_getKeyPath(&DAT_100c39b58);
  puVar5 = &DAT_100c39b80;
  _swift_getKeyPath(&DAT_100c39b80);
  _swift_retain(uVar9);
  Combine::Published::_get_subscript(puVar8);
  _swift_release(puVar3);
  _swift_release(puVar5);
  _swift_release(uVar9);
  puVar6 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar2);
  if ((int)puVar6 == 1) {
    local_130[1] = *(undefined8 *)((long)local_130 + lVar1 + 8);
    local_130[0] = *puVar8;
    local_130[3] = *(undefined8 *)((long)local_130 + lVar1 + 0x18);
    local_130[2] = *(undefined8 *)((long)local_130 + lVar1 + 0x10);
    local_130[5] = *(undefined8 *)((long)local_130 + lVar1 + 0x28);
    local_130[4] = *(undefined8 *)((long)local_130 + lVar1 + 0x20);
    local_130[7] = *(undefined8 *)((long)local_130 + lVar1 + 0x38);
    local_130[6] = *(undefined8 *)((long)local_130 + lVar1 + 0x30);
    local_130[9] = *(undefined8 *)((long)local_130 + lVar1 + 0x48);
    local_130[8] = *(undefined8 *)((long)local_130 + lVar1 + 0x40);
    local_130[0xb] = *(undefined8 *)(auStack_d0 + lVar1 + -8);
    local_130[10] = *(undefined8 *)((long)local_130 + lVar1 + 0x50);
  }
  else {
    FUN_10005241c(puVar8,FUN_10025cfc4);
    local_130[0] = 0;
    local_130[1] = 0;
    local_130[2] = 0;
    local_130[3] = 0;
    local_130[4] = 0;
    local_130[5] = 0;
    local_130[6] = 0;
    local_130[7] = 0;
    local_130[8] = 0;
    local_130[9] = 0;
    local_130[10] = 0;
    local_130[0xb] = 0;
  }
  puVar3 = &DAT_100fb8ed0;
  FUN_1000037f0(&DAT_100fb8ed0,&DAT_100c388c0);
  SwiftUI::Binding::constant(auStack_d0,puVar3,puVar3);
  FUN_100005808(local_130,&DAT_100fb8ed0,&DAT_100c388c0);
  FUN_100003a00(&DAT_100fb9ae0,FUN_10026516c,&TargetProtocolConformanceDescriptor_100c38c08);
  FUN_10026fe84();
  (extension_SwiftUI)::SwiftUI::View::_alert
            ((Binding<(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert___>_some>
              )auStack_d0);
  FUN_100005808(auStack_d0,&DAT_100fb9668,&DAT_100c395a0);
  FUN_10005241c(lVar7,FUN_10026516c);
  return;
}



/* Address: 0x1002785d4 | FUN_1002785d4 */

void FUN_1002785d4(undefined8 param_1)

{
  FUN_100279b34(param_1,0x4e);
  return;
}



/* Address: 0x1002785dc | FUN_1002785dc */

void FUN_1002785dc(long param_1)

{
  Published *pPVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 local_31;
  
  lVar3 = *(long *)(param_1 + 8);
  if (*(char *)(lVar3 + _TtC22PasteLicensingAppStore16PaywallViewModel::
                        isTrialStartedPresentationPending) == '\x01') {
    *(undefined1 *)
     (lVar3 + _TtC22PasteLicensingAppStore16PaywallViewModel::isTrialStartedPresentationPending) = 0
    ;
    pPVar1 = (Published *)&DAT_100c39c78;
    _swift_getKeyPath(&DAT_100c39c78);
    puVar2 = &DAT_100c39ca0;
    _swift_getKeyPath(&DAT_100c39ca0);
    local_31 = 1;
    _swift_retain(lVar3);
    Combine::Published::_set_subscript(pPVar1,&local_31,lVar3,pPVar1,puVar2);
  }
  return;
}



/* Address: 0x100278664 | FUN_100278664 */

void FUN_100278664(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ModifiedContent MVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_80;
  undefined8 local_78;
  
  lVar8 = *(long *)(param_2 + -8);
  lVar5 = *(long *)(lVar8 + 0x40);
  local_a8 = param_5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)&local_c0 - (lVar5 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar8 + 0x10))(lVar7);
  uVar3 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar4 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  _swift_allocObject(param_3,uVar4 + lVar5,uVar3 | 7);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  uStack_b8 = *(undefined8 *)(param_2 + 0x18);
  local_c0 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_3 + 0x18) = uStack_b8;
  *(undefined8 *)(param_3 + 0x10) = local_c0;
  (**(code **)(lVar8 + 0x20))(param_3 + uVar4,lVar7,param_2);
  local_80 = local_c0;
  local_78 = uVar6;
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar2 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_a0 = uVar6;
  puStack_98 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_a0);
  SwiftUI::Button::_init();
  return;
}



/* Address: 0x1002787dc | FUN_1002787dc */

void FUN_1002787dc(long param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 local_31;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x66,UVar3.unknown,puVar2);
  }
  uVar7 = *(undefined8 *)(param_1 + 8);
  puVar5 = &DAT_100c39c40;
  _swift_getKeyPath(&DAT_100c39c40);
  puVar6 = &DAT_100c39d60;
  _swift_getKeyPath(&DAT_100c39d60);
  local_31 = 1;
  _swift_retain(uVar7);
  Combine::Published::_set_subscript((Published *)pMVar1,&local_31,uVar7,puVar5,puVar6);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x1002788cc | FUN_1002788cc */

void FUN_1002788cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ModifiedContent MVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  code *pcVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_1;
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  lVar11 = *(long *)(MVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar10 - extraout_x12;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x68,UVar4.unknown,puVar3);
  }
  FUN_100273444(0,param_4,param_5);
  (extension_SwiftUI)::SwiftUI::View::_foregroundColor();
  puVar6 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_70 = param_5;
  puStack_68 = puVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_70);
  pcVar7 = *(code **)(lVar11 + 0x10);
  (*pcVar7)(lVar9,puVar10,MVar1.unknown);
  pcVar8 = *(code **)(lVar11 + 8);
  (*pcVar8)(puVar10,MVar1.unknown);
  (*pcVar7)(local_78,lVar9,MVar1.unknown);
  (*pcVar8)(lVar9,MVar1.unknown);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100278ab4 | thunk_FUN_100277610 */

void thunk_FUN_100277610(void)

{
  FUN_100277610();
  return;
}



/* Address: 0x100278ab8 | FUN_100278ab8 */

void FUN_100278ab8(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  Wrapper WVar6;
  Wrapper dynamicMember;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  ObservedObject OVar11;
  long unaff_x20;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long alStack_100 [4];
  long local_d8;
  long local_d0;
  long local_c8;
  ulong local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  lVar3 = 0;
  local_b0 = param_1;
  FUN_10025cfc4();
  local_d8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar14 = &stack0xffffffffffffff20 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)puVar14 - extraout_x12;
  lVar3 = 0;
  FUN_10027446c();
  lVar15 = *(long *)(lVar3 + -8);
  lVar17 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar13 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12_00;
  puVar4 = &DAT_100fb9a70;
  FUN_1000037f0(&DAT_100fb9a70,&DAT_100c39be8);
  local_a8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar10 - extraout_x8_00;
  local_d0 = lVar10;
  FUN_1000c495c();
  local_c0 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar12 = local_c0 + 0x10 & (local_c0 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100ec4e80;
  _swift_allocObject(&DAT_100ec4e80,uVar12 + lVar17,local_c0 | 7);
  FUN_1000523d8(lVar10,puVar4 + uVar12,FUN_10027446c);
  FUN_1000037f0(&DAT_100fb9a78,&DAT_100c39bf0);
  FUN_10027af80();
  local_c8 = lVar18;
  SwiftUI::Button::_init();
  puVar9 = (undefined8 *)(unaff_x20 + *(int *)(lVar3 + 0x14));
  uVar16 = puVar9[1];
  puVar4 = &DAT_100c39b58;
  _swift_getKeyPath(&DAT_100c39b58);
  puVar5 = &DAT_100c39b80;
  _swift_getKeyPath(&DAT_100c39b80);
  Combine::Published::_get_subscript(lVar13,uVar16,puVar4,puVar5);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_storeEnumTagMultiPayload(puVar14,local_d8,3);
  lVar3 = lVar13;
  FUN_10025f09c(lVar13,puVar14);
  FUN_10005241c(puVar14,FUN_10025cfc4);
  FUN_10005241c(lVar13,FUN_10025cfc4);
  puVar4 = &DAT_100c39c10;
  _swift_getKeyPath();
  puVar5 = &DAT_100ec4ea8;
  _swift_allocObject(&DAT_100ec4ea8,0x11,7);
  puVar5[0x10] = ((byte)lVar3 ^ 0xff) & 1;
  puVar1 = (undefined8 *)(lVar18 + *(int *)(local_a8 + 0x24));
  *puVar1 = puVar4;
  puVar1[1] = FUN_100062b00;
  puVar1[2] = puVar5;
  OVar11.unknown = (undefined *)*puVar9;
  FUN_10025cdc8(0);
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  WVar6 = SwiftUI::ObservedObject::_get_projectedValue(OVar11);
  dynamicMember.unknown = &DAT_100c39c40;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar6.unknown);
  _swift_release(dynamicMember.unknown);
  lVar3 = local_d0;
  FUN_1000c495c(unaff_x20,local_d0,FUN_10027446c);
  uVar2 = local_c0;
  puVar4 = &DAT_100ec4ed0;
  _swift_allocObject(&DAT_100ec4ed0,uVar12 + lVar17,local_c0 | 7);
  FUN_1000523d8(lVar3,puVar4 + uVar12,FUN_10027446c);
  lVar3 = local_b8;
  FUN_1000c495c(unaff_x20,local_b8,FUN_10027446c);
  puVar5 = &DAT_100ec4ef8;
  _swift_allocObject(&DAT_100ec4ef8,uVar12 + lVar17,uVar2 | 7);
  FUN_1000523d8(lVar3,puVar5 + uVar12,FUN_10027446c);
  puVar7 = &DAT_100fb9ac0;
  FUN_1000037f0(&DAT_100fb9ac0,&DAT_100c39c68);
  puVar8 = puVar7;
  FUN_10027b3d4();
  uVar16 = 0xff;
  FUN_10026516c();
  FUN_100003a00(&DAT_100fb9ae0,FUN_10026516c,&TargetProtocolConformanceDescriptor_100c38c08);
  FUN_10026fe84();
  puStack_98 = &DAT_100ec4128;
  puVar9 = &local_a0;
  local_a0 = uVar16;
  _swift_getOpaqueTypeConformance2
            (puVar9,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert)__>_some>>_100eab550
             ,1);
  *(undefined **)(lVar18 + -0x10) = puVar8;
  *(undefined8 **)(lVar18 + -8) = puVar9;
  *(undefined **)(lVar18 + -0x18) = puVar7;
  *(undefined **)(lVar18 + -0x20) = local_a8;
  lVar3 = local_c8;
  FUN_10021dfac(local_b0,local_78,uStack_70,local_68,FUN_10027b350,puVar4,FUN_10027b38c,puVar5,0);
  _swift_release(uStack_70);
  _swift_release(puVar4);
  _swift_release(puVar5);
  _swift_release(local_78);
  FUN_100005808(lVar3,&DAT_100fb9a70,&DAT_100c39be8);
  return;
}



/* Address: 0x100278f74 | FUN_100278f74 */

void FUN_100278f74(long param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 local_31;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x7a,UVar3.unknown,puVar2);
  }
  lVar5 = 0;
  FUN_10027446c();
  uVar8 = *(undefined8 *)(param_1 + *(int *)(lVar5 + 0x14) + 8);
  puVar6 = &DAT_100c39c40;
  _swift_getKeyPath(&DAT_100c39c40);
  puVar7 = &DAT_100c39d60;
  _swift_getKeyPath(&DAT_100c39d60);
  local_31 = 1;
  _swift_retain(uVar8);
  Combine::Published::_set_subscript((Published *)pMVar1,&local_31,uVar8,puVar6,puVar7);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100279074 | FUN_100279074 */

void FUN_100279074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined *puVar6;
  long lVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  Set SVar13;
  Alignment AVar14;
  Text TVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined *apuStack_2a0 [5];
  undefined8 auStack_278 [15];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  
  puVar6 = &DAT_100fb9a90;
  apuStack_2a0[3] = (undefined *)param_1;
  FUN_1000037f0(&DAT_100fb9a90,&DAT_100c39bf8);
  apuStack_2a0[2] = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)apuStack_2a0 - extraout_x8;
  lVar7 = 0;
  FUN_1002abb94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar19 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fb9ae8;
  FUN_1000037f0(&DAT_100fb9ae8,&DAT_100c39cc8);
  apuStack_2a0[1] = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined8 *)(lVar19 - extraout_x8_01);
  lVar7 = 0;
  FUN_1002716e8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar20 = (undefined8 *)((long)puVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar10 = &DAT_100fb7f60;
  pMVar8 = pMVar9;
  FUN_100003a00(&DAT_100fb7f60,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    pMVar8 = (MainActor *)0x7c;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x7c,UVar11.unknown,puVar10);
  }
  FUN_1000c495c(param_6,puVar20,FUN_1002716e8);
  puVar10 = puVar20;
  _swift_getEnumCaseMultiPayload(puVar20,lVar7);
  if ((int)puVar10 == 1) {
    FUN_1000523d8(puVar20,lVar19,FUN_1002abb94);
    FUN_1000c495c(lVar19,lVar17,FUN_1002abb94);
    lVar7 = 0;
    FUN_10027446c();
    uVar16 = *(undefined8 *)(param_6 + *(int *)(lVar7 + 0x14) + 8);
    puVar6 = &DAT_100c39cd0;
    _swift_getKeyPath(&DAT_100c39cd0);
    SVar13.unknown = &DAT_100c39cf8;
    _swift_getKeyPath();
    lVar7 = 0;
    FUN_100272db4();
    Combine::Published::_get_subscript(lVar17 + *(int *)(lVar7 + 0x14),uVar16,puVar6,SVar13.unknown)
    ;
    _swift_release(puVar6);
    _swift_release();
    SVar13 = SwiftUI::Edge::Set::get_trailing(SVar13);
    uVar16 = 0x402c000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
    AVar14.unknown = &DAT_100fb9aa0;
    puVar6 = &DAT_100c39c00;
    FUN_1000037f0();
    puVar1 = (undefined1 *)(lVar17 + *(int *)(AVar14.unknown + 0x24));
    *puVar1 = (char)SVar13.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar16;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    AVar14 = SwiftUI::Alignment::get_trailing(AVar14);
    FUN_1002794d0(&local_200);
    uVar2 = uStack_1d8;
    uVar16 = local_1e0;
    uStack_138 = uStack_1a8;
    local_140 = local_1b0;
    uStack_128 = uStack_198;
    uStack_130 = uStack_1a0;
    uStack_158 = uStack_1c8;
    local_160 = local_1d0;
    uStack_148 = uStack_1b8;
    uStack_150 = uStack_1c0;
    uStack_168 = uStack_1d8;
    local_170 = local_1e0;
    puVar10 = (undefined8 *)(lVar17 + *(int *)(apuStack_2a0[2] + 0x24));
    local_120 = AVar14.unknown;
    puStack_118 = puVar6;
    puVar10[9] = uStack_1b8;
    puVar10[8] = uStack_1c0;
    puVar10[0xb] = uStack_1a8;
    puVar10[10] = local_1b0;
    uStack_188 = uStack_1f8;
    local_190 = local_200;
    uStack_178 = uStack_1e8;
    uStack_180 = local_1f0;
    puVar10[1] = uStack_1f8;
    *puVar10 = local_200;
    puVar10[3] = uStack_1e8;
    puVar10[2] = local_1f0;
    puVar10[5] = uVar2;
    puVar10[4] = uVar16;
    puVar10[7] = uStack_1c8;
    puVar10[6] = local_1d0;
    puVar4 = puStack_118;
    puVar3 = local_120;
    puVar10[0xd] = uStack_198;
    puVar10[0xc] = uStack_1a0;
    puVar10[0xf] = puVar4;
    puVar10[0xe] = puVar3;
    uStack_b8 = uStack_1a8;
    local_c0 = local_1b0;
    uStack_a8 = uStack_198;
    uStack_b0 = uStack_1a0;
    uStack_d8 = uStack_1c8;
    local_e0 = local_1d0;
    uStack_c8 = uStack_1b8;
    uStack_d0 = uStack_1c0;
    uStack_f8 = uStack_1e8;
    local_100 = local_1f0;
    uStack_e8 = uStack_1d8;
    uStack_f0 = local_1e0;
    uStack_108 = uStack_1f8;
    local_110 = local_200;
    local_a0 = AVar14.unknown;
    puStack_98 = puVar6;
    FUN_100011090(&local_190,apuStack_2a0 + 4,&DAT_100fb9ab8,&DAT_100c39c08);
    FUN_100005808(&local_110,&DAT_100fb9ab8,&DAT_100c39c08);
    FUN_100011090(lVar17,puVar18,&DAT_100fb9a90,&DAT_100c39bf8);
    _swift_storeEnumTagMultiPayload(puVar18,apuStack_2a0[1],1);
    FUN_10027aff8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar18);
    FUN_100005808(lVar17,&DAT_100fb9a90,&DAT_100c39bf8);
    FUN_10005241c(lVar19,FUN_1002abb94);
  }
  else {
    local_110 = *puVar20;
    uStack_108 = puVar20[1];
    FUN_1002538a0();
    uVar5 = SUB81(puVar10,0);
    puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar15 = SwiftUI::Text::_init();
    *puVar18 = TVar15.unknown;
    puVar18[1] = puVar6;
    *(undefined1 *)(puVar18 + 2) = uVar5;
    puVar18[3] = pMVar8;
    _swift_storeEnumTagMultiPayload(puVar18,apuStack_2a0[1],0);
    FUN_10027aff8();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar18);
  }
  _swift_release(pMVar9);
  return;
}



/* Address: 0x1002794d0 | FUN_1002794d0 */

void FUN_1002794d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Design DVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  HorizontalAlignment HVar7;
  HorizontalAlignment HVar8;
  undefined7 extraout_var;
  Font FVar9;
  HierarchicalShapeStyle HVar10;
  HierarchicalShapeStyle HVar11;
  Set _all;
  long extraout_x8;
  CGFloat size;
  undefined8 uVar12;
  undefined1 auStack_2c0 [8];
  MainActor *local_2b8;
  undefined *local_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [112];
  undefined *local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 local_210;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  undefined *local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined *puStack_188;
  undefined *local_180;
  undefined4 local_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  
  puVar2 = &DAT_100fb92d0;
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_2b8 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteLicensingAppStore/CTA.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x86,UVar5.unknown,puVar4);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar6);
  HVar8 = HVar7;
  FUN_1002797ac(&local_100);
  uStack_2a8 = uStack_f8;
  local_2b0 = local_100;
  size.unknown = local_100;
  SwiftUI::Font::Weight::get_bold((Weight)HVar8.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (auStack_2c0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar9 = SwiftUI::Font::_system(size,(Font)0x0);
  FUN_100005808(auStack_2c0 + -extraout_x8,&DAT_100fb92d0,&DAT_100c3abc0);
  HVar10.unknown = &DAT_100c39d20;
  _swift_getKeyPath();
  HVar11 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar10);
  _all = SwiftUI::Edge::Set::get_top(HVar11.unknown);
  uStack_1e8 = 0x3ff0000000000000;
  local_1e0 = 0;
  uStack_1d0 = uStack_2a8;
  local_1d8 = local_2b0;
  local_1c8 = SUB84(HVar10.unknown,0);
  uStack_1c4 = (undefined4)((ulong)HVar10.unknown >> 0x20);
  uStack_1c0 = SUB84(FVar9.unknown,0);
  uStack_1bc = (undefined4)((ulong)FVar9.unknown >> 0x20);
  uVar12 = 0x3ff0000000000000;
  local_1f0 = HVar7.unknown;
  uStack_1b8 = (int)HVar11.unknown;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_220 = CONCAT71(uStack_1df,local_1e0);
  uStack_228 = uStack_1e8;
  local_230 = local_1f0;
  puStack_218 = local_1d8;
  uStack_208 = local_1c8;
  local_210 = uStack_1d0;
  uStack_1fc = uStack_1bc;
  uStack_1f8 = uStack_1b8;
  uStack_204 = uStack_1c4;
  uStack_200 = uStack_1c0;
  uStack_1a8 = 0x3ff0000000000000;
  local_1a0 = 0;
  local_198 = local_2b0;
  local_190 = uStack_f8;
  local_1b0 = HVar7.unknown;
  puStack_188 = HVar10.unknown;
  local_180 = FVar9.unknown;
  local_178 = (int)HVar11.unknown;
  FUN_100011090(&local_1f0,&local_100,&DAT_100fb9af0,&DAT_100c39d50);
  FUN_100005808(&local_1b0,&DAT_100fb9af0,&DAT_100c39d50);
  uStack_168 = uStack_228;
  local_170 = local_230;
  puStack_158 = puStack_218;
  uStack_160 = uStack_220;
  uStack_148 = CONCAT44(uStack_204,uStack_208);
  uStack_138 = CONCAT44(uStack_1f4,uStack_1f8);
  uStack_140 = CONCAT44(uStack_1fc,uStack_200);
  local_150 = local_210;
  local_130 = SUB81(_all.unknown,0);
  local_118 = (undefined1)param_4;
  uStack_117 = (undefined7)((ulong)param_4 >> 8);
  uStack_110 = (undefined1)param_5;
  uStack_10f = (undefined7)((ulong)param_5 >> 8);
  uStack_108 = 0;
  uStack_f8 = uStack_228;
  local_100 = local_230;
  puStack_e8 = puStack_218;
  uStack_f0 = uStack_220;
  local_e0 = local_210;
  local_98 = 0;
  uStack_128 = uVar12;
  uStack_120 = param_3;
  uStack_d8 = uStack_148;
  uStack_d0 = uStack_140;
  uStack_c8 = uStack_138;
  local_c0 = local_130;
  local_b8 = uVar12;
  uStack_b0 = param_3;
  local_a8 = param_4;
  uStack_a0 = param_5;
  FUN_100011090(&local_170,auStack_2a0,&DAT_100fb9af8,&DAT_100c39d58);
  FUN_100005808(&local_100,&DAT_100fb9af8,&DAT_100c39d58);
  _swift_release(local_2b8);
  param_1[9] = uStack_128;
  param_1[8] = CONCAT71(uStack_12f,local_130);
  param_1[0xb] = CONCAT71(uStack_117,local_118);
  param_1[10] = uStack_120;
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(uStack_108,uStack_10f);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_110,uStack_117);
  param_1[1] = uStack_168;
  *param_1 = local_170;
  param_1[3] = puStack_158;
  param_1[2] = uStack_160;
  param_1[5] = uStack_148;
  param_1[4] = local_150;
  param_1[7] = uStack_138;
  param_1[6] = uStack_140;
  return;
}



/* Address: 0x1002797ac | FUN_1002797ac */

void FUN_1002797ac(undefined8 *param_1)

{
  String SVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  Image IVar7;
  Image IVar8;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteLicensingAppStore/CTA.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0x87,UVar5.unknown,puVar4);
  }
  FUN_10020cb54();
  SVar1 = *(String *)pcVar6;
  _swift_bridgeObjectRetain(((String *)pcVar6)->bridgeObject);
  IVar7 = SwiftUI::Image::init(SVar1);
  IVar8 = IVar7;
  FUN_10020caa0();
  SVar1 = *(String *)IVar8.unknown;
  _swift_bridgeObjectRetain(((String *)IVar8.unknown)->bridgeObject);
  IVar8 = SwiftUI::Image::init(SVar1);
  *param_1 = IVar7.unknown;
  param_1[1] = IVar8.unknown;
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100279890 | FUN_100279890 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100279a80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100279890(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 local_130 [12];
  undefined1 auStack_d0 [112];
  
  lVar2 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)local_130 + lVar1);
  puVar3 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10026516c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = ((long)puVar8 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10027446c();
  uVar9 = *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x14) + 8);
  lVar4 = 0;
  FUN_1002abb94();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))((long)puVar8 - extraout_x8_00,1,1,lVar4);
  _swift_retain(uVar9);
  FUN_10025fc5c(lVar7);
  puVar3 = &DAT_100c39b58;
  _swift_getKeyPath(&DAT_100c39b58);
  puVar5 = &DAT_100c39b80;
  _swift_getKeyPath(&DAT_100c39b80);
  Combine::Published::_get_subscript(puVar8,uVar9,puVar3,puVar5);
  _swift_release(puVar3);
  _swift_release(puVar5);
  puVar6 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar2);
  if ((int)puVar6 == 1) {
    local_130[1] = *(undefined8 *)((long)local_130 + lVar1 + 8);
    local_130[0] = *puVar8;
    local_130[3] = *(undefined8 *)((long)local_130 + lVar1 + 0x18);
    local_130[2] = *(undefined8 *)((long)local_130 + lVar1 + 0x10);
    local_130[5] = *(undefined8 *)((long)local_130 + lVar1 + 0x28);
    local_130[4] = *(undefined8 *)((long)local_130 + lVar1 + 0x20);
    local_130[7] = *(undefined8 *)((long)local_130 + lVar1 + 0x38);
    local_130[6] = *(undefined8 *)((long)local_130 + lVar1 + 0x30);
    local_130[9] = *(undefined8 *)((long)local_130 + lVar1 + 0x48);
    local_130[8] = *(undefined8 *)((long)local_130 + lVar1 + 0x40);
    local_130[0xb] = *(undefined8 *)(auStack_d0 + lVar1 + -8);
    local_130[10] = *(undefined8 *)((long)local_130 + lVar1 + 0x50);
  }
  else {
    FUN_10005241c(puVar8,FUN_10025cfc4);
    local_130[0] = 0;
    local_130[1] = 0;
    local_130[2] = 0;
    local_130[3] = 0;
    local_130[4] = 0;
    local_130[5] = 0;
    local_130[6] = 0;
    local_130[7] = 0;
    local_130[8] = 0;
    local_130[9] = 0;
    local_130[10] = 0;
    local_130[0xb] = 0;
  }
  puVar3 = &DAT_100fb8ed0;
  FUN_1000037f0(&DAT_100fb8ed0,&DAT_100c388c0);
  SwiftUI::Binding::constant(auStack_d0,puVar3,puVar3);
  FUN_100005808(local_130,&DAT_100fb8ed0,&DAT_100c388c0);
  FUN_100003a00(&DAT_100fb9ae0,FUN_10026516c,&TargetProtocolConformanceDescriptor_100c38c08);
  FUN_10026fe84();
  (extension_SwiftUI)::SwiftUI::View::_alert
            ((Binding<(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert___>_some>
              )auStack_d0);
  FUN_100005808(auStack_d0,&DAT_100fb9668,&DAT_100c395a0);
  FUN_10005241c(lVar7,FUN_10026516c);
  return;
}



/* Address: 0x100279b2c | FUN_100279b2c */

void FUN_100279b2c(undefined8 param_1)

{
  FUN_100279b34(param_1,0x94);
  return;
}



/* Address: 0x100279b34 | FUN_100279b34 */

void FUN_100279b34(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined1 auStack_100 [96];
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
  
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  local_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,param_3,UVar4.unknown,puVar3);
  }
  FUN_100270054(&local_a0,auStack_100);
  FUN_100253360(param_1,&local_a0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100279c18 | FUN_100279c18 */

void FUN_100279c18(long param_1)

{
  long lVar1;
  Published *pPVar2;
  undefined *puVar3;
  undefined1 local_31;
  
  lVar1 = 0;
  FUN_10027446c();
  lVar1 = *(long *)(param_1 + *(int *)(lVar1 + 0x14) + 8);
  if (*(char *)(lVar1 + _TtC22PasteLicensingAppStore16PaywallViewModel::
                        isTrialStartedPresentationPending) == '\x01') {
    *(undefined1 *)
     (lVar1 + _TtC22PasteLicensingAppStore16PaywallViewModel::isTrialStartedPresentationPending) = 0
    ;
    pPVar2 = (Published *)&DAT_100c39c78;
    _swift_getKeyPath(&DAT_100c39c78);
    puVar3 = &DAT_100c39ca0;
    _swift_getKeyPath(&DAT_100c39ca0);
    local_31 = 1;
    _swift_retain(lVar1);
    Combine::Published::_set_subscript(pPVar2,&local_31,lVar1,pPVar2,puVar3);
  }
  return;
}



/* Address: 0x100279cb4 | thunk_FUN_100278ab8 */

void thunk_FUN_100278ab8(void)

{
  FUN_100278ab8();
  return;
}



/* Address: 0x100279cb8 | FUN_100279cb8 */

void FUN_100279cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  Button<undefined> BVar5;
  Font FVar6;
  State SVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 auStack_b0 [4];
  undefined8 local_90 [3];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar3 = &DAT_100fb9b18;
  local_90[0] = param_1;
  FUN_1000037f0(&DAT_100fb9b18,&DAT_100c39d88);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar4 = &DAT_100ec4f98;
  _swift_allocObject(&DAT_100ec4f98,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  puVar4[0x20] = param_4;
  *(undefined8 *)(puVar4 + 0x28) = param_5;
  _swift_retain(param_5);
  _swift_retain(param_3);
  FUN_1000037f0(&DAT_100fb9b20,&DAT_100c39d90);
  FUN_100016eac(&DAT_100fb9b28,&DAT_100fb9b20,&DAT_100c39d90,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  BVar5 = SwiftUI::Button::_init();
  FVar6 = SwiftUI::Font::get_callout(BVar5.unknown);
  puVar4 = &DAT_100c39d20;
  _swift_getKeyPath();
  puVar1 = (undefined8 *)((long)local_90 + lVar2 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = puVar4;
  puVar1[1] = FVar6.unknown;
  SVar7.unknown = &DAT_100fb9b30;
  local_70 = param_4;
  local_68 = param_5;
  FUN_1000037f0(&DAT_100fb9b30,&DAT_100c3a550);
  SwiftUI::State::get_projectedValue(SVar7);
  puVar4 = &DAT_100ec4fc0;
  _swift_allocObject(&DAT_100ec4fc0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  puVar4[0x20] = param_4;
  *(undefined8 *)(puVar4 + 0x28) = param_5;
  puVar8 = puVar4;
  FUN_10027b714();
  puVar9 = puVar8;
  FUN_10027b7cc();
  _swift_retain(param_3);
  _swift_retain(param_5);
  *(undefined **)((long)auStack_b0 + lVar2 + 0x10) = puVar8;
  *(undefined **)((long)auStack_b0 + lVar2 + 0x18) = puVar9;
  *(undefined **)((long)auStack_b0 + lVar2) = puVar3;
  *(undefined **)((long)auStack_b0 + lVar2 + 8) = &DAT_100ec4750;
  FUN_10021dfac(local_90[0],local_90[1],local_90[2],local_78,FUN_10027b704,puVar4,0,0,0);
  _swift_release(local_90[2]);
  _swift_release(puVar4);
  _swift_release(local_90[1]);
  FUN_100005808((long)local_90 + lVar2,&DAT_100fb9b18,&DAT_100c39d88);
  return;
}



/* Address: 0x100279ef0 | FUN_100279ef0 */

void FUN_100279ef0(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined1 local_51;
  State local_50;
  undefined8 local_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0xa8,UVar3.unknown,puVar2);
  }
  local_50.unknown._0_1_ = param_3 & 1;
  local_51 = 1;
  puVar5 = &DAT_100fb9b30;
  local_48 = param_4;
  FUN_1000037f0(&DAT_100fb9b30,&DAT_100c3a550);
  SwiftUI::State::set_wrappedValue(&local_50,&local_51,puVar5);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100279fe0 | FUN_100279fe0 */

void FUN_100279fe0(undefined8 *param_1)

{
  String systemName;
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  Text TVar7;
  Text TVar8;
  Image IVar9;
  undefined *puVar10;
  undefined8 in_x3;
  long extraout_x8;
  String local_60;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0xaa;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0xaa,UVar4.unknown,puVar3);
  }
  FUN_1001cd5d4(LVar1.unknown);
  local_60 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar6 = local_60.str;
  FUN_1002538a0();
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar7 = SwiftUI::Text::_init();
  TVar8 = TVar7;
  FUN_10020cb24();
  systemName = *(String *)TVar8.unknown;
  _swift_bridgeObjectRetain(((String *)TVar8.unknown)->bridgeObject);
  IVar9 = SwiftUI::Image::init(systemName);
  *param_1 = TVar7.unknown;
  param_1[1] = puVar10;
  *(char *)(param_1 + 2) = (char)pcVar6;
  param_1[3] = in_x3;
  param_1[4] = IVar9.unknown;
  FUN_100016d5c(TVar7.unknown,puVar10,pcVar6);
  _swift_bridgeObjectRetain(in_x3);
  FUN_100016d74(TVar7.unknown,puVar10,pcVar6);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(in_x3);
  return;
}



/* Address: 0x10027a160 | FUN_10027a160 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010027a1b4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10027a160(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ObservedObject<undefined> OVar3;
  
  uVar1 = 0;
  FUN_10025cdc8();
  puVar2 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(param_3);
  OVar3 = SwiftUI::ObservedObject::init(puVar2,uVar1,puVar2);
  puVar2 = &DAT_100c39db0;
  _swift_getKeyPath();
  *param_1 = OVar3.unknown;
  param_1[1] = uVar1;
  param_1[2] = puVar2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x10027a1e8 | FUN_10027a1e8 */

void FUN_10027a1e8(void)

{
  undefined8 *unaff_x20;
  
  FUN_100279cb8(*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2),unaff_x20[3]);
  return;
}



/* Address: 0x10027a1f8 | FUN_10027a1f8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010027a39c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10027a1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  long lVar5;
  LocalizedStringResource LVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  long extraout_x12;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 auStack_e0 [4];
  char *apcStack_c0 [3];
  long local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  String local_88;
  undefined *local_78;
  undefined *puStack_70;
  byte local_61;
  
  lVar5 = 0;
  apcStack_c0[2] = (char *)param_2;
  local_90 = param_1;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar15 = (long)apcStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar15 - extraout_x12;
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar6.unknown + -8) + 0x40));
  LVar6.unknown = (undefined *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pcVar7 = &DAT_100fb9b68;
  FUN_1000037f0(&DAT_100fb9b68,&DAT_100c39de0);
  apcStack_c0[1] = pcVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(pcVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)LVar6.unknown - extraout_x8_01;
  puVar8 = &DAT_100fb9b70;
  FUN_1000037f0(&DAT_100fb9b70,&DAT_100c39de8);
  local_98 = *(long *)(puVar8 + -8);
  local_a0 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar16 - extraout_x8_02;
  local_a8 = lVar13;
  FUN_1001c90d4(LVar6.unknown);
  local_88 = (extension_Foundation)::Swift::String::init(LVar6);
  puVar8 = &DAT_100ec4fe8;
  _swift_allocObject(&DAT_100ec4fe8,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = param_2;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  puVar9 = puVar8;
  FUN_1002538a0();
  _swift_retain(param_3);
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar16,puVar9,FUN_10027b838,puVar8,PTR___type_metadata_for_Swift_String_100eac208,
             puVar9);
  puVar8 = &DAT_100c39b58;
  _swift_getKeyPath(&DAT_100c39b58);
  puVar9 = &DAT_100c39b80;
  puVar10 = puVar9;
  _swift_getKeyPath(&DAT_100c39b80);
  Combine::Published::_get_subscript(lVar14,param_3,puVar8,puVar10);
  _swift_release(puVar8);
  _swift_release(puVar10);
  _swift_storeEnumTagMultiPayload(lVar15,lVar5,3);
  lVar11 = lVar14;
  FUN_10025f09c(lVar14,lVar15);
  FUN_10005241c(lVar15,FUN_10025cfc4);
  FUN_10005241c(lVar14,FUN_10025cfc4);
  puVar8 = &DAT_100c39c10;
  _swift_getKeyPath();
  puVar10 = &DAT_100ec5010;
  _swift_allocObject(&DAT_100ec5010,0x11,7);
  pcVar7 = apcStack_c0[1];
  puVar10[0x10] = ((byte)lVar11 ^ 0xff) & 1;
  puVar1 = (undefined8 *)(lVar16 + *(int *)(apcStack_c0[1] + 0x24));
  *puVar1 = puVar8;
  puVar1[1] = thunk_FUN_100062b00;
  puVar1[2] = puVar10;
  puVar8 = &DAT_100c39b58;
  _swift_getKeyPath(&DAT_100c39b58);
  _swift_getKeyPath(&DAT_100c39b80);
  Combine::Published::_get_subscript(lVar14,param_3,puVar8,puVar9);
  _swift_release(puVar8);
  _swift_release(puVar9);
  _swift_storeEnumTagMultiPayload(lVar15,lVar5,4);
  lVar11 = lVar14;
  FUN_10025f09c(lVar14,lVar15);
  FUN_10005241c(lVar15,FUN_10025cfc4);
  FUN_10005241c(lVar14,FUN_10025cfc4);
  local_61 = (byte)lVar11 & 1;
  SwiftUI::Binding::constant(&local_88,lVar11,PTR___type_metadata_for_Swift_Bool_100eac570);
  pcVar3 = local_88.str;
  pvVar4 = local_88.bridgeObject;
  puVar8 = &DAT_100ec5038;
  _swift_allocObject(&DAT_100ec5038,0x20,7);
  pcVar2 = apcStack_c0[2];
  *(char **)(puVar8 + 0x10) = apcStack_c0[2];
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  puVar9 = &DAT_100ec5060;
  _swift_allocObject(&DAT_100ec5060,0x20,7);
  *(char **)(puVar9 + 0x10) = pcVar2;
  *(undefined8 *)(puVar9 + 0x18) = param_3;
  puVar10 = puVar9;
  FUN_10027b898();
  puVar12 = puVar10;
  FUN_10027b950();
  _swift_retain_n(param_3,2);
  *(undefined **)(lVar13 + -0x10) = puVar10;
  *(undefined **)(lVar13 + -8) = puVar12;
  *(char **)(lVar13 + -0x20) = pcVar7;
  *(undefined **)(lVar13 + -0x18) = &DAT_100ec4bf8;
  lVar11 = local_a8;
  FUN_10021dfac(local_a8,pcVar3,pvVar4,(ulong)local_78 & 0xff,FUN_10027b840,puVar8,FUN_10027b890,
                puVar9,0);
  _swift_release(pvVar4);
  _swift_release(puVar8);
  _swift_release(puVar9);
  _swift_release(pcVar3);
  FUN_100005808(lVar16,&DAT_100fb9b68,&DAT_100c39de0);
  puVar8 = &DAT_100fb9b88;
  FUN_100005c24(&DAT_100fb9b88,&DAT_100c39df8);
  puVar9 = &DAT_100fb9b90;
  FUN_1001eff10(&DAT_100fb9b90,&DAT_100fb9b88,&DAT_100c39df8,FUN_10027b950);
  local_88.bridgeObject = puVar8;
  local_88.str = pcVar7;
  local_78 = puVar10;
  puStack_70 = puVar9;
  _swift_getOpaqueTypeConformance2
            (&local_88,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  puVar8 = local_a0;
  (extension_SwiftUI)::SwiftUI::View::_interactiveDismissDisabled(true);
  (**(code **)(local_98 + 8))(lVar11,puVar8);
  return;
}



/* Address: 0x10027a698 | FUN_10027a698 */

void FUN_10027a698(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/CTA.swift",0x20,1,0xb9,UVar4.unknown,puVar3);
  }
  FUN_100258708();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10027a748 | FUN_10027a748 */

void FUN_10027a748(undefined8 param_1,Published *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined8 *puVar9;
  long alStack_1d0 [15];
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar8 = (long)alStack_1d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined8 *)(lVar8 - extraout_x12);
  puVar1 = (undefined8 *)
           ((long)&param_2->unknown +
           _TtC22PasteLicensingAppStore16PaywallViewModel::pendingRestoreError);
  uStack_e8 = puVar1[5];
  local_f0 = puVar1[4];
  uStack_d8 = puVar1[7];
  uStack_e0 = puVar1[6];
  uStack_c8 = puVar1[9];
  local_d0 = puVar1[8];
  uStack_b8 = puVar1[0xb];
  uStack_c0 = puVar1[10];
  lStack_108 = puVar1[1];
  local_110 = *puVar1;
  uStack_f8 = puVar1[3];
  uStack_100 = puVar1[2];
  if (lStack_108 != 0) {
    uStack_148 = puVar1[5];
    local_150 = puVar1[4];
    uStack_138 = puVar1[7];
    uStack_140 = puVar1[6];
    uStack_128 = puVar1[9];
    local_130 = puVar1[8];
    uStack_118 = puVar1[0xb];
    uStack_120 = puVar1[10];
    alStack_1d0[0xd] = puVar1[1];
    alStack_1d0[0xc] = *puVar1;
    uStack_158 = puVar1[3];
    alStack_1d0[0xe] = puVar1[2];
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    local_b0 = local_110;
    lStack_a8 = lStack_108;
    uStack_a0 = uStack_100;
    uStack_98 = uStack_f8;
    local_90 = local_f0;
    uStack_88 = uStack_e8;
    uStack_80 = uStack_e0;
    uStack_78 = uStack_d8;
    local_70 = local_d0;
    uStack_68 = uStack_c8;
    uStack_60 = uStack_c0;
    uStack_58 = uStack_b8;
    _swift_retain(param_2);
    FUN_100011090(&local_110,alStack_1d0,&DAT_100fb8ed0,&DAT_100c388c0);
    FUN_100005808(alStack_1d0 + 0xc,&DAT_100fb8ed0,&DAT_100c388c0);
    uVar4 = uStack_78;
    uVar3 = uStack_80;
    uVar2 = local_90;
    puVar9[5] = uStack_88;
    puVar9[4] = uVar2;
    puVar9[7] = uVar4;
    puVar9[6] = uVar3;
    uVar4 = uStack_58;
    uVar3 = uStack_60;
    uVar2 = local_70;
    puVar9[9] = uStack_68;
    puVar9[8] = uVar2;
    puVar9[0xb] = uVar4;
    puVar9[10] = uVar3;
    uVar4 = uStack_98;
    uVar3 = uStack_a0;
    uVar2 = local_b0;
    puVar9[1] = lStack_a8;
    *puVar9 = uVar2;
    puVar9[3] = uVar4;
    puVar9[2] = uVar3;
    _swift_storeEnumTagMultiPayload(puVar9,lVar5,1);
    puVar6 = &DAT_100c39b58;
    _swift_getKeyPath(&DAT_100c39b58);
    puVar7 = &DAT_100c39b80;
    _swift_getKeyPath(&DAT_100c39b80);
    FUN_1000c495c(puVar9,lVar8,FUN_10025cfc4);
    Combine::Published::_set_subscript(param_2,lVar8,param_2,puVar6,puVar7);
    FUN_10005241c(puVar9,FUN_10025cfc4);
  }
  return;
}



/* Address: 0x10027a8f8 | FUN_10027a8f8 */

void FUN_10027a8f8(void)

{
  undefined8 *unaff_x20;
  
  FUN_10027a1f8(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10027a900 | FUN_10027a900 */

void FUN_10027a900(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa154,1);
  return;
}



/* Address: 0x10027a910 | FUN_10027a910 */

void FUN_10027a910(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance2(&local_20,&DAT_100caa120,1);
  return;
}


