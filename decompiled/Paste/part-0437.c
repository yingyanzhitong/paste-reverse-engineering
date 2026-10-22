/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100557f94 | FUN_100557f94 */

String FUN_100557f94(void)

{
  String SVar1;
  
  FUN_10055861c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100557fbc | FUN_100557fbc */

void FUN_100557fbc(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fcf7c8;
  FUN_1000f7830(&DAT_100fcf7c8,&DAT_100c58168);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10055861c();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100558084 | FUN_100558084 */

undefined8 FUN_100558084(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
    return 0;
  }
  _Var3.unknown = (undefined *)param_1[3];
  puVar4 = (undefined *)param_2[3];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar4 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)param_1[2] != (undefined *)param_2[2] || _Var3.unknown != puVar4) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar1)) {
      return 0;
    }
  }
  uVar6 = param_1[4];
  lVar5 = param_2[4];
  if (uVar6 == 0) {
    if (lVar5 == 0) {
      return 1;
    }
  }
  else if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar5);
    uVar2 = uVar6;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(lVar5);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100558158 | FUN_100558158 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100558194 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100558158(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1005581bc | FUN_1005581bc */

/* WARNING: Removing unreachable block (ram,0x0001005582f0) */
/* WARNING: Removing unreachable block (ram,0x00010055835c) */
/* WARNING: Removing unreachable block (ram,0x000100558370) */
/* WARNING: Removing unreachable block (ram,0x000100558288) */

void FUN_1005581bc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  String SVar5;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  char *local_70;
  undefined8 local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcfa28;
  FUN_1000f7830(&DAT_100fcfa28,&DAT_100c58798);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10055839c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar5 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    local_70 = SVar5.str;
    local_52 = 1;
    puVar2 = &local_52;
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_53 = 2;
    local_78 = puVar2;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_68,&DAT_100edcda0,&local_53,puVar1,&DAT_100edcda0,puVar2);
    (**(code **)(lVar4 + 8))(auStack_80 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = local_70;
    param_1[1] = SVar5.bridgeObject;
    param_1[2] = local_78;
    param_1[3] = puVar3;
    param_1[4] = local_68;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10055839c | FUN_10055839c */

void FUN_10055839c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf798 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58728;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58728,&DAT_100edf108);
  DAT_100fcf798 = pTVar1;
  return;
}



/* Address: 0x1005583dc | FUN_1005583dc */

void FUN_1005583dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c586d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c586d8,&DAT_100edf078);
  DAT_100fcf7a8 = pTVar1;
  return;
}



/* Address: 0x10055841c | FUN_10055841c */

void FUN_10055841c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c581d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c581d8,&DAT_100edeef8);
  DAT_100fcf7c0 = pTVar1;
  return;
}



/* Address: 0x10055842c | FUN_10055842c */

void FUN_10055842c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c581d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c581d8,&DAT_100edeef8);
  DAT_100fcf7c0 = pTVar1;
  return;
}



/* Address: 0x10055845c | FUN_10055845c */

/* WARNING: Removing unreachable block (ram,0x0001005585f8) */
/* WARNING: Removing unreachable block (ram,0x000100558568) */

undefined1  [16] FUN_10055845c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_60 [7];
  undefined1 local_59;
  long local_58;
  
  puVar1 = &DAT_100fcfa10;
  FUN_1000f7830(&DAT_100fcfa10,&DAT_100c58790);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar2 = param_1;
  FUN_100004640(param_1,lVar5);
  FUN_1005583dc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100fcf7b0;
    FUN_1000f7830(&DAT_100fcf7b0,&DAT_100c58160);
    local_59 = 0;
    puVar4 = &DAT_100fcfa18;
    FUN_100558f64(&DAT_100fcfa18,FUN_100558fd4,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3,&local_59,puVar1,puVar3,puVar4);
    lVar5 = local_58;
    local_59 = 1;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_59,puVar1,&DAT_100edcda0,puVar3);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_58 = lVar2;
  }
  auVar7._8_8_ = local_58;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Address: 0x10055861c | FUN_10055861c */

void FUN_10055861c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58688;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58688,&DAT_100edefe8);
  DAT_100fcf7d0 = pTVar1;
  return;
}



/* Address: 0x10055865c | thunk_FUN_100558660 */

void thunk_FUN_100558660(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58200;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58200,&DAT_100edeef8);
  DAT_100fcf7d8 = pTVar1;
  return;
}



/* Address: 0x100558660 | FUN_100558660 */

void FUN_100558660(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58200;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58200,&DAT_100edeef8);
  DAT_100fcf7d8 = pTVar1;
  return;
}



/* Address: 0x1005586a0 | thunk_FUN_1005586a4 */

void thunk_FUN_1005586a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c582b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c582b8,&DAT_100edefa0);
  DAT_100fcf7e0 = pTVar1;
  return;
}



/* Address: 0x1005586a4 | FUN_1005586a4 */

