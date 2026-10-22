/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100528918 | FUN_100528918 */

ulong FUN_100528918(uint param_1,uint param_2)

{
  return (ulong)(param_1 & 0xffffff) | (ulong)(param_2 & 0xffff) << 0x18 |
         (ulong)(param_2 >> 0x10 & 0xff) << 0x28;
}



/* Address: 0x100528938 | FUN_100528938 */

void FUN_100528938(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_138 [88];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_a0 = param_10;
  uStack_98 = param_11;
  local_90 = param_12;
  local_48 = param_10;
  uStack_40 = param_11;
  local_38 = param_12;
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_d0 = param_6;
  uStack_c8 = param_7;
  local_c0 = param_4;
  uStack_b8 = param_5;
  local_b0 = param_8;
  uStack_a8 = param_9;
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_6;
  uStack_70 = param_7;
  local_68 = param_4;
  uStack_60 = param_5;
  local_58 = param_8;
  uStack_50 = param_9;
  FUN_1004ddb74(&local_e0,auStack_138);
  FUN_1004e00e8(&local_88);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = uStack_a8;
  param_1[6] = local_b0;
  param_1[9] = uStack_98;
  param_1[8] = local_a0;
  param_1[10] = local_90;
  param_1[1] = uStack_d8;
  *param_1 = local_e0;
  param_1[3] = uStack_c8;
  param_1[2] = local_d0;
  return;
}



/* Address: 0x1005289d4 | FUN_1005289d4 */

void FUN_1005289d4(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  String isolation;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10030b860;
    isolation.bridgeObject = param_2;
    isolation.str = param_1;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100008284;
  FUN_10054256c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100528b14 | FUN_100528b14 */

undefined * FUN_100528b14(void)

{
  return &DAT_100c55778;
}



/* Address: 0x100528b20 | FUN_100528b20 */

undefined * FUN_100528b20(void)

{
  return &DAT_100c55779;
}



/* Address: 0x100528b2c | FUN_100528b2c */

undefined1  [16] FUN_100528b2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x746369727473;
  return auVar1;
}



/* Address: 0x100528b40 | FUN_100528b40 */

