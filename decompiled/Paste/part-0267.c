/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10033ae64 | FUN_10033ae64 */

void FUN_10033ae64(void)

{
  long unaff_x20;
  
  FUN_1003347c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),PTR___type_metadata_for_Swift_UInt64_100eade90);
  return;
}



/* Address: 0x10033ae88 | FUN_10033ae88 */

void FUN_10033ae88(void)

{
  long unaff_x20;
  
  FUN_1003344dc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10033aea4 | FUN_10033aea4 */

void FUN_10033aea4(void)

{
  long unaff_x20;
  
  FUN_1003348c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fc0660,
                &PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  return;
}



/* Address: 0x10033aed0 | FUN_10033aed0 */

void FUN_10033aed0(void)

{
  long unaff_x20;
  
  FUN_1003349c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fc0298,&DAT_100c42150,1);
  return;
}



/* Address: 0x10033af00 | FUN_10033af00 */

void FUN_10033af00(void)

{
  long unaff_x20;
  
  FUN_1003349c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fc0670,&DAT_100c42500,0);
  return;
}



/* Address: 0x10033af30 | FUN_10033af30 */

void FUN_10033af30(void)

{
  long unaff_x20;
  
  FUN_1003347c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),PTR___type_metadata_for_Swift_Int64_100eadc00);
  return;
}



/* Address: 0x10033af54 | FUN_10033af54 */

void FUN_10033af54(void)

{
  long unaff_x20;
  
  FUN_100334ad8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe698,&DAT_100c407a8,
                PTR_typeMetadataAccessor_100ea7480);
  return;
}



/* Address: 0x10033af88 | FUN_10033af88 */

void FUN_10033af88(void)

{
  long unaff_x20;
  
  FUN_1003346b4(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbf830,&DAT_100c40fb8);
  return;
}



/* Address: 0x10033afbc | FUN_10033afbc */

void FUN_10033afbc(void)

{
  long unaff_x20;
  
  FUN_1003345cc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10033afd8 | FUN_10033afd8 */

long * FUN_10033afd8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  Date DVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  URL UVar11;
  long lVar12;
  AttributedString AVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) != 0) {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar18 = (ulong)uVar5 & 0xff;
    _swift_retain();
    return (long *)(lVar8 + (uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff)));
  }
  lVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar8;
  lVar14 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar14;
  iVar6 = *(int *)(param_3 + 0x18);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  pcVar17 = *(code **)(*(long *)(DVar7.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(lVar8);
  _swift_bridgeObjectRetain(lVar14);
  (*pcVar17)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,DVar7.unknown);
  (*pcVar17)((long)param_1 + (long)*(int *)(param_3 + 0x1c),
             (long)param_2 + (long)*(int *)(param_3 + 0x1c),DVar7.unknown);
  iVar6 = *(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar15 = *(undefined8 *)((long)param_2 + (long)iVar6);
  *(undefined8 *)((long)param_1 + (long)iVar6) = uVar15;
  iVar6 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar16 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar16;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  iVar6 = *(int *)(param_3 + 0x34);
  uVar19 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) = uVar19;
  *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  lVar8 = 0;
  FUN_100317b10();
  lVar14 = *(long *)(lVar8 + -8);
  pcVar17 = *(code **)(lVar14 + 0x30);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar19);
  puVar9 = puVar2;
  (*pcVar17)(puVar2,1,lVar8);
  if ((int)puVar9 != 0) {
    puVar10 = &DAT_100fbe6e0;
    FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    goto LAB_10033b354;
  }
  puVar9 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar8);
  iVar6 = (int)puVar9;
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      *puVar1 = *puVar2;
      lVar12 = 0;
      FUN_10031a030();
      iVar6 = *(int *)(lVar12 + 0x14);
      AVar13 = Foundation::AttributedString::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar13.unknown + -8) + 0x10))
                ((long)puVar1 + (long)iVar6,(long)puVar2 + (long)iVar6,AVar13.unknown);
      uVar16 = 0;
LAB_10033b2c4:
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,uVar16);
    }
    else if (iVar6 == 1) {
      UVar11 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar11.unknown + -8) + 0x10))(puVar1,puVar2,UVar11.unknown);
      lVar12 = 0;
      FUN_1003187b8();
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x14));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x14));
      uVar16 = puVar3[1];
      *puVar9 = *puVar3;
      puVar9[1] = uVar16;
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x18));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x18));
      uVar18 = puVar3[1];
      _swift_bridgeObjectRetain();
      if (uVar18 >> 0x3c < 0xf) {
        uVar16 = *puVar3;
        FUN_1001037b4(uVar16,uVar18);
        *puVar9 = uVar16;
        puVar9[1] = uVar18;
      }
      else {
        uVar16 = *puVar3;
        puVar9[1] = puVar3[1];
        *puVar9 = uVar16;
      }
      puVar9 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar12 + 0x1c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar12 + 0x1c));
      uVar18 = puVar2[1];
      if (uVar18 >> 0x3c < 0xf) {
        uVar16 = *puVar2;
        FUN_1001037b4(uVar16,uVar18);
        *puVar9 = uVar16;
        puVar9[1] = uVar18;
      }
      else {
        uVar16 = *puVar2;
        puVar9[1] = puVar2[1];
        *puVar9 = uVar16;
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar8,1);
    }
    else {
LAB_10033b23c:
      _memcpy(puVar1,puVar2,*(size_t *)(lVar14 + 0x40));
    }
  }
  else {
    if (iVar6 == 2) {
      uVar16 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar16;
      uVar16 = puVar2[2];
      uVar4 = puVar2[3];
      FUN_1001037b4(uVar16,uVar4);
      puVar1[2] = uVar16;
      puVar1[3] = uVar4;
      uVar16 = 2;
      goto LAB_10033b2c4;
    }
    if (iVar6 != 4) goto LAB_10033b23c;
    uVar16 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar16;
    uVar18 = puVar2[3];
    _swift_bridgeObjectRetain();
    if (uVar18 >> 0x3c < 0xf) {
      uVar16 = puVar2[2];
      FUN_1001037b4(uVar16,uVar18);
      puVar1[2] = uVar16;
      puVar1[3] = uVar18;
    }
    else {
      uVar16 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar16;
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,4);
  }
  (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar8);
LAB_10033b354:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar16 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar16;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10033b3c8 | FUN_10033b3c8 */

void FUN_10033b3c8(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  Date DVar3;
  long lVar4;
  undefined8 *puVar5;
  URL UVar6;
  undefined8 uVar7;
  AttributedString AVar8;
  ulong uVar9;
  code *pcVar10;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar2 = *(int *)(param_2 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(DVar3.unknown + -8) + 8);
  (*pcVar10)(param_1 + iVar2,DVar3.unknown);
  (*pcVar10)(param_1 + *(int *)(param_2 + 0x1c),DVar3.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24)));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x30)));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x38));
  lVar4 = 0;
  FUN_100317b10();
  puVar5 = puVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar1,1,lVar4);
  if ((int)puVar5 != 0) goto LAB_10033b490;
  puVar5 = puVar1;
  _swift_getEnumCaseMultiPayload(puVar1,lVar4);
  iVar2 = (int)puVar5;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      lVar4 = 0;
      FUN_10031a030();
      iVar2 = *(int *)(lVar4 + 0x14);
      AVar8 = Foundation::AttributedString::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar8.unknown + -8) + 8))((long)puVar1 + (long)iVar2,AVar8.unknown);
      goto LAB_10033b490;
    }
    if (iVar2 != 1) goto LAB_10033b490;
    UVar6 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 8))(puVar1,UVar6.unknown);
    lVar4 = 0;
    FUN_1003187b8();
    _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x14) + 8));
    puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x18));
    if ((ulong)puVar5[1] >> 0x3c < 0xf) {
      FUN_10003bf2c(*puVar5);
    }
    puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x1c));
    uVar9 = puVar1[1];
    if (0xe < uVar9 >> 0x3c) goto LAB_10033b490;
    uVar7 = *puVar1;
  }
  else if (iVar2 == 2) {
    uVar7 = puVar1[2];
    uVar9 = puVar1[3];
  }
  else {
    if (iVar2 != 4) goto LAB_10033b490;
    _swift_bridgeObjectRelease(*puVar1);
    uVar9 = puVar1[3];
    if (0xe < uVar9 >> 0x3c) goto LAB_10033b490;
    uVar7 = puVar1[2];
  }
  FUN_10003bf2c(uVar7,uVar9);
LAB_10033b490:
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x3c) + 8));
  return;
}



/* Address: 0x10033b5b0 | FUN_10033b5b0 */

undefined8 * FUN_10033b5b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  Date DVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  URL UVar10;
  long lVar11;
  AttributedString AVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  uVar15 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar15;
  uVar4 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar4;
  iVar5 = *(int *)(param_3 + 0x18);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  pcVar16 = *(code **)(*(long *)(DVar6.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar4);
  (*pcVar16)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,DVar6.unknown);
  (*pcVar16)((long)param_1 + (long)*(int *)(param_3 + 0x1c),
             (long)param_2 + (long)*(int *)(param_3 + 0x1c),DVar6.unknown);
  iVar5 = *(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar14 = *(undefined8 *)((long)param_2 + (long)iVar5);
  *(undefined8 *)((long)param_1 + (long)iVar5) = uVar14;
  iVar5 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar15 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar15;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar5);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar5);
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  iVar5 = *(int *)(param_3 + 0x34);
  uVar18 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) = uVar18;
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  lVar7 = 0;
  FUN_100317b10();
  lVar13 = *(long *)(lVar7 + -8);
  pcVar16 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar18);
  puVar8 = puVar2;
  (*pcVar16)(puVar2,1,lVar7);
  if ((int)puVar8 != 0) {
    puVar9 = &DAT_100fbe6e0;
    FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
    goto LAB_10033b900;
  }
  puVar8 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,lVar7);
  iVar5 = (int)puVar8;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      *puVar1 = *puVar2;
      lVar11 = 0;
      FUN_10031a030();
      iVar5 = *(int *)(lVar11 + 0x14);
      AVar12 = Foundation::AttributedString::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar12.unknown + -8) + 0x10))
                ((long)puVar1 + (long)iVar5,(long)puVar2 + (long)iVar5,AVar12.unknown);
      uVar15 = 0;
