/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100523218 | thunk_FUN_10052321c */

void thunk_FUN_10052321c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54cb4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54cb4,&DAT_100edcb58);
  DAT_100fce550 = pTVar1;
  return;
}



/* Address: 0x10052321c | FUN_10052321c */

void FUN_10052321c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54cb4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54cb4,&DAT_100edcb58);
  DAT_100fce550 = pTVar1;
  return;
}



/* Address: 0x10052325c | thunk_FUN_100523260 */

void thunk_FUN_100523260(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce558 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54c8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54c8c,&DAT_100edcb58);
  DAT_100fce558 = pTVar1;
  return;
}



/* Address: 0x100523260 | FUN_100523260 */

void FUN_100523260(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce558 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54c8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54c8c,&DAT_100edcb58);
  DAT_100fce558 = pTVar1;
  return;
}



/* Address: 0x1005232a0 | FUN_1005232a0 */

void FUN_1005232a0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_1004dc818();
    return;
  }
  return;
}



/* Address: 0x1005232b4 | FUN_1005232b4 */

undefined * FUN_1005232b4(void)

{
  return &DAT_100c54e40;
}



/* Address: 0x1005232c0 | FUN_1005232c0 */

undefined1  [16] FUN_1005232c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x676e6970;
  return auVar1;
}



/* Address: 0x1005232d0 | FUN_1005232d0 */

undefined1  [16] FUN_1005232d0(void)

{
  return ZEXT816(0x100edcc30);
}



/* Address: 0x1005232e0 | thunk_FUN_1004e093c */

void thunk_FUN_1004e093c(void)

{
  thunk_FUN_1004e093c();
  return;
}



/* Address: 0x1005232e4 | thunk_FUN_1004e0980 */

void thunk_FUN_1004e0980(void)

{
  thunk_FUN_1004e0980();
  return;
}



/* Address: 0x1005232e8 | thunk_FUN_1004e09c4 */

void thunk_FUN_1004e09c4(void)

{
  thunk_FUN_1004e09c4();
  return;
}



/* Address: 0x1005232ec | FUN_1005232ec */

undefined * FUN_1005232ec(void)

{
  return &DAT_100edcc48;
}



/* Address: 0x1005232f8 | FUN_1005232f8 */

undefined1  [16] FUN_1005232f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad130;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Address: 0x100523314 | FUN_100523314 */

undefined8 FUN_100523314(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x18);
}



/* Address: 0x10052331c | FUN_10052331c */

undefined1  [16] FUN_10052331c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x20);
  return auVar1;
}



/* Address: 0x100523328 | FUN_100523328 */

void FUN_100523328(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined1 *)(param_1 + 2) = param_5;
  param_1[3] = param_2;
  param_1[4] = param_6;
  *(undefined1 *)(param_1 + 5) = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  return;
}



/* Address: 0x100523344 | FUN_100523344 */

