/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004fc698 | FUN_1004fc698 */

void FUN_1004fc698(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  long lStack_90;
  undefined1 auStack_88 [40];
  
  puVar3 = &DAT_100fcd548;
  local_b8 = param_1;
  FUN_1000f7830(&DAT_100fcd548,&DAT_100c53e20);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_c0 - extraout_x8;
  lVar4 = 0;
  FUN_1004fe770();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  local_c0 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + 0x10);
  if (lVar8 != 0) {
    param_4 = param_4 + 0x20;
    do {
      FUN_100076688(param_4,auStack_88);
      FUN_100076508(auStack_88,auStack_b0);
      lVar1 = lStack_90;
      uVar2 = local_98;
      FUN_100004640(auStack_b0,local_98);
      (**(code **)(lVar1 + 8))(lVar6,param_2,param_3,uVar2,lVar1);
      lVar5 = lVar6;
      (**(code **)(lVar7 + 0x30))(lVar6,1,lVar4);
      lVar1 = local_c0;
      if ((int)lVar5 != 1) {
        FUN_1000523d8(lVar6,local_c0,FUN_1004fe770);
        uVar2 = local_b8;
        FUN_1000523d8(lVar1,local_b8,FUN_1004fe770);
        (**(code **)(lVar7 + 0x38))(uVar2,0,1,lVar4);
        FUN_100004594(auStack_b0);
        return;
      }
      FUN_1000fb4c4(lVar6,&DAT_100fcd548,&DAT_100c53e20);
      FUN_100004594(auStack_b0);
      param_4 = param_4 + 0x28;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  (**(code **)(lVar7 + 0x38))(local_b8,1,1,lVar4);
  return;
}



/* Address: 0x1004fc868 | FUN_1004fc868 */

void FUN_1004fc868(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1004fc698(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x1004fc870 | FUN_1004fc870 */

uint FUN_1004fc870(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar10;
  uint uVar11;
  undefined *puVar12;
  ulong *puVar13;
  _StringGuts _Var14;
  long lVar15;
  _StringGuts _Var16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong auStack_70 [2];
  
  lVar6 = 0;
  FUN_1004ca408();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar15 = (long)auStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  auStack_70[1] = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar15 - extraout_x12;
  lVar7 = 0;
  FUN_1004fcf34();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar17 = (undefined8 *)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar19 = (undefined8 *)((long)puVar17 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = (ulong *)((long)puVar19 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = (long)puVar13 - extraout_x12_02;
  puVar12 = &DAT_100fcd6a0;
  FUN_1000f7830(&DAT_100fcd6a0,&DAT_100c53c20);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar18 - extraout_x8_01;
  plVar1 = (long *)(lVar10 + *(int *)(puVar12 + 0x30));
  FUN_1004fe2b8(param_1,lVar10);
  FUN_1004fe2b8(param_2,plVar1);
  lVar6 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar7);
  iVar5 = (int)lVar6;
  if (iVar5 < 2) {
    if (iVar5 == 0) {
      FUN_1004fe2b8(lVar10,lVar18);
      plVar9 = plVar1;
      _swift_getEnumCaseMultiPayload(plVar1,lVar7);
      if ((int)plVar9 == 0) {
        FUN_1000523d8(lVar18,lVar15,FUN_1004ca408);
        uVar2 = auStack_70[1];
        FUN_1000523d8(plVar1,auStack_70[1],FUN_1004ca408);
        lVar6 = lVar15;
        thunk_FUN_1004cae4c(lVar15,uVar2);
        uVar11 = (uint)lVar6;
        FUN_10005241c(uVar2,FUN_1004ca408);
        FUN_10005241c(lVar15,FUN_1004ca408);
        FUN_10005241c(lVar10,FUN_1004fcf34);
        goto LAB_1004fcc70;
      }
      FUN_10005241c(lVar18,FUN_1004ca408);
LAB_1004fcb80:
      FUN_1000fb4c4(lVar10,&DAT_100fcd6a0,&DAT_100c53c20);
    }
    else {
      FUN_1004fe2b8(lVar10,puVar13);
      uVar2 = *puVar13;
      _Var16.unknown = (undefined *)puVar13[1];
      _Var14.unknown = (undefined *)puVar13[2];
      plVar9 = plVar1;
      _swift_getEnumCaseMultiPayload(plVar1,lVar7);
      if ((int)plVar9 != 1) {
        _swift_bridgeObjectRelease(uVar2);
        goto LAB_1004fcb7c;
      }
      lVar6 = *plVar1;
      puVar3 = (undefined *)plVar1[1];
      puVar12 = (undefined *)plVar1[2];
      uVar8 = uVar2;
      FUN_10037b278(uVar2,lVar6);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(lVar6);
      if ((uVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar12);
LAB_1004fcc58:
        _swift_bridgeObjectRelease(_Var14.unknown);
      }
      else {
        if (_Var14.unknown == (undefined *)0x0) goto joined_r0x0001004fcc04;
        if (puVar12 == (undefined *)0x0) goto LAB_1004fcc58;
        if (_Var16.unknown == puVar3 && _Var14.unknown == puVar12) {
          _swift_bridgeObjectRelease(_Var14.unknown);
          goto LAB_1004fcc2c;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var16,_Var14,(_StringComparisonResult)(__int8)puVar3);
        _swift_bridgeObjectRelease(_Var14.unknown);
        _swift_bridgeObjectRelease(puVar12);
joined_r0x0001004fcb60:
        if (bVar4) goto LAB_1004fcc30;
      }
      FUN_10005241c(lVar10,FUN_1004fcf34);
    }
    uVar11 = 0;
  }
  else {
    if (iVar5 == 2) {
      FUN_1004fe2b8(lVar10,puVar19);
      _Var16.unknown = (undefined *)*puVar19;
      _Var14.unknown = (undefined *)puVar19[1];
      plVar9 = plVar1;
      _swift_getEnumCaseMultiPayload(plVar1,lVar7);
      if ((int)plVar9 != 2) {
LAB_1004fcb7c:
        _swift_bridgeObjectRelease(_Var14.unknown);
        goto LAB_1004fcb80;
      }
      puVar12 = (undefined *)plVar1[1];
      if (_Var14.unknown == (undefined *)0x0) goto joined_r0x0001004fcc04;
      if (puVar12 == (undefined *)0x0) goto LAB_1004fcc58;
LAB_1004fcb28:
      if (_Var16.unknown != (undefined *)*plVar1 || _Var14.unknown != puVar12) {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var16,_Var14,(_StringComparisonResult)(__int8)(undefined *)*plVar1);
        _swift_bridgeObjectRelease(_Var14.unknown);
        _swift_bridgeObjectRelease(puVar12);
        goto joined_r0x0001004fcb60;
      }
      _swift_bridgeObjectRelease(_Var14.unknown);
LAB_1004fcc2c:
      _swift_bridgeObjectRelease(puVar12);
    }
    else {
      FUN_1004fe2b8(lVar10,puVar17);
      _Var16.unknown = (undefined *)*puVar17;
      _Var14.unknown = (undefined *)puVar17[1];
      plVar9 = plVar1;
      _swift_getEnumCaseMultiPayload(plVar1,lVar7);
      if ((int)plVar9 != 3) goto LAB_1004fcb7c;
      puVar12 = (undefined *)plVar1[1];
      if (_Var14.unknown != (undefined *)0x0) {
        if (puVar12 != (undefined *)0x0) goto LAB_1004fcb28;
        goto LAB_1004fcc58;
      }
joined_r0x0001004fcc04:
      _Var14.unknown = puVar12;
      if (_Var14.unknown != (undefined *)0x0) goto LAB_1004fcc58;
    }
LAB_1004fcc30:
    FUN_10005241c(lVar10,FUN_1004fcf34);
    uVar11 = 1;
  }
LAB_1004fcc70:
  return uVar11 & 1;
}



/* Address: 0x1004fcca4 | FUN_1004fcca4 */

undefined * FUN_1004fcca4(undefined8 param_1,char param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  if (param_2 == '\x01') {
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = &DAT_0000002a;
  }
  else {
    SVar5 = Swift::CustomStringConvertible::get_description();
  }
  puVar1 = &DAT_100fcb488;
  FUN_1000f7830(&DAT_100fcb488,&DAT_100c504c0);
  pcVar4 = (char *)0x7;
  puVar2 = puVar1;
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar4;
  Swift::String::append(SVar5,SVar6);
  *(undefined8 *)(puVar2 + 0x20) = 0x2e302e302e373231;
  *(undefined8 *)(puVar2 + 0x28) = 0xea00000000003a31;
  SVar7.bridgeObject = param_4;
  SVar7.str = pcVar4;
  Swift::String::append(SVar5,SVar7);
  *(undefined8 *)(puVar2 + 0x30) = 0x736f686c61636f6c;
  *(undefined8 *)(puVar2 + 0x38) = 0xea00000000003a74;
  SVar8.bridgeObject = param_4;
  SVar8.str = pcVar4;
  Swift::String::append(SVar5,SVar8);
  *(undefined8 *)(puVar2 + 0x40) = 0x3a5d313a3a5b;
  *(undefined1 **)(puVar2 + 0x48) = &DAT_e600000000000000;
  _Var3.unknown = (undefined *)0x50;
  pcVar4 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 6;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  Swift::_StringGuts::grow(0x13,_Var3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar4;
  _Var3.unknown = SVar5.bridgeObject;
  Swift::String::append(SVar5,SVar9);
  *(undefined8 *)(puVar1 + 0x20) = 0xd000000000000011;
  *(undefined8 *)(puVar1 + 0x28) = 0x8000000100daa6c0;
  Swift::_StringGuts::grow(0x13,_Var3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar4;
  Swift::String::append(SVar5,SVar10);
  *(undefined8 *)(puVar1 + 0x30) = 0xd000000000000011;
  *(undefined8 *)(puVar1 + 0x38) = 0x8000000100dac3e0;
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar4;
  Swift::String::append(SVar5,SVar11);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  *(undefined8 *)(puVar1 + 0x40) = 0x5b2f2f3a70747468;
  *(undefined8 *)(puVar1 + 0x48) = 0xed00003a5d313a3a;
  return puVar2;
}



/* Address: 0x1004fcee0 | FUN_1004fcee0 */

void FUN_1004fcee0(void)

{
  undefined *puVar1;
  
  if (DAT_100fcd4f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c50c30;
  _swift_getWitnessTable(&DAT_100c50c30,&DAT_100ed9f88);
  DAT_100fcd4f8 = puVar1;
  return;
}



/* Address: 0x1004fcf20 | FUN_1004fcf20 */

void FUN_1004fcf20(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcd658,&TargetStructDescriptor_100cb2f38);
  return;
}



/* Address: 0x1004fcf34 | FUN_1004fcf34 */

void FUN_1004fcf34(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcd5c8,&TargetEnumDescriptor_100cb2f10);
  return;
}



/* Address: 0x1004fcf48 | FUN_1004fcf48 */

undefined8 FUN_1004fcf48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004fcf98 | FUN_1004fcf98 */

void FUN_1004fcf98(void)

{
  Date DVar1;
  undefined *puVar2;
  
  if (DAT_100fcb560 != (undefined *)0x0) {
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498,DVar1.unknown);
  DAT_100fcb560 = puVar2;
  return;
}



/* Address: 0x1004fcfdc | thunk_FUN_1004fcfe0 */

void thunk_FUN_1004fcfe0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53940;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53940,&DAT_100edbe58);
  DAT_100fcd550 = pTVar1;
  return;
}



/* Address: 0x1004fcfe0 | FUN_1004fcfe0 */

void FUN_1004fcfe0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcd550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c53940;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53940,&DAT_100edbe58);
  DAT_100fcd550 = pTVar1;
  return;
}



