/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006b0db8 | FUN_1006b0db8 */

void FUN_1006b0db8(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  String SVar1;
  undefined1 local_41;
  
  local_41 = param_1;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_41,SVar1.str,SVar1.bridgeObject,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1006b0e44 | FUN_1006b0e44 */

void FUN_1006b0e44(undefined2 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  String SVar1;
  undefined2 local_42;
  
  local_42 = param_1;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_42,SVar1.str,SVar1.bridgeObject,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1006b0ed0 | FUN_1006b0ed0 */

void FUN_1006b0ed0(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  String SVar1;
  undefined4 local_44;
  
  local_44 = param_1;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_44,SVar1.str,SVar1.bridgeObject,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1006b0f5c | FUN_1006b0f5c */

void FUN_1006b0f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  String SVar1;
  undefined8 local_48;
  
  local_48 = param_1;
  SVar1 = Swift::CodingKey::get_stringValue();
  FUN_1006b0ab8(&local_48,SVar1.str,SVar1.bridgeObject,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1006b0fe8 | FUN_1006b0fe8 */

void FUN_1006b0fe8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 uVar6;
  long extraout_x12;
  long *unaff_x20;
  long lVar7;
  long unaff_x21;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  String SVar14;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 uStack_68;
  
  lVar10 = *(long *)(param_3 + 0x10);
  lVar9 = *(long *)(lVar10 + -8);
  local_b0 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar2 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)puVar2 - extraout_x12;
  lVar7 = unaff_x20[1];
  pcVar8 = *(code **)(lVar9 + 0x10);
  local_b8 = param_2;
  (*pcVar8)(lVar11);
  _swift_beginAccess(lVar7 + 0x10,auStack_88,0x21,0);
  uVar13 = *(ulong *)(lVar7 + 0x10);
  uVar1 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar7 + 0x10) = uVar13;
  uVar4 = uVar13;
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
    FUN_1006a2b94(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
    *(ulong *)(lVar7 + 0x10) = uVar4;
  }
  uVar1 = *(ulong *)(uVar4 + 0x10);
  uVar13 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1006a2b94(uVar13,uVar1 + 1,1,uVar4);
    *(ulong *)(lVar7 + 0x10) = uVar13;
  }
  (*pcVar8)(puVar2,lVar11,lVar10);
  uVar12 = *(undefined8 *)(param_3 + 0x18);
  FUN_100444220(uVar1,puVar2,lVar7 + 0x10,lVar10,uVar12);
  (**(code **)(lVar9 + 8))(lVar11,lVar10);
  *(ulong *)(lVar7 + 0x10) = uVar13;
  _swift_endAccess(auStack_88);
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_10000cbb0(auStack_88);
  uVar5 = local_b0;
  lVar7 = param_4;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  puVar2 = auStack_88;
  FUN_1006b1288(puVar2);
  if (unaff_x21 == 0) {
    FUN_100004594(auStack_88);
    lVar9 = *unaff_x20;
    SVar14 = Swift::CodingKey::get_stringValue();
    _swift_beginAccess(lVar9 + 0x10,auStack_88,0x21,0);
    FUN_1006ad53c(puVar2,uVar5,lVar7);
    uVar3 = *(undefined8 *)(lVar9 + 0x10);
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    uVar6 = *(undefined8 *)(lVar9 + 0x10);
    *(undefined8 *)(lVar9 + 0x10) = 0x8000000000000000;
    FUN_1006b9c38(puVar2,uVar5,lVar7,SVar14.str,SVar14.bridgeObject,uVar3);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    *(undefined8 *)(lVar9 + 0x10) = uVar6;
    _swift_endAccess(auStack_88);
    FUN_1006ad108(puVar2,uVar5,lVar7);
  }
  else {
    FUN_100004594(auStack_88);
  }
  FUN_1006b1960(unaff_x20,lVar10,param_4,uVar12,param_5);
  return;
}



/* Address: 0x1006b1288 | FUN_1006b1288 */

undefined1 * FUN_1006b1288(undefined *param_1)

