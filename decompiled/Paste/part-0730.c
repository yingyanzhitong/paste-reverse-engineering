/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007fb2c4 | FUN_1007fb2c4 */

void FUN_1007fb2c4(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  FUN_1007fb2d8();
  return;
}



/* Address: 0x1007fb2d8 | FUN_1007fb2d8 */

void FUN_1007fb2d8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 0xff00) == 0x200) {
    return;
  }
  FUN_1007fb2ec();
  return;
}



/* Address: 0x1007fb2ec | FUN_1007fb2ec */

void FUN_1007fb2ec(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((5 < (param_3 & 0xff) - 4) && (param_1 = param_2, (param_3 & 0xff) != 0)) {
    return;
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x1007fb310 | FUN_1007fb310 */

undefined8 FUN_1007fb310(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1007fb128();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1007fb354 | thunk_FUN_1007fb358 */

void thunk_FUN_1007fb358(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6c18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7a8b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a8b0,&DAT_100f04048);
  DAT_100fe6c18 = pTVar1;
  return;
}



/* Address: 0x1007fb358 | FUN_1007fb358 */

void FUN_1007fb358(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe6c18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7a8b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a8b0,&DAT_100f04048);
  DAT_100fe6c18 = pTVar1;
  return;
}



/* Address: 0x1007fb398 | FUN_1007fb398 */

long * FUN_1007fb398(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  long lVar8;
  Date DVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  long lVar15;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar12 = param_2[2];
    lVar15 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar15;
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar10 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar10;
    param_1[6] = param_2[6];
    lVar8 = 0;
    FUN_1007fb128();
    iVar7 = *(int *)(lVar8 + 0x20);
    DVar9 = Foundation::Date::typeMetadataAccessor();
    pcVar14 = *(code **)(*(long *)(DVar9.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar15);
    _swift_bridgeObjectRetain(lVar12);
    _swift_bridgeObjectRetain(lVar10);
    (*pcVar14)((undefined1 *)((long)param_1 + (long)iVar7),
               (undefined1 *)((long)param_2 + (long)iVar7),DVar9.unknown);
    iVar7 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar13 = *(undefined8 *)((long)param_2 + (long)iVar7);
    _swift_bridgeObjectRetain();
    _swift_errorRetain(uVar13);
    *(undefined8 *)((long)param_1 + (long)iVar7) = uVar13;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar13 = *puVar2;
    uVar3 = puVar2[1];
    uVar5 = *(undefined1 *)((long)puVar2 + 0x12);
    uVar6 = *(undefined2 *)(puVar2 + 2);
    FUN_1007fb278(uVar13,uVar3,uVar6,uVar5);
    *puVar1 = uVar13;
    puVar1[1] = uVar3;
    *(undefined2 *)(puVar1 + 2) = uVar6;
    *(undefined1 *)((long)puVar1 + 0x12) = uVar5;
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar11 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar10 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007fb4e0 | FUN_1007fb4e0 */

void FUN_1007fb4e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  Date DVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  lVar3 = 0;
  FUN_1007fb128();
  iVar2 = *(int *)(lVar3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 8))(param_1 + iVar2,DVar4.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  _swift_errorRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x1c));
  FUN_1007fb2c4(*puVar1,puVar1[1],*(undefined2 *)(puVar1 + 2),*(undefined1 *)((long)puVar1 + 0x12));
  return;
}



/* Address: 0x1007fb574 | FUN_1007fb574 */

