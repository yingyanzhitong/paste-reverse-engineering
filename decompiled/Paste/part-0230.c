/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002c4bd0 | FUN_1002c4bd0 */

undefined8 FUN_1002c4bd0(undefined8 param_1,undefined8 param_2)

{
  FUN_100424e00(param_2,param_1);
  return param_2;
}



/* Address: 0x1002c4c0c | FUN_1002c4c0c */

undefined8 FUN_1002c4c0c(undefined8 param_1)

{
  FUN_100424dbc();
  return param_1;
}



/* Address: 0x1002c4c40 | FUN_1002c4c40 */

void FUN_1002c4c40(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002c4c6c | FUN_1002c4c6c */

void FUN_1002c4c6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1002c08f4(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1002c4cd8 | FUN_1002c4cd8 */

long * FUN_1002c4cd8(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  Date DVar8;
  Storefront SVar9;
  undefined *puVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) == 0) {
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    iVar7 = *(int *)(param_3 + 0x14);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar19 = *(long *)(DVar8.unknown + -8);
    pcVar15 = *(code **)(lVar19 + 0x10);
    _swift_bridgeObjectRetain(lVar11);
    (*pcVar15)((long)param_1 + (long)iVar7,(long)param_2 + (long)iVar7,DVar8.unknown);
    lVar13 = (long)*(int *)(param_3 + 0x1c);
    uVar18 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) = uVar18;
    SVar9 = StoreKit::Storefront::typeMetadataAccessor();
    lVar16 = *(long *)(SVar9.unknown + -8);
    pcVar17 = *(code **)(lVar16 + 0x30);
    _swift_retain(uVar18);
    lVar11 = (long)param_2 + lVar13;
    (*pcVar17)(lVar11,1,SVar9.unknown);
    if ((int)lVar11 == 0) {
      (**(code **)(lVar16 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,SVar9.unknown);
      (**(code **)(lVar16 + 0x38))((long)param_1 + lVar13,0,1,SVar9.unknown);
    }
    else {
      puVar10 = &DAT_100fbbac0;
      FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    *puVar1 = *puVar2;
    lVar11 = 0;
    FUN_100245f3c();
    iVar7 = *(int *)(lVar11 + 0x14);
    pcVar17 = *(code **)(lVar19 + 0x30);
    puVar12 = puVar2 + iVar7;
    (*pcVar17)(puVar12,1,DVar8.unknown);
    if ((int)puVar12 == 0) {
      (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
      (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
    }
    else {
      puVar10 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar11 + 0x18);
    uVar18 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar18;
    iVar7 = *(int *)(lVar11 + 0x1c);
    uVar5 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar5;
    iVar7 = *(int *)(lVar11 + 0x20);
    uVar22 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar22;
    iVar7 = *(int *)(lVar11 + 0x24);
    uVar23 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar23;
    iVar7 = *(int *)(param_3 + 0x28);
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar21 = *puVar4;
    puVar3[1] = puVar4[1];
    *puVar3 = uVar21;
    puVar3[2] = puVar4[2];
    *(undefined8 *)((long)param_1 + (long)iVar7) = *(undefined8 *)((long)param_2 + (long)iVar7);
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    *puVar1 = *puVar2;
    uVar21 = *(undefined8 *)(puVar2 + 0x10);
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
    *(undefined8 *)(puVar1 + 0x10) = uVar21;
    puVar1[0x20] = puVar2[0x20];
    *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
    puVar1[0x30] = puVar2[0x30];
    *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(puVar2 + 0x28);
    lVar11 = 0;
    FUN_100245ed8();
    iVar7 = *(int *)(lVar11 + 0x20);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar23);
    _swift_bridgeObjectRetain(uVar21);
    puVar12 = puVar2 + iVar7;
    (*pcVar17)(puVar12,1,DVar8.unknown);
    if ((int)puVar12 == 0) {
      (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
      (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
    }
    else {
      puVar10 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar11 + 0x24);
    puVar12 = puVar2 + iVar7;
    (*pcVar17)(puVar12,1,DVar8.unknown);
    if ((int)puVar12 == 0) {
      (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
      (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
    }
    else {
      puVar10 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar11 + 0x28);
    puVar12 = puVar2 + iVar7;
    (*pcVar17)(puVar12,1,DVar8.unknown);
    if ((int)puVar12 == 0) {
      (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
      (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
    }
    else {
      puVar10 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar11 + 0x2c);
    puVar12 = puVar2 + iVar7;
    (*pcVar17)(puVar12,1,DVar8.unknown);
    if ((int)puVar12 == 0) {
      (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
      (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
    }
    else {
      puVar10 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar11 + 0x30);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined1 *)((long)(puVar1 + iVar7) + 8) = *(undefined1 *)((long)(puVar2 + iVar7) + 8);
    iVar7 = *(int *)(lVar11 + 0x34);
    uVar18 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar18;
    iVar7 = *(int *)(lVar11 + 0x38);
    uVar5 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar5;
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    *puVar1 = *puVar2;
    lVar11 = 0;
    FUN_1002bd9c0();
    iVar7 = *(int *)(lVar11 + 0x14);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar5);
    (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
    iVar7 = *(int *)(lVar11 + 0x18);
    puVar12 = puVar2 + iVar7;
    (*pcVar17)(puVar12,1,DVar8.unknown);
    if ((int)puVar12 == 0) {
      (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
      (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
    }
    else {
      puVar10 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    (*pcVar15)(puVar1 + *(int *)(lVar11 + 0x1c),puVar2 + *(int *)(lVar11 + 0x1c),DVar8.unknown);
    iVar7 = *(int *)(lVar11 + 0x20);
    puVar12 = puVar2 + iVar7;
    (*pcVar17)(puVar12,1,DVar8.unknown);
    if ((int)puVar12 == 0) {
      (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
      (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
    }
    else {
      puVar10 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    iVar7 = *(int *)(lVar11 + 0x24);
    uVar18 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar18;
    iVar7 = *(int *)(lVar11 + 0x28);
    uVar5 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
    *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
    *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar5;
    puVar1[*(int *)(lVar11 + 0x2c)] = puVar2[*(int *)(lVar11 + 0x2c)];
    puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
    puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    uVar22 = *puVar4;
    uVar21 = puVar4[3];
    uVar23 = puVar4[2];
    puVar3[1] = puVar4[1];
    *puVar3 = uVar22;
    puVar3[3] = uVar21;
    puVar3[2] = uVar23;
    lVar13 = 0;
    FUN_1002bdad0();
    puVar1 = (undefined1 *)((long)puVar3 + (long)*(int *)(lVar13 + 0x20));
    puVar2 = (undefined1 *)((long)puVar4 + (long)*(int *)(lVar13 + 0x20));
    lVar13 = *(long *)(lVar11 + -8);
    pcVar20 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar5);
    puVar12 = puVar2;
    (*pcVar20)(puVar2,1,lVar11);
    if ((int)puVar12 == 0) {
      *puVar1 = *puVar2;
      (*pcVar15)(puVar1 + *(int *)(lVar11 + 0x14),puVar2 + *(int *)(lVar11 + 0x14),DVar8.unknown);
      iVar7 = *(int *)(lVar11 + 0x18);
      puVar12 = puVar2 + iVar7;
      (*pcVar17)(puVar12,1,DVar8.unknown);
      if ((int)puVar12 == 0) {
        (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
        (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
      }
      else {
        puVar10 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
      }
      (*pcVar15)(puVar1 + *(int *)(lVar11 + 0x1c),puVar2 + *(int *)(lVar11 + 0x1c),DVar8.unknown);
      iVar7 = *(int *)(lVar11 + 0x20);
      puVar12 = puVar2 + iVar7;
      (*pcVar17)(puVar12,1,DVar8.unknown);
      if ((int)puVar12 == 0) {
        (*pcVar15)(puVar1 + iVar7,puVar2 + iVar7,DVar8.unknown);
        (**(code **)(lVar19 + 0x38))(puVar1 + iVar7,0,1,DVar8.unknown);
      }
      else {
        puVar10 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
      }
      iVar7 = *(int *)(lVar11 + 0x24);
      uVar18 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
      *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
      *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar18;
      iVar7 = *(int *)(lVar11 + 0x28);
      uVar18 = *(undefined8 *)((long)(puVar2 + iVar7) + 8);
      *(undefined8 *)(puVar1 + iVar7) = *(undefined8 *)(puVar2 + iVar7);
      *(undefined8 *)((long)(puVar1 + iVar7) + 8) = uVar18;
      puVar1[*(int *)(lVar11 + 0x2c)] = puVar2[*(int *)(lVar11 + 0x2c)];
      pcVar15 = *(code **)(lVar13 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      (*pcVar15)(puVar1,0,1,lVar11);
    }
    else {
      puVar10 = &DAT_100fbc110;
      FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar14 = (ulong)uVar6 & 0xff;
    param_1 = (long *)(lVar11 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002c5518 | FUN_1002c5518 */

void FUN_1002c5518(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  Storefront SVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x14);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  pcVar5 = *(code **)(lVar6 + 8);
  (*pcVar5)(param_1 + iVar1,DVar2.unknown);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  iVar1 = *(int *)(param_2 + 0x1c);
  SVar3 = StoreKit::Storefront::typeMetadataAccessor();
  lVar8 = *(long *)(SVar3.unknown + -8);
  lVar4 = param_1 + iVar1;
  (**(code **)(lVar8 + 0x30))(lVar4,1,SVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar1,SVar3.unknown);
  }
  lVar4 = param_1 + *(int *)(param_2 + 0x20);
  lVar8 = 0;
  FUN_100245f3c();
  iVar1 = *(int *)(lVar8 + 0x14);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x1c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x24) + 8));
  lVar4 = param_1 + *(int *)(param_2 + 0x2c);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x10));
  lVar8 = 0;
  FUN_100245ed8();
  iVar1 = *(int *)(lVar8 + 0x20);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(lVar8 + 0x24);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(lVar8 + 0x28);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(lVar8 + 0x2c);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x34) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x38) + 8));
  lVar4 = param_1 + *(int *)(param_2 + 0x30);
  lVar8 = 0;
  FUN_1002bd9c0();
  (*pcVar5)(lVar4 + *(int *)(lVar8 + 0x14),DVar2.unknown);
  iVar1 = *(int *)(lVar8 + 0x18);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  (*pcVar5)(lVar4 + *(int *)(lVar8 + 0x1c),DVar2.unknown);
  iVar1 = *(int *)(lVar8 + 0x20);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x28) + 8));
  iVar1 = *(int *)(param_2 + 0x34);
  lVar4 = 0;
  FUN_1002bdad0();
  lVar4 = param_1 + iVar1 + (long)*(int *)(lVar4 + 0x20);
  lVar6 = lVar4;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar4,1,lVar8);
  if ((int)lVar6 != 0) {
    return;
  }
  (*pcVar5)(lVar4 + *(int *)(lVar8 + 0x14),DVar2.unknown);
  iVar1 = *(int *)(lVar8 + 0x18);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  (*pcVar5)(lVar4 + *(int *)(lVar8 + 0x1c),DVar2.unknown);
  iVar1 = *(int *)(lVar8 + 0x20);
  lVar6 = lVar4 + iVar1;
  (*pcVar7)(lVar6,1,DVar2.unknown);
  if ((int)lVar6 == 0) {
    (*pcVar5)(lVar4 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + *(int *)(lVar8 + 0x28) + 8));
  return;
}



/* Address: 0x1002c5878 | FUN_1002c5878 */

undefined8 * FUN_1002c5878(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  Date DVar7;
  Storefront SVar8;
  undefined *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar16 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar16;
  iVar6 = *(int *)(param_3 + 0x14);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar7.unknown + -8);
  pcVar13 = *(code **)(lVar17 + 0x10);
  _swift_bridgeObjectRetain(uVar16);
  (*pcVar13)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,DVar7.unknown);
  lVar12 = (long)*(int *)(param_3 + 0x1c);
  uVar16 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) = uVar16;
  SVar8 = StoreKit::Storefront::typeMetadataAccessor();
  lVar14 = *(long *)(SVar8.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  _swift_retain(uVar16);
  lVar10 = (long)param_2 + lVar12;
  (*pcVar15)(lVar10,1,SVar8.unknown);
  if ((int)lVar10 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,SVar8.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar12,0,1,SVar8.unknown);
  }
  else {
    puVar9 = &DAT_100fbbac0;
    FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  lVar10 = 0;
  FUN_100245f3c();
  iVar6 = *(int *)(lVar10 + 0x14);
  pcVar15 = *(code **)(lVar17 + 0x30);
  puVar11 = puVar2 + iVar6;
  (*pcVar15)(puVar11,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
    (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar10 + 0x18);
  uVar16 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar16;
  iVar6 = *(int *)(lVar10 + 0x1c);
  uVar5 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar5;
  iVar6 = *(int *)(lVar10 + 0x20);
  uVar20 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar20;
  iVar6 = *(int *)(lVar10 + 0x24);
  uVar21 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar21;
  iVar6 = *(int *)(param_3 + 0x28);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar19 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar19;
  puVar3[2] = puVar4[2];
  *(undefined8 *)((long)param_1 + (long)iVar6) = *(undefined8 *)((long)param_2 + (long)iVar6);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar19 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + 0x10) = uVar19;
  puVar1[0x20] = puVar2[0x20];
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
  puVar1[0x30] = puVar2[0x30];
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(puVar2 + 0x28);
  lVar10 = 0;
  FUN_100245ed8();
  iVar6 = *(int *)(lVar10 + 0x20);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar20);
  _swift_bridgeObjectRetain(uVar21);
  _swift_bridgeObjectRetain(uVar19);
  puVar11 = puVar2 + iVar6;
  (*pcVar15)(puVar11,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
    (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar10 + 0x24);
  puVar11 = puVar2 + iVar6;
  (*pcVar15)(puVar11,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
    (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar10 + 0x28);
  puVar11 = puVar2 + iVar6;
  (*pcVar15)(puVar11,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
    (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar10 + 0x2c);
  puVar11 = puVar2 + iVar6;
  (*pcVar15)(puVar11,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
    (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar10 + 0x30);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined1 *)((long)(puVar1 + iVar6) + 8) = *(undefined1 *)((long)(puVar2 + iVar6) + 8);
  iVar6 = *(int *)(lVar10 + 0x34);
  uVar16 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar16;
  iVar6 = *(int *)(lVar10 + 0x38);
  uVar5 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar5;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  lVar10 = 0;
  FUN_1002bd9c0();
  iVar6 = *(int *)(lVar10 + 0x14);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
  iVar6 = *(int *)(lVar10 + 0x18);
  puVar11 = puVar2 + iVar6;
  (*pcVar15)(puVar11,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
    (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  (*pcVar13)(puVar1 + *(int *)(lVar10 + 0x1c),puVar2 + *(int *)(lVar10 + 0x1c),DVar7.unknown);
  iVar6 = *(int *)(lVar10 + 0x20);
  puVar11 = puVar2 + iVar6;
  (*pcVar15)(puVar11,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
    (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar10 + 0x24);
  uVar16 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar16;
  iVar6 = *(int *)(lVar10 + 0x28);
  uVar5 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
  *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
  *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar5;
  puVar1[*(int *)(lVar10 + 0x2c)] = puVar2[*(int *)(lVar10 + 0x2c)];
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar20 = *param_2;
  uVar19 = param_2[3];
  uVar21 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar20;
  puVar3[3] = uVar19;
  puVar3[2] = uVar21;
  lVar12 = 0;
  FUN_1002bdad0();
  puVar1 = (undefined1 *)((long)puVar3 + (long)*(int *)(lVar12 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(lVar12 + 0x20));
  lVar12 = *(long *)(lVar10 + -8);
  pcVar18 = *(code **)(lVar12 + 0x30);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar5);
  puVar11 = puVar2;
  (*pcVar18)(puVar2,1,lVar10);
  if ((int)puVar11 == 0) {
    *puVar1 = *puVar2;
    (*pcVar13)(puVar1 + *(int *)(lVar10 + 0x14),puVar2 + *(int *)(lVar10 + 0x14),DVar7.unknown);
    iVar6 = *(int *)(lVar10 + 0x18);
    puVar11 = puVar2 + iVar6;
    (*pcVar15)(puVar11,1,DVar7.unknown);
    if ((int)puVar11 == 0) {
      (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
      (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
    }
    else {
      puVar9 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    (*pcVar13)(puVar1 + *(int *)(lVar10 + 0x1c),puVar2 + *(int *)(lVar10 + 0x1c),DVar7.unknown);
    iVar6 = *(int *)(lVar10 + 0x20);
    puVar11 = puVar2 + iVar6;
    (*pcVar15)(puVar11,1,DVar7.unknown);
    if ((int)puVar11 == 0) {
      (*pcVar13)(puVar1 + iVar6,puVar2 + iVar6,DVar7.unknown);
      (**(code **)(lVar17 + 0x38))(puVar1 + iVar6,0,1,DVar7.unknown);
    }
    else {
      puVar9 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    }
    iVar6 = *(int *)(lVar10 + 0x24);
    uVar16 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
    *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
    *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar16;
    iVar6 = *(int *)(lVar10 + 0x28);
    uVar16 = *(undefined8 *)((long)(puVar2 + iVar6) + 8);
    *(undefined8 *)(puVar1 + iVar6) = *(undefined8 *)(puVar2 + iVar6);
    *(undefined8 *)((long)(puVar1 + iVar6) + 8) = uVar16;
    puVar1[*(int *)(lVar10 + 0x2c)] = puVar2[*(int *)(lVar10 + 0x2c)];
    pcVar13 = *(code **)(lVar12 + 0x38);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar16);
    (*pcVar13)(puVar1,0,1,lVar10);
  }
  else {
    puVar9 = &DAT_100fbc110;
    FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1002c6094 | FUN_1002c6094 */

undefined8 * FUN_1002c6094(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  Date DVar6;
  Storefront SVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  code *pcVar19;
  
  *param_1 = *param_2;
  uVar15 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  iVar5 = *(int *)(param_3 + 0x14);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar6.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x18);
  (*pcVar13)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,DVar6.unknown);
  lVar14 = (long)*(int *)(param_3 + 0x18);
  uVar15 = *(undefined8 *)((long)param_1 + lVar14);
  *(undefined8 *)((long)param_1 + lVar14) = *(undefined8 *)((long)param_2 + lVar14);
  _swift_retain();
  _swift_release(uVar15);
  lVar18 = (long)*(int *)(param_3 + 0x1c);
  SVar7 = StoreKit::Storefront::typeMetadataAccessor();
  lVar16 = *(long *)(SVar7.unknown + -8);
  pcVar19 = *(code **)(lVar16 + 0x30);
  lVar14 = (long)param_1 + lVar18;
  (*pcVar19)(lVar14,1,SVar7.unknown);
  lVar11 = (long)param_2 + lVar18;
  (*pcVar19)(lVar11,1,SVar7.unknown);
  if ((int)lVar14 == 0) {
    if ((int)lVar11 != 0) {
      (**(code **)(lVar16 + 8))((long)param_1 + lVar18,SVar7.unknown);
      goto LAB_1002c61b4;
    }
    (**(code **)(lVar16 + 0x18))((long)param_1 + lVar18,(long)param_2 + lVar18,SVar7.unknown);
  }
  else if ((int)lVar11 == 0) {
    (**(code **)(lVar16 + 0x10))((long)param_1 + lVar18,(long)param_2 + lVar18,SVar7.unknown);
    (**(code **)(lVar16 + 0x38))((long)param_1 + lVar18,0,1,SVar7.unknown);
  }
  else {
LAB_1002c61b4:
    puVar8 = &DAT_100fbbac0;
    FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
    _memcpy((void *)((long)param_1 + lVar18),(void *)((long)param_2 + lVar18),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  lVar14 = 0;
  FUN_100245f3c();
  iVar5 = *(int *)(lVar14 + 0x14);
  pcVar19 = *(code **)(lVar12 + 0x30);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
      goto LAB_1002c6280;
    }
    (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
LAB_1002c6280:
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar14 + 0x18);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  iVar5 = *(int *)(lVar14 + 0x1c);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  iVar5 = *(int *)(lVar14 + 0x20);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  iVar5 = *(int *)(lVar14 + 0x24);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar3 = *puVar4;
  puVar3[1] = puVar4[1];
  puVar3[2] = puVar4[2];
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  uVar15 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  uVar15 = *(undefined8 *)(puVar2 + 0x18);
  puVar1[0x20] = puVar2[0x20];
  *(undefined8 *)(puVar1 + 0x18) = uVar15;
  uVar15 = *(undefined8 *)(puVar2 + 0x28);
  puVar1[0x30] = puVar2[0x30];
  *(undefined8 *)(puVar1 + 0x28) = uVar15;
  lVar14 = 0;
  FUN_100245ed8();
  iVar5 = *(int *)(lVar14 + 0x20);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
      goto LAB_1002c6464;
    }
    (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
LAB_1002c6464:
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar14 + 0x24);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
      goto LAB_1002c6508;
    }
    (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
LAB_1002c6508:
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar14 + 0x28);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
      goto LAB_1002c65ac;
    }
    (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
LAB_1002c65ac:
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar14 + 0x2c);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
      goto LAB_1002c6650;
    }
    (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
LAB_1002c6650:
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar14 + 0x30);
  uVar15 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined1 *)((long)(puVar1 + iVar5) + 8) = *(undefined1 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar15;
  iVar5 = *(int *)(lVar14 + 0x34);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  iVar5 = *(int *)(lVar14 + 0x38);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  lVar14 = 0;
  FUN_1002bd9c0();
  (*pcVar13)(puVar1 + *(int *)(lVar14 + 0x14),puVar2 + *(int *)(lVar14 + 0x14),DVar6.unknown);
  iVar5 = *(int *)(lVar14 + 0x18);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
      goto LAB_1002c67a0;
    }
    (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
LAB_1002c67a0:
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  (*pcVar13)(puVar1 + *(int *)(lVar14 + 0x1c),puVar2 + *(int *)(lVar14 + 0x1c),DVar6.unknown);
  iVar5 = *(int *)(lVar14 + 0x20);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
      goto LAB_1002c685c;
    }
    (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
LAB_1002c685c:
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar14 + 0x24);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  iVar5 = *(int *)(lVar14 + 0x28);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  puVar1[*(int *)(lVar14 + 0x2c)] = puVar2[*(int *)(lVar14 + 0x2c)];
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  puVar3[2] = param_2[2];
  puVar3[3] = param_2[3];
  lVar11 = 0;
  FUN_1002bdad0();
  puVar1 = (undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
  lVar11 = *(long *)(lVar14 + -8);
  pcVar17 = *(code **)(lVar11 + 0x30);
  puVar9 = puVar1;
  (*pcVar17)(puVar1,1,lVar14);
  puVar10 = puVar2;
  (*pcVar17)(puVar2,1,lVar14);
  if ((int)puVar9 != 0) {
    if ((int)puVar10 == 0) {
      *puVar1 = *puVar2;
      pcVar13 = *(code **)(lVar12 + 0x10);
      (*pcVar13)(puVar1 + *(int *)(lVar14 + 0x14),puVar2 + *(int *)(lVar14 + 0x14),DVar6.unknown);
      iVar5 = *(int *)(lVar14 + 0x18);
      puVar9 = puVar2 + iVar5;
      (*pcVar19)(puVar9,1,DVar6.unknown);
      if ((int)puVar9 == 0) {
        (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
        (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
      }
      else {
        puVar8 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      (*pcVar13)(puVar1 + *(int *)(lVar14 + 0x1c),puVar2 + *(int *)(lVar14 + 0x1c),DVar6.unknown);
      iVar5 = *(int *)(lVar14 + 0x20);
      puVar9 = puVar2 + iVar5;
      (*pcVar19)(puVar9,1,DVar6.unknown);
      if ((int)puVar9 == 0) {
        (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
        (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
      }
      else {
        puVar8 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      iVar5 = *(int *)(lVar14 + 0x24);
      *(undefined8 *)(puVar1 + iVar5) = *(undefined8 *)(puVar2 + iVar5);
      *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
      iVar5 = *(int *)(lVar14 + 0x28);
      *(undefined8 *)(puVar1 + iVar5) = *(undefined8 *)(puVar2 + iVar5);
      uVar15 = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
      *(undefined8 *)((long)(puVar1 + iVar5) + 8) = uVar15;
      puVar1[*(int *)(lVar14 + 0x2c)] = puVar2[*(int *)(lVar14 + 0x2c)];
      pcVar13 = *(code **)(lVar11 + 0x38);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar15);
      (*pcVar13)(puVar1,0,1,lVar14);
      return param_1;
    }
LAB_1002c69d8:
    puVar8 = &DAT_100fbc110;
    FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    return param_1;
  }
  if ((int)puVar10 != 0) {
    FUN_10005241c(puVar1,FUN_1002bd9c0);
    goto LAB_1002c69d8;
  }
  *puVar1 = *puVar2;
  (*pcVar13)(puVar1 + *(int *)(lVar14 + 0x14),puVar2 + *(int *)(lVar14 + 0x14),DVar6.unknown);
  iVar5 = *(int *)(lVar14 + 0x18);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
      goto LAB_1002c6c78;
    }
    (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
LAB_1002c6c78:
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  (*pcVar13)(puVar1 + *(int *)(lVar14 + 0x1c),puVar2 + *(int *)(lVar14 + 0x1c),DVar6.unknown);
  iVar5 = *(int *)(lVar14 + 0x20);
  puVar9 = puVar1 + iVar5;
  (*pcVar19)(puVar9,1,DVar6.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar19)(puVar10,1,DVar6.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 == 0) {
      (*pcVar13)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
      goto LAB_1002c6d54;
    }
    (**(code **)(lVar12 + 8))(puVar1 + iVar5,DVar6.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar12 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
    goto LAB_1002c6d54;
  }
  puVar8 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_1002c6d54:
  iVar5 = *(int *)(lVar14 + 0x24);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  iVar5 = *(int *)(lVar14 + 0x28);
  puVar3 = (undefined8 *)(puVar1 + iVar5);
  *puVar3 = *(undefined8 *)(puVar2 + iVar5);
  uVar15 = puVar3[1];
  puVar3[1] = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar15);
  puVar1[*(int *)(lVar14 + 0x2c)] = puVar2[*(int *)(lVar14 + 0x2c)];
  return param_1;
}



/* Address: 0x1002c6e0c | FUN_1002c6e0c */

undefined8 * FUN_1002c6e0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  Date DVar6;
  Storefront SVar7;
  undefined *puVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  uVar13 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar13;
  iVar5 = *(int *)(param_3 + 0x14);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar6.unknown + -8);
  pcVar15 = *(code **)(lVar12 + 0x20);
  (*pcVar15)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,DVar6.unknown);
  lVar11 = (long)*(int *)(param_3 + 0x1c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  SVar7 = StoreKit::Storefront::typeMetadataAccessor();
  lVar14 = *(long *)(SVar7.unknown + -8);
  lVar9 = (long)param_2 + lVar11;
  (**(code **)(lVar14 + 0x30))(lVar9,1,SVar7.unknown);
  if ((int)lVar9 == 0) {
    (**(code **)(lVar14 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,SVar7.unknown);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar11,0,1,SVar7.unknown);
  }
  else {
    puVar8 = &DAT_100fbbac0;
    FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  lVar9 = 0;
  FUN_100245f3c();
  iVar5 = *(int *)(lVar9 + 0x14);
  pcVar16 = *(code **)(lVar12 + 0x30);
  puVar10 = puVar2 + iVar5;
  (*pcVar16)(puVar10,1,DVar6.unknown);
  if ((int)puVar10 == 0) {
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar9 + 0x18);
  uVar13 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar13;
  iVar5 = *(int *)(lVar9 + 0x1c);
  uVar13 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar13;
  iVar5 = *(int *)(lVar9 + 0x20);
  uVar13 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar13;
  iVar5 = *(int *)(lVar9 + 0x24);
  uVar13 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar13;
  iVar5 = *(int *)(param_3 + 0x28);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar13 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar13;
  uVar13 = *(undefined8 *)((long)param_2 + (long)iVar5);
  puVar3[2] = puVar4[2];
  *(undefined8 *)((long)param_1 + (long)iVar5) = uVar13;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar13 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar1 + 8) = uVar13;
  puVar1[0x20] = puVar2[0x20];
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
  puVar1[0x30] = puVar2[0x30];
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(puVar2 + 0x28);
  lVar9 = 0;
  FUN_100245ed8();
  iVar5 = *(int *)(lVar9 + 0x20);
  puVar10 = puVar2 + iVar5;
  (*pcVar16)(puVar10,1,DVar6.unknown);
  if ((int)puVar10 == 0) {
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar9 + 0x24);
  puVar10 = puVar2 + iVar5;
  (*pcVar16)(puVar10,1,DVar6.unknown);
  if ((int)puVar10 == 0) {
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar9 + 0x28);
  puVar10 = puVar2 + iVar5;
  (*pcVar16)(puVar10,1,DVar6.unknown);
  if ((int)puVar10 == 0) {
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar9 + 0x2c);
  puVar10 = puVar2 + iVar5;
  (*pcVar16)(puVar10,1,DVar6.unknown);
  if ((int)puVar10 == 0) {
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar9 + 0x30);
  *(undefined8 *)(puVar1 + iVar5) = *(undefined8 *)(puVar2 + iVar5);
  *(undefined1 *)((long)(puVar1 + iVar5) + 8) = *(undefined1 *)((long)(puVar2 + iVar5) + 8);
  iVar5 = *(int *)(lVar9 + 0x34);
  uVar13 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar13;
  iVar5 = *(int *)(lVar9 + 0x38);
  uVar13 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar13;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  lVar9 = 0;
  FUN_1002bd9c0();
  (*pcVar15)(puVar1 + *(int *)(lVar9 + 0x14),puVar2 + *(int *)(lVar9 + 0x14),DVar6.unknown);
  iVar5 = *(int *)(lVar9 + 0x18);
  puVar10 = puVar2 + iVar5;
  (*pcVar16)(puVar10,1,DVar6.unknown);
  if ((int)puVar10 == 0) {
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  (*pcVar15)(puVar1 + *(int *)(lVar9 + 0x1c),puVar2 + *(int *)(lVar9 + 0x1c),DVar6.unknown);
  iVar5 = *(int *)(lVar9 + 0x20);
  puVar10 = puVar2 + iVar5;
  (*pcVar16)(puVar10,1,DVar6.unknown);
  if ((int)puVar10 == 0) {
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
    (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar9 + 0x24);
  uVar13 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar13;
  iVar5 = *(int *)(lVar9 + 0x28);
  uVar13 = *(undefined8 *)(puVar2 + iVar5);
  *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
  *(undefined8 *)(puVar1 + iVar5) = uVar13;
  puVar1[*(int *)(lVar9 + 0x2c)] = puVar2[*(int *)(lVar9 + 0x2c)];
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar13 = *param_2;
  uVar18 = param_2[3];
  uVar17 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar13;
  puVar3[3] = uVar18;
  puVar3[2] = uVar17;
  lVar11 = 0;
  FUN_1002bdad0();
  puVar1 = (undefined1 *)((long)puVar3 + (long)*(int *)(lVar11 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(lVar11 + 0x20));
  lVar11 = *(long *)(lVar9 + -8);
  puVar10 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    *puVar1 = *puVar2;
    (*pcVar15)(puVar1 + *(int *)(lVar9 + 0x14),puVar2 + *(int *)(lVar9 + 0x14),DVar6.unknown);
    iVar5 = *(int *)(lVar9 + 0x18);
    puVar10 = puVar2 + iVar5;
    (*pcVar16)(puVar10,1,DVar6.unknown);
    if ((int)puVar10 == 0) {
      (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
      (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    (*pcVar15)(puVar1 + *(int *)(lVar9 + 0x1c),puVar2 + *(int *)(lVar9 + 0x1c),DVar6.unknown);
    iVar5 = *(int *)(lVar9 + 0x20);
    puVar10 = puVar2 + iVar5;
    (*pcVar16)(puVar10,1,DVar6.unknown);
    if ((int)puVar10 == 0) {
      (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar6.unknown);
      (**(code **)(lVar12 + 0x38))(puVar1 + iVar5,0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb7f78;
      FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
      _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar5 = *(int *)(lVar9 + 0x24);
    uVar13 = *(undefined8 *)(puVar2 + iVar5);
    *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
    *(undefined8 *)(puVar1 + iVar5) = uVar13;
    iVar5 = *(int *)(lVar9 + 0x28);
    uVar13 = *(undefined8 *)(puVar2 + iVar5);
    *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
    *(undefined8 *)(puVar1 + iVar5) = uVar13;
    puVar1[*(int *)(lVar9 + 0x2c)] = puVar2[*(int *)(lVar9 + 0x2c)];
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar9);
  }
  else {
    puVar8 = &DAT_100fbc110;
    FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1002c7558 | FUN_1002c7558 */

undefined8 * FUN_1002c7558(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  Date DVar7;
  undefined8 uVar8;
  Storefront SVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  
  uVar8 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  iVar5 = *(int *)(param_3 + 0x14);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar7.unknown + -8);
  pcVar15 = *(code **)(lVar14 + 0x28);
  (*pcVar15)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,DVar7.unknown);
  lVar16 = (long)*(int *)(param_3 + 0x18);
  uVar8 = *(undefined8 *)((long)param_1 + lVar16);
  *(undefined8 *)((long)param_1 + lVar16) = *(undefined8 *)((long)param_2 + lVar16);
  _swift_release(uVar8);
  lVar19 = (long)*(int *)(param_3 + 0x1c);
  SVar9 = StoreKit::Storefront::typeMetadataAccessor();
  lVar17 = *(long *)(SVar9.unknown + -8);
  pcVar20 = *(code **)(lVar17 + 0x30);
  lVar16 = (long)param_1 + lVar19;
  (*pcVar20)(lVar16,1,SVar9.unknown);
  lVar13 = (long)param_2 + lVar19;
  (*pcVar20)(lVar13,1,SVar9.unknown);
  if ((int)lVar16 == 0) {
    if ((int)lVar13 != 0) {
      (**(code **)(lVar17 + 8))((long)param_1 + lVar19,SVar9.unknown);
      goto LAB_1002c7660;
    }
    (**(code **)(lVar17 + 0x28))((long)param_1 + lVar19,(long)param_2 + lVar19,SVar9.unknown);
  }
  else if ((int)lVar13 == 0) {
    (**(code **)(lVar17 + 0x20))((long)param_1 + lVar19,(long)param_2 + lVar19,SVar9.unknown);
    (**(code **)(lVar17 + 0x38))((long)param_1 + lVar19,0,1,SVar9.unknown);
  }
  else {
LAB_1002c7660:
    puVar10 = &DAT_100fbbac0;
    FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
    _memcpy((void *)((long)param_1 + lVar19),(void *)((long)param_2 + lVar19),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  lVar16 = 0;
  FUN_100245f3c();
  iVar5 = *(int *)(lVar16 + 0x14);
  pcVar20 = *(code **)(lVar14 + 0x30);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002c772c;
    }
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002c772c:
    puVar10 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x18));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x18)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x18));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x1c));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x1c)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x1c));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x20));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x20)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x20));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x24));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x24)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x24));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  iVar5 = *(int *)(param_3 + 0x28);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar8 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar8;
  puVar3[2] = puVar4[2];
  *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar8 = *(undefined8 *)(puVar2 + 0x10);
  uVar6 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(puVar2 + 0x18);
  puVar1[0x20] = puVar2[0x20];
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(puVar2 + 0x28);
  puVar1[0x30] = puVar2[0x30];
  lVar16 = 0;
  FUN_100245ed8();
  iVar5 = *(int *)(lVar16 + 0x20);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002c78b4;
    }
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002c78b4:
    puVar10 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar16 + 0x24);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002c7958;
    }
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002c7958:
    puVar10 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar16 + 0x28);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002c79fc;
    }
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002c79fc:
    puVar10 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar16 + 0x2c);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002c7aa0;
    }
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002c7aa0:
    puVar10 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar16 + 0x30);
  *(undefined8 *)(puVar1 + iVar5) = *(undefined8 *)(puVar2 + iVar5);
  *(undefined1 *)((long)(puVar1 + iVar5) + 8) = *(undefined1 *)((long)(puVar2 + iVar5) + 8);
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x34));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x34)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x34));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x38));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x38)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x38));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *puVar1 = *puVar2;
  lVar16 = 0;
  FUN_1002bd9c0();
  (*pcVar15)(puVar1 + *(int *)(lVar16 + 0x14),puVar2 + *(int *)(lVar16 + 0x14),DVar7.unknown);
  iVar5 = *(int *)(lVar16 + 0x18);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002c7bd0;
    }
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002c7bd0:
    puVar10 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  (*pcVar15)(puVar1 + *(int *)(lVar16 + 0x1c),puVar2 + *(int *)(lVar16 + 0x1c),DVar7.unknown);
  iVar5 = *(int *)(lVar16 + 0x20);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002c7c8c;
    }
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002c7c8c:
    puVar10 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x24));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x24)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x24));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x28));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x28)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x28));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar1[*(int *)(lVar16 + 0x2c)] = puVar2[*(int *)(lVar16 + 0x2c)];
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  uVar8 = *param_2;
  uVar21 = param_2[3];
  uVar6 = param_2[2];
  puVar3[1] = param_2[1];
  *puVar3 = uVar8;
  puVar3[3] = uVar21;
  puVar3[2] = uVar6;
  lVar13 = 0;
  FUN_1002bdad0();
  puVar1 = (undefined1 *)((long)puVar3 + (long)*(int *)(lVar13 + 0x20));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(lVar13 + 0x20));
  lVar13 = *(long *)(lVar16 + -8);
  pcVar18 = *(code **)(lVar13 + 0x30);
  puVar11 = puVar1;
  (*pcVar18)(puVar1,1,lVar16);
  puVar12 = puVar2;
  (*pcVar18)(puVar2,1,lVar16);
  if ((int)puVar11 != 0) {
    if ((int)puVar12 == 0) {
      *puVar1 = *puVar2;
      pcVar15 = *(code **)(lVar14 + 0x20);
      (*pcVar15)(puVar1 + *(int *)(lVar16 + 0x14),puVar2 + *(int *)(lVar16 + 0x14),DVar7.unknown);
      iVar5 = *(int *)(lVar16 + 0x18);
      puVar11 = puVar2 + iVar5;
      (*pcVar20)(puVar11,1,DVar7.unknown);
      if ((int)puVar11 == 0) {
        (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
        (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
      }
      else {
        puVar10 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
      }
      (*pcVar15)(puVar1 + *(int *)(lVar16 + 0x1c),puVar2 + *(int *)(lVar16 + 0x1c),DVar7.unknown);
      iVar5 = *(int *)(lVar16 + 0x20);
      puVar11 = puVar2 + iVar5;
      (*pcVar20)(puVar11,1,DVar7.unknown);
      if ((int)puVar11 == 0) {
        (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
        (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
      }
      else {
        puVar10 = &DAT_100fb7f78;
        FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
        _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
      }
      iVar5 = *(int *)(lVar16 + 0x24);
      uVar8 = *(undefined8 *)(puVar2 + iVar5);
      *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
      *(undefined8 *)(puVar1 + iVar5) = uVar8;
      iVar5 = *(int *)(lVar16 + 0x28);
      uVar8 = *(undefined8 *)(puVar2 + iVar5);
      *(undefined8 *)((long)(puVar1 + iVar5) + 8) = *(undefined8 *)((long)(puVar2 + iVar5) + 8);
      *(undefined8 *)(puVar1 + iVar5) = uVar8;
      puVar1[*(int *)(lVar16 + 0x2c)] = puVar2[*(int *)(lVar16 + 0x2c)];
      (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar16);
      return param_1;
    }
LAB_1002c7dd0:
    puVar10 = &DAT_100fbc110;
    FUN_1000037f0(&DAT_100fbc110,&DAT_100c3c9d8);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    return param_1;
  }
  if ((int)puVar12 != 0) {
    FUN_10005241c(puVar1,FUN_1002bd9c0);
    goto LAB_1002c7dd0;
  }
  *puVar1 = *puVar2;
  (*pcVar15)(puVar1 + *(int *)(lVar16 + 0x14),puVar2 + *(int *)(lVar16 + 0x14),DVar7.unknown);
  iVar5 = *(int *)(lVar16 + 0x18);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 != 0) {
      (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002c8044;
    }
    (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002c8044:
    puVar10 = &DAT_100fb7f78;
    FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  (*pcVar15)(puVar1 + *(int *)(lVar16 + 0x1c),puVar2 + *(int *)(lVar16 + 0x1c),DVar7.unknown);
  iVar5 = *(int *)(lVar16 + 0x20);
  puVar11 = puVar1 + iVar5;
  (*pcVar20)(puVar11,1,DVar7.unknown);
  puVar12 = puVar2 + iVar5;
  (*pcVar20)(puVar12,1,DVar7.unknown);
  if ((int)puVar11 == 0) {
    if ((int)puVar12 == 0) {
      (*pcVar15)(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
      goto LAB_1002c8120;
    }
    (**(code **)(lVar14 + 8))(puVar1 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar12 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
    goto LAB_1002c8120;
  }
  puVar10 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_1002c8120:
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x24));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x24)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x24));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar16 + 0x28));
  uVar8 = *(undefined8 *)((long)(puVar2 + *(int *)(lVar16 + 0x28)) + 8);
  uVar6 = puVar3[1];
  *puVar3 = *(undefined8 *)(puVar2 + *(int *)(lVar16 + 0x28));
  puVar3[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  puVar1[*(int *)(lVar16 + 0x2c)] = puVar2[*(int *)(lVar16 + 0x2c)];
  return param_1;
}



