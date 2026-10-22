/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10045e1bc | FUN_10045e1bc */

void FUN_10045e1bc(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fc7eb8;
    FUN_100005c24(&DAT_100fc7eb8,&DAT_100c4c8c0);
    local_38 = param_2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x10045e224 | FUN_10045e224 */

void FUN_10045e224(void)

{
  FUN_100003a00(&DAT_100fc7ed8,PTR_typeMetadataAccessor_100ea7500,
                PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518);
  return;
}



/* Address: 0x10045e250 | thunk_FUN_10045e254 */

void thunk_FUN_10045e254(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7ee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c980;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c980,&DAT_100ed6a60);
  DAT_100fc7ee0 = pTVar1;
  return;
}



/* Address: 0x10045e254 | FUN_10045e254 */

void FUN_10045e254(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7ee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c980;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c980,&DAT_100ed6a60);
  DAT_100fc7ee0 = pTVar1;
  return;
}



/* Address: 0x10045e294 | thunk_FUN_10045e298 */

void thunk_FUN_10045e298(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc7ee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7ef0;
  FUN_100005c24(&DAT_100fc7ef0,&DAT_100c4ca70);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fc7ee8 = puVar2;
  return;
}



/* Address: 0x10045e298 | FUN_10045e298 */

void FUN_10045e298(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc7ee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7ef0;
  FUN_100005c24(&DAT_100fc7ef0,&DAT_100c4ca70);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fc7ee8 = puVar2;
  return;
}



/* Address: 0x10045e2e8 | FUN_10045e2e8 */

long * FUN_10045e2e8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  UUID UVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar13 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar13;
    *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
    iVar3 = *(int *)(param_3 + 0x1c);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar6.unknown + -8);
    pcVar14 = *(code **)(lVar12 + 0x10);
    _swift_bridgeObjectRetain(uVar13);
    (*pcVar14)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar6.unknown);
    lVar11 = (long)*(int *)(param_3 + 0x20);
    lVar8 = (long)param_2 + lVar11;
    (**(code **)(lVar12 + 0x30))(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (*pcVar14)((long)param_1 + lVar11,(long)param_2 + lVar11,DVar6.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fc7df8;
      FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar3 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar13 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar13;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    lVar8 = 0;
    FUN_10045bd80();
    lVar11 = *(long *)(lVar8 + -8);
    pcVar15 = *(code **)(lVar11 + 0x30);
    _swift_bridgeObjectRetain(uVar13);
    puVar9 = puVar2;
    (*pcVar15)(puVar2,1,lVar8);
    if ((int)puVar9 == 0) {
      *puVar1 = *puVar2;
      uVar13 = puVar2[2];
      uVar16 = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[1] = uVar16;
      iVar3 = *(int *)(lVar8 + 0x18);
      _swift_bridgeObjectRetain(uVar16);
      _swift_bridgeObjectRetain(uVar13);
      (*pcVar14)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,DVar6.unknown);
      (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
    }
    else {
      puVar7 = &DAT_100fc7e00;
      FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar10 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar8 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10045e500 | FUN_10045e500 */

void FUN_10045e500(long param_1,long param_2)

{
  int iVar1;
  UUID UVar2;
  Date DVar3;
  long lVar4;
  code *UNRECOVERED_JUMPTABLE;
  long lVar5;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1,UVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  iVar1 = *(int *)(param_2 + 0x1c);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar3.unknown + -8);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar3.unknown);
  iVar1 = *(int *)(param_2 + 0x20);
  lVar4 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar3.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  param_1 = param_1 + *(int *)(param_2 + 0x28);
  lVar5 = 0;
  FUN_10045bd80();
  lVar4 = param_1;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(param_1,1,lVar5);
  if ((int)lVar4 != 0) {
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010045e62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + *(int *)(lVar5 + 0x18),DVar3.unknown);
  return;
}



/* Address: 0x10045e630 | FUN_10045e630 */

long FUN_10045e630(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  *(undefined1 *)(param_1 + iVar3) = *(undefined1 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x1c);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar5.unknown + -8);
  pcVar12 = *(code **)(lVar10 + 0x10);
  _swift_bridgeObjectRetain(uVar11);
  (*pcVar12)(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
  lVar9 = (long)*(int *)(param_3 + 0x20);
  lVar7 = param_2 + lVar9;
  (**(code **)(lVar10 + 0x30))(lVar7,1,DVar5.unknown);
  if ((int)lVar7 == 0) {
    (*pcVar12)(param_1 + lVar9,param_2 + lVar9,DVar5.unknown);
    (**(code **)(lVar10 + 0x38))(param_1 + lVar9,0,1,DVar5.unknown);
  }
  else {
    puVar6 = &DAT_100fc7df8;
    FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
    _memcpy((void *)(param_1 + lVar9),(void *)(param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar11 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  lVar7 = 0;
  FUN_10045bd80();
  lVar9 = *(long *)(lVar7 + -8);
  pcVar13 = *(code **)(lVar9 + 0x30);
  _swift_bridgeObjectRetain(uVar11);
  puVar8 = puVar2;
  (*pcVar13)(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    *puVar1 = *puVar2;
    uVar11 = puVar2[2];
    uVar14 = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[1] = uVar14;
    iVar3 = *(int *)(lVar7 + 0x18);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar11);
    (*pcVar12)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,DVar5.unknown);
    (**(code **)(lVar9 + 0x38))(puVar1,0,1,lVar7);
  }
  else {
    puVar6 = &DAT_100fc7e00;
    FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x10045e81c | FUN_10045e81c */

long FUN_10045e81c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x18))(param_1,param_2,UVar4.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar10 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x18));
  iVar3 = *(int *)(param_3 + 0x1c);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  pcVar12 = *(code **)(lVar13 + 0x18);
  (*pcVar12)(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
  lVar11 = (long)*(int *)(param_3 + 0x20);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar7 = param_1 + lVar11;
  (*pcVar14)(lVar7,1,DVar5.unknown);
  lVar15 = param_2 + lVar11;
  (*pcVar14)(lVar15,1,DVar5.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar15 == 0) {
      (*pcVar12)(param_1 + lVar11,param_2 + lVar11,DVar5.unknown);
      goto LAB_10045e964;
    }
    (**(code **)(lVar13 + 8))(param_1 + lVar11,DVar5.unknown);
  }
  else if ((int)lVar15 == 0) {
    (**(code **)(lVar13 + 0x10))(param_1 + lVar11,param_2 + lVar11,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))(param_1 + lVar11,0,1,DVar5.unknown);
    goto LAB_10045e964;
  }
  puVar6 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  _memcpy((void *)(param_1 + lVar11),(void *)(param_2 + lVar11),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_10045e964:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar10 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar10);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  lVar7 = 0;
  FUN_10045bd80();
  lVar15 = *(long *)(lVar7 + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  puVar8 = puVar1;
  (*pcVar14)(puVar1,1,lVar7);
  puVar9 = puVar2;
  (*pcVar14)(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    if ((int)puVar9 == 0) {
      *puVar1 = *puVar2;
      uVar10 = puVar1[1];
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar10);
      uVar10 = puVar1[2];
      puVar1[2] = puVar2[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar10);
      (*pcVar12)((long)puVar1 + (long)*(int *)(lVar7 + 0x18),
                 (long)puVar2 + (long)*(int *)(lVar7 + 0x18),DVar5.unknown);
      return param_1;
    }
    FUN_10005241c(puVar1,FUN_10045bd80);
  }
  else if ((int)puVar9 == 0) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    uVar10 = puVar2[2];
    puVar1[2] = uVar10;
    iVar3 = *(int *)(lVar7 + 0x18);
    pcVar12 = *(code **)(lVar13 + 0x10);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar10);
    (*pcVar12)((long)puVar1 + (long)iVar3,(long)puVar2 + (long)iVar3,DVar5.unknown);
    (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar7);
    return param_1;
  }
  puVar6 = &DAT_100fc7e00;
  FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  return param_1;
}



/* Address: 0x10045eaf4 | FUN_10045eaf4 */