void FUN_100528b40(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x746369727473 && param_3 == &DAT_e600000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x746369727473,(_StringGuts)0xe600000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x100528bc0 | FUN_100528bc0 */

String FUN_100528bc0(void)

{
  String SVar1;
  
  FUN_100528d04();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100528be8 | FUN_100528be8 */

String FUN_100528be8(void)

{
  String SVar1;
  
  FUN_100528d04();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100528c10 | FUN_100528c10 */

uint FUN_100528c10(uint param_1,uint param_2)

{
  return (param_1 ^ param_2 ^ 0xffffffff) & 1;
}



/* Address: 0x100528c20 | FUN_100528c20 */

void FUN_100528c20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fce7f8;
  FUN_1000f7830(&DAT_100fce7f8,&DAT_100c55780);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100528d04();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(param_2);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100528d04 | FUN_100528d04 */

void FUN_100528d04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce800 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56bcc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56bcc,&DAT_100eddba0);
  DAT_100fce800 = pTVar1;
  return;
}



/* Address: 0x100528d44 | FUN_100528d44 */

void FUN_100528d44(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine((byte)param_2.unknown & 1,param_2);
  return;
}



/* Address: 0x100528d68 | FUN_100528d68 */

void FUN_100528d68(uint param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)(ulong)(param_1 & 1);
  Swift::Hasher::_combine((__uint8)(param_1 & 1),param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100528dac | FUN_100528dac */

uint FUN_100528dac(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long extraout_x8;
  uint uVar5;
  long unaff_x21;
  long lVar6;
  
  puVar2 = &DAT_100fce808;
  FUN_1000f7830(&DAT_100fce808,&DAT_100c55788);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  uVar5 = (uint)lVar3;
  FUN_100528d04();
  KVar4 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    bVar1 = Swift::KeyedDecodingContainer::_decode(KVar4.unknown,puVar2);
    uVar5 = (uint)bVar1;
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar5 & 1;
}



/* Address: 0x100528eb4 | FUN_100528eb4 */

void FUN_100528eb4(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  
  puVar2 = &DAT_100fce808;
  FUN_1000f7830(&DAT_100fce808,&DAT_100c55788);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100528d04();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    bVar1 = Swift::KeyedDecodingContainer::_decode(KVar3.unknown,puVar2);
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
    FUN_100004594(param_2);
    *(bool *)param_1 = bVar1;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100528fcc | FUN_100528fcc */

void FUN_100528fcc(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined1 *unaff_x20;
  long lVar3;
  
  puVar2 = &DAT_100fce7f8;
  FUN_1000f7830(&DAT_100fce7f8,&DAT_100c55780);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100528d04();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x1005290b8 | FUN_1005290b8 */

byte FUN_1005290b8(byte *param_1,byte *param_2)

{
  return (*param_1 ^ *param_2 ^ 0xff) & 1;
}



/* Address: 0x1005290d0 | FUN_1005290d0 */

void FUN_1005290d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Address: 0x100529104 | FUN_100529104 */

void FUN_100529104(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  return;
}



/* Address: 0x10052912c | FUN_10052912c */

undefined1  [16] FUN_10052912c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar5 = *unaff_x20;
  puVar7 = (undefined1 *)0xea00000000006c72;
  uVar1 = 0x5565746973626577;
  if (bVar5 != 4) {
    puVar7 = &DAT_e500000000000000;
    uVar1 = 0x736e6f6369;
  }
  puVar4 = &DAT_eb000000006e6f69;
  uVar6 = 0x7470697263736564;
  if (bVar5 != 3) {
    puVar4 = puVar7;
    uVar6 = uVar1;
  }
  uVar1 = 0x656c746974;
  if (bVar5 != 1) {
    uVar1 = 0x6e6f6973726576;
  }
  puVar7 = &DAT_e500000000000000;
  if (bVar5 != 1) {
    puVar7 = &DAT_e700000000000000;
  }
  uVar2 = 0x656d616e;
  if (bVar5 != 0) {
    uVar2 = uVar1;
  }
  puVar3 = &DAT_e400000000000000;
  if (bVar5 != 0) {
    puVar3 = puVar7;
  }
  if (bVar5 < 3) {
    puVar4 = puVar3;
    uVar6 = uVar2;
  }
  auVar8._8_8_ = puVar4;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Address: 0x1005291e4 | FUN_1005291e4 */

void FUN_1005291e4(undefined1 *param_1,undefined1 param_2)

{
  FUN_100544620();
  *param_1 = param_2;
  return;
}



/* Address: 0x100529208 | FUN_100529208 */

String FUN_100529208(void)

{
  String SVar1;
  
  FUN_1005445a0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100529230 | FUN_100529230 */

String FUN_100529230(void)

{
  String SVar1;
  
  FUN_1005445a0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100529258 | thunk_FUN_100544444 */

void thunk_FUN_100544444(void)

{
  FUN_100544444();
  return;
}



/* Address: 0x10052925c | FUN_10052925c */

/* WARNING: Removing unreachable block (ram,0x0001005293d4) */

void FUN_10052925c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_60;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fce810;
  FUN_1000f7830(&DAT_100fce810,&DAT_100c55790);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005445a0();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_53,puVar1);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[6],unaff_x20[7],&local_54,puVar1);
    local_55 = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[8],unaff_x20[9],&local_55,puVar1);
    local_60 = unaff_x20[10];
    local_61 = 5;
    puVar2 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    puVar3 = &DAT_100fce828;
    FUN_10054d628(&DAT_100fce828,FUN_1005445e0,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_60,&local_61,puVar1,puVar2,puVar3);
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10052946c | FUN_10052946c */

void FUN_10052946c(Hasher param_1)

{
  String *unaff_x20;
  void *pvVar1;
  char *pcVar2;
  Hasher HVar3;
  Hasher HVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  HVar4.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar1 = unaff_x20[1].bridgeObject;
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    pcVar2 = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar4);
    SVar5.bridgeObject = pvVar1;
    SVar5.str = pcVar2;
    Swift::String::hash(param_1,SVar5);
  }
  HVar4.unknown = unaff_x20[2].str;
  Swift::String::hash(param_1,unaff_x20[2]);
  pvVar1 = unaff_x20[3].bridgeObject;
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
    pvVar1 = unaff_x20[4].bridgeObject;
    HVar3.unknown = HVar4.unknown;
  }
  else {
    HVar3.unknown = unaff_x20[3].str;
    Swift::Hasher::_combine(1,HVar4);
    SVar6.bridgeObject = pvVar1;
    SVar6.str = HVar3.unknown;
    Swift::String::hash(param_1,SVar6);
    pvVar1 = unaff_x20[4].bridgeObject;
  }
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
    pcVar2 = unaff_x20[5].str;
    HVar4.unknown = HVar3.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[4].str;
    Swift::Hasher::_combine(1,HVar3);
    SVar7.bridgeObject = pvVar1;
    SVar7.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar7);
    pcVar2 = unaff_x20[5].str;
  }
  if (pcVar2 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004d7564(param_1.unknown,pcVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar4);
  return;
}