/* Address: 0x1002c81b8 | FUN_1002c81b8 */

void FUN_1002c81b8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002c81c4 | FUN_1002c81c4 */

ulong FUN_1002c81c4(long param_1,undefined8 param_2,long param_3)

{
  Date DVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = (int)param_2;
  if (iVar2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  if (iVar2 == *(int *)(lVar4 + 0x54)) {
    lVar5 = (long)*(int *)(param_3 + 0x14);
  }
  else {
    DVar1.unknown = &DAT_100fbbac0;
    FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
    lVar4 = *(long *)(DVar1.unknown + -8);
    if (iVar2 == *(int *)(lVar4 + 0x54)) {
      lVar5 = (long)*(int *)(param_3 + 0x1c);
    }
    else {
      DVar1.unknown = (undefined *)0x0;
      FUN_100245f3c();
      lVar4 = *(long *)(DVar1.unknown + -8);
      if (iVar2 == *(int *)(lVar4 + 0x54)) {
        lVar5 = (long)*(int *)(param_3 + 0x20);
      }
      else {
        DVar1.unknown = (undefined *)0x0;
        FUN_100245ed8();
        lVar4 = *(long *)(DVar1.unknown + -8);
        if (iVar2 == *(int *)(lVar4 + 0x54)) {
          lVar5 = (long)*(int *)(param_3 + 0x2c);
        }
        else {
          DVar1.unknown = (undefined *)0x0;
          FUN_1002bd9c0();
          lVar4 = *(long *)(DVar1.unknown + -8);
          if (iVar2 == *(int *)(lVar4 + 0x54)) {
            lVar5 = (long)*(int *)(param_3 + 0x30);
          }
          else {
            DVar1.unknown = (undefined *)0x0;
            FUN_1002bdad0();
            lVar4 = *(long *)(DVar1.unknown + -8);
            lVar5 = (long)*(int *)(param_3 + 0x34);
          }
        }
      }
    }
  }
  uVar3 = param_1 + lVar5;
                    /* WARNING: Could not recover jumptable at 0x0001002c82fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,DVar1.unknown);
  return uVar3;
}



/* Address: 0x1002c8300 | FUN_1002c8300 */

void FUN_1002c8300(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002c830c | FUN_1002c830c */

void FUN_1002c830c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar2 = *(long *)(DVar1.unknown + -8);
  if (param_3 == *(int *)(lVar2 + 0x54)) {
    lVar3 = (long)*(int *)(param_4 + 0x14);
  }
  else {
    DVar1.unknown = &DAT_100fbbac0;
    FUN_1000037f0(&DAT_100fbbac0,&DAT_100c3c5f8);
    lVar2 = *(long *)(DVar1.unknown + -8);
    if (param_3 == *(int *)(lVar2 + 0x54)) {
      lVar3 = (long)*(int *)(param_4 + 0x1c);
    }
    else {
      DVar1.unknown = (undefined *)0x0;
      FUN_100245f3c();
      lVar2 = *(long *)(DVar1.unknown + -8);
      if (param_3 == *(int *)(lVar2 + 0x54)) {
        lVar3 = (long)*(int *)(param_4 + 0x20);
      }
      else {
        DVar1.unknown = (undefined *)0x0;
        FUN_100245ed8();
        lVar2 = *(long *)(DVar1.unknown + -8);
        if (param_3 == *(int *)(lVar2 + 0x54)) {
          lVar3 = (long)*(int *)(param_4 + 0x2c);
        }
        else {
          DVar1.unknown = (undefined *)0x0;
          FUN_1002bd9c0();
          lVar2 = *(long *)(DVar1.unknown + -8);
          if (param_3 == *(int *)(lVar2 + 0x54)) {
            lVar3 = (long)*(int *)(param_4 + 0x30);
          }
          else {
            DVar1.unknown = (undefined *)0x0;
            FUN_1002bdad0();
            lVar2 = *(long *)(DVar1.unknown + -8);
            lVar3 = (long)*(int *)(param_4 + 0x34);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002c8440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_1 + lVar3,param_2,param_2,DVar1.unknown);
  return;
}



/* Address: 0x1002c8444 | FUN_1002c8444 */

void FUN_1002c8444(long param_1,ulong param_2)

{
  Date DVar1;
  long lVar2;
  undefined *local_70;
  long local_68;
  undefined *puStack_60;
  long local_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_70 = &DAT_100c3cc48;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_68 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_60 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    lVar2 = 0x13f;
    FUN_1002c8568();
    if (param_2 < 0x40) {
      local_58 = *(long *)(lVar2 + -8) + 0x40;
      lVar2 = 0x13f;
      FUN_100245f3c();
      if (param_2 < 0x40) {
        local_50 = *(long *)(lVar2 + -8) + 0x40;
        puStack_48 = &DAT_100c3cc60;
        local_40 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
        lVar2 = 0x13f;
        FUN_100245ed8();
        if (param_2 < 0x40) {
          local_38 = *(long *)(lVar2 + -8) + 0x40;
          lVar2 = 0x13f;
          FUN_1002bd9c0();
          if (param_2 < 0x40) {
            local_30 = *(long *)(lVar2 + -8) + 0x40;
            lVar2 = 0x13f;
            FUN_1002bdad0();
            if (param_2 < 0x40) {
              local_28 = *(long *)(lVar2 + -8) + 0x40;
              _swift_initStructMetadata(param_1,0x100,10,&local_70,param_1 + 0x10);
            }
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x1002c8568 | FUN_1002c8568 */

void FUN_1002c8568(void)

{
  Optional OVar1;
  Storefront SVar2;
  undefined7 extraout_var;
  
  if (DAT_100fbc2f8 == 0) {
    SVar2 = StoreKit::Storefront::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (SVar2.unknown == (undefined *)0x0) {
      DAT_100fbc2f8 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1002c85bc | thunk_FUN_1002c18c8 */

void thunk_FUN_1002c18c8(void)

{
  FUN_1002c18c8();
  return;
}



/* Address: 0x1002c85c0 | thunk_FUN_1002c170c */

void thunk_FUN_1002c170c(void)

{
  FUN_1002c170c();
  return;
}



/* Address: 0x1002c85c4 | FUN_1002c85c4 */

void FUN_1002c85c4(undefined8 param_1,long param_2)

{
  URL UVar1;
  URL UVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (DAT_100fb81b8 != -1) {
    _swift_once(&DAT_100fb81b8,FUN_100247e58);
  }
  UVar2 = UVar1;
  FUN_1000cd990(UVar1.unknown,&DAT_1010578c8);
  (**(code **)(lVar4 + 0x10))(puVar3,UVar2.unknown,UVar1.unknown);
  (**(code **)(*(long *)(param_2 + 8) + 8))(puVar3,param_1);
  (**(code **)(lVar4 + 8))(puVar3,UVar1.unknown);
  return;
}



/* Address: 0x1002c86a0 | FUN_1002c86a0 */

void FUN_1002c86a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1001ad0d8(param_1,param_2,&PTR_PTR_100ebe0c0,param_3);
  return;
}



/* Address: 0x1002c86b0 | thunk_FUN_1002c85c4 */

void thunk_FUN_1002c85c4(void)

{
  FUN_1002c85c4();
  return;
}



/* Address: 0x1002c86b4 | FUN_1002c86b4 */

void FUN_1002c86b4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c3ccf8;
    local_28 = &DAT_100c3ccf8;
    _swift_initStructMetadata(param_1,0,4,&local_40,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1002c873c | FUN_1002c873c */

long * FUN_1002c873c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar4 = *(long *)(lVar8 + -8);
  uVar2 = *(uint *)(lVar4 + 0x50);
  uVar6 = (ulong)uVar2 & 0xff;
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  lVar3 = *param_2;
  *param_1 = lVar3;
  if (((uint)uVar6 < 8 && (uVar2 & 0x100000) == 0) &&
      (lVar1 + (uVar6 + 8 & (uVar6 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x20 < 0x19) {
    uVar9 = (long)param_1 + uVar6 + 8 & ~uVar6;
    uVar6 = (long)param_2 + uVar6 + 8 & ~uVar6;
    pcVar10 = *(code **)(lVar4 + 0x10);
    _swift_retain();
    (*pcVar10)(uVar9,uVar6,lVar8);
    puVar5 = (undefined8 *)(lVar1 + uVar9 & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)(lVar1 + uVar6 & 0xfffffffffffffff8);
    *puVar5 = *puVar7;
    puVar5[1] = puVar7[1];
    puVar5[2] = puVar7[2];
    lVar3 = puVar7[3];
    puVar5[3] = lVar3;
    _swift_retain();
  }
  else {
    param_1 = (long *)(lVar3 + ((ulong)((uint)uVar6 & 0xf8 ^ 0x1f8) & uVar6 + 0x10));
  }
  _swift_retain(lVar3);
  return param_1;
}



/* Address: 0x1002c8854 | FUN_1002c8854 */

void FUN_1002c8854(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  _swift_release(*param_1);
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar1 = (long)param_1 + (ulong)*(byte *)(lVar2 + 0x50) + 8 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar2 + 8))(uVar1);
  uVar1 = *(long *)(lVar2 + 0x40) + uVar1 + 7 & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar1 + 8));
  _swift_release(*(undefined8 *)(uVar1 + 0x18));
  return;
}



/* Address: 0x1002c88cc | FUN_1002c88cc */

undefined8 * FUN_1002c88cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  
  *param_1 = *param_2;
  lVar4 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  uVar1 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar1 + 8 + (long)param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar1 + 8 + (long)param_2 & (uVar1 ^ 0xffffffffffffffff);
  pcVar8 = *(code **)(lVar7 + 0x10);
  _swift_retain();
  (*pcVar8)(uVar6,uVar1,lVar4);
  lVar4 = *(long *)(lVar7 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + uVar6 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + uVar1 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  puVar3[2] = puVar2[2];
  uVar5 = puVar2[3];
  puVar3[3] = uVar5;
  _swift_retain();
  _swift_retain(uVar5);
  return param_1;
}



/* Address: 0x1002c8990 | FUN_1002c8990 */

undefined8 * FUN_1002c8990(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar4);
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar1 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar2 = uVar1 + 8 + (long)param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar1 + 8 + (long)param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x18))(uVar2,uVar1);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar6 = (undefined8 *)(lVar5 + uVar2 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar5 + uVar1 & 0xfffffffffffffff8);
  *puVar6 = *puVar3;
  uVar4 = puVar6[1];
  puVar6[1] = puVar3[1];
  _swift_retain();
  _swift_release(uVar4);
  puVar6[2] = puVar3[2];
  uVar4 = puVar6[3];
  puVar6[3] = puVar3[3];
  _swift_retain();
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x1002c8a70 | FUN_1002c8a70 */

undefined8 * FUN_1002c8a70(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar1 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar4 = uVar1 + 8 + (long)param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar1 = uVar1 + 8 + (long)param_2 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x20))(uVar4,uVar1);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar5 + uVar4 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar5 + uVar1 & 0xfffffffffffffff8);
  uVar6 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  uVar6 = puVar2[2];
  puVar3[3] = puVar2[3];
  puVar3[2] = uVar6;
  return param_1;
}



/* Address: 0x1002c8b00 | FUN_1002c8b00 */

undefined8 * FUN_1002c8b00(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar3 = uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 0x28))(uVar3,uVar2);
  lVar6 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar6 + uVar3 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar6 + uVar2 & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  uVar1 = puVar4[1];
  puVar4[1] = puVar5[1];
  _swift_release(uVar1);
  puVar4[2] = puVar5[2];
  uVar1 = puVar4[3];
  puVar4[3] = puVar5[3];
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1002c8bc8 | FUN_1002c8bc8 */

ulong FUN_1002c8bc8(ulong *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar6 = *(uint *)(lVar8 + 0x54);
  uVar3 = uVar6;
  if (uVar6 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar1 = (*(long *)(lVar8 + 0x40) + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + 7 &
            0xfffffffffffffff8) + 0x20;
    uVar2 = uVar1 & 0xfffffff8;
    uVar7 = (uint)uVar2;
    uVar10 = 2;
    uVar5 = uVar10;
    if (uVar2 == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar10 = 4;
    }
    if (uVar5 < 0x100) {
      uVar10 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar10;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_1002c8c70;
    }
    else if (uVar4 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_1002c8c70:
        uVar10 = uVar10 - 1;
        if (uVar2 != 0) {
          uVar10 = 0;
          uVar7 = (uint)*param_1;
        }
        return (ulong)(uVar3 + (uVar7 | uVar10) + 1);
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar1);
      if (uVar10 != 0) goto LAB_1002c8c70;
    }
  }
  if (-1 < (int)uVar6) {
    uVar9 = *param_1;
    if (0xfffffffe < uVar9) {
      uVar9 = 0xffffffff;
    }
    return (ulong)((int)uVar9 + 1);
  }
  uVar9 = (long)param_1 + uVar9 + 8 & ~uVar9;
                    /* WARNING: Could not recover jumptable at 0x0001002c8ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x30))(uVar9);
  return uVar9;
}



/* Address: 0x1002c8cd0 | FUN_1002c8cd0 */

void FUN_1002c8cd0(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar6 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  sVar1 = (*(long *)(lVar6 + 0x40) + (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + 7 &
          0xfffffffffffffff8) + 0x20;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar9 = 0;
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) goto LAB_1002c8d84;
  }
  else {
    uVar8 = 2;
    uVar3 = uVar8;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar2) + 1;
    }
    if (0xffff < uVar3) {
      uVar8 = 4;
    }
    if (uVar3 < 0x100) {
      uVar8 = 1;
    }
    uVar9 = 0;
    if (1 < uVar3) {
      uVar9 = uVar8;
    }
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) {
LAB_1002c8d84:
      if ((int)sVar1 != 0) {
        iVar5 = 1;
        _bzero(param_1,sVar1);
        *(uint *)param_1 = param_2 + ~uVar2;
      }
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
        return;
      }
      if (uVar9 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar5;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar5;
      return;
    }
  }
  if (uVar9 < 2) {
    if (uVar9 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar9 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002c8e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x38))((long)param_1 + uVar7 + 8 & ~uVar7);
      return;
    }
    if ((int)param_2 < 0) {
      param_2 = param_2 & 0x7fffffff;
    }
    else {
      param_2 = param_2 - 1;
    }
    *param_1 = (ulong)param_2;
  }
  return;
}