/* Address: 0x1004fd020 | FUN_1004fd020 */

undefined8 * FUN_1004fd020(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[5];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1004fd07c | FUN_1004fd07c */

undefined8 * FUN_1004fd07c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004fd108 | FUN_1004fd108 */

void FUN_1004fd108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004fd11c | FUN_1004fd11c */

undefined8 * FUN_1004fd11c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1004fd178 | FUN_1004fd178 */

undefined1  [16] FUN_1004fd178(void)

{
  return ZEXT816(0x100edbd38);
}



/* Address: 0x1004fd188 | FUN_1004fd188 */

undefined1  [16] FUN_1004fd188(void)

{
  return ZEXT816(0x100edbdc0);
}



/* Address: 0x1004fd198 | FUN_1004fd198 */

undefined1  [16] FUN_1004fd198(void)

{
  return ZEXT816(0x100edbe58);
}



/* Address: 0x1004fd1a8 | FUN_1004fd1a8 */

undefined1  [16] FUN_1004fd1a8(void)

{
  return ZEXT816(0x100edbe78);
}



/* Address: 0x1004fd1b8 | FUN_1004fd1b8 */

undefined1  [16] FUN_1004fd1b8(void)

{
  return ZEXT816(0x100edbe98);
}



/* Address: 0x1004fd1c8 | FUN_1004fd1c8 */

undefined1  [16] FUN_1004fd1c8(void)

{
  return ZEXT816(0x100edbeb8);
}



/* Address: 0x1004fd1d8 | thunk_FUN_1004fd1dc */

undefined8 * thunk_FUN_1004fd1dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1004fd1dc | FUN_1004fd1dc */

undefined8 * FUN_1004fd1dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1004fd220 | FUN_1004fd220 */

undefined8 * FUN_1004fd220(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x1004fd284 | FUN_1004fd284 */

undefined8 * FUN_1004fd284(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x1004fd2c8 | FUN_1004fd2c8 */

int FUN_1004fd2c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1004fd310 | FUN_1004fd310 */

void FUN_1004fd310(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004fd350 | FUN_1004fd350 */

undefined1  [16] FUN_1004fd350(void)

{
  return ZEXT816(0x100edbf30);
}



/* Address: 0x1004fd360 | FUN_1004fd360 */

undefined1  [16] FUN_1004fd360(void)

{
  return ZEXT816(0x100edbfb8);
}



/* Address: 0x1004fd370 | FUN_1004fd370 */

long * FUN_1004fd370(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  Date DVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        lVar9 = param_2[1];
        lVar13 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = lVar13;
        lVar4 = 0;
        FUN_1004ca408();
        lVar10 = (long)*(int *)(lVar4 + 0x18);
        DVar5 = Foundation::Date::typeMetadataAccessor();
        lVar11 = *(long *)(DVar5.unknown + -8);
        pcVar12 = *(code **)(lVar11 + 0x30);
        _swift_bridgeObjectRetain(lVar13);
        _swift_bridgeObjectRetain(lVar9);
        lVar4 = (long)param_2 + lVar10;
        (*pcVar12)(lVar4,1,DVar5.unknown);
        if ((int)lVar4 == 0) {
          (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
          (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
        }
        else {
          puVar6 = &DAT_100fcb550;
          FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
          _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
                  *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
        }
        uVar7 = 0;
      }
      else {
        lVar4 = param_2[1];
        *param_1 = *param_2;
        param_1[1] = lVar4;
        lVar4 = param_2[2];
        param_1[2] = lVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar4);
        uVar7 = 1;
      }
    }
    else if (iVar2 == 2) {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      _swift_bridgeObjectRetain();
      uVar7 = 2;
    }
    else {
      lVar4 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      _swift_bridgeObjectRetain();
      uVar7 = 3;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar8 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004fd528 | FUN_1004fd528 */

void FUN_1004fd528(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      _swift_bridgeObjectRelease(*param_1);
      _swift_bridgeObjectRelease(param_1[1]);
      lVar4 = 0;
      FUN_1004ca408();
      iVar1 = *(int *)(lVar4 + 0x18);
      DVar5 = Foundation::Date::typeMetadataAccessor();
      lVar6 = *(long *)(DVar5.unknown + -8);
      lVar4 = (long)param_1 + (long)iVar1;
      (**(code **)(lVar6 + 0x30))(lVar4,1,DVar5.unknown);
      if ((int)lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004fd5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 8))((long)param_1 + (long)iVar1,DVar5.unknown);
        return;
      }
    }
    else if (iVar1 == 1) {
      _swift_bridgeObjectRelease(*param_1);
      uVar3 = param_1[2];
      goto LAB_1004fd578;
    }
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    uVar3 = param_1[1];
LAB_1004fd578:
    _swift_bridgeObjectRelease(uVar3);
    return;
  }
  return;
}



/* Address: 0x1004fd5f8 | FUN_1004fd5f8 */

undefined8 * FUN_1004fd5f8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Date DVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  puVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar1 < 2) {
    if ((int)puVar1 == 0) {
      uVar5 = param_2[1];
      uVar9 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar9;
      lVar2 = 0;
      FUN_1004ca408();
      lVar6 = (long)*(int *)(lVar2 + 0x18);
      DVar3 = Foundation::Date::typeMetadataAccessor();
      lVar7 = *(long *)(DVar3.unknown + -8);
      pcVar8 = *(code **)(lVar7 + 0x30);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar5);
      lVar2 = (long)param_2 + lVar6;
      (*pcVar8)(lVar2,1,DVar3.unknown);
      if ((int)lVar2 == 0) {
        (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar3.unknown);
        (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,DVar3.unknown);
      }
      else {
        puVar4 = &DAT_100fcb550;
        FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
        _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
                *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
      }
      goto LAB_1004fd6f0;
    }
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    uVar5 = param_2[2];
    param_1[2] = uVar5;
    _swift_bridgeObjectRetain();
  }
  else {
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
  }
  _swift_bridgeObjectRetain(uVar5);