{
  code *pcVar1;
  URL UVar2;
  Date DVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  String *pSVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  String SVar14;
  undefined1 auStack_b0 [24];
  Data local_98;
  undefined8 uStack_90;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar13 = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  _swift_getDynamicType();
  if (puVar4 == PTR___type_metadata_for_Foundation_Data_100ea7300) {
    FUN_100076688(param_1,&stack0xffffffffffffff78);
    puVar4 = &DAT_100fdc230;
    FUN_1000f7830(&DAT_100fdc230,&DAT_100c701c8);
    _swift_dynamicCast(&local_98,&stack0xffffffffffffff78,puVar4,
                       PTR___type_metadata_for_Foundation_Data_100ea7300,7);
    SVar14 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,local_98);
    _swift_beginAccess(unaff_x20 + 0x18,auStack_b0,0x21,0);
    uVar12 = *(ulong *)(unaff_x20 + 0x18);
    uVar9 = uVar12;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x18) = uVar12;
    uVar6 = uVar12;
    if ((uVar9 & 1) == 0) {
      uVar6 = 0;
      FUN_1006a2628(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
      *(ulong *)(unaff_x20 + 0x18) = uVar6;
    }
    uVar9 = *(ulong *)(uVar6 + 0x10);
    uVar12 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar9) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1006a2628(uVar12,uVar9 + 1,1,uVar6);
    }
    *(ulong *)(uVar12 + 0x10) = uVar9 + 1;
    pSVar7 = (String *)(uVar12 + 0x20 + uVar9 * 0x18);
    *pSVar7 = SVar14;
    *(undefined1 *)&pSVar7[1].str = 0;
    *(ulong *)(unaff_x20 + 0x18) = uVar12;
    if (*(long *)(uVar12 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b16a8);
      (*pcVar1)();
    }
    lVar8 = *(long *)(uVar12 + 0x10) + -1;
    puVar5 = *(undefined1 **)(uVar12 + 0x20 + lVar8 * 0x18);
    *(long *)(uVar12 + 0x10) = lVar8;
    *(ulong *)(unaff_x20 + 0x18) = uVar12;
    _swift_endAccess(auStack_b0);
    FUN_10003bf2c(local_98.unknown,uStack_90);
  }
  else if (puVar4 == DVar3.unknown) {
    FUN_100076688(param_1,&stack0xffffffffffffff78);
    puVar4 = &DAT_100fdc230;
    FUN_1000f7830(&DAT_100fdc230,&DAT_100c701c8);
    _swift_dynamicCast(puVar13,&stack0xffffffffffffff78,puVar4,DVar3.unknown,7);
    puVar5 = puVar13;
    FUN_1006b42bc(puVar13);
    if (unaff_x21 == (undefined1 *)0x0) {
      (**(code **)(lVar11 + 8))(puVar13,DVar3.unknown);
    }
    else {
      (**(code **)(lVar11 + 8))(puVar13,DVar3.unknown);
      puVar5 = unaff_x20;
    }
  }
  else if (puVar4 == UVar2.unknown) {
    FUN_100076688(param_1,&stack0xffffffffffffff78);
    puVar4 = &DAT_100fdc230;
    FUN_1000f7830(&DAT_100fdc230,&DAT_100c701c8);
    _swift_dynamicCast(puVar10,&stack0xffffffffffffff78,puVar4,UVar2.unknown,7);
    puVar5 = puVar10;
    FUN_1006b474c(puVar10);
    if (unaff_x21 == (undefined1 *)0x0) {
      (**(code **)(lVar8 + 8))(puVar10,UVar2.unknown);
    }
    else {
      (**(code **)(lVar8 + 8))(puVar10,UVar2.unknown);
      puVar5 = unaff_x20;
    }
  }
  else {
    FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
    FUN_1006b0784();
    FUN_1006b4b5c(&DAT_100fdc028,&TargetProtocolConformanceDescriptor_100c6fe48);
    _swift_retain();
    Swift::Encodable::_encode();
    FUN_100004594(&stack0xffffffffffffff78);
    puVar5 = unaff_x21;
    if (unaff_x21 == (undefined1 *)0x0) {
      _swift_beginAccess(unaff_x20 + 0x18,&stack0xffffffffffffff78,0x21,0);
      uVar9 = *(ulong *)(unaff_x20 + 0x18);
      if (*(long *)(uVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b16ac);
        (*pcVar1)();
      }
      uVar6 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_1006f8218();
        lVar8 = *(long *)(uVar9 + 0x10);
      }
      else {
        lVar8 = *(long *)(uVar9 + 0x10);
      }
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b16c4);
        (*pcVar1)();
      }
      puVar5 = *(undefined1 **)(uVar9 + lVar8 * 0x18 + 8);
      *(long *)(uVar9 + 0x10) = lVar8 + -1;
      *(ulong *)(unaff_x20 + 0x18) = uVar9;
      _swift_endAccess(&stack0xffffffffffffff78);
    }
  }
  return puVar5;
}