/* Address: 0x1002c8e48 | FUN_1002c8e48 */

void FUN_1002c8e48(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1002c8e54 | FUN_1002c8e54 */

void FUN_1002c8e54(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance2(&local_20,&DAT_100caaea8,1);
  return;
}



/* Address: 0x1002c8e88 | FUN_1002c8e88 */

void FUN_1002c8e88(undefined8 param_1,long param_2)

{
  ModifiedContent MVar1;
  VStack VVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  TupleView TVar6;
  ZStack ZVar7;
  ZStack ZVar8;
  Alignment alignment;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  uVar13 = *(undefined8 *)(param_2 + 0x18);
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  local_70 = uVar13;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_70);
  VVar2 = SwiftUI::VStack::typeMetadataAccessor();
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar3 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar2.unknown);
  puStack_78 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  local_80 = puVar3;
  _swift_getWitnessTable(puVar4,MVar1.unknown,&local_80);
  uVar5 = 0xff;
  FUN_10020e070(0xff,MVar1.unknown,puVar4);
  puVar4 = &DAT_100fbc3c8;
  FUN_100005c24(&DAT_100fbc3c8,&DAT_100c3cd70);
  _swift_getTupleTypeMetadata2(0xff,uVar5,puVar4,0,0);
  TVar6 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar6.unknown);
  ZVar7 = SwiftUI::ZStack::typeMetadataAccessor();
  lVar14 = *(long *)(ZVar7.unknown + -8);
  ZVar8 = ZVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar11 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = (long)puVar11 - extraout_x12;
  alignment = SwiftUI::Alignment::get_top(ZVar8.unknown);
  local_a0 = uVar9;
  uStack_98 = uVar13;
  SwiftUI::ZStack::_init(alignment);
  puVar4 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958,ZVar7.unknown);
  thunk_FUN_10003cc94(lVar12,puVar11,ZVar7.unknown,puVar4);
  pcVar10 = *(code **)(lVar14 + 8);
  (*pcVar10)(puVar11,ZVar7.unknown);
  thunk_FUN_10003cc94(param_1,lVar12,ZVar7.unknown,puVar4);
  (*pcVar10)(lVar12,ZVar7.unknown);
  return;
}