LAB_1004fd6f0:
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar1);
  return param_1;
}



/* Address: 0x1004fd754 | FUN_1004fd754 */

undefined8 * FUN_1004fd754(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Date DVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1004fcf34);
  puVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar1 < 2) {
    if ((int)puVar1 == 0) {
      uVar5 = *param_2;
      *param_1 = uVar5;
      uVar6 = param_2[1];
      param_1[1] = uVar6;
      lVar2 = 0;
      FUN_1004ca408();
      lVar7 = (long)*(int *)(lVar2 + 0x18);
      DVar3 = Foundation::Date::typeMetadataAccessor();
      lVar8 = *(long *)(DVar3.unknown + -8);
      pcVar9 = *(code **)(lVar8 + 0x30);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      lVar2 = (long)param_2 + lVar7;
      (*pcVar9)(lVar2,1,DVar3.unknown);
      if ((int)lVar2 == 0) {
        (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar3.unknown);
        (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar3.unknown);
      }
      else {
        puVar4 = &DAT_100fcb550;
        FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
        _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
                *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
      }
      goto LAB_1004fd86c;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar5 = param_2[2];
    param_1[2] = uVar5;
    _swift_bridgeObjectRetain();
  }
  else {
    *param_1 = *param_2;
    uVar5 = param_2[1];
    param_1[1] = uVar5;
  }
  _swift_bridgeObjectRetain(uVar5);
LAB_1004fd86c:
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar1);
  return param_1;
}