/* Address: 0x1006b16c4 | FUN_1006b16c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006b18dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006b16c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  ulong uVar5;
  long extraout_x8;
  undefined8 uVar6;
  long extraout_x12;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  String SVar15;
  undefined8 local_a0;
  long local_78;
  long lStack_70;
  
  lVar10 = *(long *)(param_4 + 0x10);
  lVar7 = *(long *)(lVar10 + -8);
  local_a0 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar8 - extraout_x12;
  lVar12 = unaff_x20[1];
  pcVar9 = *(code **)(lVar7 + 0x10);
  (*pcVar9)(lVar14);
  _swift_beginAccess(lVar12 + 0x10,&local_78,0x21,0);
  uVar11 = *(ulong *)(lVar12 + 0x10);
  uVar1 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar12 + 0x10) = uVar11;
  uVar5 = uVar11;
  if ((uVar1 & 1) == 0) {
    uVar5 = 0;
    FUN_1006a2b94(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    *(ulong *)(lVar12 + 0x10) = uVar5;
  }
  uVar1 = *(ulong *)(uVar5 + 0x10);
  uVar11 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_1006a2b94(uVar11,uVar1 + 1,1,uVar5);
    *(ulong *)(lVar12 + 0x10) = uVar11;
  }
  (*pcVar9)(lVar8,lVar14,lVar10);
  uVar13 = *(undefined8 *)(param_4 + 0x18);
  FUN_100444220(uVar1,lVar8,lVar12 + 0x10,lVar10,uVar13);
  (**(code **)(lVar7 + 8))(lVar14,lVar10);
  *(ulong *)(lVar12 + 0x10) = uVar11;
  _swift_endAccess(&local_78);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c25a4();
  lVar7 = 0;
  FUN_1006b5aec();
  _swift_allocObject();
  *(undefined **)(lVar7 + 0x10) = puVar2;
  lVar8 = *unaff_x20;
  SVar15 = Swift::CodingKey::get_stringValue();
  _swift_beginAccess(lVar8 + 0x10,&local_78,0x21,0);
  _swift_retain_n(lVar7,2);
  uVar3 = *(undefined8 *)(lVar8 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar6 = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(lVar8 + 0x10) = 0x8000000000000000;
  FUN_1006b9c38(lVar7,0,1,SVar15.str,SVar15.bridgeObject,uVar3);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  *(undefined8 *)(lVar8 + 0x10) = uVar6;
  _swift_endAccess(&local_78);
  _swift_release(lVar7);
  uVar3 = 0;
  local_78 = lVar7;
  lStack_70 = lVar12;
  FUN_1006b4bdc(0,param_5,param_6);
  _swift_retain(lVar12);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c6fee8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6fee8,uVar3);
  Swift::KeyedEncodingContainer::_init(local_a0,pTVar4,param_5,uVar3,pTVar4);
  FUN_1006b1960(unaff_x20,lVar10,param_5,uVar13,param_6);
  return;
}



/* Address: 0x1006b1960 | FUN_1006b1960 */

void FUN_1006b1960(long param_1)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [40];
  
  lVar1 = *(long *)(param_1 + 8);
  _swift_beginAccess(lVar1 + 0x10,auStack_60,0x21,0);
  _swift_retain(lVar1);
  FUN_1006b07a4(auStack_48);
  _swift_endAccess(auStack_60);
  _swift_release(lVar1);
  FUN_100004594(auStack_48);
  return;
}



/* Address: 0x1006b19c4 | FUN_1006b19c4 */

void FUN_1006b19c4(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 uVar5;
  long extraout_x12;
  long lVar6;
  long *unaff_x20;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  String SVar13;
  undefined8 local_90;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar6 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar2 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar2 - extraout_x12;
  lVar9 = unaff_x20[1];
  pcVar7 = *(code **)(lVar6 + 0x10);
  local_90 = param_2;
  (*pcVar7)(lVar11);
  _swift_beginAccess(lVar9 + 0x10,auStack_78,0x21,0);
  uVar12 = *(ulong *)(lVar9 + 0x10);
  uVar1 = uVar12;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar9 + 0x10) = uVar12;
  uVar4 = uVar12;
  if ((uVar1 & 1) == 0) {
    uVar4 = 0;
    FUN_1006a2b94(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
    *(ulong *)(lVar9 + 0x10) = uVar4;
  }
  uVar1 = *(ulong *)(uVar4 + 0x10);
  uVar12 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1006a2b94(uVar12,uVar1 + 1,1,uVar4);
    *(ulong *)(lVar9 + 0x10) = uVar12;
  }
  (*pcVar7)(lVar2,lVar11,lVar8);
  uVar10 = *(undefined8 *)(param_3 + 0x18);
  FUN_100444220(uVar1,lVar2,lVar9 + 0x10,lVar8,uVar10);
  (**(code **)(lVar6 + 8))(lVar11,lVar8);
  *(ulong *)(lVar9 + 0x10) = uVar12;
  _swift_endAccess(auStack_78);
  lVar2 = 0;
  FUN_1006b5b18();
  _swift_allocObject();
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar6 = *unaff_x20;
  SVar13 = Swift::CodingKey::get_stringValue();
  _swift_beginAccess(lVar6 + 0x10,auStack_78,0x21,0);
  _swift_retain_n(lVar2,2);
  uVar3 = *(undefined8 *)(lVar6 + 0x10);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0x8000000000000000;
  FUN_1006b9c38(lVar2,0,2,SVar13.str,SVar13.bridgeObject,uVar3);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  _swift_endAccess(auStack_78);
  lVar6 = lVar2;
  _swift_release();
  param_1[3] = (long)&DAT_100ef6fe8;
  FUN_1006b4b9c();
  param_1[4] = lVar6;
  *param_1 = lVar2;
  param_1[1] = lVar9;
  param_1[2] = 0;
  _swift_retain(lVar9);
  FUN_1006b1960(unaff_x20,lVar8,uVar10);
  return;
}