/* Address: 0x1002c90ac | FUN_1002c90ac */

void FUN_1002c90ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  long lVar4;
  ModifiedContent MVar5;
  VStack VVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  MainActor *pMVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  Set SVar14;
  Set SVar15;
  Set SVar16;
  TargetProtocolConformanceDescriptor *pTVar17;
  State SVar18;
  void *pvVar19;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar20;
  long lVar21;
  long extraout_x12;
  long lVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  String SVar27;
  undefined auStack_140 [8];
  undefined *local_138;
  TargetProtocolConformanceDescriptor *local_130;
  long local_128;
  long local_120;
  MainActor *local_118;
  LocalizedStringResource local_110;
  long local_108;
  long local_100;
  undefined8 local_f8;
  TargetProtocolConformanceDescriptor *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  char **local_c8;
  char *local_c0;
  void *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  
  local_100 = param_2;
  local_f8 = param_1;
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar4 = 0;
  local_110.unknown = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1002c8e48(0,param_3,param_4);
  lVar23 = *(long *)(lVar4 + -8);
  lVar22 = *(long *)(lVar23 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar22 + 0xfU & 0xfffffffffffffff0);
  lVar25 = (long)(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar8 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_80 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  local_88 = param_4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar5.unknown,&local_88);
  VVar6 = SwiftUI::VStack::typeMetadataAccessor();
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar7 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar6.unknown);
  puStack_90 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  local_98 = puVar7;
  _swift_getWitnessTable(puVar8,MVar5.unknown,&local_98);
  lVar9 = 0;
  local_138 = puVar8;
  local_130 = (TargetProtocolConformanceDescriptor *)MVar5;
  FUN_10020e070(0,MVar5.unknown);
  local_128 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_128 + 0x40));
  lVar21 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_120 = lVar21 - extraout_x12;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  pMVar11 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  pMVar10 = pMVar11;
  FUN_100270a58();
  local_118 = pMVar11;
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PaywallContentContanier.swift",0x34,1,0xf,UVar12.unknown,
               pMVar10);
  }
  lVar2 = local_100;
  local_a0 = local_100;
  local_b0 = param_3;
  local_a8 = param_4;
  (**(code **)(lVar23 + 0x10))(lVar25,local_100,lVar4);
  uVar20 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar26 = uVar20 + 0x20 & (uVar20 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100ec6d68;
  _swift_allocObject(&DAT_100ec6d68,uVar26 + lVar22,uVar20 | 7);
  *(undefined8 *)(puVar8 + 0x10) = param_3;
  *(undefined8 *)(puVar8 + 0x18) = param_4;
  SVar14.unknown = puVar8 + uVar26;
  (**(code **)(lVar23 + 0x20))(SVar14.unknown,lVar25,lVar4);
  SVar14 = SwiftUI::Axis::Set::get_vertical(SVar14);
  SVar15 = SwiftUI::Axis::Set::init(0);
  SVar16 = SwiftUI::Axis::Set::init((byte)SVar14.unknown);
  SwiftUI::Axis::Set::init((byte)SVar16.unknown & (byte)SVar15.unknown);
  SVar14 = SwiftUI::Axis::Set::init((byte)SVar15.unknown | (byte)SVar14.unknown);
  lVar23 = local_108;
  FUN_10020dfe4(local_108,SVar14.unknown,1,FUN_1002c9a00,&local_c0,FUN_1002c9ab4,puVar8,local_130,
                local_138);
  pTVar17 = &TargetProtocolConformanceDescriptor_100c362b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c362b8,lVar9);
  lVar22 = local_120;
  local_130 = pTVar17;
  thunk_FUN_10003cc94(local_120,lVar23,lVar9,pTVar17);
  lVar21 = local_128;
  pcVar24 = *(code **)(local_128 + 8);
  (*pcVar24)(lVar23,lVar9);
  LVar3.unknown = local_110.unknown;
  FUN_1001cbdd4(local_110.unknown);
  SVar27 = (extension_Foundation)::Swift::String::init(LVar3);
  pvVar19 = SVar27.bridgeObject;
  local_110.unknown = SVar27.str;
  plVar1 = (long *)(lVar2 + *(int *)(lVar4 + 0x28));
  local_d0 = *plVar1;
  local_c8 = (char **)plVar1[1];
  SVar18.unknown = &DAT_100fb9f40;
  FUN_1000037f0(&DAT_100fb9f40,&DAT_100c3aff0);
  SwiftUI::State::get_wrappedValue(SVar18);
  plVar1 = (long *)(lVar2 + *(int *)(lVar4 + 0x2c));
  local_d0 = *plVar1;
  local_c8 = (char **)plVar1[1];
  SwiftUI::State::get_wrappedValue(SVar18);
  (**(code **)(lVar21 + 0x10))(lVar23,lVar22,lVar9);
  local_c0 = local_110.unknown;
  local_a8 = local_e0;
  local_c8 = &local_c0;
  local_d0 = lVar23;
  local_b8 = pvVar19;
  _swift_bridgeObjectRetain(pvVar19);
  puVar8 = &DAT_100fbc3c8;
  local_e0 = lVar9;
  FUN_1000037f0(&DAT_100fbc3c8,&DAT_100c3cd70);
  local_f0 = local_130;
  local_d8 = puVar8;
  FUN_1002c9b1c();
  local_e8 = puVar8;
  FUN_10003cad4(local_f8,&local_d0,2,&local_e0,&local_f0);
  _swift_bridgeObjectRelease(pvVar19);
  (*pcVar24)(lVar22,lVar9);
  _swift_bridgeObjectRelease(local_b8);
  (*pcVar24)(lVar23,lVar9);
  _swift_release(local_118);
  return;
}