LAB_10033b870:
      _swift_storeEnumTagMultiPayload(puVar1,lVar7,uVar15);
    }
    else if (iVar5 == 1) {
      UVar10 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar10.unknown + -8) + 0x10))(puVar1,puVar2,UVar10.unknown);
      lVar11 = 0;
      FUN_1003187b8();
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x14));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x14));
      uVar15 = puVar3[1];
      *puVar8 = *puVar3;
      puVar8[1] = uVar15;
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x18));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x18));
      uVar17 = puVar3[1];
      _swift_bridgeObjectRetain();
      if (uVar17 >> 0x3c < 0xf) {
        uVar15 = *puVar3;
        FUN_1001037b4(uVar15,uVar17);
        *puVar8 = uVar15;
        puVar8[1] = uVar17;
      }
      else {
        uVar15 = *puVar3;
        puVar8[1] = puVar3[1];
        *puVar8 = uVar15;
      }
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x1c));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x1c));
      uVar17 = puVar2[1];
      if (uVar17 >> 0x3c < 0xf) {
        uVar15 = *puVar2;
        FUN_1001037b4(uVar15,uVar17);
        *puVar8 = uVar15;
        puVar8[1] = uVar17;
      }
      else {
        uVar15 = *puVar2;
        puVar8[1] = puVar2[1];
        *puVar8 = uVar15;
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar7,1);
    }
    else {
LAB_10033b7e8:
      _memcpy(puVar1,puVar2,*(size_t *)(lVar13 + 0x40));
    }
  }
  else {
    if (iVar5 == 2) {
      uVar15 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar15;
      uVar15 = puVar2[2];
      uVar4 = puVar2[3];
      FUN_1001037b4(uVar15,uVar4);
      puVar1[2] = uVar15;
      puVar1[3] = uVar4;
      uVar15 = 2;
      goto LAB_10033b870;
    }
    if (iVar5 != 4) goto LAB_10033b7e8;
    uVar15 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar15;
    uVar17 = puVar2[3];
    _swift_bridgeObjectRetain();
    if (uVar17 >> 0x3c < 0xf) {
      uVar15 = puVar2[2];
      FUN_1001037b4(uVar15,uVar17);
      puVar1[2] = uVar15;
      puVar1[3] = uVar17;
    }
    else {
      uVar15 = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[2] = uVar15;
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar7,4);
  }
  (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar7);
LAB_10033b900:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar15 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar15;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10033b974 | FUN_10033b974 */

undefined8 * FUN_10033b974(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  Date DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  URL UVar8;
  long lVar9;
  undefined *puVar10;
  AttributedString AVar11;
  size_t sVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  
  *param_1 = *param_2;
  uVar14 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  param_1[2] = param_2[2];
  uVar14 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  iVar4 = *(int *)(param_3 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  pcVar15 = *(code **)(*(long *)(DVar5.unknown + -8) + 0x18);
  (*pcVar15)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,DVar5.unknown);
  (*pcVar15)((long)param_1 + (long)*(int *)(param_3 + 0x1c),
             (long)param_2 + (long)*(int *)(param_3 + 0x1c),DVar5.unknown);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar13 = (long)*(int *)(param_3 + 0x24);
  uVar14 = *(undefined8 *)((long)param_1 + lVar13);
  *(undefined8 *)((long)param_1 + lVar13) = *(undefined8 *)((long)param_2 + lVar13);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar14 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *puVar2;
  uVar14 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  lVar13 = (long)*(int *)(param_3 + 0x30);
  uVar14 = *(undefined8 *)((long)param_1 + lVar13);
  *(undefined8 *)((long)param_1 + lVar13) = *(undefined8 *)((long)param_2 + lVar13);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  lVar13 = 0;
  FUN_100317b10();
  lVar17 = *(long *)(lVar13 + -8);
  pcVar15 = *(code **)(lVar17 + 0x30);
  puVar6 = puVar1;
  (*pcVar15)(puVar1,1,lVar13);
  puVar7 = puVar2;
  (*pcVar15)(puVar2,1,lVar13);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      FUN_10005241c(puVar1,FUN_100317b10);
      goto LAB_10033bbc0;
    }
    if (param_1 == param_2) goto LAB_10033be3c;
    FUN_10005241c(puVar1,FUN_100317b10);
    puVar6 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar13);
    iVar4 = (int)puVar6;
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        *puVar1 = *puVar2;
        lVar17 = 0;
        FUN_10031a030();
        iVar4 = *(int *)(lVar17 + 0x14);
        AVar11 = Foundation::AttributedString::typeMetadataAccessor();
        (**(code **)(*(long *)(AVar11.unknown + -8) + 0x10))
                  ((long)puVar1 + (long)iVar4,(long)puVar2 + (long)iVar4,AVar11.unknown);
        _swift_storeEnumTagMultiPayload(puVar1,lVar13,0);
        goto LAB_10033be3c;
      }
      if (iVar4 == 1) {
        UVar8 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))(puVar1,puVar2,UVar8.unknown);
        lVar17 = 0;
        FUN_1003187b8();
        puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x14));
        puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x14));
        *puVar6 = *puVar7;
        puVar6[1] = puVar7[1];
        puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x18));
        puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x18));
        uVar16 = puVar7[1];
        _swift_bridgeObjectRetain();
        if (uVar16 >> 0x3c < 0xf) {
          uVar14 = *puVar7;
          FUN_1001037b4(uVar14,uVar16);
          *puVar6 = uVar14;
          puVar6[1] = uVar16;
        }
        else {
          uVar14 = *puVar7;
          puVar6[1] = puVar7[1];
          *puVar6 = uVar14;
        }
        puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x1c));
        puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x1c));
        uVar16 = puVar2[1];
        if (uVar16 >> 0x3c < 0xf) {
          uVar14 = *puVar2;
          FUN_1001037b4(uVar14,uVar16);
          *puVar6 = uVar14;
          puVar6[1] = uVar16;
        }
        else {
          uVar14 = *puVar2;
          puVar6[1] = puVar2[1];
          *puVar6 = uVar14;
        }
        _swift_storeEnumTagMultiPayload(puVar1,lVar13,1);
        goto LAB_10033be3c;
      }
    }
    else {
      if (iVar4 == 2) {
        uVar14 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar14;
        uVar14 = puVar2[2];
        uVar3 = puVar2[3];
        FUN_1001037b4(uVar14,uVar3);
        puVar1[2] = uVar14;
        puVar1[3] = uVar3;
        _swift_storeEnumTagMultiPayload(puVar1,lVar13,2);
        goto LAB_10033be3c;
      }
      if (iVar4 == 4) {
        *puVar1 = *puVar2;
        puVar1[1] = puVar2[1];
        uVar16 = puVar2[3];
        _swift_bridgeObjectRetain();
        if (uVar16 >> 0x3c < 0xf) {
          uVar14 = puVar2[2];
          FUN_1001037b4(uVar14,uVar16);
          puVar1[2] = uVar14;
          puVar1[3] = uVar16;
        }
        else {
          uVar14 = puVar2[2];
          puVar1[3] = puVar2[3];
          puVar1[2] = uVar14;
        }
        _swift_storeEnumTagMultiPayload(puVar1,lVar13,4);
        goto LAB_10033be3c;
      }
    }
    sVar12 = *(size_t *)(lVar17 + 0x40);
  }
  else {
    if ((int)puVar7 == 0) {
      puVar6 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar13);
      iVar4 = (int)puVar6;
      if (iVar4 < 2) {
        if (iVar4 == 0) {
          *puVar1 = *puVar2;
          lVar9 = 0;
          FUN_10031a030();
          iVar4 = *(int *)(lVar9 + 0x14);
          AVar11 = Foundation::AttributedString::typeMetadataAccessor();
          (**(code **)(*(long *)(AVar11.unknown + -8) + 0x10))
                    ((long)puVar1 + (long)iVar4,(long)puVar2 + (long)iVar4,AVar11.unknown);
          uVar14 = 0;
          goto LAB_10033be20;
        }
        if (iVar4 == 1) {
          UVar8 = Foundation::URL::typeMetadataAccessor();
          (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))(puVar1,puVar2,UVar8.unknown);
          lVar9 = 0;
          FUN_1003187b8();
          puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x14));
          puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x14));
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x18));
          puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x18));
          uVar16 = puVar7[1];
          _swift_bridgeObjectRetain();
          if (uVar16 >> 0x3c < 0xf) {
            uVar14 = *puVar7;
            FUN_1001037b4(uVar14,uVar16);
            *puVar6 = uVar14;
            puVar6[1] = uVar16;
          }
          else {
            uVar14 = *puVar7;
            puVar6[1] = puVar7[1];
            *puVar6 = uVar14;
          }
          puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
          puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
          uVar16 = puVar2[1];
          if (uVar16 >> 0x3c < 0xf) {
            uVar14 = *puVar2;
            FUN_1001037b4(uVar14,uVar16);
            *puVar6 = uVar14;
            puVar6[1] = uVar16;
          }
          else {
            uVar14 = *puVar2;
            puVar6[1] = puVar2[1];
            *puVar6 = uVar14;
          }
          uVar14 = 1;
          goto LAB_10033be20;
        }