/* Address: 0x1004fd8cc | FUN_1004fd8cc */

undefined8 * FUN_1004fd8cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Date DVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar1 != 0) {
    puVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar1;
  }
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  lVar2 = 0;
  FUN_1004ca408();
  lVar5 = (long)*(int *)(lVar2 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar3.unknown + -8);
  lVar2 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar2,1,DVar3.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar3.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,DVar3.unknown);
  }
  else {
    puVar4 = &DAT_100fcb550;
    FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x1004fd9dc | FUN_1004fd9dc */

undefined8 * FUN_1004fd9dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  Date DVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1004fcf34);
    puVar1 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar1 != 0) {
      puVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar1;
    }
    uVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar7;
    lVar2 = 0;
    FUN_1004ca408();
    lVar5 = (long)*(int *)(lVar2 + 0x18);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar6 = *(long *)(DVar3.unknown + -8);
    lVar2 = (long)param_2 + lVar5;
    (**(code **)(lVar6 + 0x30))(lVar2,1,DVar3.unknown);
    if ((int)lVar2 == 0) {
      (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar3.unknown);
      (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,DVar3.unknown);
    }
    else {
      puVar4 = &DAT_100fcb550;
      FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
      _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
              *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x1004fdb04 | FUN_1004fdb04 */

void FUN_1004fdb04(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1004ca408();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &DAT_100c53b80;
    local_30 = &DAT_100c53b98;
    puStack_28 = &DAT_100c53b98;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,4,&local_40);
  }
  return;
}