/* Address: 0x1002c9528 | FUN_1002c9528 */

void FUN_1002c9528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ModifiedContent MVar1;
  VStack VVar2;
  ModifiedContent MVar3;
  HorizontalAlignment alignment;
  VStack<undefined> VVar4;
  Alignment AVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 auStack_f0 [4];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined *puStack_68;
  
  local_c8 = param_2;
  local_b8 = param_1;
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  local_70 = param_4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_70);
  VVar2 = SwiftUI::VStack::typeMetadataAccessor();
  lVar12 = *(long *)(VVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_c0 = *(long *)(MVar3.unknown + -8);
  MVar1 = MVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  lVar11 = (long)(auStack_d0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar11 - extraout_x12;
  local_80 = local_c8;
  local_90 = param_3;
  uStack_88 = param_4;
  alignment = SwiftUI::HorizontalAlignment::get_center(MVar1.unknown);
  uVar8 = 0;
  VVar4 = SwiftUI::VStack::_init(alignment);
  AVar5 = SwiftUI::Alignment::get_center(VVar4.unknown);
  puVar6 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar2.unknown);
  *(undefined **)(lVar10 + -0x10) = VVar2.unknown;
  *(undefined **)(lVar10 + -8) = puVar6;
  *(undefined **)(lVar10 + -0x20) = AVar5.unknown;
  *(undefined8 *)(lVar10 + -0x18) = uVar8;
  *(undefined1 *)(lVar10 + -0x28) = 1;
  *(undefined8 *)(lVar10 + -0x30) = 0;
  *(undefined1 *)(lVar10 + -0x38) = 1;
  *(undefined8 *)(lVar10 + -0x40) = 0;
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x0);
  (**(code **)(lVar12 + 8))(auStack_d0 + -extraout_x8,VVar2.unknown);
  puStack_a8 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar7 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_b0 = puVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar3.unknown,&local_b0);
  thunk_FUN_10003cc94(lVar10,lVar11,MVar3.unknown,puVar7);
  pcVar9 = *(code **)(local_c0 + 8);
  (*pcVar9)(lVar11,MVar3.unknown);
  thunk_FUN_10003cc94(local_b8,lVar10,MVar3.unknown,puVar7);
  (*pcVar9)(lVar10,MVar3.unknown);
  return;
}