/* Address: 0x1006b1c24 | FUN_1006b1c24 */

void FUN_1006b1c24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 8);
  uVar1 = 0;
  FUN_1006b0784();
  param_1[3] = uVar1;
  puVar2 = &DAT_100fdc028;
  FUN_1006b4b5c(&DAT_100fdc028,&TargetProtocolConformanceDescriptor_100c6fe48);
  param_1[4] = puVar2;
  *param_1 = uVar3;
  _swift_retain(uVar3);
  return;
}



/* Address: 0x1006b1c70 | FUN_1006b1c70 */

void FUN_1006b1c70(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006b4d4c(*unaff_x20,unaff_x20[1],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1006b1c90 | FUN_1006b1c90 */

void FUN_1006b1c90(void)

{
  FUN_1006b0b14();
  return;
}



/* Address: 0x1006b1ca4 | FUN_1006b1ca4 */

void FUN_1006b1ca4(void)

{
  FUN_1006b0ba4();
  return;
}



/* Address: 0x1006b1cb8 | FUN_1006b1cb8 */

void FUN_1006b1cb8(void)

{
  FUN_1006b0c28();
  return;
}



/* Address: 0x1006b1ccc | FUN_1006b1ccc */

void FUN_1006b1ccc(void)

{
  FUN_1006b0cb0();
  return;
}



/* Address: 0x1006b1ce0 | FUN_1006b1ce0 */

void FUN_1006b1ce0(void)

{
  FUN_1006b0d34();
  return;
}



/* Address: 0x1006b1cf4 | FUN_1006b1cf4 */

void FUN_1006b1cf4(void)

{
  FUN_1006b0f5c();
  return;
}



/* Address: 0x1006b1d18 | FUN_1006b1d18 */

void FUN_1006b1d18(void)

{
  FUN_1006b0db8();
  return;
}



/* Address: 0x1006b1d3c | FUN_1006b1d3c */

void FUN_1006b1d3c(void)

{
  FUN_1006b0e44();
  return;
}



/* Address: 0x1006b1d60 | FUN_1006b1d60 */

void FUN_1006b1d60(void)

{
  FUN_1006b0ed0();
  return;
}



/* Address: 0x1006b1d84 | FUN_1006b1d84 */

void FUN_1006b1d84(void)

{
  FUN_1006b0f5c();
  return;
}



/* Address: 0x1006b1da8 | FUN_1006b1da8 */

void FUN_1006b1da8(Int128 param_1)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encode(param_1);
  return;
}



/* Address: 0x1006b1dbc | FUN_1006b1dbc */

void FUN_1006b1dbc(void)

{
  FUN_1006b0f5c();
  return;
}



/* Address: 0x1006b1de0 | FUN_1006b1de0 */

void FUN_1006b1de0(void)

{
  FUN_1006b0db8();
  return;
}



/* Address: 0x1006b1e04 | FUN_1006b1e04 */

void FUN_1006b1e04(void)

{
  FUN_1006b0e44();
  return;
}



/* Address: 0x1006b1e28 | FUN_1006b1e28 */

void FUN_1006b1e28(void)

{
  FUN_1006b0ed0();
  return;
}



/* Address: 0x1006b1e4c | FUN_1006b1e4c */

void FUN_1006b1e4c(void)

{
  FUN_1006b0f5c();
  return;
}



/* Address: 0x1006b1e70 | FUN_1006b1e70 */

void FUN_1006b1e70(UInt128 param_1)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encode(param_1);
  return;
}



/* Address: 0x1006b1e84 | FUN_1006b1e84 */

void FUN_1006b1e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1006b0fe8(param_1,param_2,param_5,param_3,param_4);
  return;
}



/* Address: 0x1006b1ea8 | FUN_1006b1ea8 */

void FUN_1006b1ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeConditional
            (param_1,param_2,param_5,param_3,param_6,param_4);
  return;
}



/* Address: 0x1006b1ed0 | FUN_1006b1ed0 */