/* Address: 0x100529570 | FUN_100529570 */

void FUN_100529570(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10052946c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005295ac | FUN_1005295ac */

void FUN_1005295ac(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_10054481c(&local_78);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_50;
    param_1[4] = local_58;
    param_1[7] = uStack_40;
    param_1[6] = local_48;
    param_1[9] = uStack_30;
    param_1[8] = local_38;
    param_1[10] = local_28;
    param_1[1] = uStack_70;
    *param_1 = local_78;
    param_1[3] = uStack_60;
    param_1[2] = local_68;
  }
  return;
}



/* Address: 0x100529604 | thunk_FUN_10052946c */

void thunk_FUN_10052946c(void)

{
  FUN_10052946c();
  return;
}



/* Address: 0x100529608 | FUN_100529608 */

void FUN_100529608(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10052946c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100529640 | FUN_100529640 */

void FUN_100529640(void)

{
  FUN_10052925c();
  return;
}



/* Address: 0x100529654 | FUN_100529654 */

uint FUN_100529654(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 local_80;
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
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  local_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  local_90 = param_1[8];
  local_80 = param_1[10];
  uStack_c8 = param_1[1];
  local_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  local_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  local_30 = param_2[8];
  local_20 = param_2[10];
  uStack_68 = param_2[1];
  local_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_100544444(&local_d0,&local_70);
  return uVar1 & 1;
}



/* Address: 0x1005296bc | FUN_1005296bc */

undefined1  [16] FUN_1005296bc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000646567;
  auVar1._0_8_ = 0x6e6168437473696c;
  return auVar1;
}



/* Address: 0x1005296dc | FUN_1005296dc */

void FUN_1005296dc(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x6e6168437473696c && param_3 == -0x14ffffffff9b9a99) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6e6168437473696c,(_StringGuts)0xeb00000000646567,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x100529764 | FUN_100529764 */

String FUN_100529764(void)

