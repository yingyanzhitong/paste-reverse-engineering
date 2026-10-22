/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10057a600 | FUN_10057a600 */

void FUN_10057a600(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10056f4a8(param_1,*unaff_x20);
  return;
}



/* Address: 0x10057a608 | FUN_10057a608 */

void FUN_10057a608(__int64 param_1)

{
  undefined1 uVar1;
  Hasher HVar2;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar2.unknown = auStack_68;
  FUN_10056f4a8(HVar2.unknown,uVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10057a648 | FUN_10057a648 */

void FUN_10057a648(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100580004(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10057a674 | FUN_10057a674 */

void FUN_10057a674(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_10057a4b4();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10057a69c | FUN_10057a69c */

void FUN_10057a69c(void)

{
  undefined1 *unaff_x20;
  
  FUN_10057a4b4(*unaff_x20);
  return;
}



/* Address: 0x10057a6b4 | FUN_10057a6b4 */

void FUN_10057a6b4(undefined1 *param_1,undefined1 param_2)

{
  FUN_100580004();
  *param_1 = param_2;
  return;
}



/* Address: 0x10057a6d8 | FUN_10057a6d8 */

String FUN_10057a6d8(void)

{
  String SVar1;
  
  FUN_1005805a4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057a700 | FUN_10057a700 */

String FUN_10057a700(void)

{
  String SVar1;
  
  FUN_1005805a4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057a728 | FUN_10057a728 */

void FUN_10057a728(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
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
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100580068(&local_b8);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_50;
    param_1[0xc] = local_58;
    param_1[0xf] = uStack_40;
    param_1[0xe] = local_48;
    param_1[0x11] = uStack_30;
    param_1[0x10] = local_38;
    param_1[0x12] = local_28;
    param_1[5] = uStack_90;
    param_1[4] = local_98;
    param_1[7] = uStack_80;
    param_1[6] = local_88;
    param_1[9] = uStack_70;
    param_1[8] = local_78;
    param_1[0xb] = uStack_60;
    param_1[10] = local_68;
    param_1[1] = uStack_b0;
    *param_1 = local_b8;
    param_1[3] = uStack_a0;
    param_1[2] = local_a8;
  }
  return;
}



/* Address: 0x10057a798 | FUN_10057a798 */

/* WARNING: Removing unreachable block (ram,0x00010057a9d0) */

void FUN_10057a798(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = &DAT_100fd1430;
  FUN_1000f7830(&DAT_100fd1430,&DAT_100c5cf98);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005805a4();
  Swift::Encoder::_container();
  local_80 = local_80 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_80,puVar1);
  if (unaff_x21 == 0) {
    local_80._0_1_ = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_80,puVar1);
    local_80._0_1_ = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_80,puVar1);
    local_80._0_1_ = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[6],unaff_x20[7],&local_80,puVar1);
    local_80._0_1_ = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[8],unaff_x20[9],&local_80,puVar1);
    uVar2 = unaff_x20[10];
    local_80 = CONCAT71(local_80._1_7_,5);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (uVar2,*(undefined1 *)(unaff_x20 + 0xb),&local_80,puVar1);
    uStack_78 = unaff_x20[0xd];
    local_80 = unaff_x20[0xc];
    uStack_68 = unaff_x20[0xf];
    uStack_70 = unaff_x20[0xe];
    local_60 = unaff_x20[0x10];
    local_81 = 6;
    FUN_10056382c();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_80,&local_81,puVar1,&DAT_100ee1da8,uVar2)
    ;
    local_80 = unaff_x20[0x11];
    local_81 = 7;
    puVar3 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    puVar4 = puVar3;
    FUN_100576684();
    puVar5 = &local_80;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar5,&local_81,puVar1,puVar3,puVar4);
    local_80 = unaff_x20[0x12];
    local_81 = 8;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_80,&local_81,puVar1,&DAT_100edcda0,puVar5);
    (**(code **)(lVar6 + 8))(auStack_90 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar6 + 8))(auStack_90 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10057aa3c | FUN_10057aa3c */

void FUN_10057aa3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_118 [72];
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
  
  local_a0 = 0;
  uStack_98 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_d0 = param_4;
  uStack_c8 = param_5;
  local_c0 = param_6;
  uStack_b8 = param_7;
  local_b0 = param_2;
  uStack_a8 = param_3;
  local_90 = param_8;
  local_88 = param_4;
  uStack_80 = param_5;
  local_78 = param_6;
  uStack_70 = param_7;
  local_68 = param_2;
  uStack_60 = param_3;
  local_48 = param_8;
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  _swift_bridgeObjectRetain(param_3);
  FUN_100558dd0(&local_d0,auStack_118);
  FUN_100558e0c(&local_88);
  param_1[5] = uStack_a8;
  param_1[4] = local_b0;
  param_1[7] = uStack_98;
  param_1[6] = local_a0;
  param_1[8] = local_90;
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = uStack_b8;
  param_1[2] = local_c0;
  return;
}



