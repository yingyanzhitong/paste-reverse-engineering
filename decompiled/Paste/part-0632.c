/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006bd0d4 | FUN_1006bd0d4 */

void FUN_1006bd0d4(undefined8 *param_1)

{
  _swift_errorRelease(*param_1);
  _swift_release(param_1[1]);
  return;
}



/* Address: 0x1006bd0fc | FUN_1006bd0fc */

undefined8 * FUN_1006bd0fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  _swift_errorRetain(uVar2);
  uVar1 = param_2[1];
  *param_1 = uVar2;
  param_1[1] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x1006bd140 | FUN_1006bd140 */

undefined8 * FUN_1006bd140(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  _swift_errorRetain(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  _swift_errorRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1006bd19c | FUN_1006bd19c */

undefined8 * FUN_1006bd19c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_errorRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1006bd1d8 | FUN_1006bd1d8 */

undefined1  [16] FUN_1006bd1d8(void)

{
  return ZEXT816(0x100ef79c8);
}



/* Address: 0x1006bd1e8 | FUN_1006bd1e8 */

void FUN_1006bd1e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  String SVar8;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined1 auStack_118 [24];
  undefined8 local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 local_a8 [72];
  
  local_160 = param_4;
  _swift_errorRetain(param_4);
  puVar2 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar3 = &DAT_100fdc4c8;
  FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
  puVar4 = &local_f0;
  _swift_dynamicCast(puVar4,&local_160,puVar2,puVar3,0xe);
  if ((int)puVar4 == 0) {
    uVar7 = 0x2d746e65746e6f43;
    local_d0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    FUN_1006bd670(&local_f0);
    local_d8 = param_5;
    _swift_retain_n(param_5,2);
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,
                  param_5);
    if ((uVar7 & 1) == 0) {
      local_160 = 0;
      SVar8 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar8.str,SVar8.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_release(param_5);
      param_5 = local_d8;
    }
    else {
      _swift_release(param_5);
    }
    local_e0 = 0x8000000100da87f0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_b0 = 2;
    uStack_e8 = 0xd000000000000015;
    local_f0 = 500;
    uStack_c0 = 0;
    uStack_b8 = 0;
  }
  else {
    FUN_100076508(&local_f0,auStack_118);
    FUN_100004640(auStack_118,local_100);
    (**(code **)(*(long *)(lStack_f8 + 8) + 8))(&local_f0,param_2,param_3,param_6,param_7,local_100)
    ;
    if (unaff_x21 != 0) {
      FUN_100004594(auStack_118);
      return;
    }
    uStack_138 = uStack_c8;
    local_140 = local_d0;
    uStack_128 = uStack_b8;
    uStack_130 = uStack_c0;
    local_120 = local_b0;
    uStack_158 = uStack_e8;
    local_160 = local_f0;
    local_148 = local_d8;
    uStack_150 = local_e0;
    lVar6 = param_5;
    _swift_retain();
    FUN_10085d8f8();
    if (lVar6 != 0) {
      lVar6 = 0;
      do {
        FUN_10085d980(local_a8,lVar6,param_5);
        lVar5 = param_5;
        FUN_10085d8f8();
        if (lVar5 <= lVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006bd4b8);
          (*pcVar1)();
        }
        lVar6 = lVar6 + 1;
        FUN_1006bd6b8();
        Swift::RangeReplaceableCollection::_append();
        lVar5 = param_5;
        FUN_10085d8f8();
      } while (lVar6 != lVar5);
    }
    _swift_release(param_5);
    param_5 = local_148;
    FUN_100004594(auStack_118);
  }
  *param_1 = local_f0;
  param_1[1] = uStack_e8;
  param_1[2] = local_e0;
  param_1[3] = param_5;
  param_1[5] = uStack_c8;
  param_1[4] = local_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  *(undefined1 *)(param_1 + 8) = local_b0;
  return;
}



/* Address: 0x1006bd4b8 | FUN_1006bd4b8 */

void FUN_1006bd4b8(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006bd580(*unaff_x20);
  return;
}



/* Address: 0x1006bd4c0 | FUN_1006bd4c0 */