{
  String SVar1;
  
  FUN_100544be0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10052978c | FUN_10052978c */

String FUN_10052978c(void)

{
  String SVar1;
  
  FUN_100544be0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005297b4 | FUN_1005297b4 */

undefined8 FUN_1005297b4(byte param_1,byte param_2)

{
  if (param_1 == 2) {
    if (param_2 == 2) {
      return 1;
    }
  }
  else if ((param_2 != 2) && (((param_1 ^ param_2) & 1) == 0)) {
    return 1;
  }
  return 0;
}



/* Address: 0x1005297f8 | FUN_1005297f8 */

void FUN_1005297f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fce838;
  FUN_1000f7830(&DAT_100fce838,&DAT_100c55798);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100544be0();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1005298dc | FUN_1005298dc */

void FUN_1005298dc(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_2.unknown >> 0x20);
  uVar3 = (uint)param_2.unknown;
  if ((uVar3 & 0xff) == 2) {
    bVar2 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar2 = (byte)param_2.unknown & 1;
  }
  HVar1.unknown._4_4_ = uVar4;
  HVar1.unknown._0_4_ = uVar3;
  Swift::Hasher::_combine(bVar2,HVar1);
  return;
}



/* Address: 0x100529920 | FUN_100529920 */

void FUN_100529920(uint param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  if ((param_1 & 0xff) == 2) {
    HVar1.unknown = (undefined *)0x0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar1.unknown = (undefined *)(ulong)(param_1 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100529984 | FUN_100529984 */

undefined * FUN_100529984(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  
  puVar1 = &DAT_100fce848;
  FUN_1000f7830(&DAT_100fce848,&DAT_100c557a0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100544be0();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    Swift::KeyedDecodingContainer::_decodeIfPresent(KVar3.unknown,puVar1);
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    KVar3.unknown = puVar2;
  }
  return KVar3.unknown;
}



/* Address: 0x100529a8c | FUN_100529a8c */

void FUN_100529a8c(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  if (bVar1 == 2) {
    HVar2.unknown = (undefined *)0x0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar2.unknown = (undefined *)(ulong)(bVar1 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100529aec | FUN_100529aec */

void FUN_100529aec(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar1 = bVar1 & 1;
  }
  Swift::Hasher::_combine(bVar1,param_2);
  return;
}



/* Address: 0x100529b30 | FUN_100529b30 */

void FUN_100529b30(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  if (bVar1 == 2) {
    HVar2.unknown = (undefined *)0x0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar2.unknown = (undefined *)(ulong)(bVar1 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100529b8c | FUN_100529b8c */

void FUN_100529b8c(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  
  puVar1 = &DAT_100fce848;
  FUN_1000f7830(&DAT_100fce848,&DAT_100c557a0);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100544be0();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    Swift::KeyedDecodingContainer::_decodeIfPresent(KVar2.unknown,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = (char)KVar2.unknown;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100529ca0 | FUN_100529ca0 */

void FUN_100529ca0(long param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined1 *unaff_x20;
  long lVar3;
  
  puVar2 = &DAT_100fce838;
  FUN_1000f7830(&DAT_100fce838,&DAT_100c55798);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100544be0();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x100529d8c | FUN_100529d8c */

undefined8 FUN_100529d8c(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (*param_1 == 2) {
    if (bVar1 == 2) {
      return 1;
    }
  }
  else if ((bVar1 != 2) && (((*param_1 ^ bVar1) & 1) == 0)) {
    return 1;
  }
  return 0;
}



/* Address: 0x100529dc8 | FUN_100529dc8 */

String FUN_100529dc8(void)

{
  String SVar1;
  
  FUN_100544c20();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100529df0 | FUN_100529df0 */

String FUN_100529df0(void)

{
  String SVar1;
  
  FUN_100544c20();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100529e18 | FUN_100529e18 */

void FUN_100529e18(undefined8 param_1)

{
  FUN_10052a074(param_1,&DAT_100fce850,&DAT_100c557a8,FUN_100544c20,&DAT_100edd9f0);
  return;
}



/* Address: 0x100529e4c | FUN_100529e4c */

void FUN_100529e4c(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x100529e80 | FUN_100529e80 */

String FUN_100529e80(void)

{
  String SVar1;
  
  FUN_100544c60();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100529ea8 | FUN_100529ea8 */

String FUN_100529ea8(void)

{
  String SVar1;
  
  FUN_100544c60();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100529ed0 | FUN_100529ed0 */

void FUN_100529ed0(undefined8 param_1)

{
  FUN_10052a074(param_1,&DAT_100fce860,&DAT_100c557b0,FUN_100544c60,&DAT_100edd9d0);
  return;
}



/* Address: 0x100529f04 | FUN_100529f04 */

void FUN_100529f04(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x100529f38 | FUN_100529f38 */

String FUN_100529f38(void)

{
  String SVar1;
  
  FUN_100544ca0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100529f60 | FUN_100529f60 */

String FUN_100529f60(void)

{
  String SVar1;
  
  FUN_100544ca0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100529f88 | FUN_100529f88 */

void FUN_100529f88(undefined8 param_1)

{
  FUN_10052a074(param_1,&DAT_100fce870,&DAT_100c557b8,FUN_100544ca0,&DAT_100edd9b0);
  return;
}



/* Address: 0x100529fbc | FUN_100529fbc */

void FUN_100529fbc(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x100529ff0 | FUN_100529ff0 */

String FUN_100529ff0(void)

{
  String SVar1;
  
  FUN_100544ce0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10052a018 | FUN_10052a018 */

String FUN_10052a018(void)

{
  String SVar1;
  
  FUN_100544ce0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10052a040 | FUN_10052a040 */

void FUN_10052a040(undefined8 param_1)

{
  FUN_10052a074(param_1,&DAT_100fce880,&DAT_100c557c0,FUN_100544ce0,&DAT_100edd990);
  return;
}



/* Address: 0x10052a074 | FUN_10052a074 */

void FUN_10052a074(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  long extraout_x8;
  long lVar1;
  
  FUN_1000f7830(param_2,param_3);
  lVar1 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  (*param_4)();
  Swift::Encoder::_container();
  (**(code **)(lVar1 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,param_2);
  return;
}