/* Address: 0x1004fdb7c | FUN_1004fdb7c */

long * FUN_1004fdb7c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  URL UVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    UVar7 = Foundation::URL::typeMetadataAccessor();
    pcVar11 = *(code **)(*(long *)(UVar7.unknown + -8) + 0x10);
    (*pcVar11)(param_1,param_2,UVar7.unknown);
    (*pcVar11)((long)param_1 + (long)*(int *)(param_3 + 0x14),
               (long)param_2 + (long)*(int *)(param_3 + 0x14),UVar7.unknown);
    iVar4 = *(int *)(param_3 + 0x1c);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar8 = puVar1[1];
    uVar13 = *puVar1;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar6[1] = puVar1[1];
    *puVar6 = uVar13;
    plVar2 = (long *)((long)param_1 + (long)iVar4);
    plVar3 = (long *)((long)param_2 + (long)iVar4);
    lVar12 = *plVar3;
    _swift_retain(uVar8);
    if (lVar12 == 0) {
      lVar12 = *plVar3;
      plVar2[1] = plVar3[1];
      *plVar2 = lVar12;
    }
    else {
      lVar9 = plVar3[1];
      *plVar2 = lVar12;
      plVar2[1] = lVar9;
      _swift_retain();
    }
    iVar4 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar8 = puVar1[1];
    uVar13 = *puVar1;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar6[1] = puVar1[1];
    *puVar6 = uVar13;
    lVar12 = (long)param_1 + (long)iVar4;
    lVar9 = (long)param_2 + (long)iVar4;
    lVar14 = *(long *)(lVar9 + 0x18);
    *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)(lVar9 + 0x20);
    *(long *)(lVar12 + 0x18) = lVar14;
    pcVar11 = (code *)**(undefined8 **)(lVar14 + -8);
    _swift_retain(uVar8);
    (*pcVar11)(lVar12,lVar9,lVar14);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar12 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004fdc9c | FUN_1004fdc9c */