undefined1  [16] FUN_100523344(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar3 = *unaff_x20;
  puVar4 = (undefined1 *)0xed00006e656b6f54;
  uVar1 = 0x6c61746f74;
  if (bVar3 != 2) {
    uVar1 = 0x6567617373656d;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3 != 2) {
    puVar2 = &DAT_e700000000000000;
  }
  if (bVar3 != 0) {
    puVar4 = &DAT_e800000000000000;
  }
  if (bVar3 < 2) {
    puVar2 = puVar4;
    uVar1 = 0x73736572676f7270;
  }
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Address: 0x1005233b4 | FUN_1005233b4 */

void FUN_1005233b4(undefined1 *param_1,undefined1 param_2)

{
  FUN_100524964();
  *param_1 = param_2;
  return;
}



/* Address: 0x1005233d8 | FUN_1005233d8 */

String FUN_1005233d8(void)

{
  String SVar1;
  
  FUN_1005248e4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100523400 | FUN_100523400 */

String FUN_100523400(void)

{
  String SVar1;
  
  FUN_1005248e4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100523428 | thunk_FUN_1005247cc */

void thunk_FUN_1005247cc(void)

{
  FUN_1005247cc();
  return;
}



/* Address: 0x10052342c | FUN_10052342c */

void FUN_10052342c(long param_1)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_80 [15];
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  puVar1 = &DAT_100fce5b8;
  FUN_1000f7830(&DAT_100fce5b8,&DAT_100c54e80);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005248e4();
  KVar2 = Swift::Encoder::_container();
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  local_60 = *(undefined1 *)(unaff_x20 + 2);
  local_71 = 0;
  FUN_100524924();
  Swift::KeyedEncodingContainer::_encode(&local_70,&local_71,puVar1,&DAT_100edcd80,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_70._0_1_ = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[3],&local_70,puVar1);
    local_70._0_1_ = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[4],*(undefined1 *)(unaff_x20 + 5),&local_70,puVar1);
    local_70 = CONCAT71(local_70._1_7_,3);
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[6],unaff_x20[7],&local_70,puVar1);
    (**(code **)(lVar3 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar3 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1005235bc | FUN_1005235bc */

void FUN_1005235bc(Hasher param_1,Hasher param_2)

{
  __uint64 _Var1;
  char *pcVar2;
  undefined8 *unaff_x20;
  Hasher HVar3;
  void *pvVar4;
  ulong uVar5;
  double dVar6;
  String SVar7;
  String SVar8;
  
  HVar3.unknown = (undefined *)*unaff_x20;
  if (*(char *)(unaff_x20 + 2) == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)HVar3.unknown,param_2);
    HVar3.unknown = param_2.unknown;
  }
  else {
    pvVar4 = (void *)unaff_x20[1];
    Swift::Hasher::_combine(0,param_2);
    SVar7.bridgeObject = pvVar4;
    SVar7.str = HVar3.unknown;
    Swift::String::hash(param_1,SVar7);
  }
  dVar6 = 0.0;
  if ((double)unaff_x20[3] != 0.0) {
    dVar6 = (double)unaff_x20[3];
  }
  Swift::Hasher::_combine((__uint64)dVar6,HVar3);
  if (*(char *)(unaff_x20 + 5) == '\x01') {
    Swift::Hasher::_combine(0,HVar3);
    pvVar4 = (void *)unaff_x20[7];
  }
  else {
    uVar5 = unaff_x20[4];
    Swift::Hasher::_combine(1,HVar3);
    _Var1 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      _Var1 = uVar5;
    }
    Swift::Hasher::_combine(_Var1,HVar3);
    pvVar4 = (void *)unaff_x20[7];
  }
  if (pvVar4 != (void *)0x0) {
    pcVar2 = (char *)unaff_x20[6];
    Swift::Hasher::_combine(1,HVar3);
    SVar8.bridgeObject = pvVar4;
    SVar8.str = pcVar2;
    Swift::String::hash(param_1,SVar8);
    return;
  }
  Swift::Hasher::_combine(0,HVar3);
  return;
}



/* Address: 0x1005236a8 | FUN_1005236a8 */

void FUN_1005236a8(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005235bc();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005236e4 | FUN_1005236e4 */

void FUN_1005236e4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100524ac8(&local_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = local_40;
    param_1[7] = uStack_28;
    param_1[6] = uStack_30;
  }
  return;
}



/* Address: 0x100523724 | thunk_FUN_1005235bc */

void thunk_FUN_1005235bc(void)

{
  FUN_1005235bc();
  return;
}



/* Address: 0x100523728 | FUN_100523728 */