long FUN_10045eaf4(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  UUID UVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x20))(param_1,param_2,UVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar12 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar12;
  *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
  iVar1 = *(int *)(param_3 + 0x1c);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  pcVar10 = *(code **)(lVar11 + 0x20);
  (*pcVar10)(param_1 + iVar1,param_2 + iVar1,DVar5.unknown);
  lVar9 = (long)*(int *)(param_3 + 0x20);
  lVar7 = param_2 + lVar9;
  (**(code **)(lVar11 + 0x30))(lVar7,1,DVar5.unknown);
  if ((int)lVar7 == 0) {
    (*pcVar10)(param_1 + lVar9,param_2 + lVar9,DVar5.unknown);
    (**(code **)(lVar11 + 0x38))(param_1 + lVar9,0,1,DVar5.unknown);
  }
  else {
    puVar6 = &DAT_100fc7df8;
    FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
    _memcpy((void *)(param_1 + lVar9),(void *)(param_2 + lVar9),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x28);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar12 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar12;
  puVar2 = (undefined8 *)(param_1 + iVar1);
  puVar3 = (undefined8 *)(param_2 + iVar1);
  lVar7 = 0;
  FUN_10045bd80();
  lVar9 = *(long *)(lVar7 + -8);
  puVar8 = puVar3;
  (**(code **)(lVar9 + 0x30))(puVar3,1,lVar7);
  if ((int)puVar8 == 0) {
    uVar12 = *puVar3;
    puVar2[1] = puVar3[1];
    *puVar2 = uVar12;
    puVar2[2] = puVar3[2];
    (*pcVar10)((long)puVar2 + (long)*(int *)(lVar7 + 0x18),
               (long)puVar3 + (long)*(int *)(lVar7 + 0x18),DVar5.unknown);
    (**(code **)(lVar9 + 0x38))(puVar2,0,1,lVar7);
  }
  else {
    puVar6 = &DAT_100fc7e00;
    FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
    _memcpy(puVar2,puVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x10045eca4 | FUN_10045eca4 */

long FUN_10045eca4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  UUID UVar4;
  undefined8 uVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x28))(param_1,param_2,UVar4.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar11 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  _swift_bridgeObjectRelease(uVar5);
  iVar3 = *(int *)(param_3 + 0x1c);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x18));
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar6.unknown + -8);
  pcVar13 = *(code **)(lVar14 + 0x28);
  (*pcVar13)(param_1 + iVar3,param_2 + iVar3,DVar6.unknown);
  lVar12 = (long)*(int *)(param_3 + 0x20);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar8 = param_1 + lVar12;
  (*pcVar15)(lVar8,1,DVar6.unknown);
  lVar16 = param_2 + lVar12;
  (*pcVar15)(lVar16,1,DVar6.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar16 == 0) {
      (*pcVar13)(param_1 + lVar12,param_2 + lVar12,DVar6.unknown);
      goto LAB_10045edd8;
    }
    (**(code **)(lVar14 + 8))(param_1 + lVar12,DVar6.unknown);
  }
  else if ((int)lVar16 == 0) {
    (**(code **)(lVar14 + 0x20))(param_1 + lVar12,param_2 + lVar12,DVar6.unknown);
    (**(code **)(lVar14 + 0x38))(param_1 + lVar12,0,1,DVar6.unknown);
    goto LAB_10045edd8;
  }
  puVar7 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  _memcpy((void *)(param_1 + lVar12),(void *)(param_2 + lVar12),
          *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_10045edd8:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar11 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar11;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  lVar8 = 0;
  FUN_10045bd80();
  lVar16 = *(long *)(lVar8 + -8);
  pcVar15 = *(code **)(lVar16 + 0x30);
  puVar9 = puVar1;
  (*pcVar15)(puVar1,1,lVar8);
  puVar10 = puVar2;
  (*pcVar15)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 == 0) {
      uVar11 = puVar2[1];
      uVar5 = puVar1[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar11;
      _swift_bridgeObjectRelease(uVar5);
      uVar11 = puVar1[2];
      puVar1[2] = puVar2[2];
      _swift_bridgeObjectRelease(uVar11);
      (*pcVar13)((long)puVar1 + (long)*(int *)(lVar8 + 0x18),
                 (long)puVar2 + (long)*(int *)(lVar8 + 0x18),DVar6.unknown);
      return param_1;
    }
    FUN_10005241c(puVar1,FUN_10045bd80);
  }
  else if ((int)puVar10 == 0) {
    uVar11 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar11;
    puVar1[2] = puVar2[2];
    (**(code **)(lVar14 + 0x20))
              ((long)puVar1 + (long)*(int *)(lVar8 + 0x18),
               (long)puVar2 + (long)*(int *)(lVar8 + 0x18),DVar6.unknown);
    (**(code **)(lVar16 + 0x38))(puVar1,0,1,lVar8);
    return param_1;
  }
  puVar7 = &DAT_100fc7e00;
  FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  return param_1;
}



/* Address: 0x10045ef2c | FUN_10045ef2c */

void FUN_10045ef2c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10045ef38 | FUN_10045ef38 */

ulong FUN_10045ef38(ulong param_1,undefined8 param_2,long param_3)

{
  UUID UVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  iVar5 = (int)param_2;
  if (iVar5 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x30);
  }
  else {
    if (iVar5 == 0x7fffffff) {
      uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
      if (0xfffffffe < uVar2) {
        uVar2 = 0xffffffff;
      }
      return (ulong)((int)uVar2 + 1);
    }
    UVar1.unknown = (undefined *)Foundation::Date::typeMetadataAccessor();
    lVar3 = *(long *)(UVar1.unknown + -8);
    if (iVar5 == *(int *)(lVar3 + 0x54)) {
      lVar4 = (long)*(int *)(param_3 + 0x1c);
    }
    else {
      UVar1.unknown = &DAT_100fc7df8;
      FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
      lVar3 = *(long *)(UVar1.unknown + -8);
      if (iVar5 == *(int *)(lVar3 + 0x54)) {
        lVar4 = (long)*(int *)(param_3 + 0x20);
      }
      else {
        UVar1.unknown = &DAT_100fc7e00;
        FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
        lVar3 = *(long *)(UVar1.unknown + -8);
        lVar4 = (long)*(int *)(param_3 + 0x28);
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x30);
    param_1 = param_1 + lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010045f040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,UVar1.unknown);
  return param_1;
}



/* Address: 0x10045f044 | FUN_10045f044 */

void FUN_10045f044(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10045f050 | FUN_10045f050 */

void FUN_10045f050(long param_1,undefined8 param_2,int param_3,long param_4)

{
  UUID UVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_3 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(UVar1.unknown + -8) + 0x38);
  }
  else {
    if (param_3 == 0x7fffffff) {
      *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = (ulong)((int)param_2 - 1);
      return;
    }
    UVar1.unknown = (undefined *)Foundation::Date::typeMetadataAccessor();
    lVar2 = *(long *)(UVar1.unknown + -8);
    if (param_3 == *(int *)(lVar2 + 0x54)) {
      lVar3 = (long)*(int *)(param_4 + 0x1c);
    }
    else {
      UVar1.unknown = &DAT_100fc7df8;
      FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
      lVar2 = *(long *)(UVar1.unknown + -8);
      if (param_3 == *(int *)(lVar2 + 0x54)) {
        lVar3 = (long)*(int *)(param_4 + 0x20);
      }
      else {
        UVar1.unknown = &DAT_100fc7e00;
        FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
        lVar2 = *(long *)(UVar1.unknown + -8);
        lVar3 = (long)*(int *)(param_4 + 0x28);
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x38);
    param_1 = param_1 + lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010045f154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_2,UVar1.unknown);
  return;
}



/* Address: 0x10045f158 | FUN_10045f158 */

void FUN_10045f158(long param_1,ulong param_2)

{
  UUID UVar1;
  Date DVar2;
  long lVar3;
  undefined *puVar4;
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined *puStack_30;
  long local_28;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_58 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_50 = &DAT_100c4cb40;
    local_48 = &DAT_100c4cb58;
    DVar2 = Foundation::Date::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_40 = *(long *)(DVar2.unknown + -8) + 0x40;
      puVar4 = &DAT_100fc7f60;
      lVar3 = 0x13f;
      FUN_1001a1320(0x13f,&DAT_100fc7f60,PTR_typeMetadataAccessor_100ea7480);
      if (puVar4 < (undefined *)0x40) {
        local_38 = *(long *)(lVar3 + -8) + 0x40;
        puStack_30 = &DAT_100c4cb40;
        puVar4 = &DAT_100fc7f68;
        lVar3 = 0x13f;
        FUN_1001a1320(0x13f,&DAT_100fc7f68,FUN_10045bd80);
        if (puVar4 < (undefined *)0x40) {
          local_28 = *(long *)(lVar3 + -8) + 0x40;
          _swift_initStructMetadata(param_1,0x100,7,&local_58,param_1 + 0x10);
        }
      }
    }
  }
  return;
}



/* Address: 0x10045f248 | FUN_10045f248 */