void FUN_1004fdc9c(long param_1,long param_2)

{
  long *plVar1;
  URL UVar2;
  code *pcVar3;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  pcVar3 = *(code **)(*(long *)(UVar2.unknown + -8) + 8);
  (*pcVar3)(param_1,UVar2.unknown);
  (*pcVar3)(param_1 + *(int *)(param_2 + 0x14),UVar2.unknown);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x1c));
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
  }
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  FUN_100004594(param_1 + *(int *)(param_2 + 0x24));
  return;
}



/* Address: 0x1004fdd34 | FUN_1004fdd34 */

long FUN_1004fdd34(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  URL UVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  
  UVar6 = Foundation::URL::typeMetadataAccessor();
  pcVar9 = *(code **)(*(long *)(UVar6.unknown + -8) + 0x10);
  (*pcVar9)(param_1,param_2,UVar6.unknown);
  (*pcVar9)(param_1 + *(int *)(param_3 + 0x14),param_2 + *(int *)(param_3 + 0x14),UVar6.unknown);
  iVar4 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar7 = puVar1[1];
  uVar11 = *puVar1;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar5[1] = puVar1[1];
  *puVar5 = uVar11;
  plVar2 = (long *)(param_1 + iVar4);
  plVar3 = (long *)(param_2 + iVar4);
  lVar10 = *plVar3;
  _swift_retain(uVar7);
  if (lVar10 == 0) {
    lVar10 = *plVar3;
    plVar2[1] = plVar3[1];
    *plVar2 = lVar10;
  }
  else {
    lVar8 = plVar3[1];
    *plVar2 = lVar10;
    plVar2[1] = lVar8;
    _swift_retain();
  }
  iVar4 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  uVar7 = puVar1[1];
  uVar11 = *puVar1;
  puVar5 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar5[1] = puVar1[1];
  *puVar5 = uVar11;
  lVar10 = param_1 + iVar4;
  param_2 = param_2 + iVar4;
  lVar8 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(lVar10 + 0x18) = lVar8;
  pcVar9 = (code *)**(undefined8 **)(lVar8 + -8);
  _swift_retain(uVar7);
  (*pcVar9)(lVar10,param_2,lVar8);
  return param_1;
}



/* Address: 0x1004fde28 | FUN_1004fde28 */

long FUN_1004fde28(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  URL UVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar11 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x18);
  (*pcVar11)(param_1,param_2,UVar5.unknown);
  (*pcVar11)(param_1 + *(int *)(param_3 + 0x14),param_2 + *(int *)(param_3 + 0x14),UVar5.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar9 = puVar1[1];
  uVar6 = puVar2[1];
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  _swift_retain(uVar6);
  _swift_release(uVar9);
  plVar3 = (long *)(param_1 + *(int *)(param_3 + 0x1c));
  plVar4 = (long *)(param_2 + *(int *)(param_3 + 0x1c));
  lVar8 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar8 != 0) {
      lVar7 = plVar4[1];
      *plVar3 = lVar8;
      plVar3[1] = lVar7;
      _swift_retain();
      goto LAB_1004fdf04;
    }
  }
  else {
    if (lVar8 != 0) {
      lVar7 = plVar4[1];
      lVar10 = plVar3[1];
      *plVar3 = lVar8;
      plVar3[1] = lVar7;
      _swift_retain();
      _swift_release(lVar10);
      goto LAB_1004fdf04;
    }
    _swift_release(plVar3[1]);
  }
  lVar8 = *plVar4;
  plVar3[1] = plVar4[1];
  *plVar3 = lVar8;
LAB_1004fdf04:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  uVar9 = puVar1[1];
  uVar6 = puVar2[1];
  uVar12 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar12;
  _swift_retain(uVar6);
  _swift_release(uVar9);
  FUN_10008820c(param_1 + *(int *)(param_3 + 0x24),param_2 + *(int *)(param_3 + 0x24));
  return param_1;
}



/* Address: 0x1004fdf54 | FUN_1004fdf54 */