/* Address: 0x10057aaf0 | FUN_10057aaf0 */

void FUN_10057aaf0(undefined8 *param_1,Data param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_128 [72];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  String local_b0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  String local_68;
  undefined8 local_58;
  
  local_b0 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,param_2);
  local_c0 = 0;
  uStack_b8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_e0 = param_4;
  uStack_d8 = param_5;
  local_d0 = param_6;
  uStack_c8 = param_7;
  local_a0 = param_8;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_6;
  uStack_80 = param_7;
  local_68 = local_b0;
  local_58 = param_8;
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_7);
  FUN_100558dd0(&local_e0,auStack_128);
  FUN_100558e0c(&local_98);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = local_b0.bridgeObject;
  param_1[6] = local_b0.str;
  param_1[8] = local_a0;
  param_1[1] = uStack_d8;
  *param_1 = local_e0;
  param_1[3] = uStack_c8;
  param_1[2] = local_d0;
  return;
}



/* Address: 0x10057abbc | FUN_10057abbc */

void FUN_10057abbc(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar3 = (char *)0x626f6c62;
  if (bVar4 != 3) {
    pcVar3 = (char *)0x6174656d5f;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x74786574;
  if (bVar4 != 2) {
    pcVar2 = pcVar3;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = puVar1;
  }
  pcVar3 = (char *)0x697275;
  if (bVar4 != 0) {
    pcVar3 = (char *)0x65707954656d696d;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar4 != 0) {
    puVar1 = &DAT_e800000000000000;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10057ac80 | FUN_10057ac80 */

void FUN_10057ac80(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar5 = *unaff_x20;
  pcVar3 = (char *)0x626f6c62;
  if (bVar5 != 3) {
    pcVar3 = (char *)0x6174656d5f;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar5 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x74786574;
  if (bVar5 != 2) {
    pcVar2 = pcVar3;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar1;
  }
  pcVar3 = (char *)0x697275;
  if (bVar5 != 0) {
    pcVar3 = (char *)0x65707954656d696d;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar5 != 0) {
    puVar1 = &DAT_e800000000000000;
  }
  if (bVar5 < 2) {
    puVar4 = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar2;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x10057ad20 | FUN_10057ad20 */

void FUN_10057ad20(__int64 param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar3 = (char *)0x626f6c62;
  if (bVar4 != 3) {
    pcVar3 = (char *)0x6174656d5f;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x74786574;
  if (bVar4 != 2) {
    pcVar2 = pcVar3;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = puVar1;
  }
  pcVar3 = (char *)0x697275;
  if (bVar4 != 0) {
    pcVar3 = (char *)0x65707954656d696d;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar4 != 0) {
    puVar1 = &DAT_e800000000000000;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10057ade0 | FUN_10057ade0 */

void FUN_10057ade0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1005805e4(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10057ae0c | FUN_10057ae0c */

void FUN_10057ae0c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar3 = 0x626f6c62;
  if (bVar5 != 3) {
    uVar3 = 0x6174656d5f;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar5 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  uVar2 = 0x74786574;
  if (bVar5 != 2) {
    uVar2 = uVar3;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar1;
  }
  uVar3 = 0x697275;
  if (bVar5 != 0) {
    uVar3 = 0x65707954656d696d;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar5 != 0) {
    puVar1 = &DAT_e800000000000000;
  }
  if (bVar5 < 2) {
    puVar4 = puVar1;
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x10057ae90 | FUN_10057ae90 */

undefined1  [16] FUN_10057ae90(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar3 = 0x626f6c62;
  if (bVar5 != 3) {
    uVar3 = 0x6174656d5f;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar5 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  uVar2 = 0x74786574;
  if (bVar5 != 2) {
    uVar2 = uVar3;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar1;
  }
  uVar3 = 0x697275;
  if (bVar5 != 0) {
    uVar3 = 0x65707954656d696d;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar5 != 0) {
    puVar1 = &DAT_e800000000000000;
  }
  if (bVar5 < 2) {
    puVar4 = puVar1;
    uVar2 = uVar3;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x10057af10 | FUN_10057af10 */

void FUN_10057af10(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005805e4();
  *param_1 = param_2;
  return;
}



/* Address: 0x10057af34 | FUN_10057af34 */

String FUN_10057af34(void)

{
  String SVar1;
  
  FUN_10058094c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057af5c | FUN_10057af5c */

String FUN_10057af5c(void)

{
  String SVar1;
  
  FUN_10058094c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057af84 | FUN_10057af84 */

void FUN_10057af84(undefined8 *param_1)

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
  undefined8 local_28;
  
  FUN_100580648(&local_68);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    param_1[8] = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x10057afd4 | FUN_10057afd4 */

/* WARNING: Removing unreachable block (ram,0x00010057b12c) */

void FUN_10057afd4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_60;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd1440;
  FUN_1000f7830(&DAT_100fd1440,&DAT_100c5cfa8);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10058094c();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[4],unaff_x20[5],&local_53,puVar1);
    uVar2 = unaff_x20[6];
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar2,unaff_x20[7],&local_54,puVar1);
    local_60 = unaff_x20[8];
    local_61 = 4;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_60,&local_61,puVar1,&DAT_100edcda0,uVar2)
    ;
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10057b198 | thunk_FUN_10057fa24 */

void thunk_FUN_10057fa24(void)

{
  FUN_10057fa24();
  return;
}



/* Address: 0x10057b19c | FUN_10057b19c */

void FUN_10057b19c(Hasher param_1)

{
  char *pcVar1;
  String *unaff_x20;
  void *pvVar2;
  Hasher HVar3;
  Hasher HVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  HVar4.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar2 = unaff_x20[1].bridgeObject;
  if (pvVar2 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
    pvVar2 = unaff_x20[2].bridgeObject;
    HVar3.unknown = HVar4.unknown;
  }
  else {
    HVar3.unknown = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar4);
    SVar5.bridgeObject = pvVar2;
    SVar5.str = HVar3.unknown;
    Swift::String::hash(param_1,SVar5);
    pvVar2 = unaff_x20[2].bridgeObject;
  }
  if (pvVar2 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
    pvVar2 = unaff_x20[3].bridgeObject;
    HVar4.unknown = HVar3.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[2].str;
    Swift::Hasher::_combine(1,HVar3);
    SVar6.bridgeObject = pvVar2;
    SVar6.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar6);
    pvVar2 = unaff_x20[3].bridgeObject;
  }
  if (pvVar2 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
    pcVar1 = unaff_x20[4].str;
    HVar3.unknown = HVar4.unknown;
  }
  else {
    HVar3.unknown = unaff_x20[3].str;
    Swift::Hasher::_combine(1,HVar4);
    SVar7.bridgeObject = pvVar2;
    SVar7.str = HVar3.unknown;
    Swift::String::hash(param_1,SVar7);
    pcVar1 = unaff_x20[4].str;
  }
  if (pcVar1 == (char *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
    return;
  }
  Swift::Hasher::_combine(1,HVar3);
  FUN_1004df778(param_1.unknown,pcVar1);
  return;
}



/* Address: 0x10057b298 | FUN_10057b298 */

void FUN_10057b298(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10057b19c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057b2d4 | thunk_FUN_10057b19c */

void thunk_FUN_10057b19c(void)

{
  FUN_10057b19c();
  return;
}



/* Address: 0x10057b2d8 | FUN_10057b2d8 */

void FUN_10057b2d8(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10057b19c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057b310 | FUN_10057b310 */

void FUN_10057b310(void)

{
  FUN_10057afd4();
  return;
}



/* Address: 0x10057b324 | FUN_10057b324 */

uint FUN_10057b324(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  local_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  local_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  local_20 = param_2[8];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10057fa24(&local_b0,&local_60);
  return uVar1 & 1;
}



/* Address: 0x10057b37c | FUN_10057b37c */

void FUN_10057b37c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10057a29c(unaff_x20 + 0x50,param_1);
  return;
}



/* Address: 0x10057b388 | FUN_10057b388 */

void FUN_10057b388(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10057a2f4(param_1,unaff_x20 + 0x50);
  return;
}



/* Address: 0x10057b390 | FUN_10057b390 */

void FUN_10057b390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 *param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined1 auStack_1c8 [136];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
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
  
  uStack_e8 = param_12[1];
  local_f0 = *param_12;
  uStack_d8 = param_12[3];
  local_e0 = param_12[2];
  local_d0 = param_12[4];
  local_100 = param_10;
  uStack_f8 = param_11;
  uStack_c8 = param_13;
  local_c0 = param_14;
  local_78 = param_10;
  uStack_70 = param_11;
  uStack_40 = param_13;
  local_38 = param_14;
  local_140 = param_2;
  uStack_138 = param_3;
  local_130 = param_4;
  uStack_128 = param_5;
  local_120 = param_6;
  uStack_118 = param_7;
  local_110 = param_8;
  uStack_108 = param_9;
  local_b8 = param_2;
  uStack_b0 = param_3;
  local_a8 = param_4;
  uStack_a0 = param_5;
  local_98 = param_6;
  uStack_90 = param_7;
  local_88 = param_8;
  uStack_80 = param_9;
  local_68 = local_f0;
  uStack_60 = uStack_e8;
  local_58 = local_e0;
  uStack_50 = uStack_d8;
  local_48 = local_d0;
  FUN_1004db9c8(&local_140,auStack_1c8);
  FUN_1004dba04(&local_b8);
  param_1[0xd] = uStack_d8;
  param_1[0xc] = local_e0;
  param_1[0xf] = uStack_c8;
  param_1[0xe] = local_d0;
  param_1[0x10] = local_c0;
  param_1[5] = uStack_118;
  param_1[4] = local_120;
  param_1[7] = uStack_108;
  param_1[6] = local_110;
  param_1[9] = uStack_f8;
  param_1[8] = local_100;
  param_1[0xb] = uStack_e8;
  param_1[10] = local_f0;
  param_1[1] = uStack_138;
  *param_1 = local_140;
  param_1[3] = uStack_128;
  param_1[2] = local_130;
  return;
}



/* Address: 0x10057b454 | FUN_10057b454 */

undefined1  [16] FUN_10057b454(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  puVar7 = (undefined1 *)0xeb00000000657461;
  bVar4 = *unaff_x20;
  uVar5 = 0x736e6f6369;
  if (bVar4 != 6) {
    uVar5 = 0x6174656d5f;
  }
  uVar1 = 0x65707954656d696d;
  if (bVar4 != 4) {
    uVar1 = 0x697461746f6e6e61;
  }
  puVar2 = &DAT_e800000000000000;
  if (bVar4 != 4) {
    puVar2 = (undefined1 *)0xeb00000000736e6f;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar4 < 6) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0x656c746974;
  if (bVar4 != 2) {
    uVar1 = 0x7470697263736564;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar4 != 2) {
    puVar2 = &DAT_eb000000006e6f69;
  }
  uVar6 = 0x6c706d6554697275;
  if (bVar4 != 0) {
    puVar7 = &DAT_e400000000000000;
    uVar6 = 0x656d616e;
  }
  if (bVar4 < 2) {
    puVar2 = puVar7;
    uVar1 = uVar6;
  }
  if (bVar4 < 4) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  auVar8._8_8_ = puVar3;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Address: 0x10057b554 | FUN_10057b554 */

void FUN_10057b554(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005809cc();
  *param_1 = param_2;
  return;
}



/* Address: 0x10057b578 | FUN_10057b578 */

String FUN_10057b578(void)

{
  String SVar1;
  
  FUN_10058098c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057b5a0 | FUN_10057b5a0 */

String FUN_10057b5a0(void)

{
  String SVar1;
  
  FUN_10058098c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057b5c8 | thunk_FUN_10057fb70 */

void thunk_FUN_10057fb70(void)

{
  FUN_10057fb70();
  return;
}



/* Address: 0x10057b5cc | FUN_10057b5cc */

/* WARNING: Removing unreachable block (ram,0x00010057b7e0) */

void FUN_10057b5cc(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = &DAT_100fd1450;
  FUN_1000f7830(&DAT_100fd1450,&DAT_100c5cfb0);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10058098c();
  Swift::Encoder::_container();
  local_80 = local_80 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_80,puVar1);
  if (unaff_x21 == 0) {
    local_80._0_1_ = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_80,puVar1);
    local_80._0_1_ = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[4],unaff_x20[5],&local_80,puVar1);
    local_80._0_1_ = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[6],unaff_x20[7],&local_80,puVar1);
    uVar2 = unaff_x20[8];
    local_80 = CONCAT71(local_80._1_7_,4);
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar2,unaff_x20[9],&local_80,puVar1);
    uStack_78 = unaff_x20[0xb];
    local_80 = unaff_x20[10];
    uStack_68 = unaff_x20[0xd];
    uStack_70 = unaff_x20[0xc];
    local_60 = unaff_x20[0xe];
    local_81 = 5;
    FUN_10056382c();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_80,&local_81,puVar1,&DAT_100ee1da8,uVar2)
    ;
    local_80 = unaff_x20[0xf];
    local_81 = 6;
    puVar3 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    puVar4 = puVar3;
    FUN_100576684();
    puVar5 = &local_80;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar5,&local_81,puVar1,puVar3,puVar4);
    local_80 = unaff_x20[0x10];
    local_81 = 7;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_80,&local_81,puVar1,&DAT_100edcda0,puVar5);
    (**(code **)(lVar6 + 8))(auStack_90 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar6 + 8))(auStack_90 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10057b84c | FUN_10057b84c */

void FUN_10057b84c(Hasher param_1)

{
  String *unaff_x20;
  void *pvVar1;
  Hasher HVar2;
  Hasher HVar3;
  char *pcVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  Swift::String::hash(param_1,*unaff_x20);
  HVar2.unknown = unaff_x20[1].str;
  Swift::String::hash(param_1,unaff_x20[1]);
  pvVar1 = unaff_x20[2].bridgeObject;
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
    pvVar1 = unaff_x20[3].bridgeObject;
    HVar3.unknown = HVar2.unknown;
  }
  else {
    HVar3.unknown = unaff_x20[2].str;
    Swift::Hasher::_combine(1,HVar2);
    SVar5.bridgeObject = pvVar1;
    SVar5.str = HVar3.unknown;
    Swift::String::hash(param_1,SVar5);
    pvVar1 = unaff_x20[3].bridgeObject;
  }
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
    pvVar1 = unaff_x20[4].bridgeObject;
  }
  else {
    pcVar4 = unaff_x20[3].str;
    Swift::Hasher::_combine(1,HVar3);
    SVar6.bridgeObject = pvVar1;
    SVar6.str = pcVar4;
    Swift::String::hash(param_1,SVar6);
    pvVar1 = unaff_x20[4].bridgeObject;
    HVar3.unknown = pcVar4;
  }
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    pcVar4 = unaff_x20[4].str;
    Swift::Hasher::_combine(1,HVar3);
    SVar7.bridgeObject = pvVar1;
    SVar7.str = pcVar4;
    Swift::String::hash(param_1,SVar7);
    HVar3.unknown = pcVar4;
  }
  FUN_10055fb80(param_1.unknown);
  HVar2.unknown = unaff_x20[7].bridgeObject;
  if (HVar2.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar3);
    pcVar4 = unaff_x20[8].str;
    HVar2.unknown = HVar3.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    FUN_1004d7564(param_1.unknown);
    pcVar4 = unaff_x20[8].str;
  }
  if (pcVar4 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar2);
    FUN_1004df778(param_1.unknown,pcVar4);
    return;
  }
  Swift::Hasher::_combine(0,HVar2);
  return;
}



/* Address: 0x10057b9d8 | FUN_10057b9d8 */

void FUN_10057b9d8(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10057b84c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057ba14 | FUN_10057ba14 */

void FUN_10057ba14(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
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
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100580c5c(&local_a8);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_40;
    param_1[0xc] = local_48;
    param_1[0xf] = uStack_30;
    param_1[0xe] = local_38;
    param_1[0x10] = local_28;
    param_1[5] = uStack_80;
    param_1[4] = local_88;
    param_1[7] = uStack_70;
    param_1[6] = local_78;
    param_1[9] = uStack_60;
    param_1[8] = local_68;
    param_1[0xb] = uStack_50;
    param_1[10] = local_58;
    param_1[1] = uStack_a0;
    *param_1 = local_a8;
    param_1[3] = uStack_90;
    param_1[2] = local_98;
  }
  return;
}



/* Address: 0x10057ba7c | thunk_FUN_10057b84c */

void thunk_FUN_10057b84c(void)

{
  FUN_10057b84c();
  return;
}



/* Address: 0x10057ba80 | FUN_10057ba80 */

void FUN_10057ba80(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10057b84c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057bab8 | FUN_10057bab8 */

void FUN_10057bab8(void)

{
  FUN_10057b5cc();
  return;
}



/* Address: 0x10057bacc | FUN_10057bacc */

uint FUN_10057bacc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  local_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  local_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  local_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  local_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  local_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  local_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  local_30 = param_2[0x10];
  uStack_88 = param_2[5];
  local_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  local_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_10057fb70(&local_140,&local_b0);
  return uVar1 & 1;
}



/* Address: 0x10057bb4c | FUN_10057bb4c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010057bb88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_10057bb4c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x10057bbb8 | FUN_10057bbb8 */

void FUN_10057bbb8(void)

{
  FUN_10054220c();
  return;
}



/* Address: 0x10057bbc4 | FUN_10057bbc4 */

void FUN_10057bbc4(void)

{
  FUN_100584900();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x10057bc20 | FUN_10057bc20 */

void FUN_10057bc20(void)

{
  FUN_100584900();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x10057bc6c | FUN_10057bc6c */

undefined1  [16] FUN_10057bc6c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x797469726f697270;
  if (cVar5 != '\x01') {
    uVar1 = 0x69646f4d7473616c;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar5 != '\x01') {
    puVar2 = (undefined1 *)0xec00000064656966;
  }
  uVar3 = 0x65636e6569647561;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e800000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x10057bcd0 | FUN_10057bcd0 */

void FUN_10057bcd0(undefined1 *param_1,undefined1 param_2)

{
  FUN_10058126c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10057bcf4 | FUN_10057bcf4 */

String FUN_10057bcf4(void)

{
  String SVar1;
  
  FUN_10058117c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057bd1c | FUN_10057bd1c */

String FUN_10057bd1c(void)

{
  String SVar1;
  
  FUN_10058117c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057bd44 | thunk_FUN_10057f470 */

void thunk_FUN_10057f470(void)

{
  FUN_10057f470();
  return;
}



/* Address: 0x10057bd48 | FUN_10057bd48 */

void FUN_10057bd48(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [5];
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd14b8;
  FUN_1000f7830(&DAT_100fd14b8,&DAT_100c5cfc0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10058117c();
  Swift::Encoder::_container();
  local_58 = *unaff_x20;
  local_59 = 0;
  puVar2 = &DAT_100fd14c8;
  FUN_1000f7830(&DAT_100fd14c8,&DAT_100c5cfc8);
  puVar3 = puVar2;
  FUN_1005811bc();
  Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_59,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    local_5a = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[1],*(undefined1 *)(unaff_x20 + 2),&local_5a,puVar1);
    local_5b = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[3],unaff_x20[4],&local_5b,puVar1);
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x10057bec4 | FUN_10057bec4 */

void FUN_10057bec4(Hasher param_1,Hasher param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  long *unaff_x20;
  __uint64 _Var3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  String SVar7;
  String SVar8;
  
  lVar6 = *unaff_x20;
  if (lVar6 == 0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    _Var3 = *(__uint64 *)(lVar6 + 0x10);
    Swift::Hasher::_combine(_Var3,param_2);
    if (_Var3 != 0) {
      pcVar2 = (char *)(lVar6 + 0x20);
      do {
        puVar1 = (undefined1 *)0xe900000000000074;
        param_2.unknown = (char *)0x6e61747369737361;
        if (*pcVar2 != '\x01') {
          puVar1 = &DAT_e400000000000000;
          param_2.unknown = (char *)0x72657375;
        }
        SVar7.bridgeObject = puVar1;
        SVar7.str = param_2.unknown;
        Swift::String::hash(param_1,SVar7);
        _swift_bridgeObjectRelease(puVar1);
        _Var3 = _Var3 - 1;
        pcVar2 = pcVar2 + 1;
      } while (_Var3 != 0);
    }
  }
  if ((char)unaff_x20[2] == '\x01') {
    Swift::Hasher::_combine(0,param_2);
    pvVar4 = (void *)unaff_x20[4];
  }
  else {
    uVar5 = unaff_x20[1];
    Swift::Hasher::_combine(1,param_2);
    _Var3 = 0;
    if ((uVar5 & 0x7fffffffffffffff) != 0) {
      _Var3 = uVar5;
    }
    Swift::Hasher::_combine(_Var3,param_2);
    pvVar4 = (void *)unaff_x20[4];
  }
  if (pvVar4 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_2);
    return;
  }
  pcVar2 = (char *)unaff_x20[3];
  Swift::Hasher::_combine(1,param_2);
  SVar8.bridgeObject = pvVar4;
  SVar8.str = pcVar2;
  Swift::String::hash(param_1,SVar8);
  return;
}



/* Address: 0x10057bffc | FUN_10057bffc */

void FUN_10057bffc(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10057bec4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057c038 | FUN_10057c038 */

void FUN_10057c038(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100581384(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    param_1[4] = local_28;
  }
  return;
}



/* Address: 0x10057c07c | thunk_FUN_10057bec4 */

void thunk_FUN_10057bec4(void)

{
  FUN_10057bec4();
  return;
}



/* Address: 0x10057c080 | FUN_10057c080 */

void FUN_10057c080(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10057bec4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057c0b8 | FUN_10057c0b8 */

void FUN_10057c0b8(void)

{
  FUN_10057bd48();
  return;
}



/* Address: 0x10057c0cc | FUN_10057c0cc */

uint FUN_10057c0cc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  FUN_10057f470(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x10057c114 | thunk_FUN_10057f548 */

void thunk_FUN_10057f548(void)

{
  FUN_10057f548();
  return;
}