void FUN_10045f248(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10045f254 | FUN_10045f254 */

void FUN_10045f254(void)

{
  return;
}



/* Address: 0x10045f258 | FUN_10045f258 */

undefined1  [16] FUN_10045f258(void)

{
  return ZEXT816(0x100ed6a60);
}



/* Address: 0x10045f268 | FUN_10045f268 */

long * FUN_10045f268(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  Date DVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    lVar5 = param_2[2];
    lVar7 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar7;
    iVar2 = *(int *)(param_3 + 0x18);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    pcVar6 = *(code **)(*(long *)(DVar3.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar7);
    _swift_bridgeObjectRetain(lVar5);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,DVar3.unknown);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10045f324 | FUN_10045f324 */

void FUN_10045f324(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  iVar1 = *(int *)(param_2 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010045f36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x10045f370 | FUN_10045f370 */

undefined8 * FUN_10045f370(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar5;
  iVar1 = *(int *)(param_3 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  pcVar4 = *(code **)(*(long *)(DVar2.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar4)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar2.unknown);
  return param_1;
}



/* Address: 0x10045f400 | FUN_10045f400 */

undefined8 * FUN_10045f400(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *(int *)(param_3 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar2.unknown);
  return param_1;
}



/* Address: 0x10045f48c | FUN_10045f48c */

undefined8 * FUN_10045f48c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[2] = param_2[2];
  iVar1 = *(int *)(param_3 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar2.unknown);
  return param_1;
}



/* Address: 0x10045f4ec | FUN_10045f4ec */

undefined8 * FUN_10045f4ec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Date DVar4;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *(int *)(param_3 + 0x18);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar4.unknown);
  return param_1;
}



/* Address: 0x10045f560 | FUN_10045f560 */

void FUN_10045f560(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10045f56c | FUN_10045f56c */

ulong FUN_10045f56c(long param_1,undefined8 param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010045f5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x30))(uVar2,param_2,DVar1.unknown);
  return uVar2;
}



/* Address: 0x10045f5e8 | FUN_10045f5e8 */

void FUN_10045f5e8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10045f5f4 | FUN_10045f5f4 */

void FUN_10045f5f4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010045f664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,DVar1.unknown);
  return;
}



/* Address: 0x10045f668 | FUN_10045f668 */

undefined1  [16] FUN_10045f668(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  puStack_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_38 = &DAT_100c4cb40;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x10045f6e8 | FUN_10045f6e8 */

undefined1  [16] FUN_10045f6e8(void)

{
  return ZEXT816(0x100ed6af0);
}



/* Address: 0x10045f6f8 | thunk_FUN_100157bb0 */

void thunk_FUN_100157bb0(void)

{
  FUN_100157bb0();
  return;
}



/* Address: 0x10045f6fc | thunk_FUN_100157c40 */

void thunk_FUN_100157c40(void)

{
  FUN_100157c40();
  return;
}



/* Address: 0x10045f700 | FUN_10045f700 */

undefined1  [16] FUN_10045f700(void)

{
  return ZEXT816(0x100ed6b80);
}



/* Address: 0x10045f710 | thunk_FUN_10045f714 */

void thunk_FUN_10045f714(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cc30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cc30,&DAT_100ed6b80);
  DAT_100fc8048 = pTVar1;
  return;
}



/* Address: 0x10045f714 | FUN_10045f714 */

void FUN_10045f714(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cc30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cc30,&DAT_100ed6b80);
  DAT_100fc8048 = pTVar1;
  return;
}



/* Address: 0x10045f754 | thunk_FUN_10045f758 */

void thunk_FUN_10045f758(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cce8,&DAT_100ed6af0);
  DAT_100fc8050 = pTVar1;
  return;
}



/* Address: 0x10045f758 | FUN_10045f758 */

void FUN_10045f758(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cce8,&DAT_100ed6af0);
  DAT_100fc8050 = pTVar1;
  return;
}



/* Address: 0x10045f798 | thunk_FUN_10045f79c */

void thunk_FUN_10045f79c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cc80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cc80,&DAT_100ed6af0);
  DAT_100fc8058 = pTVar1;
  return;
}



/* Address: 0x10045f79c | FUN_10045f79c */

void FUN_10045f79c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cc80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cc80,&DAT_100ed6af0);
  DAT_100fc8058 = pTVar1;
  return;
}



/* Address: 0x10045f7dc | thunk_FUN_10045f7e0 */

void thunk_FUN_10045f7e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8060 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cc58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cc58,&DAT_100ed6af0);
  DAT_100fc8060 = pTVar1;
  return;
}



/* Address: 0x10045f7e0 | FUN_10045f7e0 */

void FUN_10045f7e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8060 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cc58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cc58,&DAT_100ed6af0);
  DAT_100fc8060 = pTVar1;
  return;
}



/* Address: 0x10045f820 | thunk_FUN_10045f824 */

void thunk_FUN_10045f824(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8068 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cbc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cbc8,&DAT_100ed6b80);
  DAT_100fc8068 = pTVar1;
  return;
}



/* Address: 0x10045f824 | FUN_10045f824 */

void FUN_10045f824(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8068 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cbc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cbc8,&DAT_100ed6b80);
  DAT_100fc8068 = pTVar1;
  return;
}



/* Address: 0x10045f864 | thunk_FUN_10045f868 */

void thunk_FUN_10045f868(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8070 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cba0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cba0,&DAT_100ed6b80);
  DAT_100fc8070 = pTVar1;
  return;
}



/* Address: 0x10045f868 | FUN_10045f868 */

void FUN_10045f868(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8070 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cba0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cba0,&DAT_100ed6b80);
  DAT_100fc8070 = pTVar1;
  return;
}



/* Address: 0x10045f8a8 | FUN_10045f8a8 */

undefined4 FUN_10045f8a8(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x6e65696c43726364 || param_2 != -0x14ffffffffbbb68c) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6e65696c43726364,(_StringGuts)0xeb00000000444974,expecting);
    if (!bVar1) {
      if (((param_1 != 0x7463657269646572) || (param_2 != -0x13ffffff8cb6adab)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7463657269646572,(_StringGuts)0xec00000073495255,
                             expecting), !bVar1)) {
        if ((param_1 == 0x6465766f72707061) && (param_2 == -0x15ffffffffff8bbf)) {
          _swift_bridgeObjectRelease(0xea00000000007441);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6465766f72707061,(_StringGuts)0xea00000000007441,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x10045f9cc | FUN_10045f9cc */

void FUN_10045f9cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8078 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c9e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c9e8,&DAT_100ed6a60);
  DAT_100fc8078 = pTVar1;
  return;
}



/* Address: 0x10045fa0c | FUN_10045fa0c */

undefined8 FUN_10045fa0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10045bd80();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10045fa50 | thunk_FUN_100157c40 */

void thunk_FUN_100157c40(void)

{
  FUN_100157c40();
  return;
}



/* Address: 0x10045fa54 | thunk_FUN_100157bb0 */

void thunk_FUN_100157bb0(void)

{
  FUN_100157bb0();
  return;
}



/* Address: 0x10045fa58 | FUN_10045fa58 */