void FUN_100523728(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005235bc();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100523760 | FUN_100523760 */

void FUN_100523760(void)

{
  FUN_10052342c();
  return;
}



/* Address: 0x100523774 | FUN_100523774 */

uint FUN_100523774(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  local_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1005247cc(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x1005237bc | FUN_1005237bc */

String FUN_1005237bc(void)

{
  String SVar1;
  
  FUN_100524cec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005237e4 | FUN_1005237e4 */

String FUN_1005237e4(void)

{
  String SVar1;
  
  FUN_100524cec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10052380c | FUN_10052380c */

void FUN_10052380c(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fce5d0;
  FUN_1000f7830(&DAT_100fce5d0,&DAT_100c54e88);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100524cec();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1005238d4 | FUN_1005238d4 */

undefined1  [16] FUN_1005238d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_100524d2c();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1005238f4 | FUN_1005238f4 */

void FUN_1005238f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_100524d2c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Address: 0x100523920 | FUN_100523920 */

void FUN_100523920(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_4 + 0x10) == 0) {
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0xff;
    uVar6 = 0x3000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_100071370();
    if ((param_3 & 1) == 0) {
      uVar2 = 0;
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0xff;
      uVar6 = 0x3000000000000000;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x38) + param_2 * 0x28);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar6 = puVar1[3];
      uVar5 = *(undefined1 *)(puVar1 + 4);
      FUN_10045b2bc(uVar2,uVar3,uVar4,uVar6,uVar5);
    }
    _swift_bridgeObjectRelease(param_4);
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}



/* Address: 0x1005239f8 | FUN_1005239f8 */

undefined8 FUN_1005239f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  _swift_bridgeObjectRetain();
  lVar7 = 0x73736572676f7270;
  uVar8 = 0;
  FUN_100071370();
  if ((uVar8 & 1) == 0) {
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    puVar9 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar7 * 0x28);
    uVar1 = *puVar9;
    uVar3 = puVar9[1];
    uVar2 = puVar9[2];
    uVar4 = puVar9[3];
    bVar5 = *(byte *)(puVar9 + 4);
    FUN_10045b2bc(uVar1,uVar3,uVar2,uVar4,bVar5);
    _swift_bridgeObjectRelease(param_1);
    uVar6 = (uint)((ulong)uVar4 >> 0x3c) & 0xfffffc03 | (bVar5 & 0x3f) << 2;
    if (uVar6 == 1) {
      return uVar1;
    }
    if (uVar6 == 3) {
      return uVar1;
    }
    FUN_1004dbde0(uVar1,uVar3,uVar2,uVar4,bVar5);
  }
  return 0;
}



/* Address: 0x100523b0c | FUN_100523b0c */

void FUN_100523b0c(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  if (param_3 == '\x01') {
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0x1000000000000000;
    local_48 = 0;
    uVar1 = *unaff_x20;
    local_68 = param_1;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar2 = *unaff_x20;
    FUN_1004b5670(&local_68,0x73736572676f7270,0xed00006e656b6f54,uVar1);
    FUN_1005232a0(param_1,param_2,1);
    *unaff_x20 = uVar2;
  }
  else if (param_3 == -1) {
    FUN_1005063ec(&local_68,0x73736572676f7270,0xed00006e656b6f54);
    FUN_100524e98(local_68,uStack_60,local_58,uStack_50,local_48);
  }
  else {
    uStack_50 = 0x3000000000000000;
    local_58 = 0;
    local_48 = 0;
    uVar1 = *unaff_x20;
    local_68 = param_1;
    uStack_60 = param_2;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar2 = *unaff_x20;
    FUN_1004b5670(&local_68,0x73736572676f7270,0xed00006e656b6f54,uVar1);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Address: 0x100523c40 | FUN_100523c40 */

undefined1  [16] FUN_100523c40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  param_1[3] = unaff_x20;
  lVar11 = *unaff_x20;
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    lVar4 = 0x73736572676f7270;
    uVar5 = 0;
    FUN_100071370();
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar11);
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(lVar11 + 0x38) + lVar4 * 0x28);
      uVar9 = *puVar8;
      uVar10 = puVar8[1];
      uVar1 = puVar8[2];
      uVar2 = puVar8[3];
      bVar3 = *(byte *)(puVar8 + 4);
      FUN_10045b2bc(uVar9,uVar10,uVar1,uVar2,bVar3);
      _swift_bridgeObjectRelease(lVar11);
      uVar7 = (uint)((ulong)uVar2 >> 0x3c) & 3;
      bVar6 = (byte)uVar7 | (byte)((uint)bVar3 << 2);
      uVar7 = uVar7 | (uint)bVar3 << 2 & 0xff;
      if (uVar7 == 1) {
        uVar10 = 0;
        goto LAB_100523d34;
      }
      if (uVar7 == 3) {
        bVar6 = 0;
        goto LAB_100523d34;
      }
      FUN_1004dbde0(uVar9,uVar10,uVar1,uVar2,bVar3);
    }
  }
  uVar9 = 0;
  uVar10 = 0;
  bVar6 = 0xff;