undefined1 * FUN_1007fb574(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  Date DVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar11 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar11;
  param_1[0x18] = param_2[0x18];
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  lVar6 = 0;
  FUN_1007fb128();
  iVar5 = *(int *)(lVar6 + 0x20);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(DVar7.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  (*pcVar10)(param_1 + iVar5,param_2 + iVar5,DVar7.unknown);
  iVar5 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar9 = *(undefined8 *)(param_2 + iVar5);
  _swift_bridgeObjectRetain();
  _swift_errorRetain(uVar9);
  *(undefined8 *)(param_1 + iVar5) = uVar9;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar9 = *puVar2;
  uVar8 = puVar2[1];
  uVar3 = *(undefined1 *)((long)puVar2 + 0x12);
  uVar4 = *(undefined2 *)(puVar2 + 2);
  FUN_1007fb278(uVar9,uVar8,uVar4,uVar3);
  *puVar1 = uVar9;
  puVar1[1] = uVar8;
  *(undefined2 *)(puVar1 + 2) = uVar4;
  *(undefined1 *)((long)puVar1 + 0x12) = uVar3;
  return param_1;
}



/* Address: 0x1007fb690 | FUN_1007fb690 */

undefined1 * FUN_1007fb690(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  Date DVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  uVar12 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  lVar10 = 0;
  FUN_1007fb128();
  iVar9 = *(int *)(lVar10 + 0x20);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar11.unknown + -8) + 0x18))
            (param_1 + iVar9,param_2 + iVar9,DVar11.unknown);
  iVar9 = *(int *)(param_3 + 0x14);
  uVar12 = *(undefined8 *)(param_1 + iVar9);
  *(undefined8 *)(param_1 + iVar9) = *(undefined8 *)(param_2 + iVar9);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  iVar9 = *(int *)(param_3 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + iVar9);
  uVar13 = *(undefined8 *)(param_2 + iVar9);
  _swift_errorRetain(uVar13);
  *(undefined8 *)(param_1 + iVar9) = uVar13;
  _swift_errorRelease(uVar12);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar12 = *puVar2;
  uVar3 = puVar2[1];
  uVar5 = *(undefined1 *)((long)puVar2 + 0x12);
  uVar7 = *(undefined2 *)(puVar2 + 2);
  FUN_1007fb278(uVar12,uVar3,uVar7,uVar5);
  uVar13 = *puVar1;
  uVar4 = puVar1[1];
  *puVar1 = uVar12;
  puVar1[1] = uVar3;
  uVar8 = *(undefined2 *)(puVar1 + 2);
  *(undefined2 *)(puVar1 + 2) = uVar7;
  uVar6 = *(undefined1 *)((long)puVar1 + 0x12);
  *(undefined1 *)((long)puVar1 + 0x12) = uVar5;
  FUN_1007fb2c4(uVar13,uVar4,uVar8,uVar6);
  return param_1;
}



/* Address: 0x1007fb7e0 | FUN_1007fb7e0 */

undefined1 * FUN_1007fb7e0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  Date DVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar6;
  param_1[0x18] = param_2[0x18];
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  lVar4 = 0;
  FUN_1007fb128();
  iVar3 = *(int *)(lVar4 + 0x20);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar5.unknown + -8) + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown)
  ;
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar6 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
  *(undefined4 *)((long)puVar1 + 0xf) = *(undefined4 *)((long)puVar2 + 0xf);
  return param_1;
}



/* Address: 0x1007fb894 | FUN_1007fb894 */

undefined1 * FUN_1007fb894(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  Date DVar11;
  undefined8 uVar12;
  
  *param_1 = *param_2;
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRelease(uVar8);
  param_1[0x18] = param_2[0x18];
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar8;
  _swift_bridgeObjectRelease(uVar9);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  lVar10 = 0;
  FUN_1007fb128();
  iVar7 = *(int *)(lVar10 + 0x20);
  DVar11 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar11.unknown + -8) + 0x28))
            (param_1 + iVar7,param_2 + iVar7,DVar11.unknown);
  iVar7 = *(int *)(param_3 + 0x14);
  uVar8 = *(undefined8 *)(param_1 + iVar7);
  *(undefined8 *)(param_1 + iVar7) = *(undefined8 *)(param_2 + iVar7);
  _swift_bridgeObjectRelease(uVar8);
  iVar7 = *(int *)(param_3 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + iVar7);
  *(undefined8 *)(param_1 + iVar7) = *(undefined8 *)(param_2 + iVar7);
  _swift_errorRelease(uVar8);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar5 = *(undefined2 *)(puVar2 + 2);
  uVar3 = *(undefined1 *)((long)puVar2 + 0x12);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  uVar6 = *(undefined2 *)(puVar1 + 2);
  *(undefined2 *)(puVar1 + 2) = uVar5;
  uVar4 = *(undefined1 *)((long)puVar1 + 0x12);
  *(undefined1 *)((long)puVar1 + 0x12) = uVar3;
  FUN_1007fb2c4(uVar8,uVar9,uVar6,uVar4);
  return param_1;
}