/* WARNING: Removing unreachable block (ram,0x00010045ff38) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_10045fa58(UTF8View param_1,undefined *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  __uint8 _Var3;
  Range<__int64> RVar4;
  undefined **ppuVar5;
  Index position;
  Index after;
  UnsafeBufferPointer<__int8> UVar6;
  undefined *puVar7;
  UnsafeBufferPointer<__int8> UVar8;
  undefined *puVar9;
  undefined6 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined6 local_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined6 local_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined **local_90;
  undefined8 local_88;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_f0 = SUB86(param_1.unknown,0);
  uStack_ea = (undefined2)((ulong)param_1.unknown >> 0x30);
  uStack_e8 = SUB86(param_2,0);
  uStack_e2 = (undefined2)((ulong)param_2 >> 0x30);
  local_e0 = param_1.unknown;
  puStack_d8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  RVar4.unknown = &DAT_100fc83b8;
  FUN_1000037f0(&DAT_100fc83b8,&DAT_100c4cf40);
  ppuVar5 = &local_d0;
  _swift_dynamicCast(ppuVar5,&local_f0,PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,
                     RVar4.unknown,6);
  if ((int)ppuVar5 != 0) {
    FUN_100076508(&local_d0,&local_a0);
    FUN_100004640(&local_a0,local_88);
    Foundation::ContiguousBytes::_withUnsafeBytes();
    FUN_100004594(&local_a0);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
    goto LAB_10045fe94;
  }
  local_b0 = 0;
  puStack_c8 = (undefined *)0x0;
  local_d0 = (undefined *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)&DAT_100c4cf48;
  FUN_100005808(&local_d0,&DAT_100fc83c0);
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        puVar9 = param_2;
        UVar8 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
      }
      else {
        UVar8.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        puVar9 = param_1.unknown & 0xffffffffffff;
      }
      puVar15 = (undefined *)0x0;
      if (UVar8.unknown != (undefined *)0x0) {
        puVar15 = puVar9 + UVar8.unknown;
      }
      FUN_10046be0c();
      puVar9 = puVar15;
    }
    else {
      puVar15 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
      puStack_c8 = (undefined *)((ulong)param_2 & 0xffffffffffffff);
      local_d0 = param_1.unknown;
      FUN_100464e0c(&local_a0,&local_d0);
      UVar8.unknown = (undefined *)CONCAT26(uStack_9a,local_a0);
      puVar9 = (undefined *)CONCAT26(uStack_92,uStack_98);
    }
    if ((ulong)puVar9 >> 0x3c < 0xf) goto LAB_10045fe94;
    puVar7 = param_1.unknown & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar7 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    }
  }
  else {
    puVar15 = param_2;
    puVar7 = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    UVar8.unknown = (undefined *)0x0;
    puVar9 = (undefined *)0xf000000000000000;
  }
  FUN_10046be70();
  local_90 = &local_e0;
  pcVar2 = FUN_10046c3e0;
  puVar10 = &local_a0;
  local_d0 = puVar7;
  puStack_c8 = puVar15;
  FUN_100464ed8();
  uVar12 = (uint)((ulong)puStack_c8 >> 0x20);
  uVar13 = uVar12 >> 0x1e;
  if (uVar12 >> 0x1e < 2) {
    if (uVar13 == 0) {
      puVar15 = (undefined *)((ulong)puStack_c8 >> 0x30 & 0xff);
    }
    else {
      iVar14 = (int)((ulong)local_d0 >> 0x20);
      if (SBORROW4(iVar14,(int)local_d0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045ff34);
        (*pcVar2)();
      }
      puVar15 = (undefined *)(long)(iVar14 - (int)local_d0);
    }
    if (RVar4.unknown == puVar15) goto LAB_10045fc7c;
LAB_10045fc58:
    if (uVar13 == 2) {
      uVar11 = *(ulong *)(local_d0 + 0x18);
    }
    else if (uVar13 == 1) {
      uVar11 = (long)local_d0 >> 0x20;
    }
    else {
      uVar11 = (ulong)puStack_c8 >> 0x30 & 0xff;
    }
LAB_10045fe70:
    if ((long)uVar11 < (long)RVar4.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10045ff2c);
      (*pcVar2)();
    }
    Foundation::Data::_Representation::_replaceSubrange(RVar4,uVar11,(_Representation)0x0,0);
LAB_10045fe8c:
    _swift_bridgeObjectRelease(puVar10);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
  else {
    if (uVar13 == 2) {
      if (SBORROW8(*(long *)(local_d0 + 0x18),*(long *)(local_d0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10045ff30);
        (*pcVar2)();
      }
      if (RVar4.unknown != (undefined *)(*(long *)(local_d0 + 0x18) - *(long *)(local_d0 + 0x10)))
      goto LAB_10045fc58;
    }
    else if (RVar4.unknown != (undefined *)0x0) {
      uVar11 = 0;
      goto LAB_10045fe70;
    }
LAB_10045fc7c:
    uVar11 = (ulong)pcVar2 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_ea = 0;
    if (uVar11 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0) {
      uVar19 = 0;
      uVar12 = (uint)((ulong)pcVar2 >> 0x3b) & 1;
      if (((ulong)puVar10 & 0x1000000000000000) == 0) {
        uVar12 = 1;
      }
      uVar17 = 4L << uVar12;
      do {
        uVar18 = (ulong)after.cmsgPointer.unknown & 0xc;
        position.cmsgPointer.unknown = after.cmsgPointer.unknown;
        if (uVar18 == uVar17) {
          FUN_1000740a8(after.cmsgPointer.unknown,pcVar2,puVar10);
        }
        uVar16 = (ulong)position.cmsgPointer.unknown >> 0x10;
        if (uVar11 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10045fef8);
          (*pcVar2)();
        }
        if (((ulong)puVar10 >> 0x3c & 1) == 0) {
          if (((ulong)puVar10 >> 0x3d & 1) != 0) {
            local_a0 = SUB86(pcVar2,0);
            uStack_9a = (undefined2)((ulong)pcVar2 >> 0x30);
            uStack_98 = (undefined6)((ulong)puVar10 & 0xffffffffffffff);
            uStack_92 = (undefined2)(((ulong)puVar10 & 0xffffffffffffff) >> 0x30);
            _Var3 = *(__uint8 *)((long)&local_a0 + uVar16);
            goto joined_r0x00010045fd70;
          }
          UVar6.unknown = (undefined *)(((ulong)puVar10 & 0xfffffffffffffff) + 0x20);
          if (((ulong)pcVar2 >> 0x3c & 1) == 0) {
            UVar6 = Swift::_StringObject::get_sharedUTF8((_StringObject)pcVar2);
          }
          _Var3 = UVar6.unknown[uVar16];
          if (uVar18 != uVar17) goto LAB_10045fd30;
LAB_10045fd74:
          FUN_1000740a8(after.cmsgPointer.unknown,pcVar2,puVar10);
          if (((ulong)puVar10 >> 0x3c & 1) != 0) goto LAB_10045fd8c;
LAB_10045fd34:
          after.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)pcVar2);
joined_r0x00010045fd70:
          if (uVar18 == uVar17) goto LAB_10045fd74;
LAB_10045fd30:
          if (((ulong)puVar10 >> 0x3c & 1) == 0) goto LAB_10045fd34;
LAB_10045fd8c:
          if (uVar11 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10045ff00);
            (*pcVar2)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)pcVar2);
        }
        *(__uint8 *)((long)&local_f0 + (uVar19 & 0xff)) = _Var3;
        uVar12 = ((uint)uVar19 & 0xff) + 1;
        uVar19 = (ulong)uVar12;
        if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10045fefc);
          (*pcVar2)();
        }
        if ((uVar12 & 0xff) == 0xe) {
          local_a0 = local_f0;
          uStack_9a = uStack_ea;
          uStack_98 = uStack_e8;
          Foundation::Data::_Representation::append
                    ((UnsafeRawBufferPointer)&local_a0,(_Representation)((char)&local_a0 + 0xe));
          uVar19 = 0;
        }
      } while (uVar11 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
      if ((uVar19 & 0xff) != 0) {
        local_a0 = local_f0;
        uStack_9a = uStack_ea;
        uStack_98 = uStack_e8;
        Foundation::Data::_Representation::append
                  ((UnsafeRawBufferPointer)&local_a0,
                   (_Representation)((char)&local_a0 + (char)uVar19));
        FUN_10003bf18(UVar8.unknown,puVar9);
        goto LAB_10045fe8c;
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    FUN_10003bf18(UVar8.unknown,puVar9);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
LAB_10045fe94:
  puStack_c8 = puVar9;
  local_d0 = UVar8.unknown;
  auVar1._8_8_ = puStack_c8;
  auVar1._0_8_ = local_d0;
  FUN_1001037b4(local_d0,puStack_c8);
  _swift_bridgeObjectRelease(param_2);
  FUN_10003bf2c(local_d0,puStack_c8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10045ff44 | FUN_10045ff44 */