void FUN_1006bd4c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006bd1e8(&local_68,param_2,param_3,*unaff_x20,unaff_x20[1],param_4,param_5);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006bd51c | FUN_1006bd51c */

void FUN_1006bd51c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1006bd540();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1006bd540 | FUN_1006bd540 */

void FUN_1006bd540(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc4c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70788;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70788,&DAT_100ef79c8);
  DAT_100fdc4c0 = pTVar1;
  return;
}



/* Address: 0x1006bd580 | FUN_1006bd580 */

undefined8 FUN_1006bd580(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_68 = param_1;
  _swift_errorRetain();
  puVar1 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar2 = &DAT_100fdc4c8;
  FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
  puVar3 = &local_60;
  _swift_dynamicCast(puVar3,&local_68,puVar1,puVar2,0xe);
  if ((int)puVar3 == 0) {
    local_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
    FUN_1006bd670(&local_60);
    local_48 = 500;
  }
  else {
    FUN_100004640(&local_60,local_48);
    (**(code **)(local_40 + 0x18))(local_48,local_40);
    FUN_100004594(&local_60);
  }
  return local_48;
}



/* Address: 0x1006bd670 | FUN_1006bd670 */

undefined8 FUN_1006bd670(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdc4d0;
  FUN_1000f7830(&DAT_100fdc4d0,&DAT_100c724e0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1006bd6b8 | FUN_1006bd6b8 */

void FUN_1006bd6b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc4d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ddc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ddc0,&DAT_100f072e0);
  DAT_100fdc4d8 = pTVar1;
  return;
}



/* Address: 0x1006bd6f8 | thunk_FUN_1006bd0fc */

void thunk_FUN_1006bd0fc(void)

{
  thunk_FUN_1006bd0fc();
  return;
}



/* Address: 0x1006bd6fc | FUN_1006bd6fc */

undefined8 FUN_1006bd6fc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(unaff_x20[2]);
  return uVar1;
}



/* Address: 0x1006bd738 | FUN_1006bd738 */

void FUN_1006bd738(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[2]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  return;
}



/* Address: 0x1006bd774 | FUN_1006bd774 */

void FUN_1006bd774(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006bd77c | FUN_1006bd77c */

void FUN_1006bd77c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Address: 0x1006bd7a4 | FUN_1006bd7a4 */

void FUN_1006bd7a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10085d78c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = puVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



/* Address: 0x1006bd7ec | FUN_1006bd7ec */

void FUN_1006bd7ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10085d78c();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = puVar1;
  param_1[4] = param_5;
  param_1[5] = param_6;
  return;
}



/* Address: 0x1006bd844 | FUN_1006bd844 */

void FUN_1006bd844(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_100fdc4f0;
  FUN_1000f7830(&DAT_100fdc4f0,&DAT_100c708b0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1006be284();
  Swift::Encoder::_container();
  local_70 = param_2;
  uStack_68 = param_3;
  FUN_1006be2c4();
  Swift::KeyedEncodingContainer::_encode(&local_70);
  (**(code **)(lVar2 + 8))((long)&local_70 - extraout_x8,puVar1);
  return;
}



/* Address: 0x1006bd94c | FUN_1006bd94c */

undefined1  [16] FUN_1006bd94c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x6567617373656d;
  return auVar1;
}



/* Address: 0x1006bd964 | FUN_1006bd964 */