/* Address: 0x1007fb994 | FUN_1007fb994 */

void FUN_1007fb994(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1007fb9a0 | FUN_1007fb9a0 */

ulong FUN_1007fb9a0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  FUN_1007fb128();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001007fb9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Address: 0x1007fba1c | FUN_1007fba1c */

void FUN_1007fba1c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1007fba28 | FUN_1007fba28 */

void FUN_1007fba28(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1007fb128();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001007fba80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14)) = (ulong)((int)param_2 - 1);
  return;
}



/* Address: 0x1007fbaa0 | FUN_1007fbaa0 */

void FUN_1007fbaa0(long param_1,ulong param_2)

{
  long lVar1;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1007fb128();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    local_30 = &DAT_100c7a990;
    puStack_28 = &DAT_100c7a9a8;
    _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1007fbb28 | FUN_1007fbb28 */

long * FUN_1007fbb28(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  Date DVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar6 = param_2[2];
    lVar8 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar8;
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar4;
    param_1[6] = param_2[6];
    iVar2 = *(int *)(param_3 + 0x20);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    pcVar7 = *(code **)(*(long *)(DVar3.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar6);
    _swift_bridgeObjectRetain(lVar4);
    (*pcVar7)((undefined1 *)((long)param_1 + (long)iVar2),
              (undefined1 *)((long)param_2 + (long)iVar2),DVar3.unknown);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007fbc0c | FUN_1007fbc0c */

void FUN_1007fbc0c(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  iVar1 = *(int *)(param_2 + 0x20);
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007fbc5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x1007fbc60 | FUN_1007fbc60 */

undefined1 * FUN_1007fbc60(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  Date DVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar6;
  param_1[0x18] = param_2[0x18];
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  iVar2 = *(int *)(param_3 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  pcVar5 = *(code **)(*(long *)(DVar3.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar5)(param_1 + iVar2,param_2 + iVar2,DVar3.unknown);
  return param_1;
}



/* Address: 0x1007fbd18 | FUN_1007fbd18 */

undefined1 * FUN_1007fbd18(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  iVar1 = *(int *)(param_3 + 0x20);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x18))(param_1 + iVar1,param_2 + iVar1,DVar2.unknown)
  ;
  return param_1;
}



/* Address: 0x1007fbdd4 | FUN_1007fbdd4 */

undefined1 * FUN_1007fbdd4(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  param_1[0x18] = param_2[0x18];
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  iVar1 = *(int *)(param_3 + 0x20);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,DVar2.unknown)
  ;
  return param_1;
}



/* Address: 0x1007fbe4c | FUN_1007fbe4c */

undefined1 * FUN_1007fbe4c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Date DVar4;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x18] = param_2[0x18];
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  iVar1 = *(int *)(param_3 + 0x20);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x28))(param_1 + iVar1,param_2 + iVar1,DVar4.unknown)
  ;
  return param_1;
}



/* Address: 0x1007fbee8 | FUN_1007fbee8 */

void FUN_1007fbee8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1007fbef4 | FUN_1007fbef4 */