undefined1  [16] FUN_10045ff44(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  SHA256Digest SVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_d0 [16];
  undefined6 local_c0;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined6 local_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined8 local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  SVar4 = CryptoKit::SHA256Digest::typeMetadataAccessor();
  lVar11 = *(long *)(SVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar5 = &DAT_100fc8188;
  FUN_1000037f0(&DAT_100fc8188,&DAT_100c4ce00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  FUN_100011090(param_1,lVar10,&DAT_100fc8188,&DAT_100c4ce00);
  puVar6 = &DAT_100fc83b8;
  FUN_1000037f0(&DAT_100fc83b8,&DAT_100c4cf40);
  puVar7 = &local_b0;
  _swift_dynamicCast(puVar7,lVar10,puVar5,puVar6,6);
  if ((int)puVar7 == 0) {
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_100005808(&local_b0,&DAT_100fc83c0,&DAT_100c4cf48);
    uStack_a8 = 0xc000000000000000;
    local_b0 = 0;
    (**(code **)(lVar11 + 0x10))
              (auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,SVar4.unknown);
    FUN_100003a00(&DAT_100fc83c8,PTR_typeMetadataAccessor_100ea9d08,
                  PTR_CryptoKit__CryptoKit__SHA256Digest_>Swift__Sequence_100ea9d18);
    Swift::Sequence::_makeIterator();
    lVar11 = *(long *)(param_1 + *(int *)(puVar5 + 0x24));
    lVar10 = CONCAT26(uStack_7a,local_80);
    uVar9 = CONCAT26(uStack_72,uStack_78);
    uStack_78 = 0;
    local_80 = 0;
    uStack_7a = 0;
    if (lVar11 != 0) {
      uVar8 = 0;
      do {
        if (uVar9 == *(ulong *)(lVar10 + 0x10)) break;
        if (*(ulong *)(lVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10046023c);
          (*pcVar3)();
        }
        *(undefined1 *)((long)&local_80 + (uVar8 & 0xff)) = *(undefined1 *)(lVar10 + uVar9 + 0x20);
        uVar1 = ((uint)uVar8 & 0xff) + 1;
        uVar8 = (ulong)uVar1;
        if ((uVar1 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100460240);
          (*pcVar3)();
        }
        if ((uVar1 & 0xff) == 0xe) {
          local_c0 = local_80;
          uStack_ba = uStack_7a;
          uStack_b8 = uStack_78;
          Foundation::Data::_Representation::append
                    ((UnsafeRawBufferPointer)&local_c0,
                     (_Representation)((char)&stack0xfffffffffffffff0 + 0x5e));
          uVar8 = 0;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      if ((uVar8 & 0xff) != 0) {
        local_c0 = local_80;
        uStack_ba = uStack_7a;
        uStack_b8 = uStack_78;
        Foundation::Data::_Representation::append
                  ((UnsafeRawBufferPointer)&local_c0,
                   (_Representation)((char)&stack0xfffffffffffffff0 + 'P' + (char)uVar8));
      }
    }
    _swift_bridgeObjectRelease(lVar10);
  }
  else {
    FUN_100076508(&local_b0,&local_80);
    FUN_100004640(&local_80,local_68);
    Foundation::ContiguousBytes::_withUnsafeBytes();
    FUN_100004594(&local_80);
  }
  auVar2._8_8_ = uStack_a8;
  auVar2._0_8_ = local_b0;
  FUN_1001037b4(local_b0,uStack_a8);
  FUN_100005808(param_1,&DAT_100fc8188,&DAT_100c4ce00);
  FUN_10003bf2c(local_b0,uStack_a8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100460244 | FUN_100460244 */

void FUN_100460244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  UUID UVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar1 = &DAT_100fc8178;
  FUN_1000037f0(&DAT_100fc8178,&DAT_100c4cdf0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)puVar6 - extraout_x12;
  lVar2 = 0;
  FUN_10045ba0c();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10019ffdc(param_1,lVar7,&DAT_100fc8178,&DAT_100c4cdf0);
  lVar3 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_100005808(lVar7,&DAT_100fc8178,&DAT_100c4cdf0);
    FUN_100465444(puVar6,param_2);
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_2,UVar4.unknown);
    FUN_100005808(puVar6,&DAT_100fc8178,&DAT_100c4cdf0);
  }
  else {
    FUN_1000523d8(lVar7,lVar8,FUN_10045ba0c);
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_68 = *unaff_x20;
    FUN_100465b68(lVar8,param_2,uVar5);
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_2,UVar4.unknown);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x100460414 | FUN_100460414 */

void FUN_100460414(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  UUID UVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100fc8170;
  local_70 = param_2;
  FUN_1000037f0(&DAT_100fc8170,&DAT_100c4cde8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar6 - extraout_x12;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10019ffdc(param_1,lVar7,&DAT_100fc8170,&DAT_100c4cde8);
  lVar3 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,UVar2.unknown);
  if ((int)lVar3 == 1) {
    FUN_100005808(lVar7,&DAT_100fc8170,&DAT_100c4cde8);
    FUN_10046531c(lVar6,local_70,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_100005808(lVar6,&DAT_100fc8170,&DAT_100c4cde8);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar8,lVar7,UVar2.unknown);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_100465a24(lVar8,local_70,param_3,uVar4);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x1004605c8 | FUN_1004605c8 */

void FUN_1004605c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  UUID UVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar1 = &DAT_100fc8380;
  FUN_1000037f0(&DAT_100fc8380,&DAT_100c4cf10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)puVar5 - extraout_x12;
  puVar1 = &DAT_100fc7d90;
  FUN_1000037f0(&DAT_100fc7d90,&DAT_100c4c758);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10019ffdc(param_1,lVar6,&DAT_100fc8380,&DAT_100c4cf10);
  lVar2 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_100005808(lVar6,&DAT_100fc8380,&DAT_100c4cf10);
    FUN_100465748(puVar5,param_2,&DAT_100fc7d90,&DAT_100c4c758,&DAT_100fc7d88,&DAT_100c4c750);
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_2,UVar3.unknown);
    FUN_100005808(puVar5,&DAT_100fc8380,&DAT_100c4cf10);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6 - extraout_x8_00,lVar6,puVar1);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_100465f78(lVar6 - extraout_x8_00,param_2,uVar4,&DAT_100fc7d90,&DAT_100c4c758,&DAT_100fc7d88,
                  &DAT_100c4c750);
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_2,UVar3.unknown);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x1004607e0 | FUN_1004607e0 */

void FUN_1004607e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  UUID UVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar1 = &DAT_100fc8350;
  FUN_1000037f0(&DAT_100fc8350,&DAT_100c4cec0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)puVar5 - extraout_x12;
  puVar1 = &DAT_100fc7d28;
  FUN_1000037f0(&DAT_100fc7d28,&DAT_100c4c6f0);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10019ffdc(param_1,lVar6,&DAT_100fc8350,&DAT_100c4cec0);
  lVar2 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_100005808(lVar6,&DAT_100fc8350,&DAT_100c4cec0);
    FUN_100465748(puVar5,param_2,&DAT_100fc7d28,&DAT_100c4c6f0,&DAT_100fc7d20,&DAT_100c4c6e8);
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_2,UVar3.unknown);
    FUN_100005808(puVar5,&DAT_100fc8350,&DAT_100c4cec0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6 - extraout_x8_00,lVar6,puVar1);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_100465f78(lVar6 - extraout_x8_00,param_2,uVar4,&DAT_100fc7d28,&DAT_100c4c6f0,&DAT_100fc7d20,
                  &DAT_100c4c6e8);
    UVar3 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_2,UVar3.unknown);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x1004609f8 | FUN_1004609f8 */

void FUN_1004609f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100fc8328;
  local_70 = param_2;
  FUN_1000037f0(&DAT_100fc8328,&DAT_100c4d800);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_100481150();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10019ffdc(param_1,lVar7,&DAT_100fc8328,&DAT_100c4d800);
  lVar3 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_100005808(lVar7,&DAT_100fc8328,&DAT_100c4d800);
    FUN_1004658e4(lVar6,local_70,param_3,FUN_100481150,&DAT_100fc7d48,&DAT_100c4c710);
    _swift_bridgeObjectRelease(param_3);
    FUN_100005808(lVar6,&DAT_100fc8328,&DAT_100c4d800);
  }
  else {
    FUN_1000523d8(lVar7,lVar8,FUN_100481150);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_100466134(lVar8,local_70,param_3,uVar4,FUN_100481150,&DAT_100fc7d48,&DAT_100c4c710);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x100460bdc | FUN_100460bdc */

void FUN_100460bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100fc8320;
  local_70 = param_2;
  FUN_1000037f0(&DAT_100fc8320,&DAT_100c4cea8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_10048113c();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10019ffdc(param_1,lVar7,&DAT_100fc8320,&DAT_100c4cea8);
  lVar3 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_100005808(lVar7,&DAT_100fc8320,&DAT_100c4cea8);
    FUN_1004658e4(lVar6,local_70,param_3,FUN_10048113c,&DAT_100fc7d38,&DAT_100c4c700);
    _swift_bridgeObjectRelease(param_3);
    FUN_100005808(lVar6,&DAT_100fc8320,&DAT_100c4cea8);
  }
  else {
    FUN_1000523d8(lVar7,lVar8,FUN_10048113c);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_100466134(lVar8,local_70,param_3,uVar4,FUN_10048113c,&DAT_100fc7d38,&DAT_100c4c700);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x100460dc0 | FUN_100460dc0 */

void FUN_100460dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100fc8318;
  local_70 = param_2;
  FUN_1000037f0(&DAT_100fc8318,&DAT_100c4cea0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar6 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar6 - extraout_x12;
  lVar2 = 0;
  FUN_100484870();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar8 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_10019ffdc(param_1,lVar7,&DAT_100fc8318,&DAT_100c4cea0);
  lVar3 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 == 1) {
    FUN_100005808(lVar7,&DAT_100fc8318,&DAT_100c4cea0);
    FUN_1004658e4(lVar6,local_70,param_3,FUN_100484870,&DAT_100fc7d58,&DAT_100c4c720);
    _swift_bridgeObjectRelease(param_3);
    FUN_100005808(lVar6,&DAT_100fc8318,&DAT_100c4cea0);
  }
  else {
    FUN_1000523d8(lVar7,lVar8,FUN_100484870);
    uVar4 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_68 = *unaff_x20;
    FUN_100466134(lVar8,local_70,param_3,uVar4,FUN_100484870,&DAT_100fc7d58,&DAT_100c4c720);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x100460fa4 | FUN_100460fa4 */

void FUN_100460fa4(undefined8 param_1,long param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  UUID UVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fc8170;
  FUN_1000037f0(&DAT_100fc8170,&DAT_100c4cde8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_90 + -extraout_x8;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar15 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_3);
  FUN_1004900d0(param_2);
  _swift_beginAccess(unaff_x20 + 0x78,auStack_78,0,0);
  uVar10 = *(ulong *)(unaff_x20 + 0x78);
  if (*(long *)(uVar10 + 0x10) == 0) {
    (**(code **)(lVar15 + 0x38))(puVar8,1,1,UVar3.unknown);
  }
  else {
    _swift_bridgeObjectRetain(uVar10);
    uVar7 = param_3;
    FUN_100464848(param_2,param_3,FUN_1000715b8);
    bVar1 = (uVar7 & 1) == 0;
    if (bVar1) {
      pcVar9 = *(code **)(lVar15 + 0x38);
    }
    else {
      (**(code **)(lVar15 + 0x10))
                (puVar8,*(long *)(uVar10 + 0x38) + *(long *)(lVar15 + 0x48) * param_2,UVar3.unknown)
      ;
      pcVar9 = *(code **)(lVar15 + 0x38);
    }
    (*pcVar9)(puVar8,bVar1,1,UVar3.unknown);
    _swift_bridgeObjectRelease(param_3);
    param_3 = uVar10;
  }
  _swift_bridgeObjectRelease(param_3);
  puVar4 = puVar8;
  (**(code **)(lVar15 + 0x30))(puVar8,1,UVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar8,&DAT_100fc8170,&DAT_100c4cde8);
    lVar12 = 0;
    FUN_10045ba0c();
    (**(code **)(*(long *)(lVar12 + -8) + 0x38))(param_1,1,1,lVar12);
  }
  else {
    (**(code **)(lVar15 + 0x20))(lVar12,puVar8,UVar3.unknown);
    puVar8 = auStack_90;
    _swift_beginAccess(unaff_x20 + 0x70,puVar8,0,0);
    lVar11 = *(long *)(unaff_x20 + 0x70);
    if (*(long *)(lVar11 + 0x10) == 0) {
      lVar11 = 0;
      FUN_10045ba0c();
      (**(code **)(*(long *)(lVar11 + -8) + 0x38))(param_1,1,1,lVar11);
    }
    else {
      _swift_bridgeObjectRetain(lVar11);
      lVar5 = lVar12;
      FUN_1004647d0(lVar12);
      bVar1 = ((ulong)puVar8 & 1) == 0;
      if (bVar1) {
        lVar6 = 0;
        FUN_10045ba0c();
        pcVar9 = *(code **)(*(long *)(lVar6 + -8) + 0x38);
      }
      else {
        lVar13 = *(long *)(lVar11 + 0x38);
        lVar6 = 0;
        FUN_10045ba0c();
        lVar14 = *(long *)(lVar6 + -8);
        FUN_1000c495c(lVar13 + *(long *)(lVar14 + 0x48) * lVar5,param_1,FUN_10045ba0c);
        pcVar9 = *(code **)(lVar14 + 0x38);
      }
      (*pcVar9)(param_1,bVar1,1,lVar6);
      _swift_bridgeObjectRelease(lVar11);
    }
    (**(code **)(lVar15 + 8))(lVar12,UVar3.unknown);
  }
  return;
}



/* Address: 0x100461288 | FUN_100461288 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004615a0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100461288(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  UUID UVar6;
  SHA256Digest SVar7;
  _ArrayBuffer<undefined> _Var8;
  undefined *puVar9;
  Data DVar10;
  char *pcVar11;
  char *pcVar12;
  Date DVar13;
  String *pSVar14;
  String *pSVar15;
  undefined8 uVar16;
  void *pvVar17;
  void *pvVar18;
  long extraout_x8;
  long extraout_x8_00;
  long lVar19;
  long lVar20;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar21;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar22;
  long lVar23;
  long extraout_x8_06;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar27;
  long unaff_x20;
  long lVar28;
  code *pcVar29;
  long unaff_x21;
  undefined8 uVar30;
  String *pSVar31;
  code *pcVar32;
  String SVar33;
  String SVar34;
  undefined8 auStack_1f0 [4];
  long local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined8 local_188;
  char *local_180;
  char *local_178;
  undefined *local_170;
  long local_168;
  long local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  void *local_120;
  void *local_f0;
  String local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  puVar5 = &DAT_100fc8178;
  local_1c8 = param_2;
  local_1bc = param_4;
  local_1b0 = param_3;
  local_1a8 = param_5;
  local_198 = param_1;
  FUN_1000037f0(&DAT_100fc8178,&DAT_100c4cdf0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc7df8;
  local_1a0 = (long)&local_1d0 - extraout_x8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = ((long)&local_1d0 - extraout_x8) - extraout_x8_00;
  local_1d0 = lVar19;
  UVar6 = Foundation::UUID::typeMetadataAccessor();
  lVar20 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  lVar19 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fc8180;
  local_190 = lVar19;
  FUN_1000037f0(&DAT_100fc8180,&DAT_100c4cdf8);
  local_138 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_02;
  puVar5 = &DAT_100fc8170;
  FUN_1000037f0(&DAT_100fc8170,&DAT_100c4cde8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar25 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_1b8 = lVar25;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar25 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = lVar25 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar26 - extraout_x12_01;
  puVar5 = &DAT_100fc8188;
  FUN_1000037f0(&DAT_100fc8188,&DAT_100c4ce00);
  local_140 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_148 = (undefined *)(lVar21 - extraout_x8_04);
  local_150 = (undefined *)CryptoKit::SHA256::typeMetadataAccessor();
  local_158 = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_158 + 0x40));
  lVar22 = (lVar21 - extraout_x8_04) - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_160 = lVar22;
  SVar7 = CryptoKit::SHA256Digest::typeMetadataAccessor();
  lVar23 = *(long *)(SVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
  lVar22 = lVar22 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  uVar30 = *(undefined8 *)PTR__kSecRandomDefault_100eaa508;
  local_168 = lVar22;
  _swift_beginAccess(unaff_x20 + 0x78,auStack_80,0,0);
  _Var8 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (SVar7.unknown,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  *(undefined8 *)(_Var8.unknown + 0x10) = 0x20;
  *(undefined8 *)(_Var8.unknown + 0x38) = 0;
  *(undefined8 *)(_Var8.unknown + 0x30) = 0;
  *(undefined8 *)(_Var8.unknown + 0x28) = 0;
  *(undefined8 *)(_Var8.unknown + 0x20) = 0;
  uVar16 = 0x20;
  local_188 = uVar30;
  _SecRandomCopyBytes(uVar30,0x20);
  if ((int)uVar30 == 0) {
    bVar4 = false;
    local_170 = UVar6.unknown;
    do {
      DVar10.unknown = _Var8.unknown;
      _swift_bridgeObjectRetain();
      FUN_10046bd78();
      _swift_bridgeObjectRelease(_Var8.unknown);
      SVar33 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar10);
      pvVar17 = SVar33.bridgeObject;
      local_90 = 0x2b;
      uStack_88 = 0xe100000000000000;
      local_a0 = 0x2d;
      uStack_98 = 0xe100000000000000;
      local_c8 = SVar33;
      FUN_10045b990();
      puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar12 = SVar33.str;
      *(char **)(lVar22 + -0x10) = pcVar12;
      *(char **)(lVar22 + -8) = pcVar12;
      *(char **)(lVar22 + -0x18) = pcVar12;
      *(undefined **)(lVar22 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
      SVar33 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208
                          ,PTR___type_metadata_for_Swift_String_100eac208);
      _swift_bridgeObjectRelease(pvVar17);
      local_90 = 0x2f;
      uStack_88 = 0xe100000000000000;
      local_a0 = 0x5f;
      uStack_98 = 0xe100000000000000;
      local_c8 = SVar33;
      *(char **)(lVar22 + -0x10) = pcVar12;
      *(char **)(lVar22 + -8) = pcVar12;
      *(undefined **)(lVar22 + -0x20) = puVar5;
      *(char **)(lVar22 + -0x18) = pcVar12;
      SVar34 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,puVar5,puVar5);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      local_90 = 0x3d;
      uStack_88 = 0xe100000000000000;
      local_a0 = 0;
      uStack_98 = 0xe000000000000000;
      local_c8 = SVar34;
      *(char **)(lVar22 + -0x10) = pcVar12;
      *(char **)(lVar22 + -8) = pcVar12;
      *(undefined **)(lVar22 + -0x20) = puVar5;
      *(char **)(lVar22 + -0x18) = pcVar12;
      SVar33 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,puVar5,puVar5);
      pvVar17 = SVar33.bridgeObject;
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      FUN_10003bf2c(DVar10.unknown,uVar16);
      _swift_bridgeObjectRelease(_Var8.unknown);
      if (bVar4) {
        _swift_bridgeObjectRelease(local_f0);
      }
      _swift_bridgeObjectRetain(pvVar17);
      local_180 = SVar33.str;
      FUN_10045fa58(SVar33.str,pvVar17);
      pvVar18 = SVar33.bridgeObject;
      pcVar11 = SVar33.str;
      FUN_100003a00(&DAT_100fc8190,PTR_typeMetadataAccessor_100ea9d50,
                    PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
      puVar5 = local_150;
      lVar27 = local_160;
      CryptoKit::HashFunction::init();
      FUN_1001037b4(pcVar11,pvVar18);
      FUN_10046ba9c(pcVar11,pvVar18,lVar27);
      FUN_10003bf2c(pcVar11,pvVar18);
      lVar28 = local_168;
      CryptoKit::HashFunction::_finalize();
      FUN_10003bf2c(pcVar11,pvVar18);
      (**(code **)(local_158 + 8))(lVar27,puVar5);
      DVar10.unknown = local_148;
      lVar27 = lVar28;
      (**(code **)(lVar23 + 0x10))(local_148,lVar28,SVar7.unknown);
      *(undefined8 *)(DVar10.unknown + *(int *)(local_140 + 0x24)) = 0x10;
      FUN_10045ff44();
      local_c8 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar10);
      puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
      pvVar18 = local_c8.bridgeObject;
      local_90 = 0x2b;
      uStack_88 = 0xe100000000000000;
      local_a0 = 0x2d;
      uStack_98 = 0xe100000000000000;
      *(char **)(lVar22 + -0x10) = pcVar12;
      *(char **)(lVar22 + -8) = pcVar12;
      *(char **)(lVar22 + -0x18) = pcVar12;
      *(undefined **)(lVar22 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
      SVar33 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208
                          ,PTR___type_metadata_for_Swift_String_100eac208);
      _swift_bridgeObjectRelease(pvVar18);
      local_90 = 0x2f;
      uStack_88 = 0xe100000000000000;
      local_a0 = 0x5f;
      uStack_98 = 0xe100000000000000;
      local_c8 = SVar33;
      *(char **)(lVar22 + -0x10) = pcVar12;
      *(char **)(lVar22 + -8) = pcVar12;
      *(undefined **)(lVar22 + -0x20) = puVar5;
      *(char **)(lVar22 + -0x18) = pcVar12;
      SVar34 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,puVar5,puVar5);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      local_90 = 0x3d;
      uStack_88 = 0xe100000000000000;
      local_a0 = 0;
      uStack_98 = 0xe000000000000000;
      local_c8 = SVar34;
      *(char **)(lVar22 + -0x10) = pcVar12;
      *(char **)(lVar22 + -8) = pcVar12;
      *(undefined **)(lVar22 + -0x20) = puVar5;
      *(char **)(lVar22 + -0x18) = pcVar12;
      SVar33 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_90,&local_a0,0,0,0,1,puVar5,puVar5);
      pvVar18 = SVar33.bridgeObject;
      pcVar12 = SVar33.str;
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      FUN_10003bf2c(DVar10.unknown,lVar27);
      (**(code **)(lVar23 + 8))(lVar28,SVar7.unknown);
      if (bVar4) {
        _swift_bridgeObjectRelease(local_120);
      }
      puVar5 = local_170;
      lVar28 = *(long *)(unaff_x20 + 0x78);
      local_178 = pcVar12;
      if (*(long *)(lVar28 + 0x10) == 0) {
        bVar4 = true;
      }
      else {
        _swift_bridgeObjectRetain(pvVar18);
        _swift_bridgeObjectRetain(lVar28);
        FUN_100464848(pcVar12,pvVar18,FUN_1000715b8);
        _swift_bridgeObjectRelease(pvVar18);
        bVar4 = ((ulong)SVar33.bridgeObject & 1) == 0;
        if (!bVar4) {
          (**(code **)(lVar20 + 0x10))
                    (lVar21,*(long *)(lVar28 + 0x38) + *(long *)(lVar20 + 0x48) * (long)SVar33.str,
                     puVar5);
        }
        _swift_bridgeObjectRelease(lVar28);
      }
      pcVar32 = *(code **)(lVar20 + 0x38);
      (*pcVar32)(lVar21,bVar4,1,puVar5);
      (*pcVar32)(lVar26,1,1,puVar5);
      lVar27 = (long)*(int *)(local_138 + 0x30);
      FUN_100011090(lVar21,lVar19,&DAT_100fc8170,&DAT_100c4cde8);
      FUN_100011090(lVar26,lVar19 + lVar27,&DAT_100fc8170,&DAT_100c4cde8);
      pcVar29 = *(code **)(lVar20 + 0x30);
      lVar28 = lVar19;
      (*pcVar29)(lVar19,1,puVar5);
      if ((int)lVar28 == 1) {
        FUN_100005808(lVar26,&DAT_100fc8170,&DAT_100c4cde8);
        FUN_100005808(lVar21,&DAT_100fc8170,&DAT_100c4cde8);
        puVar9 = (undefined *)(lVar19 + lVar27);
        (*pcVar29)(puVar9,1,puVar5);
        if ((int)puVar9 == 1) {
          FUN_100005808(lVar19,&DAT_100fc8170,&DAT_100c4cde8);
LAB_100461d28:
          DVar13 = Foundation::Date::typeMetadataAccessor();
          lVar19 = local_1d0;
          pcVar29 = *(code **)(*(long *)(DVar13.unknown + -8) + 0x38);
          (*pcVar29)(local_1d0,1,1,DVar13.unknown);
          _swift_bridgeObjectRetain(pvVar18);
          lVar21 = local_198;
          Foundation::UUID::init();
          lVar23 = 0;
          FUN_10045ba0c();
          Foundation::Date::init();
          iVar2 = *(int *)(lVar23 + 0x20);
          (*pcVar29)(lVar21 + iVar2,1,1,DVar13.unknown);
          iVar3 = *(int *)(lVar23 + 0x28);
          lVar22 = 0;
          FUN_10045bd80();
          (**(code **)(*(long *)(lVar22 + -8) + 0x38))(lVar21 + iVar3,1,1,lVar22);
          uVar30 = local_1b0;
          puVar1 = (undefined8 *)(lVar21 + *(int *)(lVar23 + 0x14));
          *puVar1 = local_1c8;
          puVar1[1] = local_1b0;
          *(char *)(lVar21 + *(int *)(lVar23 + 0x18)) = (char)local_1bc;
          _swift_bridgeObjectRetain(pvVar18);
          _swift_bridgeObjectRetain(uVar30);
          FUN_10046bf08(lVar19,lVar21 + iVar2);
          pcVar12 = local_178;
          puVar1 = (undefined8 *)(lVar21 + *(int *)(lVar23 + 0x24));
          *puVar1 = local_178;
          puVar1[1] = pvVar18;
          FUN_10046bf58(local_1a8,lVar21 + iVar3);
          lVar19 = local_190;
          pcVar29 = *(code **)(lVar20 + 0x10);
          (*pcVar29)(local_190,lVar21,puVar5);
          lVar20 = local_1a0;
          FUN_1000c495c(lVar21,local_1a0,FUN_10045ba0c);
          lVar22 = *(long *)(lVar23 + -8);
          (**(code **)(lVar22 + 0x38))(lVar20,0,1,lVar23);
          _swift_beginAccess(unaff_x20 + 0x70,&local_c8,0x21,0);
          FUN_100460244(lVar20,lVar19);
          _swift_endAccess(&local_c8);
          lVar20 = local_1b8;
          (*pcVar29)(local_1b8,lVar21,puVar5);
          (*pcVar32)(lVar20,0,1,puVar5);
          _swift_beginAccess(unaff_x20 + 0x78,&local_c8,0x21,0);
          FUN_100460414(lVar20,pcVar12,pvVar18);
          _swift_endAccess(&local_c8);
          FUN_100004640(unaff_x20 + 0x88,*(undefined8 *)(unaff_x20 + 0xa0));
          lVar20 = *(long *)(unaff_x20 + 0x70);
          pSVar31 = *(String **)(lVar20 + 0x10);
          pSVar14 = (String *)PTR___swiftEmptyArrayStorage_100eae0d8;
          if (pSVar31 != (String *)0x0) {
            _swift_bridgeObjectRetain(lVar20);
            pSVar14 = pSVar31;
            FUN_100464714(pSVar31,0,&DAT_100fc8390,&DAT_100c4cf20,FUN_10045ba0c);
            uVar24 = (ulong)*(byte *)(lVar22 + 0x50);
            pSVar15 = &local_c8;
            FUN_10046b8ac(pSVar15,(undefined *)
                                  ((long)&pSVar14->str +
                                  (uVar24 + 0x20 & (uVar24 ^ 0xffffffffffffffff))),pSVar31,lVar20,
                          FUN_10045ba0c);
            FUN_10000c650(local_c8.str,local_c8.bridgeObject,local_b8,uStack_b0,local_a8);
            if (pSVar15 != pSVar31) {
                    /* WARNING: Does not return */
              pcVar29 = (code *)SoftwareBreakpoint(1,0x100461fc0);
              (*pcVar29)();
            }
          }
          FUN_10046fe64(pSVar14);
          if (unaff_x21 == 0) {
            _swift_release(pSVar14);
            FUN_100462054();
            _swift_bridgeObjectRelease(pvVar18);
          }
          else {
            _swift_bridgeObjectRelease(pvVar17);
            _swift_bridgeObjectRelease(pvVar18);
            _swift_release(pSVar14);
            FUN_10046bfa8(local_198);
          }
          return;
        }