LAB_10033bcd8:
        _memcpy(puVar1,puVar2,*(size_t *)(lVar17 + 0x40));
      }
      else {
        if (iVar4 == 2) {
          uVar14 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar14;
          uVar14 = puVar2[2];
          uVar3 = puVar2[3];
          FUN_1001037b4(uVar14,uVar3);
          puVar1[2] = uVar14;
          puVar1[3] = uVar3;
          uVar14 = 2;
        }
        else {
          if (iVar4 != 4) goto LAB_10033bcd8;
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          uVar16 = puVar2[3];
          _swift_bridgeObjectRetain();
          if (uVar16 >> 0x3c < 0xf) {
            uVar14 = puVar2[2];
            FUN_1001037b4(uVar14,uVar16);
            puVar1[2] = uVar14;
            puVar1[3] = uVar16;
          }
          else {
            uVar14 = puVar2[2];
            puVar1[3] = puVar2[3];
            puVar1[2] = uVar14;
          }
          uVar14 = 4;
        }
LAB_10033be20:
        _swift_storeEnumTagMultiPayload(puVar1,lVar13,uVar14);
      }
      (**(code **)(lVar17 + 0x38))(puVar1,0,1,lVar13);
      goto LAB_10033be3c;
    }
LAB_10033bbc0:
    puVar10 = &DAT_100fbe6e0;
    FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
    sVar12 = *(size_t *)(*(long *)(puVar10 + -8) + 0x40);
  }
  _memcpy(puVar1,puVar2,sVar12);
LAB_10033be3c:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *puVar1 = *param_2;
  uVar14 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar14);
  return param_1;
}



/* Address: 0x10033bf98 | FUN_10033bf98 */

undefined8 * FUN_10033bf98(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Date DVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  AttributedString AVar10;
  URL UVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar14 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar14;
  param_1[3] = uVar16;
  param_1[2] = uVar15;
  iVar1 = *(int *)(param_3 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  pcVar12 = *(code **)(*(long *)(DVar5.unknown + -8) + 0x20);
  (*pcVar12)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar5.unknown);
  (*pcVar12)((long)param_1 + (long)*(int *)(param_3 + 0x1c),
             (long)param_2 + (long)*(int *)(param_3 + 0x1c),DVar5.unknown);
  iVar1 = *(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar14 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar14;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar14 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar14;
  iVar1 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  lVar6 = 0;
  FUN_100317b10();
  lVar13 = *(long *)(lVar6 + -8);
  puVar7 = puVar3;
  (**(code **)(lVar13 + 0x30))(puVar3,1,lVar6);
  if ((int)puVar7 == 0) {
    puVar7 = puVar3;
    _swift_getEnumCaseMultiPayload(puVar3,lVar6);
    if ((int)puVar7 == 1) {
      UVar11 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar11.unknown + -8) + 0x20))(puVar2,puVar3,UVar11.unknown);
      lVar9 = 0;
      FUN_1003187b8();
      puVar7 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar9 + 0x14));
      uVar14 = *puVar7;
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x14));
      puVar4[1] = puVar7[1];
      *puVar4 = uVar14;
      puVar7 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar9 + 0x18));
      uVar14 = *puVar7;
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x18));
      puVar4[1] = puVar7[1];
      *puVar4 = uVar14;
      puVar3 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar9 + 0x1c));
      uVar14 = *puVar3;
      puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
      puVar7[1] = puVar3[1];
      *puVar7 = uVar14;
      _swift_storeEnumTagMultiPayload(puVar2,lVar6,1);
    }
    else if ((int)puVar7 == 0) {
      *puVar2 = *puVar3;
      lVar9 = 0;
      FUN_10031a030();
      iVar1 = *(int *)(lVar9 + 0x14);
      AVar10 = Foundation::AttributedString::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar10.unknown + -8) + 0x20))
                ((long)puVar2 + (long)iVar1,(long)puVar3 + (long)iVar1,AVar10.unknown);
      _swift_storeEnumTagMultiPayload(puVar2,lVar6,0);
    }
    else {
      _memcpy(puVar2,puVar3,*(size_t *)(lVar13 + 0x40));
    }
    (**(code **)(lVar13 + 0x38))(puVar2,0,1,lVar6);
  }
  else {
    puVar8 = &DAT_100fbe6e0;
    FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
    _memcpy(puVar2,puVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar14 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2[1] = param_2[1];
  *puVar2 = uVar14;
  return param_1;
}



/* Address: 0x10033c1ac | FUN_10033c1ac */

undefined8 * FUN_10033c1ac(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  Date DVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  AttributedString AVar10;
  undefined *puVar11;
  URL UVar12;
  size_t sVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  
  uVar6 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar4);
  uVar6 = param_2[3];
  uVar4 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  _swift_bridgeObjectRelease(uVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  pcVar15 = *(code **)(*(long *)(DVar5.unknown + -8) + 0x28);
  (*pcVar15)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar5.unknown);
  (*pcVar15)((long)param_1 + (long)*(int *)(param_3 + 0x1c),
             (long)param_2 + (long)*(int *)(param_3 + 0x1c),DVar5.unknown);
  lVar14 = (long)*(int *)(param_3 + 0x24);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar6 = *(undefined8 *)((long)param_1 + lVar14);
  *(undefined8 *)((long)param_1 + lVar14) = *(undefined8 *)((long)param_2 + lVar14);
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar6 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar6 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar4);
  lVar14 = (long)*(int *)(param_3 + 0x30);
  uVar6 = *(undefined8 *)((long)param_1 + lVar14);
  *(undefined8 *)((long)param_1 + lVar14) = *(undefined8 *)((long)param_2 + lVar14);
  _swift_bridgeObjectRelease(uVar6);
  iVar3 = *(int *)(param_3 + 0x38);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  lVar14 = 0;
  FUN_100317b10();
  lVar16 = *(long *)(lVar14 + -8);
  pcVar15 = *(code **)(lVar16 + 0x30);
  puVar7 = puVar1;
  (*pcVar15)(puVar1,1,lVar14);
  puVar8 = puVar2;
  (*pcVar15)(puVar2,1,lVar14);
  if ((int)puVar7 == 0) {
    if ((int)puVar8 != 0) {
      FUN_10005241c(puVar1,FUN_100317b10);
      goto LAB_10033c360;
    }
    if (param_1 == param_2) goto LAB_10033c48c;
    FUN_10005241c(puVar1,FUN_100317b10);
    puVar7 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar14);
    if ((int)puVar7 == 1) {
      UVar12 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar12.unknown + -8) + 0x20))(puVar1,puVar2,UVar12.unknown);
      lVar16 = 0;
      FUN_1003187b8();
      puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x14));
      uVar6 = *puVar7;
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x14));
      puVar8[1] = puVar7[1];
      *puVar8 = uVar6;
      puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x18));
      uVar6 = *puVar7;
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x18));
      puVar8[1] = puVar7[1];
      *puVar8 = uVar6;
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar16 + 0x1c));
      uVar6 = *puVar2;
      puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x1c));
      puVar7[1] = puVar2[1];
      *puVar7 = uVar6;
      _swift_storeEnumTagMultiPayload(puVar1,lVar14,1);
      goto LAB_10033c48c;
    }
    if ((int)puVar7 == 0) {
      *puVar1 = *puVar2;
      lVar16 = 0;
      FUN_10031a030();
      iVar3 = *(int *)(lVar16 + 0x14);
      AVar10 = Foundation::AttributedString::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar10.unknown + -8) + 0x20))
                ((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,AVar10.unknown);
      _swift_storeEnumTagMultiPayload(puVar1,lVar14,0);
      goto LAB_10033c48c;
    }
    sVar13 = *(size_t *)(lVar16 + 0x40);
  }
  else {
    if ((int)puVar8 == 0) {
      puVar7 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar14);
      if ((int)puVar7 == 1) {
        UVar12 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar12.unknown + -8) + 0x20))(puVar1,puVar2,UVar12.unknown);
        lVar9 = 0;
        FUN_1003187b8();
        puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x14));
        uVar6 = *puVar7;
        puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x14));
        puVar8[1] = puVar7[1];
        *puVar8 = uVar6;
        puVar7 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x18));
        uVar6 = *puVar7;
        puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x18));
        puVar8[1] = puVar7[1];
        *puVar8 = uVar6;
        puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x1c));
        uVar6 = *puVar2;
        puVar7 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x1c));
        puVar7[1] = puVar2[1];
        *puVar7 = uVar6;
        _swift_storeEnumTagMultiPayload(puVar1,lVar14,1);
      }
      else if ((int)puVar7 == 0) {
        *puVar1 = *puVar2;
        lVar9 = 0;
        FUN_10031a030();
        iVar3 = *(int *)(lVar9 + 0x14);
        AVar10 = Foundation::AttributedString::typeMetadataAccessor();
        (**(code **)(*(long *)(AVar10.unknown + -8) + 0x20))
                  ((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,AVar10.unknown);
        _swift_storeEnumTagMultiPayload(puVar1,lVar14,0);
      }
      else {
        _memcpy(puVar1,puVar2,*(size_t *)(lVar16 + 0x40));
      }
      (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar14);
      goto LAB_10033c48c;
    }
LAB_10033c360:
    puVar11 = &DAT_100fbe6e0;
    FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
    sVar13 = *(size_t *)(*(long *)(puVar11 + -8) + 0x40);
  }
  _memcpy(puVar1,puVar2,sVar13);
LAB_10033c48c:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar6 = param_2[1];
  uVar4 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}



/* Address: 0x10033c530 | FUN_10033c530 */