ulong FUN_1007fbef4(long param_1,undefined8 param_2,long param_3)

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
  uVar2 = param_1 + *(int *)(param_3 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001007fbf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x30))(uVar2,param_2,DVar1.unknown);
  return uVar2;
}



/* Address: 0x1007fbf70 | FUN_1007fbf70 */

void FUN_1007fbf70(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1007fbf7c | FUN_1007fbf7c */

void FUN_1007fbf7c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007fbfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x20),param_2,param_2,DVar1.unknown);
  return;
}



/* Address: 0x1007fbff0 | FUN_1007fbff0 */

undefined1  [16] FUN_1007fbff0(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_48 = &DAT_100c7a9d0;
  puStack_40 = &DAT_100c7a9e8;
  local_38 = &DAT_100c7aa00;
  puStack_30 = &DAT_100c7aa18;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,5,&local_48,param_1 + 0x10);
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



/* Address: 0x1007fc080 | FUN_1007fc080 */

void FUN_1007fc080(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007fc094 | FUN_1007fc094 */

undefined1  [16] FUN_1007fc094(void)

{
  return ZEXT816(0x100f03fb0);
}



/* Address: 0x1007fc0a4 | FUN_1007fc0a4 */

void FUN_1007fc0a4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1007fc0b0 | FUN_1007fc0b0 */

void FUN_1007fc0b0(void)

{
  return;
}



/* Address: 0x1007fc0b4 | FUN_1007fc0b4 */

undefined1  [16] FUN_1007fc0b4(void)

{
  return ZEXT816(0x100f04048);
}



/* Address: 0x1007fc0c4 | FUN_1007fc0c4 */

void FUN_1007fc0c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  if (param_6 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  FUN_1007fb28c(param_3,param_4,param_5);
  return;
}



/* Address: 0x1007fc114 | FUN_1007fc114 */

void FUN_1007fc114(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  FUN_1007fc148(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined2 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x32));
  return;
}



/* Address: 0x1007fc148 | FUN_1007fc148 */

void FUN_1007fc148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  if (param_6 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  FUN_1007fb2d8(param_3,param_4,param_5);
  return;
}



/* Address: 0x1007fc198 | FUN_1007fc198 */

undefined8 * FUN_1007fc198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = *(undefined1 *)((long)param_2 + 0x32);
  uVar6 = *(undefined2 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  FUN_1007fc0c4(uVar2,uVar3,uVar1,uVar4,uVar6,uVar5);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar4;
  *(undefined2 *)(param_1 + 6) = uVar6;
  *(undefined1 *)((long)param_1 + 0x32) = uVar5;
  return param_1;
}



/* Address: 0x1007fc218 | FUN_1007fc218 */

undefined8 * FUN_1007fc218(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  *param_1 = *param_2;
  uVar12 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar12);
  uVar12 = param_2[2];
  uVar4 = param_2[3];
  uVar1 = param_2[4];
  uVar5 = param_2[5];
  uVar8 = *(undefined1 *)((long)param_2 + 0x32);
  uVar10 = *(undefined2 *)(param_2 + 6);
  FUN_1007fc0c4(uVar12,uVar4,uVar1,uVar5,uVar10,uVar8);
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[4];
  uVar7 = param_1[5];
  param_1[2] = uVar12;
  param_1[3] = uVar4;
  param_1[4] = uVar1;
  param_1[5] = uVar5;
  uVar11 = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(param_1 + 6) = uVar10;
  uVar9 = *(undefined1 *)((long)param_1 + 0x32);
  *(undefined1 *)((long)param_1 + 0x32) = uVar8;
  FUN_1007fc148(uVar2,uVar6,uVar3,uVar7,uVar11,uVar9);
  return param_1;
}



/* Address: 0x1007fc2c4 | FUN_1007fc2c4 */

void FUN_1007fc2c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined4 *)((long)param_1 + 0x2f) = *(undefined4 *)((long)param_2 + 0x2f);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007fc2e0 | FUN_1007fc2e0 */