void FUN_1006bd964(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x6567617373656d && param_3 == &DAT_e700000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6567617373656d,(_StringGuts)0xe700000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x1006bd9e8 | FUN_1006bd9e8 */

String FUN_1006bd9e8(void)

{
  String SVar1;
  
  FUN_1006be3f4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1006bda10 | FUN_1006bda10 */

String FUN_1006bda10(void)

{
  String SVar1;
  
  FUN_1006be3f4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1006bda38 | FUN_1006bda38 */

void FUN_1006bda38(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fdc520;
  FUN_1000f7830(&DAT_100fdc520,&DAT_100c70a00);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1006be3f4();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x1006bdb28 | FUN_1006bdb28 */

String FUN_1006bdb28(void)

{
  String SVar1;
  
  FUN_1006be284();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1006bdb50 | FUN_1006bdb50 */

String FUN_1006bdb50(void)

{
  String SVar1;
  
  FUN_1006be284();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1006bdb78 | FUN_1006bdb78 */

void FUN_1006bdb78(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006bd844(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x1006bdb90 | FUN_1006bdb90 */

void FUN_1006bdb90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  String SVar11;
  long alStack_280 [2];
  long local_270;
  undefined1 auStack_248 [72];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined8 local_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,0x100cbca10,&TargetProtocolRequirement_100cbca48);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_270 + -extraout_x8;
  lVar5 = unaff_x20[5];
  if (lVar5 == 0) {
    uVar7 = 0x2d746e65746e6f43;
    uVar10 = unaff_x20[1];
    uVar4 = *unaff_x20;
    uVar8 = unaff_x20[2];
    uVar1 = unaff_x20[3];
    local_f8 = uVar1;
    _swift_bridgeObjectRetain(uVar8);
    _swift_retain(uVar1);
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar1)
    ;
    uStack_1e8 = uVar1;
    if ((uVar7 & 1) == 0) {
      local_160 = 0;
      SVar11 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar11.str,SVar11.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      uStack_1e8 = local_f8;
    }
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1c0 = 2;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
  }
  else {
    uVar8 = unaff_x20[4];
    local_270 = extraout_x12;
    (**(code **)(param_5 + 0x68))(lVar6,param_4,param_5);
    lVar3 = param_5;
    local_1b0 = uVar8;
    lStack_1a8 = lVar5;
    _swift_getAssociatedConformanceWitness
              (param_5,param_4,lVar2,0x100cbca10,&TargetProtocolRequirement_100cbca30);
    pcVar9 = *(code **)(lVar3 + 8);
    lVar5 = lVar3;
    FUN_1006bded0();
    *(long *)((long)alStack_280 + -extraout_x8) = lVar3;
    (*pcVar9)(&local_110,&local_1b0,param_2,param_3,&DAT_100ef7b68,param_4,lVar5,param_5,lVar2);
    (**(code **)(local_270 + 8))(lVar6,lVar2);
    if (unaff_x21 != 0) {
      return;
    }
    uStack_138 = uStack_e8;
    local_140 = local_f0;
    uStack_128 = uStack_d8;
    uStack_130 = uStack_e0;
    uStack_88 = uStack_108;
    local_90 = local_110;
    local_80 = local_100;
    local_120 = local_d0;
    uStack_158 = uStack_108;
    local_160 = local_110;
    uStack_148 = local_f8;
    local_150 = local_100;
    uVar8 = *unaff_x20;
    uVar1 = unaff_x20[1];
    uVar4 = unaff_x20[2];
    _swift_bridgeObjectRetain(uVar4);
    FUN_1006bdf10(&local_90);
    lVar6 = unaff_x20[3];
    lVar2 = lVar6;
    local_160 = uVar8;
    uStack_158 = uVar1;
    local_150 = uVar4;
    _swift_retain();
    FUN_10085d8f8();
    if (lVar2 != 0) {
      lVar2 = 0;
      do {
        FUN_10085d980(&local_c8,lVar2,lVar6);
        lVar5 = lVar6;
        FUN_10085d8f8();
        if (lVar5 <= lVar2) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006bded0);
          (*pcVar9)();
        }
        lVar2 = lVar2 + 1;
        lStack_1a8 = lStack_c0;
        local_1b0 = local_c8;
        uStack_198 = uStack_b0;
        uStack_1a0 = local_b8;
        uStack_188 = uStack_a0;
        local_190 = local_a8;
        local_180 = local_98;
        FUN_1006bd6b8();
        Swift::RangeReplaceableCollection::_append();
        lVar5 = lVar6;
        FUN_10085d8f8();
      } while (lVar2 != lVar5);
    }
    _swift_release(lVar6);
    uStack_1d8 = uStack_138;
    local_1e0 = local_140;
    uStack_1c8 = uStack_128;
    uStack_1d0 = uStack_130;
    local_1c0 = local_120;
    uStack_1f8 = uStack_158;
    local_200 = local_160;
    uStack_1e8 = uStack_148;
    local_1f0 = local_150;
    uStack_188 = uStack_138;
    local_190 = local_140;
    uStack_178 = uStack_128;
    local_180 = uStack_130;
    local_170 = local_120;
    lStack_1a8 = uStack_158;
    local_1b0 = local_160;
    uStack_198 = uStack_148;
    uStack_1a0 = local_150;
    FUN_1006be04c(&local_200,auStack_248);
    FUN_1006a4e98(&local_1b0);
    uVar8 = local_1f0;
    uVar4 = local_200;
    uVar10 = uStack_1f8;
  }
  param_1[1] = uVar10;
  *param_1 = uVar4;
  param_1[2] = uVar8;
  param_1[3] = uStack_1e8;
  param_1[5] = uStack_1d8;
  param_1[4] = local_1e0;
  param_1[7] = uStack_1c8;
  param_1[6] = uStack_1d0;
  *(undefined1 *)(param_1 + 8) = local_1c0;
  return;
}



/* Address: 0x1006bded0 | FUN_1006bded0 */

void FUN_1006bded0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc4e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70884;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70884,&DAT_100ef7b68);
  DAT_100fdc4e0 = pTVar1;
  return;
}



/* Address: 0x1006bdf10 | FUN_1006bdf10 */

undefined8 FUN_1006bdf10(undefined8 param_1)

{
  FUN_1000df600();
  return param_1;
}



/* Address: 0x1006bdf44 | FUN_1006bdf44 */

void FUN_1006bdf44(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006bdb90(&local_68);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006bdf94 | FUN_1006bdf94 */

void FUN_1006bdf94(void)

{
  long unaff_x20;
  
  FUN_1006bdfac(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1006bdfa0 | FUN_1006bdfa0 */

void FUN_1006bdfa0(void)

{
  long unaff_x20;
  
  FUN_1006bdfac(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1006bdfac | FUN_1006bdfac */

undefined1  [16] FUN_1006bdfac(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  void *pvVar4;
  
  SVar6.bridgeObject = param_2;
  SVar6.str = param_1;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  pcVar3 = param_3;
  pvVar4 = param_4;
  Swift::String::append(SVar6,SVar9);
  if (param_4 == (void *)0x0) {
    pcVar2 = (char *)0x0;
    puVar5 = (undefined1 *)0xe000000000000000;
  }
  else {
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    SVar10.bridgeObject = pvVar4;
    SVar10.str = pcVar3;
    Swift::String::append(SVar7,SVar10);
    pcVar2 = (char *)0x202c;
    puVar5 = &SUB_e200000000000000;
  }
  SVar8.bridgeObject = puVar5;
  SVar8.str = pcVar2;
  SVar11.bridgeObject = pvVar4;
  SVar11.str = pcVar3;
  Swift::String::append(SVar8,SVar11);
  _swift_bridgeObjectRelease(puVar5);
  auVar1._8_8_ = 0xeb00000000203a72;
  auVar1._0_8_ = 0x6f72724550545448;
  return auVar1;
}



/* Address: 0x1006be04c | FUN_1006be04c */

undefined8 FUN_1006be04c(undefined8 param_1,undefined8 param_2)

{
  FUN_100a0042c(param_2,param_1);
  return param_2;
}



/* Address: 0x1006be088 | FUN_1006be088 */

void FUN_1006be088(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1006be0ac();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1006be0ac | FUN_1006be0ac */

void FUN_1006be0ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc4e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c707c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c707c8,&DAT_100ef7ae0);
  DAT_100fdc4e8 = pTVar1;
  return;
}



/* Address: 0x1006be0ec | FUN_1006be0ec */

void FUN_1006be0ec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1006be11c | FUN_1006be11c */

undefined8 * FUN_1006be11c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar1;
  param_1[2] = uVar3;
  uVar2 = param_2[3];
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRetain(uVar3);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1006be170 | FUN_1006be170 */

undefined8 * FUN_1006be170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006be1fc | FUN_1006be1fc */

void FUN_1006be1fc(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1006be210 | FUN_1006be210 */

undefined8 * FUN_1006be210(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1006be264 | FUN_1006be264 */

undefined1  [16] FUN_1006be264(void)

{
  return ZEXT816(0x100ef7ae0);
}



/* Address: 0x1006be274 | FUN_1006be274 */

undefined1  [16] FUN_1006be274(void)

{
  return ZEXT816(0x100ef7b68);
}



/* Address: 0x1006be284 | FUN_1006be284 */

void FUN_1006be284(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc4f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c709b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c709b0,&DAT_100ef7c00);
  DAT_100fdc4f8 = pTVar1;
  return;
}



/* Address: 0x1006be2c4 | FUN_1006be2c4 */

void FUN_1006be2c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70988;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70988,&DAT_100ef7c78);
  DAT_100fdc500 = pTVar1;
  return;
}



/* Address: 0x1006be304 | FUN_1006be304 */

void FUN_1006be304(void)

{
  return;
}



/* Address: 0x1006be308 | FUN_1006be308 */

undefined1  [16] FUN_1006be308(void)

{
  return ZEXT816(0x100ef7c00);
}



/* Address: 0x1006be318 | FUN_1006be318 */

undefined1  [16] FUN_1006be318(void)

{
  return ZEXT816(0x100ef7c78);
}



/* Address: 0x1006be328 | thunk_FUN_1006be32c */

void thunk_FUN_1006be32c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc508 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70960;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70960,&DAT_100ef7c00);
  DAT_100fdc508 = pTVar1;
  return;
}



/* Address: 0x1006be32c | FUN_1006be32c */

void FUN_1006be32c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc508 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70960;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70960,&DAT_100ef7c00);
  DAT_100fdc508 = pTVar1;
  return;
}