void FUN_10033c530(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10033c53c | FUN_10033c53c */

ulong FUN_10033c53c(long param_1,undefined8 param_2,long param_3)

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
    iVar1 = *(int *)(param_3 + 0x18);
  }
  else {
    DVar2.unknown = &DAT_100fbe6e0;
    FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
    lVar4 = *(long *)(DVar2.unknown + -8);
    iVar1 = *(int *)(param_3 + 0x38);
  }
  uVar3 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x00010033c5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,DVar2.unknown);
  return uVar3;
}



/* Address: 0x10033c5e8 | FUN_10033c5e8 */

void FUN_10033c5e8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10033c5f4 | FUN_10033c5f4 */

void FUN_10033c5f4(long param_1,undefined8 param_2,int param_3,long param_4)

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
    iVar1 = *(int *)(param_4 + 0x18);
  }
  else {
    DVar2.unknown = &DAT_100fbe6e0;
    FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
    lVar3 = *(long *)(DVar2.unknown + -8);
    iVar1 = *(int *)(param_4 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010033c698. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,DVar2.unknown);
  return;
}



/* Address: 0x10033c69c | FUN_10033c69c */

void FUN_10033c69c(long param_1,ulong param_2)

{
  Date DVar1;
  long lVar2;
  undefined *local_90;
  undefined *puStack_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  
  local_90 = &DAT_100c42170;
  puStack_88 = &DAT_100c42188;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_80 = *(long *)(DVar1.unknown + -8) + 0x40;
    local_70 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_68 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    local_60 = &DAT_100c42188;
    puStack_58 = &DAT_100c42188;
    puStack_48 = &DAT_100c421a0;
    lVar2 = 0x13f;
    lStack_78 = local_80;
    local_50 = puStack_68;
    FUN_10033c768();
    if (param_2 < 0x40) {
      local_40 = *(long *)(lVar2 + -8) + 0x40;
      puStack_38 = &DAT_100c42170;
      _swift_initStructMetadata(param_1,0x100,0xc,&local_90,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x10033c768 | FUN_10033c768 */

void FUN_10033c768(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100fc0310 == 0) {
    lVar2 = 0xff;
    FUN_100317b10();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100fc0310 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x10033c7bc | thunk_FUN_10033abf4 */

void thunk_FUN_10033abf4(void)

{
  FUN_10033abf4();
  return;
}



/* Address: 0x10033c7c0 | thunk_FUN_10033abf4 */

void thunk_FUN_10033abf4(void)

{
  FUN_10033abf4();
  return;
}



/* Address: 0x10033c7c4 | thunk_FUN_10033abf4 */

void thunk_FUN_10033abf4(void)

{
  FUN_10033abf4();
  return;
}



/* Address: 0x10033c7c8 | FUN_10033c7c8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033c7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  ScheduledTaskType SVar2;
  undefined7 extraout_var;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 unaff_x20;
  long unaff_x22;
  long *plVar8;
  long lVar9;
  long lVar3;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  SVar2 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  lVar3 = CONCAT71(extraout_var,SVar2.value);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  lVar9 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar9;
  uVar5 = *(long *)(lVar9 + 0x40) + 0xf;
  uVar4 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar4;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar5;
  puVar6 = &DAT_100ecbc00;
  _swift_allocObject(&DAT_100ecbc00,0x20,7);
  *(undefined **)(unaff_x22 + 0xa8) = puVar6;
  *(undefined8 *)(puVar6 + 0x10) = param_3;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
  ;
  *(undefined4 *)(unaff_x22 + 0x118) = uVar1;
  pcVar7 = *(code **)(lVar9 + 0x68);
  *(code **)(unaff_x22 + 0xb0) = pcVar7;
  (*pcVar7)(uVar5,uVar1,lVar3);
  plVar8 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar8;
  FUN_1000037f0(&DAT_100fc0368,&DAT_100c421c0);
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_10033c8fc;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform
            ((ScheduledTaskType)((char)unaff_x22 + 0x50));
  return;
}



/* Address: 0x10033c8fc | FUN_10033c8fc */

void FUN_10033c8fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0xb8));
  uVar4 = *(undefined8 *)(lVar5 + 0xa8);
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x60);
    uVar2 = *(undefined8 *)(lVar5 + 0x68);
    pcVar3 = *(code **)(*(long *)(lVar5 + 0x90) + 8);
    *(code **)(lVar5 + 200) = pcVar3;
    (*pcVar3)(*(undefined8 *)(lVar5 + 0xa0),*(undefined8 *)(lVar5 + 0x88));
    _swift_release(uVar4);
    FUN_1000da368();
    *(undefined8 *)(lVar5 + 0xd0) = uVar1;
    *(undefined8 *)(lVar5 + 0xd8) = uVar2;
    pcVar3 = FUN_10033c9c0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 0x60);
    uVar2 = *(undefined8 *)(lVar5 + 0x68);
    _swift_release(uVar4);
    FUN_1000da368(uVar1,uVar2);
    pcVar3 = FUN_10033ce20;
  }
  _swift_task_switch(pcVar3,uVar1,uVar2);
  return;
}



/* Address: 0x10033c9c0 | FUN_10033c9c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033c9c0(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  pcVar7 = *(code **)(unaff_x22 + 0xb0);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar8;
  puVar2 = &DAT_100ecbc28;
  _swift_allocObject(&DAT_100ecbc28,0x20,7);
  *(undefined **)(unaff_x22 + 0xf0) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  (*pcVar7)(uVar3,uVar1,uVar5);
  plVar4 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_bridgeObjectRetain(uVar8);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10033cab0;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar4);
  return;
}



/* Address: 0x10033cab0 | FUN_10033cab0 */

void FUN_10033cab0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xf8));
  uVar3 = *(undefined8 *)(lVar4 + 0xf0);
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0xe0);
    uVar2 = *(undefined8 *)(lVar4 + 0xe8);
    _swift_errorRelease();
    _swift_release(uVar3);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar1);
    return;
  }
  (**(code **)(lVar4 + 200))(*(undefined8 *)(lVar4 + 0x98),*(undefined8 *)(lVar4 + 0x88));
  _swift_release(uVar3);
  _swift_task_switch(FUN_10033cb50,*(undefined8 *)(lVar4 + 0xd0),*(undefined8 *)(lVar4 + 0xd8));
  return;
}



/* Address: 0x10033cb50 | FUN_10033cb50 */

void FUN_10033cb50(void)

{
  _swift_task_switch(FUN_10033cb64,0,0);
  return;
}



/* Address: 0x10033cb64 | FUN_10033cb64 */

void FUN_10033cb64(void)

{
  MainActor *pMVar1;
  UnownedSerialExecutor UVar2;
  long unaff_x22;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  *(MainActor **)(unaff_x22 + 0x100) = pMVar1;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  *(MainActor **)(unaff_x22 + 0x108) = pMVar1;
  FUN_10033d98c();
  *(MainActor **)(unaff_x22 + 0x110) = pMVar1;
  UVar2 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10033cbd4,UVar2.unknown,pMVar1);
  return;
}



/* Address: 0x10033cbd4 | FUN_10033cbd4 */

void FUN_10033cbd4(void)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  long lVar6;
  undefined8 uVar7;
  MainActor *this;
  long unaff_x22;
  
  pMVar2 = *(MainActor **)(unaff_x22 + 0x108);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  this = *(MainActor **)(unaff_x22 + 0x100);
  _swift_release();
  pMVar2 = Swift::MainActor::get_shared(this,pMVar2);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCore/V5MigrationManager+Lists.swift",0x28,1,0x39,UVar3.unknown,uVar7);
  }
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0xe0) + 0x10);
  IVar5 = objc_stub::completedUnitCount(*(ID *)(unaff_x22 + 0x78));
  if (!SCARRY8(IVar5,lVar6)) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    objc_stub::setCompletedUnitCount_(*(ID *)(unaff_x22 + 0x78),IVar5 + lVar6);
    _swift_release(pMVar2);
    _swift_bridgeObjectRelease(uVar7);
    _swift_task_switch(FUN_10033cc98,*(undefined8 *)(unaff_x22 + 0xd0),
                       *(undefined8 *)(unaff_x22 + 0xd8));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10033cc98);
  (*pcVar1)();
}



/* Address: 0x10033cc98 | FUN_10033cc98 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033cc98(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  
  lVar2 = _TtC9PasteCore18V5MigrationManager::errors;
  lVar3 = *(long *)(unaff_x22 + 0xe8);
  lVar8 = *(long *)(lVar3 + 0x10);
  if (lVar8 != 0) {
    lVar9 = *(long *)(unaff_x22 + 0x80);
    FUN_100bad754(0);
    puVar10 = (undefined8 *)(lVar3 + 0x20);
    do {
      uVar7 = *puVar10;
      _swift_errorRetain(uVar7);
      FUN_1000da768(unaff_x22 + 0x10);
      FUN_100bac57c(uVar7);
      FUN_100004594(unaff_x22 + 0x10);
      _swift_beginAccess(lVar9 + lVar2,unaff_x22 + 0x38,0x21,0);
      uVar6 = *(ulong *)(lVar9 + lVar2);
      _swift_errorRetain(uVar7);
      uVar4 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar9 + lVar2) = uVar6;
      uVar5 = uVar6;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_100380020(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
        *(ulong *)(lVar9 + lVar2) = uVar5;
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_100380020(uVar6,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      *(undefined8 *)(uVar6 + uVar4 * 8 + 0x20) = uVar7;
      *(ulong *)(lVar9 + lVar2) = uVar6;
      _swift_endAccess(unaff_x22 + 0x38);
      _swift_errorRelease(uVar7);
      lVar8 = lVar8 + -1;
      puVar10 = puVar10 + 1;
    } while (lVar8 != 0);
    lVar3 = *(long *)(unaff_x22 + 0xe8);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_bridgeObjectRelease(lVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010033ce1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10033ce20 | FUN_10033ce20 */