undefined8 * FUN_1007fc2e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar1 = param_2[1];
  uVar8 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar8);
  uVar6 = *(undefined2 *)(param_2 + 6);
  uVar4 = *(undefined1 *)((long)param_2 + 0x32);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar8 = param_1[4];
  uVar3 = param_1[5];
  uVar9 = param_2[2];
  uVar11 = param_2[5];
  uVar10 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar9;
  param_1[5] = uVar11;
  param_1[4] = uVar10;
  uVar7 = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(param_1 + 6) = uVar6;
  uVar5 = *(undefined1 *)((long)param_1 + 0x32);
  *(undefined1 *)((long)param_1 + 0x32) = uVar4;
  FUN_1007fc148(uVar1,uVar2,uVar8,uVar3,uVar7,uVar5);
  return param_1;
}



/* Address: 0x1007fc340 | FUN_1007fc340 */

int FUN_1007fc340(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x33) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1007fc388 | FUN_1007fc388 */

void FUN_1007fc388(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)((long)param_1 + 0x32) = 0;
    *(undefined2 *)(param_1 + 6) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x33) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x33) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1007fc3dc | FUN_1007fc3dc */

undefined1  [16] FUN_1007fc3dc(void)

{
  return ZEXT816(0x100f040c0);
}



/* Address: 0x1007fc3ec | FUN_1007fc3ec */

undefined1  [16] FUN_1007fc3ec(void)

{
  return ZEXT816(0x100f040e8);
}



/* Address: 0x1007fc3fc | FUN_1007fc3fc */

void FUN_1007fc3fc(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fe6dd0,&DAT_100f04110);
  return;
}



/* Address: 0x1007fc410 | FUN_1007fc410 */

void FUN_1007fc410(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fe6dd8,&DAT_100f04138);
  return;
}



/* Address: 0x1007fc424 | FUN_1007fc424 */

void FUN_1007fc424(void)

{
  FUN_100003a00(&DAT_100fe6de0,FUN_1007fc410,&TargetProtocolConformanceDescriptor_100c7ab20);
  return;
}



/* Address: 0x1007fc450 | FUN_1007fc450 */

void FUN_1007fc450(void)

{
  FUN_100003a00(&DAT_100fe6de8,FUN_1007fc410,&TargetProtocolConformanceDescriptor_100c7aaf4);
  return;
}



/* Address: 0x1007fc47c | FUN_1007fc47c */

void FUN_1007fc47c(void)

{
  FUN_100003a00(&DAT_100fe6df0,FUN_1007fc3fc,&TargetProtocolConformanceDescriptor_100c7ac34);
  return;
}



/* Address: 0x1007fc4a8 | FUN_1007fc4a8 */

void FUN_1007fc4a8(void)

{
  FUN_100003a00(&DAT_100fe6df8,FUN_1007fc3fc,&TargetProtocolConformanceDescriptor_100c7ac08);
  return;
}



/* Address: 0x1007fc4d4 | FUN_1007fc4d4 */

void FUN_1007fc4d4(void)

{
  FUN_100003a00(&DAT_100fe6e00,FUN_1007fc3fc,&TargetProtocolConformanceDescriptor_100c7aca4);
  return;
}



/* Address: 0x1007fc500 | FUN_1007fc500 */

void FUN_1007fc500(void)

{
  FUN_100003a00(&DAT_100fe6e08,FUN_1007fc410,&TargetProtocolConformanceDescriptor_100c7ab90);
  return;
}



/* Address: 0x1007fc52c | thunk_FUN_1000036f8 */

void thunk_FUN_1000036f8(void)

{
  thunk_FUN_1000036f8();
  return;
}



/* Address: 0x1007fc530 | thunk_FUN_1000031c8 */

void thunk_FUN_1000031c8(void)