long FUN_1004fdf54(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  URL UVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  pcVar5 = *(code **)(*(long *)(UVar4.unknown + -8) + 0x20);
  (*pcVar5)(param_1,param_2,UVar4.unknown);
  (*pcVar5)(param_1 + *(int *)(param_3 + 0x14),param_2 + *(int *)(param_3 + 0x14),UVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x1c);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  puVar2 = (undefined8 *)(param_1 + iVar1);
  puVar3 = (undefined8 *)(param_2 + iVar1);
  uVar6 = *puVar3;
  uVar8 = puVar3[3];
  uVar7 = puVar3[2];
  puVar2[1] = puVar3[1];
  *puVar2 = uVar6;
  puVar2[3] = uVar8;
  puVar2[2] = uVar7;
  puVar2[4] = puVar3[4];
  return param_1;
}



/* Address: 0x1004fdffc | FUN_1004fdffc */

long FUN_1004fdffc(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  URL UVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  UVar5 = Foundation::URL::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(UVar5.unknown + -8) + 0x28);
  (*pcVar10)(param_1,param_2,UVar5.unknown);
  (*pcVar10)(param_1 + *(int *)(param_3 + 0x14),param_2 + *(int *)(param_3 + 0x14),UVar5.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  uVar6 = puVar1[1];
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar11 = *puVar4;
  puVar1[1] = puVar4[1];
  *puVar1 = uVar11;
  _swift_release(uVar6);
  plVar2 = (long *)(param_1 + *(int *)(param_3 + 0x1c));
  plVar3 = (long *)(param_2 + *(int *)(param_3 + 0x1c));
  lVar8 = *plVar3;
  if (*plVar2 == 0) {
    if (lVar8 != 0) {
      lVar7 = plVar3[1];
      *plVar2 = lVar8;
      plVar2[1] = lVar7;
      goto LAB_1004fe0bc;
    }
  }
  else {
    if (lVar8 != 0) {
      lVar9 = plVar3[1];
      lVar7 = plVar2[1];
      *plVar2 = lVar8;
      plVar2[1] = lVar9;
      _swift_release(lVar7);
      goto LAB_1004fe0bc;
    }
    _swift_release(plVar2[1]);
  }
  lVar8 = *plVar3;
  plVar2[1] = plVar3[1];
  *plVar2 = lVar8;
LAB_1004fe0bc:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  uVar6 = puVar1[1];
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  uVar11 = *puVar4;
  puVar1[1] = puVar4[1];
  *puVar1 = uVar11;
  _swift_release(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  FUN_100004594(puVar1);
  uVar6 = *puVar4;
  uVar12 = puVar4[3];
  uVar11 = puVar4[2];
  puVar1[1] = puVar4[1];
  *puVar1 = uVar6;
  puVar1[3] = uVar12;
  puVar1[2] = uVar11;
  puVar1[4] = puVar4[4];
  return param_1;
}



/* Address: 0x1004fe110 | FUN_1004fe110 */

void FUN_1004fe110(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004fe11c | FUN_1004fe11c */

ulong FUN_1004fe11c(ulong param_1,undefined8 param_2,long param_3)

{
  URL UVar1;
  ulong uVar2;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if ((int)param_2 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001004fe16c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(UVar1.unknown + -8) + 0x30))(param_1,param_2,UVar1.unknown);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x18));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Address: 0x1004fe198 | FUN_1004fe198 */

void FUN_1004fe198(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004fe1a4 | FUN_1004fe1a4 */

void FUN_1004fe1a4(long param_1,undefined8 param_2,int param_3,long param_4)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_3 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001004fe1fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(UVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,UVar1.unknown);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x18)) = (ulong)((int)param_2 - 1);
  return;
}



/* Address: 0x1004fe21c | FUN_1004fe21c */