void FUN_10033ce20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010033ce6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10033ce70 | FUN_10033ce70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010033d13c) */
/* WARNING: Removing unreachable block (ram,0x00010033d378) */
/* WARNING: Removing unreachable block (ram,0x00010033cfe8) */

void FUN_10033ce70(undefined8 *param_1)

{
  long *plVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  undefined *puVar8;
  NSString *pNVar9;
  _ArrayBuffer _Var10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ID IVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  undefined1 uVar23;
  long unaff_x21;
  ID IVar24;
  ID IVar25;
  String SVar26;
  undefined1 local_158;
  undefined8 local_138;
  undefined *local_128;
  undefined1 auStack_f0 [16];
  ID local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar8 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _Var10.unknown = (undefined *)objc_stub::initWithEntityName_(puVar8,pNVar9);
  FUN_100308464(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (unaff_x21 == 0) {
    *param_1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    param_1[1] = puVar8;
    if ((ulong)_Var10.unknown >> 0x3e == 0) {
      IVar24 = *(ID *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      _Var2.unknown = _Var10.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
        _Var2.unknown = _Var10.unknown;
      }
      IVar24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    PTR___swiftEmptyArrayStorage_100eae0d8 = puVar8;
    if (IVar24 != 0) {
      if ((long)IVar24 < 1) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10033d4f8);
        (*pcVar6)();
      }
      IVar25 = 0;
      local_128 = puVar8;
      do {
        if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
          IVar19 = *(ID *)(_Var10.unknown + IVar25 * 8 + 0x20);
        }
        else {
          IVar19 = IVar25;
          Swift::_ArrayBuffer::__getElementSlowPath(IVar25,_Var10);
        }
        local_d8 = 0x696669746e656469;
        local_d0 = 0xea00000000007265;
        local_e0 = IVar19;
        FUN_100300c1c(&local_c0,FUN_10033afbc,auStack_f0);
        lVar5 = lStack_98;
        uVar4 = local_a0;
        uStack_88 = uStack_b8;
        local_90 = local_c0;
        uStack_78 = local_a8;
        uStack_80 = uStack_b0;
        FUN_10032af50(&local_90,auStack_f0);
        if (local_d8 == 0) {
          FUN_100005808(auStack_f0,&DAT_100fbe6f0,&DAT_100c42750);
          pcVar14 = (char *)objc_stub::objectID(IVar19);
          pcVar15 = pcVar14;
          FUN_1003320b0();
          puVar21 = &DAT_100ecba68;
          _swift_allocError(&DAT_100ecba68,pcVar15,0,0);
          pcVar15[8] = 'e';
          pcVar15[9] = 'r';
          pcVar15[10] = '\0';
          pcVar15[0xb] = '\0';
          pcVar15[0xc] = '\0';
          pcVar15[0xd] = '\0';
          pcVar15[0xe] = '\0';
          pcVar15[0xf] = -0x16;
          pcVar15[0] = 'i';
          pcVar15[1] = 'd';
          pcVar15[2] = 'e';
          pcVar15[3] = 'n';
          pcVar15[4] = 't';
          pcVar15[5] = 'i';
          pcVar15[6] = 'f';
          pcVar15[7] = 'i';
          *(char **)(pcVar15 + 0x10) = pcVar14;
          pcVar15[0x18] = '\x01';
          _swift_willThrow();
          _swift_bridgeObjectRelease(lVar5);
          FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10033d040:
          _swift_errorRetain(puVar21);
          puVar11 = puVar8;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar20 = puVar8;
          if (((ulong)puVar11 & 1) == 0) {
            puVar20 = (undefined *)0x0;
            FUN_100380020(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
          }
          uVar3 = *(ulong *)(puVar20 + 0x10);
          puVar8 = puVar20;
          if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar3) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
            FUN_100380020(puVar8,uVar3 + 1,1,puVar20);
          }
          *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
          *(undefined **)(puVar8 + uVar3 * 8 + 0x20) = puVar21;
          _swift_errorRelease(puVar21);
          param_1[1] = puVar8;
        }
        else {
          FUN_100011080(auStack_f0,&local_c0);
          if (lVar5 == 0) {
            puVar16 = &local_c0;
            FUN_100004640(puVar16,local_a8);
            _swift_getDynamicType();
            puVar17 = (undefined8 *)objc_stub::objectID(IVar19);
            puVar18 = puVar17;
            FUN_1003320b0();
            puVar21 = &DAT_100ecba68;
            _swift_allocError(&DAT_100ecba68,puVar18,0,0);
            *puVar18 = PTR___type_metadata_for_Swift_String_100eac208;
            puVar18[1] = puVar16;
            puVar18[2] = puVar17;
            *(undefined1 *)(puVar18 + 3) = 0;
            _swift_willThrow();
            FUN_100004594(&local_c0);
            FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
            goto LAB_10033d040;
          }
          FUN_100004594(&local_c0);
          FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
          uVar12 = 0x4f79616c70736964;
          FUN_100332c6c(0x4f79616c70736964,0xec00000072656472);
          uVar13 = 0x656d616e;
          puVar22 = &DAT_e400000000000000;
          FUN_100332c98();
          IVar19 = objc_stub::entity(IVar19);
          IVar19 = objc_stub::name(IVar19);
          if (IVar19 == 0) {
LAB_10033d358:
            local_138 = 0x726f6c6f63;
            FUN_10033350c(0x726f6c6f63,&DAT_e500000000000000);
            local_158 = 1;
            uVar23 = 2;
          }
          else {
            SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            if ((SVar26.str == (char *)0xd000000000000011) &&
               (SVar26.bridgeObject == (void *)0x8000000100da2670)) {
              _swift_bridgeObjectRelease(0x8000000100da2670);
            }
            else {
              bVar7 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0xd000000000000011,(_StringGuts)0x8000000100da2670,
                                 (_StringComparisonResult)(__int8)SVar26.str);
              _swift_bridgeObjectRelease(SVar26.bridgeObject);
              if (!bVar7) goto LAB_10033d358;
            }
            local_138 = 0x7974696361706163;
            FUN_100332c6c(0x7974696361706163,&DAT_e800000000000000);
            local_158 = 0;
            uVar23 = 1;
          }
          puVar21 = local_128;
          _swift_isUniquelyReferenced_nonNull_native();
          if (((ulong)puVar21 & 1) == 0) {
            plVar1 = (long *)(local_128 + 0x10);
            local_128 = (undefined *)0x0;
            FUN_100380150(0,*plVar1 + 1,1);
          }
          uVar3 = *(ulong *)(local_128 + 0x10);
          if (*(ulong *)(local_128 + 0x18) >> 1 <= uVar3) {
            puVar21 = (undefined *)(ulong)(1 < *(ulong *)(local_128 + 0x18));
            FUN_100380150(puVar21,uVar3 + 1,1,local_128);
            local_128 = puVar21;
          }
          *(ulong *)(local_128 + 0x10) = uVar3 + 1;
          *(undefined8 *)(local_128 + uVar3 * 0x40 + 0x20) = uVar4;
          *(long *)(local_128 + uVar3 * 0x40 + 0x28) = lVar5;
          *(undefined8 *)(local_128 + uVar3 * 0x40 + 0x30) = uVar12;
          *(undefined8 *)(local_128 + uVar3 * 0x40 + 0x38) = uVar13;
          *(undefined1 **)(local_128 + uVar3 * 0x40 + 0x40) = puVar22;
          local_128[uVar3 * 0x40 + 0x48] = uVar23;
          *(undefined8 *)(local_128 + uVar3 * 0x40 + 0x50) = local_138;
          local_128[uVar3 * 0x40 + 0x58] = local_158;
          *param_1 = local_128;
        }
        IVar25 = IVar25 + 1;
      } while (IVar24 != IVar25);
    }
    _swift_bridgeObjectRelease(_Var10.unknown);
  }
  return;
}



/* Address: 0x10033d4f8 | FUN_10033d4f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033d4f8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10033d524 | FUN_10033d524 */

void FUN_10033d524(void)