void FUN_1006b1ed0(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1ee4 | FUN_1006b1ee4 */

void FUN_1006b1ee4(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1ef8 | FUN_1006b1ef8 */

void FUN_1006b1ef8(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1f0c | FUN_1006b1f0c */

void FUN_1006b1f0c(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1f24 | FUN_1006b1f24 */

void FUN_1006b1f24(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1f38 | FUN_1006b1f38 */

void FUN_1006b1f38(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1f4c | FUN_1006b1f4c */

void FUN_1006b1f4c(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1f64 | FUN_1006b1f64 */

void FUN_1006b1f64(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1f7c | FUN_1006b1f7c */

void FUN_1006b1f7c(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1f90 | FUN_1006b1f90 */

void FUN_1006b1f90(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1fa4 | FUN_1006b1fa4 */

void FUN_1006b1fa4(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1fb8 | FUN_1006b1fb8 */

void FUN_1006b1fb8(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1fcc | FUN_1006b1fcc */

void FUN_1006b1fcc(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1fe4 | FUN_1006b1fe4 */

void FUN_1006b1fe4(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b1ffc | FUN_1006b1ffc */

void FUN_1006b1ffc(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b2010 | FUN_1006b2010 */

void FUN_1006b2010(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b2024 | FUN_1006b2024 */

void FUN_1006b2024(void)

{
  (extension_Swift)::Swift::KeyedEncodingContainerProtocol::_encodeIfPresent();
  return;
}



/* Address: 0x1006b204c | FUN_1006b204c */

void FUN_1006b204c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1006b16c4(param_1,param_2,param_5,param_3,param_4);
  return;
}



/* Address: 0x1006b2060 | thunk_FUN_1006b19c4 */

void thunk_FUN_1006b19c4(void)

{
  FUN_1006b19c4();
  return;
}



/* Address: 0x1006b2064 | thunk_FUN_1006b1c24 */

void thunk_FUN_1006b1c24(void)

{
  FUN_1006b1c24();
  return;
}



/* Address: 0x1006b2068 | FUN_1006b2068 */

void FUN_1006b2068(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_58,0x21,0);
  lVar1 = 0;
  FUN_1006b5b18();
  _swift_allocObject();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar6 = *(ulong *)(unaff_x20 + 0x18);
  _swift_retain();
  uVar2 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x18) = uVar6;
  uVar4 = uVar6;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    FUN_1006a2628(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(unaff_x20 + 0x18) = uVar4;
  }
  uVar2 = *(ulong *)(uVar4 + 0x10);
  uVar6 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_1006a2628(uVar6,uVar2 + 1,1,uVar4);
  }
  *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
  lVar5 = uVar6 + uVar2 * 0x18;
  *(long *)(lVar5 + 0x20) = lVar1;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  *(undefined1 *)(lVar5 + 0x30) = 2;
  *(ulong *)(unaff_x20 + 0x18) = uVar6;
  puVar3 = auStack_58;
  _swift_endAccess();
  param_1[3] = (long)&DAT_100ef6fe8;
  FUN_1006b4b9c();
  param_1[4] = (long)puVar3;
  *param_1 = lVar1;
  param_1[1] = unaff_x20;
  param_1[2] = 0;
  _swift_retain();
  return;
}



/* Address: 0x1006b2188 | FUN_1006b2188 */

void FUN_1006b2188(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar5 = *unaff_x20;
    _swift_beginAccess(lVar5 + 0x10,auStack_58,0x21,0);
    uVar6 = *(ulong *)(lVar5 + 0x10);
    uVar2 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar5 + 0x10) = uVar6;
    uVar3 = uVar6;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1006a2628(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      *(ulong *)(lVar5 + 0x10) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar6 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1006a2628(uVar6,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
    lVar4 = uVar6 + uVar2 * 0x18;
    *(undefined8 *)(lVar4 + 0x20) = param_1;
    *(undefined8 *)(lVar4 + 0x28) = param_2;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(ulong *)(lVar5 + 0x10) = uVar6;
    _swift_endAccess(auStack_58);
    _swift_bridgeObjectRetain(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2238);
  (*pcVar1)();
}



/* Address: 0x1006b227c | FUN_1006b227c */

void FUN_1006b227c(ulong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_58 [24];
  
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar9 = *unaff_x20;
    _swift_beginAccess(lVar9 + 0x10,auStack_58,0x21,0);
    uVar8 = *(ulong *)(lVar9 + 0x10);
    uVar5 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar9 + 0x10) = uVar8;
    uVar6 = uVar8;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      FUN_1006a2628(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
      *(ulong *)(lVar9 + 0x10) = uVar6;
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar8 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1006a2628(uVar8,uVar5 + 1,1,uVar6);
    }
    bVar4 = (param_1 & 1) == 0;
    puVar1 = &DAT_e400000000000000;
    if (bVar4) {
      puVar1 = &DAT_e500000000000000;
    }
    uVar2 = 0x65757274;
    if (bVar4) {
      uVar2 = 0x65736c6166;
    }
    *(ulong *)(uVar8 + 0x10) = uVar5 + 1;
    lVar7 = uVar8 + uVar5 * 0x18;
    *(undefined8 *)(lVar7 + 0x20) = uVar2;
    *(undefined1 **)(lVar7 + 0x28) = puVar1;
    *(undefined1 *)(lVar7 + 0x30) = 0;
    *(ulong *)(lVar9 + 0x10) = uVar8;
    _swift_endAccess(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006b2348);
  (*pcVar3)();
}



/* Address: 0x1006b238c | FUN_1006b238c */

void FUN_1006b238c(double param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  String SVar7;
  undefined1 auStack_58 [24];
  
  SVar7 = double::get_description(param_1);
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar5 = *unaff_x20;
    _swift_beginAccess(lVar5 + 0x10,auStack_58,0x21,0);
    uVar6 = *(ulong *)(lVar5 + 0x10);
    uVar2 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar5 + 0x10) = uVar6;
    uVar3 = uVar6;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1006a2628(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      *(ulong *)(lVar5 + 0x10) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar6 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1006a2628(uVar6,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
    lVar4 = uVar6 + uVar2 * 0x18;
    *(String *)(lVar4 + 0x20) = SVar7;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(ulong *)(lVar5 + 0x10) = uVar6;
    _swift_endAccess(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2438);
  (*pcVar1)();
}



/* Address: 0x1006b247c | FUN_1006b247c */

void FUN_1006b247c(float param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  String SVar7;
  undefined1 auStack_58 [24];
  
  SVar7 = float::get_description(param_1);
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar5 = *unaff_x20;
    _swift_beginAccess(lVar5 + 0x10,auStack_58,0x21,0);
    uVar6 = *(ulong *)(lVar5 + 0x10);
    uVar2 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar5 + 0x10) = uVar6;
    uVar3 = uVar6;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1006a2628(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
      *(ulong *)(lVar5 + 0x10) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar6 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1006a2628(uVar6,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
    lVar4 = uVar6 + uVar2 * 0x18;
    *(String *)(lVar4 + 0x20) = SVar7;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(ulong *)(lVar5 + 0x10) = uVar6;
    _swift_endAccess(auStack_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2528);
  (*pcVar1)();
}



/* Address: 0x1006b256c | FUN_1006b256c */

void FUN_1006b256c(undefined1 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  String SVar7;
  undefined1 local_58 [24];
  
  local_58[0] = param_1;
  SVar7 = Swift::CustomStringConvertible::get_description();
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar6 = *unaff_x20;
    _swift_beginAccess(lVar6 + 0x10,local_58,0x21,0);
    uVar5 = *(ulong *)(lVar6 + 0x10);
    uVar2 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar6 + 0x10) = uVar5;
    uVar3 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1006a2628(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      *(ulong *)(lVar6 + 0x10) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1006a2628(uVar5,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
    lVar4 = uVar5 + uVar2 * 0x18;
    *(String *)(lVar4 + 0x20) = SVar7;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(ulong *)(lVar6 + 0x10) = uVar5;
    _swift_endAccess(local_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b262c);
  (*pcVar1)();
}



/* Address: 0x1006b2670 | FUN_1006b2670 */

void FUN_1006b2670(undefined2 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  String SVar7;
  undefined2 local_58 [12];
  
  local_58[0] = param_1;
  SVar7 = Swift::CustomStringConvertible::get_description();
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar6 = *unaff_x20;
    _swift_beginAccess(lVar6 + 0x10,local_58,0x21,0);
    uVar5 = *(ulong *)(lVar6 + 0x10);
    uVar2 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar6 + 0x10) = uVar5;
    uVar3 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1006a2628(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      *(ulong *)(lVar6 + 0x10) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1006a2628(uVar5,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
    lVar4 = uVar5 + uVar2 * 0x18;
    *(String *)(lVar4 + 0x20) = SVar7;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(ulong *)(lVar6 + 0x10) = uVar5;
    _swift_endAccess(local_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2730);
  (*pcVar1)();
}



/* Address: 0x1006b2774 | FUN_1006b2774 */

void FUN_1006b2774(undefined4 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  String SVar7;
  undefined4 local_58 [6];
  
  local_58[0] = param_1;
  SVar7 = Swift::CustomStringConvertible::get_description();
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar6 = *unaff_x20;
    _swift_beginAccess(lVar6 + 0x10,local_58,0x21,0);
    uVar5 = *(ulong *)(lVar6 + 0x10);
    uVar2 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar6 + 0x10) = uVar5;
    uVar3 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1006a2628(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      *(ulong *)(lVar6 + 0x10) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1006a2628(uVar5,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
    lVar4 = uVar5 + uVar2 * 0x18;
    *(String *)(lVar4 + 0x20) = SVar7;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(ulong *)(lVar6 + 0x10) = uVar5;
    _swift_endAccess(local_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2834);
  (*pcVar1)();
}



/* Address: 0x1006b2878 | FUN_1006b2878 */

void FUN_1006b2878(undefined8 param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  String SVar7;
  undefined8 local_58 [3];
  
  local_58[0] = param_1;
  SVar7 = Swift::CustomStringConvertible::get_description();
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar6 = *unaff_x20;
    _swift_beginAccess(lVar6 + 0x10,local_58,0x21,0);
    uVar5 = *(ulong *)(lVar6 + 0x10);
    uVar2 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar6 + 0x10) = uVar5;
    uVar3 = uVar5;
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
      FUN_1006a2628(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
      *(ulong *)(lVar6 + 0x10) = uVar3;
    }
    uVar2 = *(ulong *)(uVar3 + 0x10);
    uVar5 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_1006a2628(uVar5,uVar2 + 1,1,uVar3);
    }
    *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
    lVar4 = uVar5 + uVar2 * 0x18;
    *(String *)(lVar4 + 0x20) = SVar7;
    *(undefined1 *)(lVar4 + 0x30) = 0;
    *(ulong *)(lVar6 + 0x10) = uVar5;
    _swift_endAccess(local_58);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2938);
  (*pcVar1)();
}



/* Address: 0x1006b297c | FUN_1006b297c */

void FUN_1006b297c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  String SVar12;
  undefined *local_a0 [3];
  undefined *local_88;
  ulong local_80;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined *)(unaff_x20[2] + 1);
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = (long)puVar1;
    lVar8 = unaff_x20[1];
    local_a0[0] = puVar1;
    SVar12 = Swift::CustomStringConvertible::get_description();
    _swift_beginAccess(lVar8 + 0x10,auStack_78,0x21,0);
    uVar11 = *(ulong *)(lVar8 + 0x10);
    uVar5 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar8 + 0x10) = uVar11;
    if ((uVar5 & 1) == 0) {
      uVar5 = 0;
      FUN_1006a2b94(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      *(ulong *)(lVar8 + 0x10) = uVar5;
      uVar11 = uVar5;
    }
    uVar9 = *(ulong *)(uVar11 + 0x10);
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar9) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_1006a2b94(uVar5,uVar9 + 1,1,uVar11);
      uVar11 = uVar5;
    }
    local_88 = &DAT_100ef6658;
    FUN_1006a6d68();
    puVar3 = &DAT_100ef7018;
    local_80 = uVar5;
    _swift_allocObject(&DAT_100ef7018,0x29,7);
    *(String *)(puVar3 + 0x10) = SVar12;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    puVar3[0x28] = 0;
    *(ulong *)(uVar11 + 0x10) = uVar9 + 1;
    local_a0[0] = puVar3;
    FUN_100076508(local_a0,uVar11 + uVar9 * 0x28 + 0x20);
    *(ulong *)(lVar8 + 0x10) = uVar11;
    _swift_endAccess(auStack_78);
    local_88 = (undefined *)param_2;
    local_80 = param_3;
    FUN_10000cbb0(local_a0);
    (**(code **)(*(long *)(param_2 + -8) + 0x10))();
    uVar6 = (undefined1)param_2;
    ppuVar4 = local_a0;
    FUN_1006b1288();
    if (unaff_x21 == 0) {
      FUN_100004594(local_a0);
      lVar10 = *unaff_x20;
      _swift_beginAccess(lVar10 + 0x10,local_a0,0x21,0);
      uVar9 = *(ulong *)(lVar10 + 0x10);
      uVar5 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(lVar10 + 0x10) = uVar9;
      uVar11 = uVar9;
      if ((uVar5 & 1) == 0) {
        uVar11 = 0;
        FUN_1006a2628(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
        *(ulong *)(lVar10 + 0x10) = uVar11;
      }
      uVar5 = *(ulong *)(uVar11 + 0x10);
      uVar9 = uVar11;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar5) {
        uVar9 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_1006a2628(uVar9,uVar5 + 1,1,uVar11);
      }
      *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
      lVar7 = uVar9 + uVar5 * 0x18;
      *(undefined ***)(lVar7 + 0x20) = ppuVar4;
      *(undefined8 *)(lVar7 + 0x28) = param_1;
      *(undefined1 *)(lVar7 + 0x30) = uVar6;
      *(ulong *)(lVar10 + 0x10) = uVar9;
      _swift_endAccess(local_a0);
    }
    else {
      FUN_100004594(local_a0);
    }
    _swift_beginAccess(lVar8 + 0x10,auStack_78,0x21,0);
    FUN_1006b07a4(local_a0);
    _swift_endAccess(auStack_78);
    FUN_100004594(local_a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006b2b94);
  (*pcVar2)();
}



/* Address: 0x1006b2c1c | FUN_1006b2c1c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006b2df8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006b2c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  String SVar12;
  undefined *local_a0;
  long lStack_98;
  undefined *local_88;
  ulong local_80;
  undefined1 auStack_78 [24];
  
  puVar2 = (undefined *)(unaff_x20[2] + 1);
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = (long)puVar2;
    lVar8 = unaff_x20[1];
    local_a0 = puVar2;
    SVar12 = Swift::CustomStringConvertible::get_description();
    _swift_beginAccess(lVar8 + 0x10,auStack_78,0x21,0);
    uVar10 = *(ulong *)(lVar8 + 0x10);
    uVar6 = uVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar8 + 0x10) = uVar10;
    if ((uVar6 & 1) == 0) {
      uVar6 = 0;
      FUN_1006a2b94(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
      *(ulong *)(lVar8 + 0x10) = uVar6;
      uVar10 = uVar6;
    }
    uVar9 = *(ulong *)(uVar10 + 0x10);
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_1006a2b94(uVar6,uVar9 + 1,1,uVar10);
      uVar10 = uVar6;
    }
    local_88 = &DAT_100ef6658;
    FUN_1006a6d68();
    puVar3 = &DAT_100ef7018;
    local_80 = uVar6;
    _swift_allocObject(&DAT_100ef7018,0x29,7);
    *(String *)(puVar3 + 0x10) = SVar12;
    *(undefined **)(puVar3 + 0x20) = puVar2;
    puVar3[0x28] = 0;
    *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
    local_a0 = puVar3;
    FUN_100076508(&local_a0,uVar10 + uVar9 * 0x28 + 0x20);
    *(ulong *)(lVar8 + 0x10) = uVar10;
    _swift_endAccess(auStack_78);
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1006c25a4();
    puVar3 = (undefined *)0x0;
    FUN_1006b5aec();
    _swift_allocObject();
    *(undefined **)(puVar3 + 0x10) = puVar2;
    lVar11 = *unaff_x20;
    _swift_beginAccess(lVar11 + 0x10,&local_a0,0x21,0);
    uVar9 = *(ulong *)(lVar11 + 0x10);
    _swift_retain(puVar3);
    uVar6 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar11 + 0x10) = uVar9;
    uVar10 = uVar9;
    if ((uVar6 & 1) == 0) {
      uVar10 = 0;
      FUN_1006a2628(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      *(ulong *)(lVar11 + 0x10) = uVar10;
    }
    uVar6 = *(ulong *)(uVar10 + 0x10);
    uVar9 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar6) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_1006a2628(uVar9,uVar6 + 1,1,uVar10);
    }
    *(ulong *)(uVar9 + 0x10) = uVar6 + 1;
    lVar7 = uVar9 + uVar6 * 0x18;
    *(undefined **)(lVar7 + 0x20) = puVar3;
    *(undefined8 *)(lVar7 + 0x28) = 0;
    *(undefined1 *)(lVar7 + 0x30) = 1;
    *(ulong *)(lVar11 + 0x10) = uVar9;
    _swift_endAccess(&local_a0);
    uVar4 = 0;
    local_a0 = puVar3;
    lStack_98 = lVar8;
    FUN_1006b4bdc(0,param_3,param_4);
    _swift_retain(lVar8);
    pTVar5 = &TargetProtocolConformanceDescriptor_100c6fee8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6fee8,uVar4);
    Swift::KeyedEncodingContainer::_init(param_1,pTVar5,param_3,uVar4,pTVar5);
    _swift_beginAccess(lVar8 + 0x10,auStack_78,0x21,0);
    FUN_1006b07a4(&local_a0);
    _swift_endAccess(auStack_78);
    FUN_100004594(&local_a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2e50);
  (*pcVar1)();
}



/* Address: 0x1006b2ed8 | FUN_1006b2ed8 */

void FUN_1006b2ed8(long *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long *unaff_x20;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  if (!SCARRY8(unaff_x20[2],1)) {
    unaff_x20[2] = unaff_x20[2] + 1;
    lVar2 = 0;
    FUN_1006b5b18();
    _swift_allocObject();
    *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar8 = *unaff_x20;
    _swift_beginAccess(lVar8 + 0x10,auStack_68,0x21,0);
    uVar7 = *(ulong *)(lVar8 + 0x10);
    _swift_retain(lVar2);
    uVar3 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar8 + 0x10) = uVar7;
    uVar5 = uVar7;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
      FUN_1006a2628(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      *(ulong *)(lVar8 + 0x10) = uVar5;
    }
    uVar3 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_1006a2628(uVar7,uVar3 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar3 + 1;
    lVar6 = uVar7 + uVar3 * 0x18;
    *(long *)(lVar6 + 0x20) = lVar2;
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined1 *)(lVar6 + 0x30) = 2;
    *(ulong *)(lVar8 + 0x10) = uVar7;
    puVar4 = auStack_68;
    _swift_endAccess();
    lVar8 = unaff_x20[1];
    param_1[3] = (long)&DAT_100ef6fe8;
    FUN_1006b4b9c();
    param_1[4] = (long)puVar4;
    *param_1 = lVar2;
    param_1[1] = lVar8;
    param_1[2] = 0;
    _swift_retain(lVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006b2fdc);
  (*pcVar1)();
}



/* Address: 0x1006b3020 | FUN_1006b3020 */

void FUN_1006b3020(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 8);
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(lVar1 + 0x10));
  return;
}



/* Address: 0x1006b3060 | FUN_1006b3060 */

void FUN_1006b3060(void)

{
  FUN_1006b2188(0,0xe000000000000000);
  return;
}