/* Address: 0x1006be36c | thunk_FUN_1006be370 */

void thunk_FUN_1006be370(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c708f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c708f8,&DAT_100ef7c00);
  DAT_100fdc510 = pTVar1;
  return;
}



/* Address: 0x1006be370 | FUN_1006be370 */

void FUN_1006be370(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c708f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c708f8,&DAT_100ef7c00);
  DAT_100fdc510 = pTVar1;
  return;
}



/* Address: 0x1006be3b0 | thunk_FUN_1006be3b4 */

void thunk_FUN_1006be3b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc518 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c708d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c708d0,&DAT_100ef7c00);
  DAT_100fdc518 = pTVar1;
  return;
}



/* Address: 0x1006be3b4 | FUN_1006be3b4 */

void FUN_1006be3b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc518 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c708d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c708d0,&DAT_100ef7c00);
  DAT_100fdc518 = pTVar1;
  return;
}



/* Address: 0x1006be3f4 | FUN_1006be3f4 */

void FUN_1006be3f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70ac0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70ac0,&DAT_100ef7d10);
  DAT_100fdc528 = pTVar1;
  return;
}



/* Address: 0x1006be434 | FUN_1006be434 */

undefined1  [16] FUN_1006be434(void)

{
  return ZEXT816(0x100ef7d10);
}



/* Address: 0x1006be444 | thunk_FUN_1006be448 */

void thunk_FUN_1006be448(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70a98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70a98,&DAT_100ef7d10);
  DAT_100fdc530 = pTVar1;
  return;
}



/* Address: 0x1006be448 | FUN_1006be448 */

void FUN_1006be448(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70a98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70a98,&DAT_100ef7d10);
  DAT_100fdc530 = pTVar1;
  return;
}



/* Address: 0x1006be488 | thunk_FUN_1006be48c */

void thunk_FUN_1006be48c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70a30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70a30,&DAT_100ef7d10);
  DAT_100fdc538 = pTVar1;
  return;
}



/* Address: 0x1006be48c | FUN_1006be48c */

void FUN_1006be48c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70a30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70a30,&DAT_100ef7d10);
  DAT_100fdc538 = pTVar1;
  return;
}



/* Address: 0x1006be4cc | thunk_FUN_1006be4d0 */

void thunk_FUN_1006be4d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70a08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70a08,&DAT_100ef7d10);
  DAT_100fdc540 = pTVar1;
  return;
}