{
  long unaff_x20;
  
  FUN_10033ce70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10033d53c | FUN_10033d53c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010033d7e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10033d53c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  ID IVar10;
  undefined **self;
  NSString *pNVar11;
  JSONEncoder *pJVar12;
  JSONEncoder *pJVar13;
  Data DVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined1 *puVar17;
  NSData *pNVar18;
  long unaff_x21;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *local_e0;
  undefined1 *puStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    puVar19 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar1 = puVar19[-2];
      uVar3 = puVar19[-1];
      uVar2 = *puVar19;
      uVar21 = puVar19[2];
      bVar4 = *(byte *)(puVar19 + 3);
      uVar20 = puVar19[4];
      cVar5 = *(char *)(puVar19 + 5);
      puVar8 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_initStackObject();
      *(undefined8 *)(puVar8 + 0x18) = 2;
      *(undefined8 *)(puVar8 + 0x10) = 1;
      *(undefined8 *)(puVar8 + 0x20) = 0x696669746e656469;
      *(undefined8 *)(puVar8 + 0x28) = 0xea00000000007265;
      *(undefined8 *)(puVar8 + 0x30) = uVar1;
      *(undefined8 *)(puVar8 + 0x38) = uVar3;
      _swift_bridgeObjectRetain_n(uVar3,2);
      _swift_bridgeObjectRetain(uVar21);
      puVar9 = puVar8;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar8);
      FUN_100005808(puVar8 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
      puVar8 = &DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      self = &local_e0;
      local_e0 = puVar9;
      local_c8 = puVar8;
      FUN_100328bb4(self,0,param_2);
      FUN_100004594(&local_e0);
      if (self == (undefined **)0x0) {
        IVar10 = 0;
        FUN_10032b0c8();
        _objc_allocWithZone();
        self = (undefined **)objc_stub::initWithContext_(IVar10,param_2);
        pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setIdentifier_((ID)self,pNVar11);
        pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setName_((ID)self,pNVar11);
      }
      objc_stub::setRawType_((ID)self,(ulong)bVar4);
      bVar7 = cVar5 == '\x01';
      uVar1 = uVar20;
      uVar6 = 0;
      if (bVar7) {
        uVar1 = 0;
        uVar6 = uVar20;
      }
      puVar8 = (undefined *)0x72616f6270696c63;
      if (bVar7) {
        puVar8 = (undefined *)0x6472616f626e6970;
      }
      puVar17 = (undefined1 *)0xe900000000000064;
      if (bVar7) {
        puVar17 = &DAT_e800000000000000;
      }
      pJVar12 = Foundation::JSONEncoder::typeMetadataAccessor();
      _swift_allocObject(pJVar12,*(undefined4 *)(pJVar12 + 0x30),*(undefined2 *)(pJVar12 + 0x34));
      pJVar13 = Foundation::JSONEncoder::init(pJVar12);
      local_c8 = (undefined *)CONCAT71(local_c8._1_7_,bVar7);
      pJVar12 = pJVar13;
      local_e0 = puVar8;
      puStack_d8 = puVar17;
      local_d0 = uVar1;
      local_c0 = uVar6;
      local_b8 = !bVar7;
      FUN_10032b230();
      puVar8 = &DAT_100eca9e8;
      DVar14 = Foundation::JSONEncoder::_encode(pJVar13,pJVar12,&DAT_100eca9e8,pJVar12);
      if (unaff_x21 == 0) {
        _swift_release(pJVar13);
        _swift_bridgeObjectRelease(puVar17);
        pNVar18 = Foundation::Data::_bridgeToObjectiveC(DVar14);
        FUN_10003bf2c(DVar14.unknown,puVar8);
      }
      else {
        _swift_errorRelease(unaff_x21);
        _swift_release(pJVar13);
        _swift_bridgeObjectRelease(puVar17);
        pNVar18 = (NSData *)0x0;
        unaff_x21 = 0;
      }
      objc_stub::setRawAttributes_((ID)self,pNVar18);
      pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar10 = objc_stub::FUN_100c112a0((ID)self,pNVar11);
      if (IVar10 == 0) {
        puStack_d8 = (undefined1 *)0x0;
        local_e0 = (undefined *)0x0;
        local_c8 = (undefined *)0x0;
        local_d0 = 0;
        FUN_100005808(&local_e0,&DAT_100fbe6f0,&DAT_100c42750);
        FUN_10032b6a8(0);
        ppuVar15 = self;
        FUN_10032b3a4(self,uVar2,param_2);
        _swift_bridgeObjectRelease(uVar21);
        _swift_bridgeObjectRelease(uVar3);
        objc_stub::FUN_100c0cb00((ID)self,ppuVar15);
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar10);
        _swift_bridgeObjectRelease(uVar21);
        _swift_bridgeObjectRelease(uVar3);
        FUN_100005808(&local_e0,&DAT_100fbe6f0,&DAT_100c42750);
      }
      puVar19 = puVar19 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}



/* Address: 0x10033d948 | FUN_10033d948 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033d948(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10033d974 | FUN_10033d974 */

void FUN_10033d974(void)

{
  long unaff_x20;
  
  FUN_10033d53c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10033d98c | FUN_10033d98c */

void FUN_10033d98c(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fbe4b0 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fbe4b0 = puVar2;
  return;
}



/* Address: 0x10033d9d0 | FUN_10033d9d0 */

void FUN_10033d9d0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x10033d9f8 | FUN_10033d9f8 */

undefined8 * FUN_10033d9f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x10033da54 | FUN_10033da54 */

undefined8 * FUN_10033da54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar1;
  return param_1;
}



/* Address: 0x10033dae0 | FUN_10033dae0 */

void FUN_10033dae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10033dafc | FUN_10033dafc */

undefined8 * FUN_10033dafc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[6] = param_2[6];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x10033db60 | FUN_10033db60 */

undefined1  [16] FUN_10033db60(void)

{
  return ZEXT816(0x100ecbca8);
}



/* Address: 0x10033db70 | FUN_10033db70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033db70(undefined8 param_1,undefined8 param_2)

{
  String SVar1;
  undefined1 *puVar2;
  void *pvVar3;
  URL UVar4;
  URL UVar5;
  NSURL *pNVar6;
  ID IVar7;
  URL UVar8;
  URL UVar9;
  long extraout_x8;
  URL UVar10;
  long lVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar13;
  code *pcVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  URL local_78;
  void *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  UVar5 = UVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  local_a8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar10.unknown = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)UVar10.unknown - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  Foundation::URL::deletingLastPathComponent(UVar5);
  UVar5.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
  local_78.unknown = (char *)0x0;
  IVar7 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)UVar5.unknown,pNVar6,1,0,&local_78);
  if ((int)IVar7 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    pcVar14 = *(code **)(lVar13 + 8);
  }
  else {
    UVar5.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
    UVar8.unknown = Foundation::URL::_bridgeToObjectiveC(UVar5);
    local_b0 = param_2;
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar8);
    local_78.unknown = (undefined *)0x0;
    IVar7 = objc_stub::copyItemAtURL_toURL_error_((ID)UVar5.unknown,UVar8.unknown,pNVar6,&local_78);
    if ((int)IVar7 != 0) {
      UVar5 = Foundation::URL::deletingLastPathComponent(local_78);
      UVar5 = Foundation::URL::deletingPathExtension(UVar5);
      SVar15 = Foundation::URL::get_lastPathComponent(UVar5);
      pcVar14 = *(code **)(lVar13 + 8);
      (*pcVar14)(UVar10.unknown,UVar4.unknown);
      local_78.unknown = (char *)0x2e;
      local_70 = (void *)0xe100000000000000;
      SVar18.bridgeObject = pNVar6;
      SVar18.str = UVar8.unknown;
      Swift::String::append(SVar15,SVar18);
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      SVar16.bridgeObject = &DAT_e800000000000000;
      SVar16.str = (char *)0x54524f505055535f;
      SVar19.bridgeObject = pNVar6;
      SVar19.str = UVar8.unknown;
      Swift::String::append(SVar16,SVar19);
      pvVar3 = local_70;
      SVar15.bridgeObject = local_70;
      SVar15.str = local_78.unknown;
      Foundation::URL::appendingPathComponent(SVar15,UVar8);
      _swift_bridgeObjectRelease(pvVar3);
      (*pcVar14)(lVar11,UVar4.unknown);
      UVar5.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar15 = Foundation::URL::get_path(UVar5);
      UVar8.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar15.bridgeObject);
      IVar7 = objc_stub::fileExistsAtPath_((ID)UVar5.unknown);
      if ((int)IVar7 != 0) {
        local_b8 = (undefined *)objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
        UVar5.unknown = Foundation::URL::_bridgeToObjectiveC((URL)local_b8);
        UVar9 = Foundation::URL::deletingLastPathComponent(UVar5);
        puVar2 = local_a8;
        UVar9 = Foundation::URL::deletingPathExtension(UVar9);
        SVar15 = Foundation::URL::get_lastPathComponent(UVar9);
        (*pcVar14)(puVar2,UVar4.unknown);
        local_78.unknown = (char *)0x2e;
        local_70 = (void *)0xe100000000000000;
        SVar20.bridgeObject = pNVar6;
        SVar20.str = UVar8.unknown;
        Swift::String::append(SVar15,SVar20);
        _swift_bridgeObjectRelease(SVar15.bridgeObject);
        SVar17.bridgeObject = &DAT_e800000000000000;
        SVar17.str = (char *)0x54524f505055535f;
        SVar21.bridgeObject = pNVar6;
        SVar21.str = UVar8.unknown;
        Swift::String::append(SVar17,SVar21);
        pvVar3 = local_70;
        SVar1.bridgeObject = local_70;
        SVar1.str = local_78.unknown;
        Foundation::URL::appendingPathComponent(SVar1,UVar8);
        _swift_bridgeObjectRelease(pvVar3);
        (*pcVar14)(UVar10.unknown,UVar4.unknown);
        pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar10);
        (*pcVar14)(lVar11,UVar4.unknown);
        local_78.unknown = (char *)0x0;
        IVar7 = objc_stub::copyItemAtURL_toURL_error_((ID)local_b8,UVar5.unknown,pNVar6,&local_78);
        if ((int)IVar7 == 0) {
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          (*pcVar14)(lVar12,UVar4.unknown);
          goto LAB_10033dff4;
        }
      }
      (*pcVar14)(lVar12,UVar4.unknown);
      (*pcVar14)(lVar12 - extraout_x12_02,UVar4.unknown);
      goto LAB_10033e000;
    }
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    pcVar14 = *(code **)(lVar13 + 8);
  }
LAB_10033dff4:
  (*pcVar14)(lVar12 - extraout_x12_02,UVar4.unknown);
LAB_10033e000:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10033e078 | FUN_10033e078 */