/* Address: 0x1002c976c | FUN_1002c976c */

void FUN_1002c976c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ModifiedContent MVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Alignment AVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  local_78 = param_1;
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  lVar8 = *(long *)(MVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar11 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)puVar11 - extraout_x12;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PaywallContentContanier.swift",0x34,1,0x11,UVar4.unknown,
               pMVar2);
  }
  AVar6.unknown = (undefined *)0x0;
  FUN_1002c8e48(0,param_3,param_4);
  SwiftUI::Alignment::get_center(AVar6);
  (extension_SwiftUI)::SwiftUI::View::_frame((Alignment)0x4079000000000000);
  puStack_68 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar7 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = param_4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_70);
  thunk_FUN_10003cc94(lVar10,puVar11,MVar1.unknown,puVar7);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(puVar11,MVar1.unknown);
  thunk_FUN_10003cc94(local_78,lVar10,MVar1.unknown,puVar7);
  (*pcVar9)(lVar10,MVar1.unknown);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1002c9928 | FUN_1002c9928 */

void FUN_1002c9928(undefined8 param_1,double param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double local_58;
  
  param_2 = param_2 / -10.0;
  dVar4 = 0.0;
  if (0.0 < param_2 + -2.0) {
    dVar4 = param_2 + -2.0;
  }
  dVar5 = 1.0;
  if (dVar4 <= 1.0) {
    dVar5 = dVar4;
  }
  lVar2 = 0;
  FUN_1002c8e48();
  iVar1 = *(int *)(lVar2 + 0x28);
  puVar3 = &DAT_100fb9f40;
  local_58 = dVar5;
  FUN_1000037f0(&DAT_100fb9f40,&DAT_100c3aff0);
  SwiftUI::State::set_wrappedValue((State *)(param_3 + iVar1),&local_58,puVar3);
  dVar4 = 0.0;
  if (0.0 < param_2) {
    dVar4 = param_2;
  }
  local_58 = 1.0;
  if (dVar4 <= 1.0) {
    local_58 = dVar4;
  }
  SwiftUI::State::set_wrappedValue((State *)(param_3 + *(int *)(lVar2 + 0x2c)),&local_58,puVar3);
  return;
}