LAB_100523d34:
  *param_1 = uVar9;
  param_1[1] = uVar10;
  *(byte *)(param_1 + 2) = bVar6;
  auVar12._8_8_ = param_1;
  auVar12._0_8_ = FUN_100523d60;
  return auVar12;
}



/* Address: 0x100523d60 | FUN_100523d60 */

void FUN_100523d60(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *(undefined1 *)(param_1 + 2);
  if ((param_2 & 1) != 0) {
    FUN_1005221e8(uVar1,uVar2,uVar3);
    FUN_100523b0c(uVar1,uVar2,uVar3);
    FUN_1005232a0(uVar1,uVar2,uVar3);
    return;
  }
  FUN_100523b0c(uVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100523ddc | FUN_100523ddc */

undefined8 FUN_100523ddc(void)

{
  undefined8 in_x3;
  
  FUN_100523b0c();
  return in_x3;
}



/* Address: 0x100523e0c | FUN_100523e0c */

void FUN_100523e0c(void)

{
  FUN_100524ebc();
  return;
}



/* Address: 0x100523e20 | FUN_100523e20 */

void FUN_100523e20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  local_38 = param_2;
  FUN_10007d048(auStack_68,local_50);
  puVar1 = &DAT_100fcc380;
  FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
  puVar2 = &DAT_100fcc388;
  FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210,
                PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
  Swift::SingleValueEncodingContainer::_encode(&local_38,puVar1,puVar2,local_50,uStack_48);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100523ef8 | thunk_FUN_100523efc */

void thunk_FUN_100523efc(void)

{
  FUN_100523efc();
  return;
}



/* Address: 0x100523efc | FUN_100523efc */

undefined8 FUN_100523efc(long param_1,long param_2)

{
  long *plVar1;
  undefined *puVar2;
  double dVar3;
  _StringGuts _Var4;
  double dVar5;
  _StringGuts _Var6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  _StringGuts _Var14;
  ulong uVar15;
  ulong uVar16;
  double *pdVar17;
  ulong uVar18;
  undefined8 *puVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong local_a0;
  undefined *local_70;
  ulong local_68;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (*(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  uVar18 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  local_68 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar18 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain_n(param_1,2);
  _swift_bridgeObjectRetain(param_2);
  lVar13 = 0;
LAB_100523f90:
  if (local_68 == 0) {
    do {
      lVar21 = lVar13 + 1;
      if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1005243ac);
        (*pcVar10)();
      }
      if ((long)(uVar18 + 0x3f >> 6) <= lVar21) goto LAB_100524360;
      local_68 = ((ulong *)(param_1 + 0x40))[lVar21];
      lVar13 = lVar13 + 1;
    } while (local_68 == 0);
    uVar15 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_68 = local_68 - 1 & local_68;
  }
  else {
    uVar15 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
    uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
    uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
    uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
    local_68 = local_68 - 1 & local_68;
    lVar21 = lVar13;
  }
  uVar16 = LZCOUNT(uVar15) | lVar21 << 6;
  plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar16 * 0x10);
  lVar13 = *plVar1;
  uVar15 = plVar1[1];
  pdVar17 = (double *)(*(long *)(param_1 + 0x38) + uVar16 * 0x28);
  puVar2 = (undefined *)*pdVar17;
  local_70 = (undefined *)pdVar17[1];
  dVar3 = pdVar17[2];
  dVar5 = pdVar17[3];
  bVar7 = *(byte *)(pdVar17 + 4);
  _swift_bridgeObjectRetain(uVar15);
  FUN_10045b2bc(puVar2,local_70,dVar3,dVar5,bVar7);
  if (uVar15 == 0) {
LAB_100524360:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease_n(param_1,2);
    return 1;
  }
  uVar16 = uVar15;
  FUN_100071370();
  _swift_bridgeObjectRelease(uVar15);
  if ((uVar16 & 1) == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease_n(param_1,2);
    FUN_1004dbde0(puVar2,local_70,dVar3,dVar5,bVar7);
    return 0;
  }
  puVar19 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar13 * 0x28);
  _Var4.unknown = (undefined *)*puVar19;
  _Var6.unknown = (undefined *)puVar19[1];
  uVar22 = puVar19[3];
  bVar8 = *(byte *)(puVar19 + 4);
  uVar9 = (uint)((ulong)uVar22 >> 0x3c) & 0xfffffc03 | (bVar8 & 0x3f) << 2;
  uVar20 = (uint)bVar7;
  uVar12 = (uint)((ulong)dVar5 >> 0x20);
  lVar13 = lVar21;
  if (uVar9 < 4) {
    if (uVar9 < 2) {
      if (uVar9 == 0) {
        if ((uVar12 >> 0x1c & 0xfffffc03) != 0 || (bVar7 & 0x3f) != 0) goto LAB_1005243b4;
        if ((((uint)_Var4.unknown ^ (uint)puVar2) & 1) != 0) {
LAB_1005243c8:
          _swift_bridgeObjectRelease_n(param_1,2);
          _swift_bridgeObjectRelease(param_2);
          return 0;
        }
      }
      else {
        if ((uVar12 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) != 1) goto LAB_1005243b4;
        if (_Var4.unknown != puVar2) goto LAB_1005243c8;
      }
      goto LAB_100523f90;
    }
    uVar12 = uVar12 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2;
    if (uVar9 == 2) {
      if (uVar12 != 2) goto LAB_1005243b4;
      if ((double)_Var4.unknown != (double)puVar2) goto LAB_1005243c8;
      goto LAB_100523f90;
    }
    if (uVar12 == 3) {
      if (_Var4.unknown == puVar2 && _Var6.unknown == local_70) {
        FUN_1004dbde0(puVar2,local_70,dVar3,dVar5,bVar7);
      }
      else {
        bVar11 = Swift::_stringCompareWithSmolCheck
                           (_Var4,_Var6,(_StringComparisonResult)(__int8)puVar2);
        local_a0 = (ulong)bVar11;
        FUN_1004dbde0(puVar2,local_70,dVar3,dVar5,bVar7);
LAB_10052434c:
        if ((local_a0 & 1) == 0) goto LAB_1005243c8;
      }
      goto LAB_100523f90;
    }
  }
  else {
    uVar15 = puVar19[2];
    if (uVar9 < 6) {
      if (uVar9 == 4) {
        if ((uVar12 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) == 4) {
          if (_Var6.unknown == (undefined *)0x0) {
            if (local_70 == (undefined *)0x0) {
LAB_1005242dc:
              FUN_10045b2bc(_Var4.unknown,_Var6.unknown,uVar15,uVar22,bVar8);
              local_a0 = uVar15;
              FUN_10031b830(uVar15,uVar22,dVar3,dVar5);
              local_a0 = local_a0 & 0xffffffff;
              FUN_1004dbde0(_Var4.unknown,_Var6.unknown,uVar15,uVar22,bVar8);
              FUN_1004dbde0(puVar2,local_70,dVar3,dVar5,bVar7);
              goto LAB_10052434c;
            }
          }
          else if (local_70 == (undefined *)0x0) {
            local_70 = (undefined *)0x0;
          }
          else if ((_Var4.unknown == puVar2 && _Var6.unknown == local_70) ||
                  (bVar11 = Swift::_stringCompareWithSmolCheck
                                      (_Var4,_Var6,(_StringComparisonResult)(__int8)puVar2), bVar11)
                  ) goto LAB_1005242dc;
        }
      }
      else if ((uVar12 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) == 5) {
        _Var14.unknown = _Var4.unknown;
        _swift_bridgeObjectRetain();
        uVar12 = (uint)_Var14.unknown;
        FUN_100555578();
        goto LAB_1005241f0;
      }
    }
    else if (uVar9 == 6) {
      if ((uVar12 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) == 6) {
        _Var14.unknown = _Var4.unknown;
        _swift_bridgeObjectRetain();
        uVar12 = (uint)_Var14.unknown;
        FUN_100523efc();
LAB_1005241f0:
        FUN_1004dbde0(_Var4.unknown,_Var6.unknown,uVar15,uVar22,bVar8);
        FUN_1004dbde0(puVar2,local_70,dVar3,dVar5,bVar7);
        if ((uVar12 & 1) == 0) goto LAB_1005243c8;
        goto LAB_100523f90;
      }
    }
    else if (((uVar12 >> 0x1c & 0xfffffc03 | (uVar20 & 0x3f) << 2) == 7 &&
             ((local_70 == (undefined *)0x0 && puVar2 == (undefined *)0x0) && dVar3 == 0.0)) &&
             dVar5 == 1.727233711018889e-77) goto LAB_100523f90;
  }
LAB_1005243b4:
  FUN_1004dbde0(puVar2,local_70,dVar3,dVar5,bVar7);
  goto LAB_1005243c8;
}