{
  thunk_FUN_1000031c8();
  return;
}



/* Address: 0x1007fc534 | thunk_FUN_100003244 */

void thunk_FUN_100003244(void)

{
  thunk_FUN_100003244();
  return;
}



/* Address: 0x1007fc538 | thunk_FUN_10000376c */

void thunk_FUN_10000376c(void)

{
  thunk_FUN_10000376c();
  return;
}



/* Address: 0x1007fc53c | thunk_FUN_100003574 */

void thunk_FUN_100003574(void)

{
  thunk_FUN_100003574();
  return;
}



/* Address: 0x1007fc540 | thunk_FUN_100003680 */

void thunk_FUN_100003680(void)

{
  thunk_FUN_100003680();
  return;
}



/* Address: 0x1007fc544 | thunk_FUN_1002c9be4 */

void thunk_FUN_1002c9be4(void)

{
  thunk_FUN_1002c9be4();
  return;
}



/* Address: 0x1007fc548 | FUN_1007fc548 */

void FUN_1007fc548(void)

{
  FUN_1007fdeb8();
  return;
}



/* Address: 0x1007fc55c | FUN_1007fc55c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1007fc55c(ulong param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ISO8601FormatStyle *this;
  undefined8 uVar1;
  ISO8601FormatStyle *pIVar2;
  byte bVar3;
  TimeZoneSeparator TVar4;
  TimeSeparator TVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined7 extraout_var;
  undefined4 *puVar10;
  undefined *puVar11;
  ISO8601FormatStyle IVar12;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  TimeZone TVar13;
  _StringGuts extraout_x1;
  ulong uVar14;
  long unaff_x20;
  ISO8601FormatStyle IVar15;
  TimeZone TVar16;
  ISO8601FormatStyle IVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  ISO8601FormatStyle local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  ISO8601FormatStyle *local_a8;
  long local_a0;
  undefined8 local_98;
  ISO8601FormatStyle *local_90;
  undefined1 *local_88;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_54;
  undefined4 *puVar9;
  
  IVar6 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  IVar6 = objc_stub::processIdentifier(IVar6);
  local_70 = 0;
  local_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2f,extraout_x1);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0xd000000000000028;
  local_68 = 0x8000000100db1c90;
  local_54 = (undefined4)IVar6;
  SVar24 = Swift::CustomStringConvertible::get_description();
  SVar25.bridgeObject = param_4;
  SVar25.str = param_3;
  Swift::String::append(SVar24,SVar25);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  uVar7 = 0xa2d2d2d0a;
  SVar24.bridgeObject = &DAT_e500000000000000;
  SVar24.str = (char *)0xa2d2d2d0a;
  SVar26.bridgeObject = param_4;
  SVar26.str = param_3;
  Swift::String::append(SVar24,SVar26);
  uVar1 = local_68;
  FUN_1007fe14c();
  puVar8 = &local_70;
  uVar14 = param_1;
  FUN_1005abf00(puVar8,param_1,PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,uVar7);
  if (((uint)uVar14 & 0xff) == 1) {
    local_54 = (int)puVar8;
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    puVar9 = (undefined4 *)CONCAT71(extraout_var,bVar3);
    puVar10 = puVar9;
    if ((bVar3 & 1) != 0) {
      FUN_1007fe10c();
      puVar10 = &local_54;
      _swift_willThrowTypedImpl(puVar10,&DAT_100ee42f8,puVar9);
    }
    FUN_1007fe10c();
    puVar11 = &DAT_100ee42f8;
    puVar9 = puVar10;
    _swift_allocError(&DAT_100ee42f8,puVar10,0,0);
    *puVar9 = (int)puVar8;
    _swift_bridgeObjectRelease(uVar1);
    FUN_1005ac32c();
    if ((param_1 & 0xff00000000) == 0x100000000) {
      local_70 = CONCAT44(local_70._4_4_,(int)param_1);
      if ((bVar3 & 1) != 0) {
        _swift_willThrowTypedImpl(&local_70,&DAT_100ee42f8,puVar10);
      }
      _swift_allocError(&DAT_100ee42f8,puVar10,0,0);
      *puVar10 = (int)param_1;
      _swift_errorRelease(puVar11);
    }
    else {
      _swift_willThrow();
    }
    TVar13 = Foundation::TimeZone::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar13.unknown + -8) + 8))(param_2,TVar13.unknown);
    _swift_deallocPartialClassInstance();
  }
  else {
    _swift_bridgeObjectRelease(uVar1);
    *(undefined4 *)(unaff_x20 + 0x10) = 0;
    *(int *)(unaff_x20 + 0x14) = (int)param_1;
    local_c8 = (undefined *)Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
    lVar19 = *(long *)(local_c8 + -8);
    uVar14 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
    local_a8 = (ISO8601FormatStyle *)((long)&local_d0 - uVar14);
    local_b8 = (long)local_a8 - uVar14;
    lVar22 = local_b8 - uVar14;
    puVar23 = (undefined *)(lVar22 - uVar14);
    IVar17.unknown = (undefined *)(((long)puVar23 - uVar14) - uVar14);
    IVar15.unknown = IVar17.unknown + -uVar14;
    local_d0.unknown = puVar23;
    local_c0 = lVar22;
    local_b0 = local_b8;
    local_a0 = lVar19;
    local_98 = param_2;
    local_90 = local_a8;
    local_88 = (undefined1 *)&local_d0;
    IVar12 = (extension_Foundation)::Foundation::ParseableFormatStyle::_get_iso8601();
    Foundation::Date::ISO8601FormatStyle::year(IVar12);
    puVar11 = local_c8;
    pcVar20 = *(code **)(lVar19 + 8);
    (*pcVar20)(IVar15.unknown,local_c8);
    Foundation::Date::ISO8601FormatStyle::month(IVar15);
    (*pcVar20)(IVar17.unknown,puVar11);
    Foundation::Date::ISO8601FormatStyle::day(IVar17);
    (*pcVar20)((long)puVar23 - uVar14,puVar11);
    IVar12.unknown = local_d0.unknown;
    TVar4 = Foundation::Date::ISO8601FormatStyle::TimeZoneSeparator::typeMetadataAccessor();
    lVar19 = CONCAT71(extraout_var_00,TVar4.value);
    lVar21 = *(long *)(lVar19 + -8);
    lVar18 = (long)IVar12.unknown - (*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
    IVar12.unknown =
         (undefined *)
         (ulong)*(uint *)
                 PTR___enum_case_for_Foundation_Date_ISO8601FormatStyle_TimeZoneSeparator_omitted_Foundation_Date_ISO8601FormatStyle_TimeZoneSeparator_Type___>_Foundation_Date_ISO8601FormatStyle_TimeZoneSeparator_100ea7398
    ;
    (**(code **)(lVar21 + 0x68))(lVar18,IVar12.unknown,lVar19);
    Foundation::Date::ISO8601FormatStyle::timeZone((TimeZoneSeparator)(__int8)lVar18,IVar12);
    (**(code **)(lVar21 + 8))(lVar18,lVar19);
    IVar12.unknown = puVar11;
    (*pcVar20)(puVar23);
    lVar19 = local_b8;
    Foundation::Date::ISO8601FormatStyle::time(true,IVar12);
    (*pcVar20)(lVar22,puVar11);
    lVar18 = local_b0;
    TVar5 = Foundation::Date::ISO8601FormatStyle::TimeSeparator::typeMetadataAccessor();
    lVar21 = CONCAT71(extraout_var_01,TVar5.value);
    lVar22 = *(long *)(lVar21 + -8);
    lVar18 = lVar18 - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
    IVar12.unknown =
         (undefined *)
         (ulong)*(uint *)
                 PTR___enum_case_for_Foundation_Date_ISO8601FormatStyle_TimeSeparator_colon_Foundation_Date_ISO8601FormatStyle_TimeSeparator_Type___>_Foundation_Date_ISO8601FormatStyle_TimeSeparator_100ea7378
    ;
    (**(code **)(lVar22 + 0x68))(lVar18,IVar12.unknown,lVar21);
    this = local_a8;
    Foundation::Date::ISO8601FormatStyle::timeSeparator((TimeSeparator)(__int8)lVar18,IVar12);
    (**(code **)(lVar22 + 8))(lVar18,lVar21);
    (*pcVar20)(lVar19,puVar11);
    pIVar2 = local_90;
    TVar13 = Foundation::TimeZone::typeMetadataAccessor();
    uVar1 = local_98;
    lVar19 = *(long *)(TVar13.unknown + -8);
    TVar16.unknown =
         (undefined *)((long)pIVar2 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
    (**(code **)(lVar19 + 0x10))(TVar16.unknown,local_98,TVar13.unknown);
    Foundation::Date::ISO8601FormatStyle::set_timeZone(this,TVar16);
    (**(code **)(lVar19 + 8))(uVar1,TVar13.unknown);
    (**(code **)(local_a0 + 0x20))
              (unaff_x20 + _TtC13Configuration16FileAccessLogger::formatStyle,this,puVar11);
  }
  return unaff_x20;
}



/* Address: 0x1007fca88 | FUN_1007fca88 */