/* Address: 0x1002c99f0 | thunk_FUN_1002c8e88 */

void thunk_FUN_1002c8e88(void)

{
  FUN_1002c8e88();
  return;
}



/* Address: 0x1002c99f4 | FUN_1002c99f4 */

void FUN_1002c99f4(void)

{
  long unaff_x20;
  
  FUN_1002c90ac(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1002c9a00 | FUN_1002c9a00 */

void FUN_1002c9a00(void)

{
  long unaff_x20;
  
  FUN_1002c9528(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1002c9a0c | FUN_1002c9a0c */

void FUN_1002c9a0c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = 0;
  FUN_1002c8e48(0,lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)));
  _swift_release(*puVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)puVar1 + (long)*(int *)(lVar3 + 0x24),lVar2);
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x28) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar3 + 0x2c) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002c9ab4 | FUN_1002c9ab4 */

void FUN_1002c9ab4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_1002c8e48(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_1002c9928(param_1,param_2,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,
                uVar2);
  return;
}



/* Address: 0x1002c9b1c | FUN_1002c9b1c */

void FUN_1002c9b1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbc3d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbc3c8;
  FUN_100005c24(&DAT_100fbc3c8,&DAT_100c3cd70);
  puVar2 = puVar1;
  FUN_1002c9b94();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa8b0
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbc3d0 = puVar3;
  return;
}



/* Address: 0x1002c9b94 | FUN_1002c9b94 */

void FUN_1002c9b94(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbc3d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3cd8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3cd8c,&DAT_100ec6de8);
  DAT_100fbc3d8 = pTVar1;
  return;
}



/* Address: 0x1002c9bd4 | FUN_1002c9bd4 */

void FUN_1002c9bd4(void)

{
  long unaff_x20;
  
  FUN_1002c976c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1002c9be0 | thunk_FUN_1002c9be4 */

undefined8 * thunk_FUN_1002c9be4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1002c9be4 | FUN_1002c9be4 */

undefined8 * FUN_1002c9be4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1002c9c18 | FUN_1002c9c18 */

undefined8 * FUN_1002c9c18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1002c9c6c | FUN_1002c9c6c */

undefined8 * FUN_1002c9c6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1002c9ca8 | FUN_1002c9ca8 */

undefined1  [16] FUN_1002c9ca8(void)

{
  return ZEXT816(0x100ec6de8);
}



/* Address: 0x1002c9cb8 | FUN_1002c9cb8 */

void FUN_1002c9cb8(long param_1)

{
  ModifiedContent MVar1;
  VStack VVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  TupleView TVar6;
  ZStack ZVar7;
  undefined *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_38 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  local_40 = uVar5;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar1.unknown,&local_40);
  VVar2 = SwiftUI::VStack::typeMetadataAccessor();
  MVar1 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar3 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar2.unknown);
  puStack_48 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  local_50 = puVar3;
  _swift_getWitnessTable(puVar4,MVar1.unknown,&local_50);
  uVar5 = 0xff;
  FUN_10020e070(0xff,MVar1.unknown,puVar4);
  puVar4 = &DAT_100fbc3c8;
  FUN_100005c24(&DAT_100fbc3c8,&DAT_100c3cd70);
  _swift_getTupleTypeMetadata2(0xff,uVar5,puVar4,0,0);
  TVar6 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar6.unknown);
  ZVar7 = SwiftUI::ZStack::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958,ZVar7.unknown);
  return;
}



/* Address: 0x1002c9df4 | FUN_1002c9df4 */

void FUN_1002c9df4(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caaedc,1);
  return;
}



/* Address: 0x1002c9e04 | FUN_1002c9e04 */

void FUN_1002c9e04(undefined8 *param_1,undefined8 param_2,Alignment param_3,undefined8 param_4)