/* Address: 0x100524400 | FUN_100524400 */

undefined8 FUN_100524400(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong local_68;
  
  if (param_1 == param_2) {
    uVar14 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    local_68 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      local_68 = ~(-1L << (uVar13 & 0x3f));
    }
    local_68 = local_68 & *(ulong *)(param_1 + 0x40);
    _swift_bridgeObjectRetain_n(param_1,2);
    _swift_bridgeObjectRetain(param_2);
    lVar9 = 0;
    do {
      while( true ) {
        if (local_68 == 0) {
          do {
            lVar15 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1005245ec);
              (*pcVar7)();
            }
            if ((long)(uVar13 + 0x3f >> 6) <= lVar15) {
              uVar14 = 1;
              goto LAB_10052459c;
            }
            local_68 = ((ulong *)(param_1 + 0x40))[lVar15];
            lVar9 = lVar9 + 1;
          } while (local_68 == 0);
          uVar11 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          local_68 = local_68 - 1 & local_68;
        }
        else {
          uVar11 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
          local_68 = local_68 - 1 & local_68;
          lVar15 = lVar9;
        }
        lVar12 = (LZCOUNT(uVar11) | lVar15 << 6) * 0x10;
        plVar1 = (long *)(*(long *)(param_1 + 0x30) + lVar12);
        lVar9 = *plVar1;
        uVar11 = plVar1[1];
        plVar1 = (long *)(*(long *)(param_1 + 0x38) + lVar12);
        puVar3 = (undefined *)*plVar1;
        puVar5 = (undefined *)plVar1[1];
        _swift_bridgeObjectRetain(uVar11);
        _swift_bridgeObjectRetain(puVar5);
        uVar10 = uVar11;
        FUN_100071370();
        _swift_bridgeObjectRelease(uVar11);
        if ((uVar10 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar5);
          uVar14 = 0;
          goto LAB_10052459c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + lVar9 * 0x10);
        _Var4.unknown = (undefined *)*puVar2;
        _Var6.unknown = (undefined *)puVar2[1];
        lVar9 = lVar15;
        if (_Var4.unknown != puVar3 || _Var6.unknown != puVar5) break;
        _swift_bridgeObjectRelease(puVar5);
      }
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (_Var4,_Var6,(_StringComparisonResult)(__int8)puVar3);
      _swift_bridgeObjectRelease(puVar5);
    } while (bVar8);
    uVar14 = 0;