void FUN_1007fca88(void)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ISO8601FormatStyle IVar4;
  long unaff_x20;
  undefined4 local_24;
  
  _os_unfair_lock_lock(unaff_x20 + 0x10);
  uVar3 = (ulong)*(uint *)(unaff_x20 + 0x14);
  FUN_1005ac32c();
  if ((uVar3 & 0xff00000000) == 0x100000000) {
    local_24 = (undefined4)uVar3;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    uVar3 = (ulong)bVar2;
    if ((bVar2 & 1) != 0) {
      FUN_1007fe10c();
      _swift_willThrowTypedImpl(&local_24,&DAT_100ee42f8,uVar3);
    }
  }
  _os_unfair_lock_unlock(unaff_x20 + 0x10);
  lVar1 = _TtC13Configuration16FileAccessLogger::formatStyle;
  IVar4 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar4.unknown + -8) + 8))(unaff_x20 + lVar1,IVar4.unknown);
  return;
}



/* Address: 0x1007fcb34 | FUN_1007fcb34 */

void FUN_1007fcb34(void)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  ISO8601FormatStyle IVar4;
  long unaff_x20;
  undefined4 local_24;
  
  _os_unfair_lock_lock(unaff_x20 + 0x10);
  uVar3 = (ulong)*(uint *)(unaff_x20 + 0x14);
  FUN_1005ac32c();
  if ((uVar3 & 0xff00000000) == 0x100000000) {
    local_24 = (undefined4)uVar3;
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    uVar3 = (ulong)bVar2;
    if ((bVar2 & 1) != 0) {
      FUN_1007fe10c();
      _swift_willThrowTypedImpl(&local_24,&DAT_100ee42f8,uVar3);
    }
  }
  _os_unfair_lock_unlock(unaff_x20 + 0x10);
  lVar1 = _TtC13Configuration16FileAccessLogger::formatStyle;
  IVar4 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(IVar4.unknown + -8) + 8))(unaff_x20 + lVar1,IVar4.unknown);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007fcbf0 | FUN_1007fcbf0 */

/* WARNING: Removing unreachable block (ram,0x0001007fcc14) */

void FUN_1007fcbf0(void)

{
  undefined1 local_38 [8];
  undefined8 local_30 [2];
  
  FUN_1007fcc48(local_30,local_38);
  DAT_100fe6f08 = local_30[0];
  DAT_100fe6f10 = 0;
  return;
}