LAB_100461624:
        FUN_100005808(lVar19,&DAT_100fc8180,&DAT_100c4cdf8);
      }
      else {
        FUN_100011090(lVar19,lVar25,&DAT_100fc8170,&DAT_100c4cde8);
        puVar9 = (undefined *)(lVar19 + lVar27);
        (*pcVar29)(puVar9,1,puVar5);
        lVar28 = local_190;
        if ((int)puVar9 == 1) {
          FUN_100005808(lVar26,&DAT_100fc8170,&DAT_100c4cde8);
          FUN_100005808(lVar21,&DAT_100fc8170,&DAT_100c4cde8);
          (**(code **)(lVar20 + 8))(lVar25,puVar5);
          goto LAB_100461624;
        }
        (**(code **)(lVar20 + 0x20))(local_190,lVar19 + lVar27,puVar5);
        puVar9 = &DAT_100fc8198;
        FUN_100003a00(&DAT_100fc8198,PTR_typeMetadataAccessor_100ea7500,
                      PTR_Foundation__Foundation__UUID_>Swift__Equatable_100ea7520);
        bVar4 = Swift::Equatable::___infix(lVar25,lVar28,puVar5,puVar9);
        pcVar29 = *(code **)(lVar20 + 8);
        (*pcVar29)(lVar28,puVar5);
        FUN_100005808(lVar26,&DAT_100fc8170,&DAT_100c4cde8);
        FUN_100005808(lVar21,&DAT_100fc8170,&DAT_100c4cde8);
        (*pcVar29)(lVar25,puVar5);
        FUN_100005808(lVar19,&DAT_100fc8170,&DAT_100c4cde8);
        if (bVar4) goto LAB_100461d28;
      }
      _Var8 = Swift::Array<undefined>::_allocateBufferUninitialized
                        (puVar9,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
      *(undefined8 *)(_Var8.unknown + 0x10) = 0x20;
      *(undefined8 *)(_Var8.unknown + 0x38) = 0;
      *(undefined8 *)(_Var8.unknown + 0x30) = 0;
      *(undefined8 *)(_Var8.unknown + 0x28) = 0;
      *(undefined8 *)(_Var8.unknown + 0x20) = 0;
      uVar16 = 0x20;
      uVar30 = local_188;
      _SecRandomCopyBytes();
      bVar4 = true;
      local_120 = pvVar18;
      local_f0 = pvVar17;
    } while ((int)uVar30 == 0);
  }
                    /* WARNING: Does not return */
  pcVar29 = (code *)SoftwareBreakpoint(1,0x100462054);
  (*pcVar29)();
}