undefined1  [16] FUN_1004fe21c(long param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_50;
  long lStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_50 = *(long *)(UVar1.unknown + -8) + 0x40;
    local_40 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    puStack_38 = &DAT_100c53b98;
    puStack_28 = &DAT_100c53bc8;
    lStack_48 = local_50;
    local_30 = local_40;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x1004fe2a8 | FUN_1004fe2a8 */

undefined1  [16] FUN_1004fe2a8(void)

{
  return ZEXT816(0x100edbfe0);
}



/* Address: 0x1004fe2b8 | FUN_1004fe2b8 */

undefined8 FUN_1004fe2b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004fcf34();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1004fe2fc | thunk_FUN_100086244 */

void thunk_FUN_100086244(void)

{
  thunk_FUN_100086244();
  return;
}



/* Address: 0x1004fe300 | thunk_FUN_1004fd1dc */

void thunk_FUN_1004fd1dc(void)

{
  thunk_FUN_1004fd1dc();
  return;
}



/* Address: 0x1004fe304 | FUN_1004fe304 */

char * FUN_1004fe304(void)

{
  return "Accept";
}



/* Address: 0x1004fe310 | FUN_1004fe310 */

char * FUN_1004fe310(void)

{
  return "Content-Type";
}



/* Address: 0x1004fe31c | FUN_1004fe31c */

char * FUN_1004fe31c(void)

{
  return "Authorization";
}



/* Address: 0x1004fe328 | FUN_1004fe328 */

undefined * FUN_1004fe328(void)

{
  return &DAT_100edc040;
}



/* Address: 0x1004fe334 | FUN_1004fe334 */

undefined * FUN_1004fe334(void)

{
  return &DAT_100edc030;
}



/* Address: 0x1004fe340 | FUN_1004fe340 */

char * FUN_1004fe340(void)

{
  return "MCP-Session-Id";
}



/* Address: 0x1004fe34c | FUN_1004fe34c */

char * FUN_1004fe34c(void)

{
  return "Cache-Control";
}



/* Address: 0x1004fe358 | FUN_1004fe358 */

char * FUN_1004fe358(void)

{
  return "Last-Event-ID";
}



/* Address: 0x1004fe364 | FUN_1004fe364 */

undefined1  [16] FUN_1004fe364(char *param_1,void *param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  _StringGuts _Var8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uVar17;
  String SVar18;
  String SVar19;
  undefined1 auVar20 [16];
  _StringGuts _Var7;
  
  SVar18.bridgeObject = param_2;
  SVar18.str = param_1;
  SVar18 = Swift::String::lowercased(SVar18);
  _Var7.unknown = SVar18.bridgeObject;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar11 = (ulong *)(lVar6 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar15 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar15 = uVar15 & *puVar11;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  uVar16 = uVar15;
  lVar13 = lVar12;
joined_r0x0001004fe3e0:
  while (uVar15 == 0) {
    bVar5 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004fe55c);
      (*pcVar4)();
    }
    if ((long)(0x3f - uVar10 >> 6) <= lVar12) {
      _swift_bridgeObjectRelease(_Var7.unknown);
      FUN_10000c650(lVar6,puVar11,~uVar10,lVar13,0);
      uVar17 = 0;
      uVar14 = 0;
LAB_1004fe530:
      auVar20._8_8_ = uVar14;
      auVar20._0_8_ = uVar17;
      return auVar20;
    }
    uVar15 = puVar11[lVar12];
  }
  uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar9 = lVar12 << 10 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 4;
  pSVar1 = (String *)(*(long *)(lVar6 + 0x30) + uVar9);
  pvVar3 = pSVar1->bridgeObject;
  puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar9);
  uVar17 = *puVar2;
  uVar14 = puVar2[1];
  SVar19 = Swift::String::lowercased(*pSVar1);
  _Var8.unknown = SVar19.bridgeObject;
  if (SVar19 == SVar18) {
    _swift_bridgeObjectRetain(pvVar3);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRelease(_Var7.unknown);
    _Var7.unknown = _Var8.unknown;
  }
  else {
    bVar5 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar19.str,_Var8,(_StringComparisonResult)(__int8)SVar18.str);
    _swift_bridgeObjectRetain(pvVar3);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRelease(_Var8.unknown);
    if (!bVar5) {
      uVar15 = uVar15 - 1 & uVar15;
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(pvVar3);
      uVar16 = uVar15;
      lVar13 = lVar12;
      goto joined_r0x0001004fe3e0;
    }
  }
  _swift_bridgeObjectRelease(_Var7.unknown);
  FUN_10000c650(lVar6,puVar11,~uVar10,lVar13,uVar16);
  _swift_bridgeObjectRelease(pvVar3);
  goto LAB_1004fe530;
}



/* Address: 0x1004fe55c | FUN_1004fe55c */

undefined * FUN_1004fe55c(void)

{
  return &DAT_100c53c90;
}



/* Address: 0x1004fe568 | FUN_1004fe568 */

char * FUN_1004fe568(void)

{
  return "Origin";
}



/* Address: 0x1004fe574 | FUN_1004fe574 */

String FUN_1004fe574(void)

{
  UUID UVar1;
  UUID UVar2;
  long extraout_x8;
  long lVar3;
  String SVar4;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  UVar2 = Foundation::UUID::init();
  SVar4 = Foundation::UUID::get_uuidString(UVar2);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return SVar4;
}



/* Address: 0x1004fe604 | FUN_1004fe604 */

undefined1  [16] FUN_1004fe604(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  FUN_10011da54(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}