LAB_10052459c:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease_n(param_1,2);
  }
  else {
    uVar14 = 0;
  }
  return uVar14;
}



/* Address: 0x1005245ec | thunk_FUN_1004df778 */

void thunk_FUN_1004df778(void)

{
  FUN_1004df778();
  return;
}



/* Address: 0x1005245f0 | FUN_1005245f0 */

void FUN_1005245f0(undefined8 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1004df778(HVar1.unknown,param_1);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100524634 | FUN_100524634 */

void FUN_100524634(void)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1004df778(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100524678 | FUN_100524678 */

void FUN_100524678(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004df778(param_1,*unaff_x20);
  return;
}



/* Address: 0x100524680 | FUN_100524680 */

void FUN_100524680(__int64 param_1)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1004df778(HVar1.unknown,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005246c0 | FUN_1005246c0 */

void FUN_1005246c0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100524ebc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1005246e8 | FUN_1005246e8 */

void FUN_1005246e8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uVar3 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  local_38 = uVar3;
  FUN_10007d048(auStack_68,local_50);
  puVar1 = &DAT_100fcc380;
  FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
  puVar2 = &DAT_100fcc388;
  FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210,
                PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
  Swift::SingleValueEncodingContainer::_encode(&local_38,puVar1,puVar2,local_50,uStack_48);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1005247c0 | FUN_1005247c0 */

void FUN_1005247c0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100523efc(*param_1,*param_2);
  return;
}



/* Address: 0x1005247cc | FUN_1005247cc */

undefined8 FUN_1005247cc(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  
  _Var3.unknown = (undefined *)*param_1;
  puVar2 = (undefined *)*param_2;
  if (*(char *)(param_1 + 2) == '\x01') {
    if ((char)param_2[2] != '\x01' || _Var3.unknown != puVar2) {
      return 0;
    }
  }
  else {
    if ((char)param_2[2] == '\x01') {
      return 0;
    }
    if ((_Var3.unknown != puVar2 || (undefined *)param_1[1] != (undefined *)param_2[1]) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          (_Var3,(undefined *)param_1[1],(_StringComparisonResult)(__int8)puVar2),
       !bVar1)) {
      return 0;
    }
  }
  if ((double)param_1[3] == (double)param_2[3]) {
    if (*(char *)(param_1 + 5) == '\x01') {
      if ((char)param_2[5] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[5] == '\x01') {
        return 0;
      }
      if ((double)param_1[4] != (double)param_2[4]) {
        return 0;
      }
    }
    _Var3.unknown = (undefined *)param_1[7];
    puVar2 = (undefined *)param_2[7];
    if (_Var3.unknown == (undefined *)0x0) {
      if (puVar2 == (undefined *)0x0) {
        return 1;
      }
    }
    else if (puVar2 != (undefined *)0x0) {
      if (((undefined *)param_1[6] == (undefined *)param_2[6]) && (_Var3.unknown == puVar2)) {
        return 1;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[6],_Var3,
                         (_StringComparisonResult)(__int8)(undefined *)param_2[6]);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1005248e4 | FUN_1005248e4 */

void FUN_1005248e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5533c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5533c,&DAT_100edce58);
  DAT_100fce5c0 = pTVar1;
  return;
}



/* Address: 0x100524924 | FUN_100524924 */

void FUN_100524924(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce5c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5508c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5508c,&DAT_100edcd80);
  DAT_100fce5c8 = pTVar1;
  return;
}



/* Address: 0x100524964 | FUN_100524964 */

undefined4 FUN_100524964(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x73736572676f7270 || param_2 != (undefined1 *)0xed00006e656b6f54) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x73736572676f7270,(_StringGuts)0xed00006e656b6f54,expecting);
    if (!bVar1) {
      if (((param_1 == 0x73736572676f7270) && (param_2 == &DAT_e800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x73736572676f7270,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x6c61746f74) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6c61746f74,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x6567617373656d) && (param_2 == &DAT_e700000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e700000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6567617373656d,(_StringGuts)0xe700000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100524ac8 | FUN_100524ac8 */

/* WARNING: Removing unreachable block (ram,0x000100524c78) */
/* WARNING: Removing unreachable block (ram,0x000100524bb4) */

void FUN_100524ac8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  double dVar8;
  undefined1 auStack_90 [4];
  undefined4 local_8c;
  undefined1 *local_88;
  uint local_80;
  undefined1 local_79;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  byte local_68;
  
  puVar2 = &DAT_100fce6a0;
  FUN_1000f7830(&DAT_100fce6a0,&DAT_100c55390);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005248e4();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_79 = 0;
    FUN_1005256b0();
    Swift::KeyedDecodingContainer::_decode
              (&local_78,&DAT_100edcd80,&local_79,puVar2,&DAT_100edcd80,KVar3.unknown);
    uVar1 = CONCAT71(uStack_77,local_78);
    local_80 = (uint)local_68;
    local_78 = 1;
    dVar8 = Swift::KeyedDecodingContainer::_decode(&local_78,puVar2);
    local_78 = 2;
    puVar4 = &local_78;
    puVar6 = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_8c = SUB84(puVar6,0);
    local_78 = 3;
    puVar5 = &local_78;
    puVar6 = puVar2;
    local_88 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar7 + 8))(auStack_90 + -extraout_x8,puVar2);
    FUN_100004594(param_2);
    *param_1 = uVar1;
    param_1[1] = uStack_70;
    *(char *)(param_1 + 2) = (char)local_80;
    param_1[3] = dVar8;
    param_1[4] = local_88;
    *(char *)(param_1 + 5) = (char)local_8c;
    param_1[6] = puVar5;
    param_1[7] = puVar6;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100524cec | FUN_100524cec */

void FUN_100524cec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce5d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c552ec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c552ec,&DAT_100edcdc8);
  DAT_100fce5d8 = pTVar1;
  return;
}