void FUN_1005586a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c582b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c582b8,&DAT_100edefa0);
  DAT_100fcf7e0 = pTVar1;
  return;
}



/* Address: 0x1005586e4 | thunk_FUN_1005586e8 */

void thunk_FUN_1005586e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58268;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58268,&DAT_100edefa0);
  DAT_100fcf7e8 = pTVar1;
  return;
}



/* Address: 0x1005586e8 | FUN_1005586e8 */

void FUN_1005586e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58268;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58268,&DAT_100edefa0);
  DAT_100fcf7e8 = pTVar1;
  return;
}



/* Address: 0x100558728 | thunk_FUN_10055872c */

void thunk_FUN_10055872c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58290;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58290,&DAT_100edefa0);
  DAT_100fcf7f0 = pTVar1;
  return;
}



/* Address: 0x10055872c | FUN_10055872c */

void FUN_10055872c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58290;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58290,&DAT_100edefa0);
  DAT_100fcf7f0 = pTVar1;
  return;
}



/* Address: 0x10055876c | thunk_FUN_100558770 */

void thunk_FUN_100558770(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58228;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58228,&DAT_100edefa0);
  DAT_100fcf7f8 = pTVar1;
  return;
}



/* Address: 0x100558770 | FUN_100558770 */

void FUN_100558770(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf7f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58228;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58228,&DAT_100edefa0);
  DAT_100fcf7f8 = pTVar1;
  return;
}



/* Address: 0x1005587b0 | FUN_1005587b0 */

void FUN_1005587b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1005587e4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_100558824();
  *(long *)(param_1 + 0x10) = lVar1;
  FUN_100558864();
  *(long *)(param_1 + 0x18) = lVar1;
  return;
}



/* Address: 0x1005587e4 | FUN_1005587e4 */

void FUN_1005587e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf898 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58358;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58358,&DAT_100edefc8);
  DAT_100fcf898 = pTVar1;
  return;
}



/* Address: 0x100558824 | FUN_100558824 */

void FUN_100558824(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58380;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58380,&DAT_100edefc8);
  DAT_100fcf8a0 = pTVar1;
  return;
}



/* Address: 0x100558864 | FUN_100558864 */

void FUN_100558864(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58318;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58318,&DAT_100edefc8);
  DAT_100fcf8a8 = pTVar1;
  return;
}



/* Address: 0x1005588a4 | thunk_FUN_1005588a8 */

void thunk_FUN_1005588a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c583a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c583a8,&DAT_100edefc8);
  DAT_100fcf8b0 = pTVar1;
  return;
}



/* Address: 0x1005588a8 | FUN_1005588a8 */

void FUN_1005588a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c583a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c583a8,&DAT_100edefc8);
  DAT_100fcf8b0 = pTVar1;
  return;
}



/* Address: 0x1005588e8 | FUN_1005588e8 */

undefined8 * FUN_1005588e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100558948 | FUN_100558948 */

undefined8 * FUN_100558948(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1005589cc | FUN_1005589cc */

undefined8 * FUN_1005589cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100558a20 | FUN_100558a20 */

undefined1  [16] FUN_100558a20(void)

{
  return ZEXT816(0x100edeef8);
}



/* Address: 0x100558a30 | FUN_100558a30 */

undefined1  [16] FUN_100558a30(void)

{
  return ZEXT816(0x100edef28);
}



/* Address: 0x100558a40 | FUN_100558a40 */

undefined8 * FUN_100558a40(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Address: 0x100558a9c | FUN_100558a9c */

undefined1  [16] FUN_100558a9c(void)

{
  return ZEXT816(0x100edefa0);
}



/* Address: 0x100558aac | FUN_100558aac */

undefined1  [16] FUN_100558aac(void)

{
  return ZEXT816(0x100edefc8);
}



/* Address: 0x100558abc | FUN_100558abc */

undefined1  [16] FUN_100558abc(void)

{
  return ZEXT816(0x100edefe8);
}



/* Address: 0x100558acc | FUN_100558acc */

undefined1  [16] FUN_100558acc(void)

{
  return ZEXT816(0x100edf078);
}



/* Address: 0x100558adc | FUN_100558adc */

undefined1  [16] FUN_100558adc(void)

{
  return ZEXT816(0x100edf108);
}



/* Address: 0x100558aec | thunk_FUN_100558af0 */

void thunk_FUN_100558af0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c584e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c584e0,&DAT_100edf108);
  DAT_100fcf8b8 = pTVar1;
  return;
}



/* Address: 0x100558af0 | FUN_100558af0 */

void FUN_100558af0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c584e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c584e0,&DAT_100edf108);
  DAT_100fcf8b8 = pTVar1;
  return;
}



/* Address: 0x100558b30 | thunk_FUN_100558b34 */

void thunk_FUN_100558b34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fcf8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcf8c8;
  FUN_1000f8b08(&DAT_100fcf8c8,&DAT_100c58558);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fcf8c0 = puVar2;
  return;
}