{
  Alignment AVar1;
  Alignment AVar2;
  Set SVar3;
  undefined8 uVar4;
  undefined1 auStack_650 [176];
  undefined *local_5a0;
  undefined8 uStack_598;
  undefined *puStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined *local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined *local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined *local_410;
  undefined8 uStack_408;
  undefined *local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined *local_398;
  undefined8 local_390;
  undefined *local_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined *local_320;
  undefined8 uStack_318;
  undefined *puStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined *local_270;
  undefined8 uStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined *local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined1 local_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined *puStack_100;
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
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar4 = param_4;
  AVar1 = SwiftUI::Alignment::get_center(param_3);
  FUN_1002ca198(&local_110,param_2,param_3.unknown,param_4);
  uStack_4a8 = uStack_c8;
  local_4b0 = local_d0;
  uStack_498 = uStack_b8;
  uStack_4a0 = uStack_c0;
  local_490 = local_b0;
  uStack_4e8 = uStack_108;
  local_4f0 = local_110;
  uStack_4d8 = uStack_f8;
  uStack_4e0 = puStack_100;
  uStack_4c8 = uStack_e8;
  local_4d0 = local_f0;
  uStack_4b8 = uStack_d8;
  uStack_4c0 = uStack_e0;
  uStack_478 = uStack_108;
  local_480 = local_110;
  uStack_468 = uStack_f8;
  uStack_470 = puStack_100;
  uStack_458 = uStack_e8;
  local_460 = local_f0;
  uStack_448 = uStack_d8;
  uStack_450 = uStack_e0;
  uStack_438 = uStack_c8;
  local_440 = local_d0;
  uStack_428 = uStack_b8;
  uStack_430 = uStack_c0;
  local_420 = local_b0;
  FUN_100011090(&local_4f0,&local_1c0,&DAT_100fbc3e0,&DAT_100c3cde0);
  AVar2.unknown = (undefined *)&local_480;
  FUN_100005808(AVar2.unknown,&DAT_100fbc3e0,&DAT_100c3cde0);
  uStack_178 = uStack_4a8;
  local_180 = local_4b0;
  uStack_168 = uStack_498;
  local_170 = uStack_4a0;
  local_160 = local_490;
  uStack_1b8 = uStack_4e8;
  local_1c0 = local_4f0;
  uStack_1a8 = uStack_4d8;
  local_1b0 = (undefined *)uStack_4e0;
  uStack_188 = uStack_4b8;
  local_190 = uStack_4c0;
  uStack_198 = uStack_4c8;
  local_1a0 = local_4d0;
  SwiftUI::Alignment::get_center(AVar2);
  uStack_3b8 = uStack_178;
  local_3c0 = local_180;
  uStack_3a8 = uStack_168;
  local_3b0 = local_170;
  local_3a0 = local_160;
  uStack_3f8 = uStack_1b8;
  local_400 = local_1c0;
  uStack_3e8 = uStack_1a8;
  local_3f0 = local_1b0;
  uStack_3d8 = uStack_198;
  local_3e0 = local_1a0;
  uStack_3c8 = uStack_188;
  local_3d0 = local_190;
  local_410 = AVar1.unknown;
  uStack_408 = uVar4;
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  uStack_558 = uStack_3c8;
  local_560 = local_3d0;
  uStack_548 = uStack_3b8;
  uStack_550 = local_3c0;
  uStack_538 = uStack_3a8;
  local_540 = local_3b0;
  local_530 = local_3a0;
  uStack_598 = uStack_408;
  local_5a0 = local_410;
  uStack_588 = uStack_3f8;
  puStack_590 = local_400;
  uStack_578 = uStack_3e8;
  local_580 = local_3f0;
  uStack_568 = uStack_3d8;
  uStack_570 = local_3e0;
  uStack_340 = uStack_178;
  local_348 = local_180;
  uStack_330 = uStack_168;
  uStack_338 = local_170;
  local_328 = local_160;
  uStack_380 = uStack_1b8;
  local_388 = local_1c0;
  uStack_370 = uStack_1a8;
  uStack_378 = local_1b0;
  uStack_360 = uStack_198;
  local_368 = local_1a0;
  uStack_350 = uStack_188;
  uStack_358 = local_190;
  local_398 = AVar1.unknown;
  local_390 = uVar4;
  FUN_100011090(&local_410,&local_110,&DAT_100fbc3e8,&DAT_100c3cde8);
  SVar3.unknown = (undefined *)&local_398;
  FUN_100005808(SVar3.unknown,&DAT_100fbc3e8,&DAT_100c3cde8);
  SVar3 = SwiftUI::Edge::Set::get_top(SVar3);
  uStack_298 = uStack_518;
  local_2a0 = local_520;
  uStack_288 = uStack_508;
  uStack_290 = uStack_510;
  uStack_2d8 = uStack_558;
  local_2e0 = local_560;
  uStack_2c8 = uStack_548;
  uStack_2d0 = uStack_550;
  uStack_2b8 = uStack_538;
  local_2c0 = local_540;
  uStack_2a8 = uStack_528;
  uStack_2b0 = local_530;
  uStack_318 = uStack_598;
  local_320 = local_5a0;
  uStack_308 = uStack_588;
  puStack_310 = puStack_590;
  uStack_2f8 = uStack_578;
  local_300 = local_580;
  uStack_2e8 = uStack_568;
  uStack_2f0 = uStack_570;
  uStack_1e8 = uStack_518;
  local_1f0 = local_520;
  uStack_1d8 = uStack_508;
  local_1e0 = uStack_510;
  uStack_228 = uStack_558;
  local_230 = local_560;
  uStack_218 = uStack_548;
  local_220 = uStack_550;
  uStack_1f8 = uStack_528;
  local_200 = local_530;
  uStack_208 = uStack_538;
  local_210 = local_540;
  uStack_268 = uStack_598;
  local_270 = local_5a0;
  uStack_258 = uStack_588;
  puStack_260 = puStack_590;
  local_280 = local_500;
  local_1d0 = local_500;
  uStack_238 = uStack_568;
  local_240 = uStack_570;
  uStack_248 = uStack_578;
  local_250 = local_580;
  FUN_100011090(&local_320,&local_110,&DAT_100fbc3f0,&DAT_100c3cdf0);
  FUN_100005808(&local_270,&DAT_100fbc3f0,&DAT_100c3cdf0);
  uStack_138 = uStack_518;
  local_140 = local_520;
  uStack_128 = (undefined1)uStack_508;
  uStack_127 = (undefined7)((ulong)uStack_508 >> 8);
  local_130 = uStack_510;
  uStack_178 = uStack_558;
  local_180 = local_560;
  uStack_168 = uStack_548;
  local_170 = uStack_550;
  uStack_148 = uStack_528;
  local_150 = local_530;
  uStack_158 = uStack_538;
  local_160 = local_540;
  uStack_1b8 = uStack_598;
  local_1c0 = local_5a0;
  uStack_1a8 = uStack_588;
  local_1b0 = puStack_590;
  uStack_188 = uStack_568;
  local_190 = uStack_570;
  uStack_198 = uStack_578;
  local_1a0 = local_580;
  uStack_88 = uStack_518;
  local_90 = local_520;
  uStack_78 = uStack_508;
  uStack_80 = uStack_510;
  uStack_c8 = uStack_558;
  local_d0 = local_560;
  uStack_b8 = uStack_548;
  uStack_c0 = uStack_550;
  uStack_a8 = uStack_538;
  local_b0 = local_540;
  uStack_98 = uStack_528;
  uStack_a0 = local_530;
  uStack_108 = uStack_598;
  local_110 = local_5a0;
  uStack_f8 = uStack_588;
  puStack_100 = puStack_590;
  local_120 = (undefined1)local_500;
  uStack_11f = (undefined7)((ulong)local_500 >> 8);
  local_118 = SUB81(SVar3.unknown,0);
  local_70 = local_500;
  uStack_e8 = uStack_578;
  local_f0 = local_580;
  uStack_d8 = uStack_568;
  uStack_e0 = uStack_570;
  local_68 = local_118;
  FUN_100011090(&local_1c0,auStack_650,&DAT_100fbc3f8,&DAT_100c3cdf8);
  FUN_100005808(&local_110,&DAT_100fbc3f8,&DAT_100c3cdf8);
  param_1[0x11] = uStack_138;
  param_1[0x10] = local_140;
  param_1[0x13] = CONCAT71(uStack_127,uStack_128);
  param_1[0x12] = local_130;
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(local_118,uStack_11f);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(local_120,uStack_127);
  param_1[9] = uStack_178;
  param_1[8] = local_180;
  param_1[0xb] = uStack_168;
  param_1[10] = local_170;
  param_1[0xd] = uStack_158;
  param_1[0xc] = local_160;
  param_1[0xf] = uStack_148;
  param_1[0xe] = local_150;
  param_1[1] = uStack_1b8;
  *param_1 = local_1c0;
  param_1[3] = uStack_1a8;
  param_1[2] = local_1b0;
  param_1[5] = uStack_198;
  param_1[4] = local_1a0;
  param_1[7] = uStack_188;
  param_1[6] = local_190;
  return;
}



/* Address: 0x1002ca198 | FUN_1002ca198 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002ca2a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002ca198(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  MainActor *this;
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  HorizontalAlignment HVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  Text TVar8;
  Font FVar9;
  Text TVar10;
  Color CVar11;
  Text TVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar1 = Swift::MainActor::get_shared(this,this);
  pMVar2 = pMVar1;
  FUN_100270a58();
  pMVar6 = pMVar2;
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "PasteLicensingAppStore/PaywallContentContanier.swift";
    param_6 = (undefined8 *)0x26;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PaywallContentContanier.swift",0x34,1,0x26,UVar3.unknown,
               pMVar6);
  }
  HVar5 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar4);
  pMVar6 = Swift::MainActor::get_shared(this,(MainActor *)HVar5.unknown);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar3 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar3.unknown & 1) == 0) {
    param_6 = (undefined8 *)0x27;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PaywallContentContanier.swift",0x34,1,0x27,UVar7.unknown,
               pMVar2);
  }
  _swift_release(pMVar6);
  FUN_1002538a0();
  _swift_bridgeObjectRetain(param_4);
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar8 = SwiftUI::Text::_init(pMVar6,PTR___type_metadata_for_Swift_String_100eac208,pMVar6);
  FVar9 = SwiftUI::Font::get_headline(TVar8.unknown);
  TVar14 = TVar8;
  puVar15 = puVar13;
  pMVar2 = pMVar6;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  _swift_release(FVar9.unknown);
  FUN_100016d74(TVar8.unknown,puVar13,pMVar6);
  _swift_bridgeObjectRelease();
  FUN_100218c68();
  CVar11 = SwiftUI::Color::init((NSColor *)*param_6);
  TVar8 = TVar10;
  puVar13 = TVar14.unknown;
  puVar16 = puVar15;
  TVar12 = SwiftUI::Text::_foregroundColor(CVar11.unknown);
  _swift_release(CVar11.unknown);
  FUN_100016d74(TVar10.unknown,TVar14.unknown,puVar15);
  _swift_bridgeObjectRelease(pMVar2);
  *param_1 = HVar5.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 1;
  param_1[3] = 3;
  param_1[5] = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0x3fe0000000000000;
  param_1[8] = TVar12.unknown;
  param_1[9] = TVar8.unknown;
  *(char *)(param_1 + 10) = (char)puVar13;
  param_1[0xb] = puVar16;
  param_1[0xc] = param_2;
  FUN_100016d5c(TVar12.unknown,TVar8.unknown,puVar13);
  _swift_bridgeObjectRetain(puVar16);
  FUN_100016d74(TVar12.unknown,TVar8.unknown,puVar13);
  _swift_release(pMVar1);
  _swift_bridgeObjectRelease(puVar16);
  return;
}



/* Address: 0x1002ca3f8 | FUN_1002ca3f8 */

void FUN_1002ca3f8(void)

{
  undefined8 *unaff_x20;
  
  FUN_1002c9e04(unaff_x20[2],*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1002ca404 | thunk_FUN_1002ca408 */

void thunk_FUN_1002ca408(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fbc400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbc3f8;
  FUN_100005c24(&DAT_100fbc3f8,&DAT_100c3cdf8);
  puVar2 = puVar1;
  FUN_1002ca480();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__SafeAreaIgnoringLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaf80
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fbc400 = puVar3;
  return;
}



/* Address: 0x1002ca408 | FUN_1002ca408 */

void FUN_1002ca408(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbc400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbc3f8;
  FUN_100005c24(&DAT_100fbc3f8,&DAT_100c3cdf8);
  puVar2 = puVar1;
  FUN_1002ca480();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__SafeAreaIgnoringLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaf80
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbc400 = puVar3;
  return;
}



/* Address: 0x1002ca480 | FUN_1002ca480 */

void FUN_1002ca480(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbc408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbc3f0;
  FUN_100005c24(&DAT_100fbc3f0,&DAT_100c3cdf0);
  puVar2 = puVar1;
  FUN_1002ca4f8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbc408 = puVar3;
  return;
}



/* Address: 0x1002ca4f8 | FUN_1002ca4f8 */

void FUN_1002ca4f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbc410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbc3e8;
  FUN_100005c24(&DAT_100fbc3e8,&DAT_100c3cde8);
  puVar2 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958,puVar1);
  DAT_100fbc410 = puVar2;
  return;
}



/* Address: 0x1002ca548 | thunk_FUN_1002c9be4 */

void thunk_FUN_1002c9be4(void)

{
  thunk_FUN_1002c9be4();
  return;
}



/* Address: 0x1002ca54c | FUN_1002ca54c */

void FUN_1002ca54c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c3ce00;
  _swift_getKeyPath(&DAT_100c3ce00);
  FUN_1000037f0(&DAT_100fbc418,&DAT_100c3d410);
  _swift_allocObject();
  FUN_1000da6e0(puVar1);
  return;
}



/* Address: 0x1002ca5a0 | FUN_1002ca5a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002ca5a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (DAT_100fbc5b8 != -1) {
    _swift_once(&DAT_100fbc5b8,FUN_1002cd57c);
  }
  _swift_beginAccess(&DAT_101057910,auStack_38,0,0);
  uVar1 = DAT_101057910;
  *param_1 = DAT_101057910;
  return uVar1;
}



/* Address: 0x1002ca610 | FUN_1002ca610 */

void FUN_1002ca610(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0x6769666e6f43,&DAT_e600000000000000);
  return;
}



/* Address: 0x1002ca654 | FUN_1002ca654 */

void FUN_1002ca654(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar4 = unaff_x20[4];
  uVar5 = unaff_x20[6];
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  local_60 = unaff_x20[6];
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_getAtKeyPath(param_1,&local_90,uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  return;
}