/* Address: 0x100524d2c | FUN_100524d2c */

/* WARNING: Removing unreachable block (ram,0x000100524de4) */
/* WARNING: Removing unreachable block (ram,0x000100524db0) */

char * FUN_100524d2c(char *param_1)

{
  char *pcVar1;
  long unaff_x21;
  String SVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  pcVar1 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_68,local_50);
    SVar2 = Swift::SingleValueDecodingContainer::_decode();
    pcVar1 = SVar2.str;
    FUN_100004594(auStack_68);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar1;
}



/* Address: 0x100524e98 | FUN_100524e98 */

void FUN_100524e98(void)

{
  ulong in_x3;
  char in_w4;
  
  if (((in_x3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 || in_w4 != -1) {
    FUN_1004dbde0();
    return;
  }
  return;
}



/* Address: 0x100524ebc | FUN_100524ebc */

/* WARNING: Removing unreachable block (ram,0x000100524f80) */

long FUN_100524ebc(long param_1)

{
  long lVar1;
  long unaff_x21;
  long local_70;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  lVar1 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_68,local_50);
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::SingleValueDecodingContainer::_decode();
    FUN_100004594(auStack_68);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_70 = lVar1;
  }
  return local_70;
}



/* Address: 0x100524fc8 | thunk_FUN_100524fcc */

void thunk_FUN_100524fcc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce5e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54f28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54f28,&DAT_100edcce0);
  DAT_100fce5e0 = pTVar1;
  return;
}



/* Address: 0x100524fcc | FUN_100524fcc */

void FUN_100524fcc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce5e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c54f28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54f28,&DAT_100edcce0);
  DAT_100fce5e0 = pTVar1;
  return;
}