/* Address: 0x100558b34 | FUN_100558b34 */

void FUN_100558b34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fcf8c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcf8c8;
  FUN_1000f8b08(&DAT_100fcf8c8,&DAT_100c58558);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fcf8c0 = puVar2;
  return;
}



/* Address: 0x100558b84 | thunk_FUN_100558b88 */

void thunk_FUN_100558b88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58610;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58610,&DAT_100edf078);
  DAT_100fcf8d0 = pTVar1;
  return;
}



/* Address: 0x100558b88 | FUN_100558b88 */

void FUN_100558b88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58610;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58610,&DAT_100edf078);
  DAT_100fcf8d0 = pTVar1;
  return;
}



/* Address: 0x100558bc8 | thunk_FUN_100558bcc */

void thunk_FUN_100558bcc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58660;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58660,&DAT_100edefe8);
  DAT_100fcf8d8 = pTVar1;
  return;
}



/* Address: 0x100558bcc | FUN_100558bcc */

void FUN_100558bcc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58660;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58660,&DAT_100edefe8);
  DAT_100fcf8d8 = pTVar1;
  return;
}



/* Address: 0x100558c0c | thunk_FUN_100558c10 */

void thunk_FUN_100558c10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58638;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58638,&DAT_100edefe8);
  DAT_100fcf8e0 = pTVar1;
  return;
}



/* Address: 0x100558c10 | FUN_100558c10 */

void FUN_100558c10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58638;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58638,&DAT_100edefe8);
  DAT_100fcf8e0 = pTVar1;
  return;
}



/* Address: 0x100558c50 | thunk_FUN_100558c54 */

void thunk_FUN_100558c54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58530;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58530,&DAT_100edf078);
  DAT_100fcf8e8 = pTVar1;
  return;
}



/* Address: 0x100558c54 | FUN_100558c54 */

void FUN_100558c54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58530;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58530,&DAT_100edf078);
  DAT_100fcf8e8 = pTVar1;
  return;
}



/* Address: 0x100558c94 | thunk_FUN_100558c98 */

void thunk_FUN_100558c98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58508;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58508,&DAT_100edf078);
  DAT_100fcf8f0 = pTVar1;
  return;
}



/* Address: 0x100558c98 | FUN_100558c98 */

void FUN_100558c98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58508;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58508,&DAT_100edf078);
  DAT_100fcf8f0 = pTVar1;
  return;
}



/* Address: 0x100558cd8 | thunk_FUN_100558cdc */

void thunk_FUN_100558cdc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58440;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58440,&DAT_100edf108);
  DAT_100fcf8f8 = pTVar1;
  return;
}



/* Address: 0x100558cdc | FUN_100558cdc */

void FUN_100558cdc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf8f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58440;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58440,&DAT_100edf108);
  DAT_100fcf8f8 = pTVar1;
  return;
}



/* Address: 0x100558d1c | thunk_FUN_100558d20 */

void thunk_FUN_100558d20(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58418;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58418,&DAT_100edf108);
  DAT_100fcf900 = pTVar1;
  return;
}



/* Address: 0x100558d20 | FUN_100558d20 */

void FUN_100558d20(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcf900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c58418;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c58418,&DAT_100edf108);
  DAT_100fcf900 = pTVar1;
  return;
}



/* Address: 0x100558d60 | FUN_100558d60 */

undefined8 FUN_100558d60(undefined8 param_1,undefined8 param_2)

{
  FUN_1005a9000(param_2,param_1);
  return param_2;
}



/* Address: 0x100558d9c | FUN_100558d9c */

undefined8 FUN_100558d9c(undefined8 param_1)

{
  FUN_1005a8f80();
  return param_1;
}



/* Address: 0x100558dd0 | FUN_100558dd0 */

undefined8 FUN_100558dd0(undefined8 param_1,undefined8 param_2)

{
  FUN_1005832ac(param_2,param_1);
  return param_2;
}



/* Address: 0x100558e0c | FUN_100558e0c */

undefined8 FUN_100558e0c(undefined8 param_1)

{
  FUN_10058326c();
  return param_1;
}



/* Address: 0x100558e40 | FUN_100558e40 */

undefined8 FUN_100558e40(undefined8 param_1,undefined8 param_2)

{
  FUN_1005652e0(param_2,param_1);
  return param_2;
}



/* Address: 0x100558e7c | FUN_100558e7c */

undefined8 FUN_100558e7c(undefined8 param_1)

{
  FUN_1005652a8();
  return param_1;
}



/* Address: 0x100558eb0 | FUN_100558eb0 */

undefined8 FUN_100558eb0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcfa08;
  FUN_1000f7830(&DAT_100fcfa08,&DAT_100c5a300);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100558ef8 | FUN_100558ef8 */

undefined8 FUN_100558ef8(undefined8 param_1,undefined8 param_2)

{
  FUN_100566084(param_2,param_1);
  return param_2;
}