/* Address: 0x100462054 | FUN_100462054 */

/* WARNING: Removing unreachable block (ram,0x000100462334) */

void FUN_100462054(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 ******ppppppuVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar10;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  long unaff_x20;
  long lVar13;
  undefined8 *******pppppppuVar14;
  long lVar15;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined8 ******local_b0 [2];
  undefined8 ******local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar6 = &DAT_100fc8388;
  FUN_1000037f0(&DAT_100fc8388,&DAT_100c4cf18);
  local_c0 = *(long *)(puVar6 + -8);
  puStack_b8 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fc7d90;
  local_c8 = (long)&local_d0 - extraout_x8;
  FUN_1000037f0(&DAT_100fc7d90,&DAT_100c4c758);
  lVar12 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = ((long)&local_d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_d0 = lVar13 - extraout_x12;
  _swift_beginAccess(unaff_x20 + 0x70,auStack_78,0,0);
  lVar15 = *(long *)(unaff_x20 + 0x70);
  pppppppuVar14 = *(undefined8 ********)(lVar15 + 0x10);
  _swift_bridgeObjectRetain(lVar15);
  pppppppuVar7 = (undefined8 *******)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (pppppppuVar14 != (undefined8 *******)0x0) {
    _swift_bridgeObjectRetain(lVar15);
    pppppppuVar7 = pppppppuVar14;
    FUN_100464714(pppppppuVar14,0,&DAT_100fc8390,&DAT_100c4cf20,FUN_10045ba0c);
    lVar8 = 0;
    FUN_10045ba0c();
    uVar10 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
    pppppppuVar9 = &local_a0;
    FUN_10046b8ac(pppppppuVar9,
                  (undefined *)
                  ((long)pppppppuVar7 + (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff))),
                  pppppppuVar14,lVar15,FUN_10045ba0c);
    FUN_10000c650(local_a0,uStack_98,local_90,uStack_88,local_80);
    if (pppppppuVar9 != pppppppuVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004621cc);
      (*pcVar4)();
    }
  }
  local_a0 = pppppppuVar7;
  FUN_100469b18(&local_a0);
  _swift_bridgeObjectRelease(lVar15);
  ppppppuVar3 = local_a0;
  _swift_beginAccess(unaff_x20 + 0x80,&local_a0,0,0);
  lVar15 = *(long *)(unaff_x20 + 0x80);
  uVar11 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(lVar15 + 0x40);
  _swift_bridgeObjectRetain(lVar15);
  lVar8 = 0;
  while( true ) {
    for (; lVar2 = local_d0, uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      (**(code **)(lVar12 + 0x10))
                (local_d0,*(long *)(lVar15 + 0x38) +
                          *(long *)(lVar12 + 0x48) *
                          (LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) | lVar8 << 6),puVar6);
      (**(code **)(lVar12 + 0x20))(lVar13,lVar2,puVar6);
      local_b0[0] = ppppppuVar3;
      _swift_retain(ppppppuVar3);
      lVar2 = local_c8;
      Swift::AsyncStream::Continuation::_yield(local_c8,local_b0,puVar6);
      (**(code **)(local_c0 + 8))(lVar2,puStack_b8);
      (**(code **)(lVar12 + 8))(lVar13,puVar6);
    }
    bVar5 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar5) break;
    if ((long)(uVar11 + 0x3f >> 6) <= lVar8) {
      _swift_release(lVar15);
      _swift_release(ppppppuVar3);
      return;
    }
    uVar10 = ((ulong *)(lVar15 + 0x40))[lVar8];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100462334);
  (*pcVar4)();
}