void FUN_10033e078(undefined8 param_1,undefined8 param_2,URL param_3,void *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  URL UVar3;
  URL UVar4;
  Date DVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar6;
  long lVar7;
  long lVar8;
  URL UVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined *local_80;
  long local_78;
  char *local_70;
  undefined1 *puStack_68;
  
  local_88 = param_1;
  local_80 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(local_80 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  UVar3 = Foundation::URL::typeMetadataAccessor();
  local_78 = *(long *)(UVar3.unknown + -8);
  UVar4 = UVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  UVar9.unknown =
       auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)UVar9.unknown - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar8 - extraout_x12_00;
  Foundation::URL::deletingLastPathComponent(UVar4);
  local_70 = (char *)0x2f70756b636162;
  puStack_68 = &DAT_e700000000000000;
  DVar5 = Foundation::Date::init();
  SVar11 = Foundation::Date::get_description(DVar5);
  (**(code **)(lVar10 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),local_80);
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3.unknown;
  Swift::String::append(SVar11,SVar12);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  puVar2 = puStack_68;
  SVar11.bridgeObject = puStack_68;
  SVar11.str = local_70;
  Foundation::URL::appendingPathComponent(SVar11,param_3);
  _swift_bridgeObjectRelease(puVar2);
  pcVar6 = *(code **)(local_78 + 8);
  (*pcVar6)(UVar9.unknown,UVar3.unknown);
  uVar1 = local_88;
  SVar11 = Foundation::URL::get_lastPathComponent(UVar9);
  Foundation::URL::appendingPathComponent(SVar11,param_3);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  (*pcVar6)(lVar8,UVar3.unknown);
  FUN_10033db70(uVar1,lVar7);
  (*pcVar6)(lVar7,UVar3.unknown);
  return;
}



/* Address: 0x10033e254 | FUN_10033e254 */

undefined * FUN_10033e254(void)

{
  void *pvVar1;
  URL UVar2;
  URL UVar3;
  URL UVar4;
  URL UVar5;
  void *in_x3;
  long extraout_x8;
  long lVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String local_70;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  Foundation::URL::deletingLastPathComponent(UVar3);
  UVar3.unknown = &DAT_100fc1bc0;
  FUN_1000037f0(&DAT_100fc1bc0,&DAT_100c407e8);
  UVar5.unknown = (undefined *)((ulong)*(byte *)(lVar6 + 0x50) | 7);
  _swift_allocObject();
  *(undefined8 *)(UVar3.unknown + 0x18) = 4;
  *(undefined8 *)(UVar3.unknown + 0x10) = 2;
  local_70 = Foundation::URL::get_lastPathComponent(UVar3);
  SVar7.bridgeObject = &DAT_e400000000000000;
  SVar7.str = (char *)0x6d68732d;
  SVar9.bridgeObject = in_x3;
  SVar9.str = UVar5.unknown;
  Swift::String::append(SVar7,SVar9);
  UVar4.unknown = local_70.bridgeObject;
  Foundation::URL::appendingPathComponent(local_70,UVar5);
  _swift_bridgeObjectRelease();
  local_70 = Foundation::URL::get_lastPathComponent(UVar4);
  SVar8.bridgeObject = &DAT_e400000000000000;
  SVar8.str = (char *)0x6c61772d;
  SVar10.bridgeObject = in_x3;
  SVar10.str = UVar5.unknown;
  Swift::String::append(SVar8,SVar10);
  pvVar1 = local_70.bridgeObject;
  Foundation::URL::appendingPathComponent(local_70,UVar5);
  _swift_bridgeObjectRelease(pvVar1);
  (**(code **)(lVar6 + 8))
            ((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  return UVar3.unknown;
}



/* Address: 0x10033e3ac | FUN_10033e3ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033e3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  void *pvVar1;
  URL UVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  NSString *pNVar6;
  ID IVar7;
  NSURL *pNVar8;
  URL UVar9;
  long extraout_x8;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  undefined1 auStack_d0 [8];
  ulong local_c8;
  char *local_80;
  void *pvStack_78;
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  puVar15 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)puVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (lVar16 - extraout_x12_00) - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar3 = &DAT_100fc1bc0;
  FUN_1000037f0(&DAT_100fc1bc0,&DAT_100c407e8);
  lVar12 = *(long *)(lVar19 + 0x48);
  uVar14 = (ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  pcVar10 = *(code **)(lVar19 + 0x10);
  UVar4.unknown = puVar3 + uVar14;
  UVar9 = UVar2;
  local_c8 = uVar14;
  (*pcVar10)(UVar4.unknown,param_1);
  UVar4 = Foundation::URL::deletingLastPathComponent(UVar4);
  UVar4 = Foundation::URL::deletingPathExtension(UVar4);
  SVar20 = Foundation::URL::get_lastPathComponent(UVar4);
  pcVar13 = *(code **)(lVar19 + 8);
  (*pcVar13)(lVar16 - extraout_x12_00,UVar2.unknown);
  local_80 = (char *)0x2e;
  pvStack_78 = (void *)0xe100000000000000;
  SVar22.bridgeObject = param_4;
  SVar22.str = UVar9.unknown;
  Swift::String::append(SVar20,SVar22);
  _swift_bridgeObjectRelease(SVar20.bridgeObject);
  SVar21.bridgeObject = &DAT_e800000000000000;
  SVar21.str = (char *)0x54524f505055535f;
  SVar23.bridgeObject = param_4;
  SVar23.str = UVar9.unknown;
  Swift::String::append(SVar21,SVar23);
  pvVar1 = pvStack_78;
  SVar20.bridgeObject = pvStack_78;
  SVar20.str = local_80;
  Foundation::URL::appendingPathComponent(SVar20,UVar9);
  _swift_bridgeObjectRelease(pvVar1);
  (*pcVar13)(lVar17,UVar2.unknown);
  lVar5 = 1;
  FUN_10037fb74(1,2,1,puVar3);
  *(undefined8 *)(lVar5 + 0x10) = 2;
  pcVar11 = *(code **)(lVar19 + 0x20);
  (*pcVar11)(uVar14 + lVar12 + lVar5,lVar17 - extraout_x12_02,UVar2.unknown);
  local_70 = lVar5;
  FUN_10033e254(param_1);
  FUN_100381b70();
  lVar5 = local_70;
  uVar14 = *(ulong *)(local_70 + 0x10);
  if (uVar14 != 0) {
    uVar18 = 0;
    lVar17 = local_70 + local_c8;
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10033e7bc);
        (*pcVar10)();
      }
      (*pcVar10)(lVar16,lVar17,UVar2.unknown);
      (*pcVar11)(puVar15,lVar16,UVar2.unknown);
      UVar4.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar20 = Foundation::URL::get_path(UVar4);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      IVar7 = objc_stub::fileExistsAtPath_((ID)UVar4.unknown,pNVar6);
      if ((int)IVar7 != 0) {
        UVar4.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
        pNVar8 = Foundation::URL::_bridgeToObjectiveC(UVar4);
        local_80 = (char *)0x0;
        IVar7 = objc_stub::removeItemAtURL_error_((ID)UVar4.unknown,pNVar8,&local_80);
        if ((int)IVar7 == 0) {
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          (*pcVar13)(puVar15,UVar2.unknown);
          _swift_bridgeObjectRelease(lVar5);
          goto LAB_10033e780;
        }
      }
      uVar18 = uVar18 + 1;
      (*pcVar13)(puVar15,UVar2.unknown);
      lVar17 = lVar17 + lVar12;
    } while (uVar14 != uVar18);
  }
  _swift_bridgeObjectRelease(lVar5);
LAB_10033e780:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10033e7c0 | thunk_FUN_10034277c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID thunk_FUN_10034277c(undefined8 param_1,undefined8 param_2,URL param_3)

{
  long *plVar1;
  URL UVar2;
  ID IVar3;
  undefined *puVar4;
  URL UVar5;
  NSString *pNVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  code *pcVar8;
  long lVar9;
  String SVar10;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  UVar5.unknown = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)UVar5.unknown - extraout_x12;
  IVar3 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  if (DAT_100fbe470 != -1) {
    _swift_once(&DAT_100fbe470,FUN_1002fd274);
  }
  plVar1 = DAT_101057968;
  puVar4 = &DAT_100c422b0;
  _swift_getKeyPath(&DAT_100c422b0);
  (**(code **)(*plVar1 + 0x98))(UVar5.unknown);
  _swift_release(puVar4);
  SVar10.bridgeObject = &DAT_e800000000000000;
  SVar10.str = (char *)0x62642e6574736150;
  Foundation::URL::appendingPathComponent(SVar10,param_3);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(UVar5.unknown,UVar2.unknown);
  SVar10 = Foundation::URL::get_path(UVar5);
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  (*pcVar8)(lVar7,UVar2.unknown);
  IVar3 = objc_stub::fileExistsAtPath_(IVar3,pNVar6);
  return IVar3;
}



/* Address: 0x10033e7c4 | FUN_10033e7c4 */

undefined8 FUN_10033e7c4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC9PasteCore18V5MigrationManager::totalItems;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore18V5MigrationManager::totalItems,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10033e804 | FUN_10033e804 */

void FUN_10033e804(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC9PasteCore18V5MigrationManager::totalItems;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore18V5MigrationManager::totalItems,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10033e850 | FUN_10033e850 */

undefined1  [16] FUN_10033e850(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC9PasteCore18V5MigrationManager::totalItems;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore18V5MigrationManager::totalItems,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10033e890 | FUN_10033e890 */

void FUN_10033e890(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC9PasteCore18V5MigrationManager::errors;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore18V5MigrationManager::errors,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x10033e8d4 | FUN_10033e8d4 */

void FUN_10033e8d4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC9PasteCore18V5MigrationManager::errors;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore18V5MigrationManager::errors,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10033e928 | FUN_10033e928 */

undefined1  [16] FUN_10033e928(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC9PasteCore18V5MigrationManager::errors;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore18V5MigrationManager::errors,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10033e968 | FUN_10033e968 */

void FUN_10033e968(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ScheduledTaskType SVar1;
  undefined7 extraout_var;
  ulong uVar2;
  ulong uVar3;
  Date DVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_3;
  *(long *)(unaff_x22 + 0x1c8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_1;
  *(ulong *)(unaff_x22 + 0x1b8) = param_2;
  SVar1 = (extension_CoreData)::__C::NSManagedObjectContext::ScheduledTaskType::typeMetadataAccessor
                    ();
  *(long *)(unaff_x22 + 0x1d0) = CONCAT71(extraout_var,SVar1.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,SVar1.value) + -8);
  *(long *)(unaff_x22 + 0x1d8) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x208) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x210) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar3;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x220) = DVar4.unknown;
  lVar7 = *(long *)(DVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x228) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x230) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x238) =
       *(undefined8 *)(unaff_x20 + _TtC9PasteCore18V5MigrationManager::telemetry);
  FUN_1000da768(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar7 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar5);
  (**(code **)(lVar7 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd000000000000015,0x8000000100da2690,uVar5,lVar7
            );
  FUN_100004594(unaff_x22 + 0x10);
  Foundation::Date::init();
  FUN_1000da768(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar7 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar5);
  (**(code **)(lVar7 + 0x18))(uVar5,lVar7);
  *(undefined8 *)(unaff_x22 + 0x240) = uVar5;
  FUN_100004594(unaff_x22 + 0x38);
  plVar6 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x248) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10033eb4c;
  FUN_100340ad4(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x10033eb4c | FUN_10033eb4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033eb4c(ID param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  ID self;
  long unaff_x20;
  long lVar7;
  long *unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar13 = *unaff_x22;
  lVar7 = *unaff_x22;
  *(ID *)(lVar13 + 0x250) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0x248));
  self = *(ID *)(lVar13 + 0x240);
  if (unaff_x20 != 0) {
    uVar5 = *(undefined8 *)(lVar13 + 0x230);
    FUN_1003428f8();
    FUN_10001f62c();
    _swift_errorRelease();
    uVar9 = *(undefined8 *)(lVar13 + 0x230);
    uVar10 = *(undefined8 *)(lVar13 + 0x218);
    uVar11 = *(undefined8 *)(lVar13 + 0x210);
    uVar12 = *(undefined8 *)(lVar13 + 0x208);
    uVar1 = *(undefined8 *)(lVar13 + 0x1f8);
    uVar3 = *(undefined8 *)(lVar13 + 0x200);
    uVar2 = *(undefined8 *)(lVar13 + 0x1e8);
    uVar4 = *(undefined8 *)(lVar13 + 0x1f0);
    uVar14 = *(undefined8 *)(lVar13 + 0x1e0);
    (**(code **)(*(long *)(lVar13 + 0x228) + 8))(uVar9,*(undefined8 *)(lVar13 + 0x220));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010033ec70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 8))(uVar5,unaff_x20,param_3);
    return;
  }
  uVar8 = *(ulong *)(lVar13 + 0x1b8);
  objc_stub::setUndoManager_(param_1,0);
  objc_stub::setUndoManager_(self,0);
  objc_stub::setStalenessInterval_(param_1,0);
  objc_stub::setStalenessInterval_(self,0);
  plVar6 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(lVar13 + 600) = plVar6;
  *plVar6 = lVar7;
  plVar6[1] = (long)FUN_10033ecfc;
  FUN_100340f9c(*(undefined8 *)(lVar13 + 0x1b0),uVar8 & 0xcfffffffffffffff,param_1,
                *(undefined8 *)(lVar13 + 0x1c0));
  return;
}



/* Address: 0x10033ecfc | FUN_10033ecfc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033ecfc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  long *unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  
  lVar17 = *unaff_x22;
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar17 + 600));
  if (unaff_x20 != 0) {
    uVar6 = *(undefined8 *)(lVar17 + 0x230);
    FUN_1003428f8(*(undefined8 *)(lVar17 + 0x1c8));
    FUN_10001f62c();
    _swift_errorRelease();
    uVar12 = *(undefined8 *)(lVar17 + 0x230);
    uVar13 = *(undefined8 *)(lVar17 + 0x218);
    uVar14 = *(undefined8 *)(lVar17 + 0x210);
    uVar16 = *(undefined8 *)(lVar17 + 0x208);
    uVar1 = *(undefined8 *)(lVar17 + 0x1f8);
    uVar9 = *(undefined8 *)(lVar17 + 0x200);
    uVar2 = *(undefined8 *)(lVar17 + 0x1e8);
    uVar10 = *(undefined8 *)(lVar17 + 0x1f0);
    uVar18 = *(undefined8 *)(lVar17 + 0x1e0);
    (**(code **)(*(long *)(lVar17 + 0x228) + 8))(uVar12,*(undefined8 *)(lVar17 + 0x220));
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010033ee20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar15 + 8))(uVar6,unaff_x20,param_3);
    return;
  }
  uVar9 = *(undefined8 *)(lVar17 + 0x250);
  uVar10 = *(undefined8 *)(lVar17 + 0x218);
  uVar1 = *(undefined8 *)(lVar17 + 0x1d0);
  lVar3 = *(long *)(lVar17 + 0x1d8);
  FUN_1000da768(lVar17 + 0x60);
  uVar2 = *(undefined8 *)(lVar17 + 0x78);
  lVar4 = *(long *)(lVar17 + 0x80);
  FUN_100004640(lVar17 + 0x60,uVar2);
  (**(code **)(lVar4 + 0x30))
            (0x6f6974617267696d,0xe90000000000006e,0xd00000000000001f,0x8000000100da26b0,uVar2,lVar4
            );
  FUN_100004594(lVar17 + 0x60);
  puVar7 = &DAT_100ecbce8;
  _swift_allocObject(&DAT_100ecbce8,0x18,7);
  *(undefined **)(lVar17 + 0x260) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = uVar9;
  uVar5 = *(undefined4 *)
           PTR___enum_case_for__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_immediate__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_Type___>__extension_in_CoreData____C_NSManagedObjectContext_ScheduledTaskType_100ea9990
  ;
  *(undefined4 *)(lVar17 + 0x378) = uVar5;
  pcVar8 = *(code **)(lVar3 + 0x68);
  *(code **)(lVar17 + 0x268) = pcVar8;
  (*pcVar8)(uVar10,uVar5,uVar1);
  plVar11 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_task_alloc();
  *(long **)(lVar17 + 0x270) = plVar11;
  FUN_1000037f0(&DAT_100fc0390,&DAT_100c421f8);
  *plVar11 = lVar15;
  plVar11[1] = (long)FUN_10033ef60;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform
            ((ScheduledTaskType)((char)lVar17 + -0x60));
  return;
}



/* Address: 0x10033ef60 | FUN_10033ef60 */

void FUN_10033ef60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar5 = *unaff_x22;
  *(long *)(lVar5 + 0x278) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x270));
  uVar4 = *(undefined8 *)(lVar5 + 0x260);
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x1b0);
    uVar2 = *(undefined8 *)(lVar5 + 0x1b8);
    pcVar3 = *(code **)(*(long *)(lVar5 + 0x1d8) + 8);
    *(code **)(lVar5 + 0x280) = pcVar3;
    (*pcVar3)(*(undefined8 *)(lVar5 + 0x218),*(undefined8 *)(lVar5 + 0x1d0));
    _swift_release(uVar4);
    FUN_1000da368();
    *(undefined8 *)(lVar5 + 0x288) = uVar1;
    *(undefined8 *)(lVar5 + 0x290) = uVar2;
    pcVar3 = FUN_10033f028;
  }
  else {
    uVar1 = *(undefined8 *)(lVar5 + 0x1b0);
    uVar2 = *(undefined8 *)(lVar5 + 0x1b8);
    _swift_release(uVar4);
    FUN_1000da368(uVar1,uVar2);
    pcVar3 = FUN_10033f1a4;
  }
  _swift_task_switch(pcVar3,uVar1,uVar2);
  return;
}



/* Address: 0x10033f028 | FUN_10033f028 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10033f028(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  pcVar8 = *(code **)(unaff_x22 + 0x268);
  uVar1 = *(undefined4 *)(unaff_x22 + 0x378);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x298) = uVar7;
  puVar2 = &DAT_100ecbd10;
  _swift_allocObject(&DAT_100ecbd10,0x20,7);
  *(undefined **)(unaff_x22 + 0x2a0) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  (*pcVar8)(uVar5,uVar1,uVar6);
  plVar4 = (long *)(ulong)*(uint *)(PTR__perform_100ea99b8 + 4);
  _swift_bridgeObjectRetain(uVar7);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2a8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10033f108;
  (extension_CoreData)::__C::NSManagedObjectContext::_perform((ScheduledTaskType)(__int8)plVar4);
  return;
}



/* Address: 0x10033f108 | FUN_10033f108 */

void FUN_10033f108(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  undefined8 uVar3;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2a8));
  uVar1 = *(undefined8 *)(lVar2 + 0x2a0);
  if (unaff_x20 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x298);
    _swift_errorRelease();
    _swift_release(uVar1);
    _swift_bridgeObjectRelease(uVar3);
    return;
  }
  (**(code **)(lVar2 + 0x280))(*(undefined8 *)(lVar2 + 0x210),*(undefined8 *)(lVar2 + 0x1d0));
  _swift_release(uVar1);
  _swift_task_switch(FUN_10033f2c8,*(undefined8 *)(lVar2 + 0x288),*(undefined8 *)(lVar2 + 0x290));
  return;
}



/* Address: 0x10033f1a4 | FUN_10033f1a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10033f1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  (**(code **)(*(long *)(unaff_x22 + 0x1d8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x218),*(undefined8 *)(unaff_x22 + 0x1d0));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar5 = uVar7;
  FUN_1003428f8();
  FUN_10001f62c();
  _swift_errorRelease(uVar7);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  (**(code **)(*(long *)(unaff_x22 + 0x228) + 8))(uVar8,*(undefined8 *)(unaff_x22 + 0x220));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010033f2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar5,param_3);
  return;
}


