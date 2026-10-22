/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005a4814 | FUN_1005a4814 */

void FUN_1005a4814(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005a1058(unaff_x20 + 8,param_1);
  return;
}



/* Address: 0x1005a4820 | FUN_1005a4820 */

undefined1 FUN_1005a4820(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x29);
}



/* Address: 0x1005a4828 | FUN_1005a4828 */

void FUN_1005a4828(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_c8 [56];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined6 uStack_66;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined1 local_2f;
  undefined8 local_28;
  
  uStack_80 = param_3[1];
  uStack_88 = *param_3;
  uStack_70 = param_3[3];
  local_78 = param_3[2];
  local_68 = *(undefined1 *)(param_3 + 4);
  local_90 = param_2;
  local_67 = param_4;
  local_60 = param_5;
  local_58 = param_2;
  local_50 = uStack_88;
  uStack_48 = uStack_80;
  uStack_40 = local_78;
  uStack_38 = uStack_70;
  local_30 = local_68;
  local_2f = param_4;
  local_28 = param_5;
  FUN_1005a037c(&local_90,auStack_c8);
  FUN_100545970(&local_58);
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = local_78;
  param_1[2] = uStack_80;
  param_1[5] = CONCAT62(uStack_66,CONCAT11(local_67,local_68));
  param_1[4] = uStack_70;
  param_1[6] = local_60;
  return;
}



/* Address: 0x1005a48ac | FUN_1005a48ac */

void FUN_1005a48ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long extraout_x8;
  long lVar1;
  long unaff_x21;
  undefined1 auStack_150 [4];
  uint local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined1 auStack_138 [56];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined6 uStack_d6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  
  lVar1 = *(long *)(param_6 + -8);
  local_13c = param_4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar1 + 0x40));
  (**(code **)(lVar1 + 0x10))(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1005259a8(&local_90,auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_6,param_7,
                param_8);
  if (unaff_x21 == 0) {
    local_148 = uStack_78;
    local_14c = (uint)local_70;
    (**(code **)(lVar1 + 8))(param_3,param_6);
    uStack_f8 = local_90;
    local_f0 = uStack_88;
    uStack_e8 = local_80;
    local_e0 = local_148;
    uStack_d8 = (undefined1)local_14c;
    uStack_d7 = (undefined1)local_13c;
    local_c0 = local_90;
    uStack_b8 = uStack_88;
    local_b0 = local_80;
    uStack_a8 = local_148;
    local_100 = param_2;
    local_d0 = param_5;
    uStack_c8 = param_2;
    local_a0 = uStack_d8;
    local_9f = uStack_d7;
    local_98 = param_5;
    FUN_1005a037c(&local_100,auStack_138);
    FUN_100545970(&uStack_c8);
    param_1[1] = uStack_f8;
    *param_1 = local_100;
    param_1[3] = uStack_e8;
    param_1[2] = local_f0;
    param_1[5] = CONCAT62(uStack_d6,CONCAT11(uStack_d7,uStack_d8));
    param_1[4] = local_e0;
    param_1[6] = local_d0;
  }
  else {
    (**(code **)(lVar1 + 8))(param_3,param_6);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_5);
  }
  return;
}



/* Address: 0x1005a4a3c | FUN_1005a4a3c */

void FUN_1005a4a3c(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  Hasher HVar4;
  char *pcVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar5 = (char *)0x746e65746e6f63;
  pcVar1 = (char *)0x726f7272457369;
  if (bVar3 != 2) {
    pcVar1 = (char *)0x6174656d5f;
  }
  HVar4.unknown = &DAT_e700000000000000;
  if (bVar3 != 2) {
    HVar4.unknown = &DAT_e500000000000000;
  }
  if (bVar3 != 0) {
    pcVar5 = (char *)0xd000000000000011;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar3 != 0) {
    puVar2 = (undefined1 *)0x8000000100dad930;
  }
  if (bVar3 < 2) {
    HVar4.unknown = puVar2;
    pcVar1 = pcVar5;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005a4afc | FUN_1005a4afc */

void FUN_1005a4afc(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char *pcVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar4 = *unaff_x20;
  pcVar5 = (char *)0x746e65746e6f63;
  pcVar1 = (char *)0x726f7272457369;
  if (bVar4 != 2) {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  if (bVar4 != 0) {
    pcVar5 = (char *)0xd000000000000011;
  }
  puVar3 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar3 = (undefined1 *)0x8000000100dad930;
  }
  if (bVar4 < 2) {
    puVar2 = puVar3;
    pcVar1 = pcVar5;
  }
  SVar6.bridgeObject = puVar2;
  SVar6.str = pcVar1;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1005a4b98 | FUN_1005a4b98 */

void FUN_1005a4b98(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  Hasher HVar4;
  char *pcVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar5 = (char *)0x746e65746e6f63;
  pcVar1 = (char *)0x726f7272457369;
  if (bVar3 != 2) {
    pcVar1 = (char *)0x6174656d5f;
  }
  HVar4.unknown = &DAT_e700000000000000;
  if (bVar3 != 2) {
    HVar4.unknown = &DAT_e500000000000000;
  }
  if (bVar3 != 0) {
    pcVar5 = (char *)0xd000000000000011;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar3 != 0) {
    puVar2 = (undefined1 *)0x8000000100dad930;
  }
  if (bVar3 < 2) {
    HVar4.unknown = puVar2;
    pcVar1 = pcVar5;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005a4c54 | FUN_1005a4c54 */

void FUN_1005a4c54(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1005a85ac(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1005a4c80 | FUN_1005a4c80 */

void FUN_1005a4c80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar5 = 0x746e65746e6f63;
  uVar1 = 0x726f7272457369;
  if (bVar4 != 2) {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  if (bVar4 != 0) {
    uVar5 = 0xd000000000000011;
  }
  puVar3 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar3 = (undefined1 *)0x8000000100dad930;
  }
  if (bVar4 < 2) {
    puVar2 = puVar3;
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1005a4d00 | FUN_1005a4d00 */

undefined1  [16] FUN_1005a4d00(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar5 = 0x746e65746e6f63;
  uVar1 = 0x726f7272457369;
  if (bVar4 != 2) {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  if (bVar4 != 0) {
    uVar5 = 0xd000000000000011;
  }
  puVar3 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar3 = (undefined1 *)0x8000000100dad930;
  }
  if (bVar4 < 2) {
    puVar2 = puVar3;
    uVar1 = uVar5;
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Address: 0x1005a4d7c | FUN_1005a4d7c */

void FUN_1005a4d7c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005a85ac();
  *param_1 = param_2;
  return;
}



/* Address: 0x1005a4da0 | FUN_1005a4da0 */

void FUN_1005a4da0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd2db8;
  FUN_1000f7830(&DAT_100fd2db8,&DAT_100c613a0);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x1005a4de0 | FUN_1005a4de0 */

String FUN_1005a4de0(void)

{
  String SVar1;
  
  FUN_1005a84bc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005a4e08 | FUN_1005a4e08 */

String FUN_1005a4e08(void)

{
  String SVar1;
  
  FUN_1005a84bc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005a4e30 | FUN_1005a4e30 */

void FUN_1005a4e30(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_e0 [8];
  undefined1 local_d8 [39];
  undefined1 local_b1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  puVar1 = &DAT_100fd2720;
  FUN_1000f7830(&DAT_100fd2720,&BYTE_100c60350);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a84bc();
  Swift::Encoder::_container();
  local_b0 = *unaff_x20;
  local_d8[0] = 0;
  puVar2 = &DAT_100fd2730;
  FUN_1000f7830(&DAT_100fd2730,&BYTE_100c60358);
  puVar3 = puVar2;
  FUN_1005a84fc();
  Swift::KeyedEncodingContainer::_encode(&local_b0,local_d8,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    uStack_78 = unaff_x20[2];
    local_80 = unaff_x20[1];
    uStack_68 = unaff_x20[4];
    uStack_70 = unaff_x20[3];
    local_60 = *(undefined1 *)(unaff_x20 + 5);
    uStack_a8 = unaff_x20[2];
    local_b0 = unaff_x20[1];
    uStack_98 = unaff_x20[4];
    local_a0 = unaff_x20[3];
    local_90 = *(undefined1 *)(unaff_x20 + 5);
    local_b1 = 1;
    puVar4 = &local_80;
    FUN_1005a1058(puVar4,local_d8);
    FUN_1004d9ea8();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_b0,&local_b1,puVar1,&DAT_100edd000,puVar4);
    FUN_100524e98(local_b0,uStack_a8,local_a0,uStack_98,local_90);
    uVar5 = (ulong)*(byte *)((long)unaff_x20 + 0x29);
    local_b0 = CONCAT71(local_b0._1_7_,2);
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,&local_b0,puVar1);
    local_b0 = unaff_x20[6];
    local_d8[0] = 3;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_b0,local_d8,puVar1,&DAT_100edcda0,uVar5);
  }
  (**(code **)(lVar6 + 8))(auStack_e0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1005a5030 | FUN_1005a5030 */

void FUN_1005a5030(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1005a8610(&local_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[3] = uStack_40;
    param_1[2] = local_48;
    param_1[5] = uStack_30;
    param_1[4] = local_38;
    param_1[6] = local_28;
  }
  return;
}



/* Address: 0x1005a507c | thunk_FUN_1005a6440 */

void thunk_FUN_1005a6440(void)

{
  FUN_1005a6440();
  return;
}



/* Address: 0x1005a5080 | FUN_1005a5080 */

void FUN_1005a5080(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  long *unaff_x20;
  __uint64 _Var2;
  long lVar3;
  undefined8 *puVar4;
  long local_140;
  long lStack_138;
  long local_130;
  ulong uStack_128;
  char local_120;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  lVar3 = *unaff_x20;
  _Var2 = *(__uint64 *)(lVar3 + 0x10);
  Swift::Hasher::_combine(_Var2,param_2);
  if (_Var2 != 0) {
    puVar4 = (undefined8 *)(lVar3 + 0x20);
    do {
      uStack_b8 = puVar4[1];
      local_c0 = *puVar4;
      uStack_a8 = puVar4[3];
      uStack_b0 = puVar4[2];
      uStack_98 = puVar4[5];
      local_a0 = puVar4[4];
      uStack_88 = puVar4[7];
      uStack_90 = puVar4[6];
      uStack_78 = puVar4[9];
      local_80 = puVar4[8];
      uStack_68 = puVar4[0xb];
      local_70 = puVar4[10];
      uStack_60 = puVar4[0xc];
      uStack_4f = *(undefined8 *)((long)puVar4 + 0x71);
      uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)puVar4 + 0x69) >> 0x38);
      uStack_58 = (undefined1)puVar4[0xd];
      local_57 = (undefined7)((ulong)puVar4[0xd] >> 8);
      param_2.unknown = (undefined *)&local_140;
      FUN_1005a891c(&local_c0);
      FUN_1005a23ac(param_1);
      FUN_1005a8950(&local_c0);
      puVar4 = puVar4 + 0x10;
      _Var2 = _Var2 - 1;
    } while (_Var2 != 0);
  }
  if ((((unaff_x20[4] ^ 0xffffffffffffffffU) & 0x3000000000000000) == 0) &&
     ((char)unaff_x20[5] == -1)) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    local_130 = unaff_x20[3];
    lStack_138 = unaff_x20[2];
    local_140 = unaff_x20[1];
    uStack_128 = unaff_x20[4];
    local_120 = (char)unaff_x20[5];
    Swift::Hasher::_combine(1,param_2);
    FUN_100525cfc(param_1);
  }
  bVar1 = *(byte *)((long)unaff_x20 + 0x29);
  if (bVar1 == 2) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar1 = bVar1 & 1;
  }
  Swift::Hasher::_combine(bVar1,param_2);
  lVar3 = unaff_x20[6];
  if (lVar3 == 0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004df778(param_1,lVar3);
  }
  return;
}



/* Address: 0x1005a51dc | FUN_1005a51dc */

void FUN_1005a51dc(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005a5080();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a5218 | thunk_FUN_1005a5080 */

void thunk_FUN_1005a5080(void)

{
  FUN_1005a5080();
  return;
}



/* Address: 0x1005a521c | FUN_1005a521c */

void FUN_1005a521c(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005a5080();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a5254 | FUN_1005a5254 */

void FUN_1005a5254(void)

{
  FUN_1005a4e30();
  return;
}



/* Address: 0x1005a5268 | FUN_1005a5268 */

uint FUN_1005a5268(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  local_60 = param_1[6];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  local_30 = param_2[4];
  local_20 = param_2[6];
  FUN_1005a6440(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x1005a52c0 | FUN_1005a52c0 */

undefined * FUN_1005a52c0(void)

{
  return &DAT_100ee3958;
}



/* Address: 0x1005a52cc | FUN_1005a52cc */

undefined1  [16] FUN_1005a52cc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dadff0;
  auVar1._0_8_ = 0xd000000000000020;
  return auVar1;
}



/* Address: 0x1005a52e8 | FUN_1005a52e8 */

String FUN_1005a52e8(void)

{
  String SVar1;
  
  FUN_1005a897c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005a5310 | FUN_1005a5310 */

String FUN_1005a5310(void)

{
  String SVar1;
  
  FUN_1005a897c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005a5338 | FUN_1005a5338 */

void FUN_1005a5338(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd2748;
  FUN_1000f7830(&DAT_100fd2748,&BYTE_100c60360);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a897c();
  Swift::Encoder::_container();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1005a5400 | FUN_1005a5400 */

undefined8
FUN_1005a5400(_StringGuts param_1,_StringGuts param_2,uint param_3,undefined *param_4,
             undefined *param_5,uint param_6)

{
  bool bVar1;
  
  if (param_2.unknown == (undefined *)0x0) {
    if (param_5 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (param_5 == (undefined *)0x0) {
      return 0;
    }
    if (((param_1.unknown != param_4) || (param_2.unknown != param_5)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          (param_1,param_2,(_StringComparisonResult)(__int8)param_4), !bVar1)) {
      return 0;
    }
  }
  if ((param_3 & 0xff) == 2) {
    if ((param_6 & 0xff) != 2) {
      return 0;
    }
  }
  else {
    if ((param_6 & 0xff) == 2) {
      return 0;
    }
    if (((param_3 ^ param_6) & 1) != 0) {
      return 0;
    }
  }
  if ((param_3 & 0xff00) == 0x200) {
    if ((param_6 & 0xff00) != 0x200) {
      return 0;
    }
  }
  else {
    if ((param_6 & 0xff00) == 0x200) {
      return 0;
    }
    if (((param_3 ^ param_6) >> 8 & 1) != 0) {
      return 0;
    }
  }
  if ((param_3 & 0xff0000) == 0x20000) {
    if ((param_6 & 0xff0000) != 0x20000) {
      return 0;
    }
  }
  else {
    if ((param_6 & 0xff0000) == 0x20000) {
      return 0;
    }
    if (((param_3 ^ param_6) >> 0x10 & 1) != 0) {
      return 0;
    }
  }
  if (param_3 >> 0x18 == 2) {
    if (param_6 >> 0x18 != 2) {
      return 0;
    }
  }
  else {
    if (param_6 >> 0x18 == 2) {
      return 0;
    }
    if (((param_3 ^ param_6) >> 0x18 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



/* Address: 0x1005a551c | FUN_1005a551c */

void FUN_1005a551c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd26b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61348;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61348,&DAT_100ee41a8);
  DAT_100fd26b0 = pTVar1;
  return;
}



/* Address: 0x1005a555c | FUN_1005a555c */

uint FUN_1005a555c(undefined8 *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 *puVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_1a8 [40];
  long local_180;
  long lStack_178;
  long local_170;
  ulong uStack_168;
  char local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong uStack_138;
  char local_130;
  long local_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined1 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  char local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  ulong uStack_80;
  char local_78;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar3)) {
    _Var6.unknown = (undefined *)param_1[3];
    puVar7 = (undefined *)param_2[3];
    if (_Var6.unknown == (undefined *)0x0) {
      if (puVar7 == (undefined *)0x0) {
LAB_1005a55e0:
        _Var6.unknown = (undefined *)param_1[5];
        puVar7 = (undefined *)param_2[5];
        if (_Var6.unknown == (undefined *)0x0) {
          if (puVar7 == (undefined *)0x0) {
LAB_1005a561c:
            uStack_e8 = param_1[7];
            local_f0 = param_1[6];
            uStack_d8 = param_1[9];
            uStack_e0 = param_1[8];
            local_d0 = *(undefined1 *)(param_1 + 10);
            lStack_118 = param_2[7];
            local_120 = param_2[6];
            lStack_108 = param_2[9];
            lStack_110 = param_2[8];
            local_100 = (undefined1)param_2[10];
            puVar5 = &local_f0;
            FUN_100527718(puVar5,&local_120);
            if (((ulong)puVar5 & 1) != 0) {
              uVar9 = param_1[0xb];
              lVar8 = param_2[0xb];
              if (uVar9 == 0) {
                if (lVar8 == 0) {
LAB_1005a5698:
                  uVar11 = param_1[0xd];
                  uVar10 = param_1[0xc];
                  uVar9 = param_1[0xf];
                  uVar13 = param_1[0xe];
                  cVar1 = *(char *)(param_1 + 0x10);
                  lVar12 = param_2[0xd];
                  lVar8 = param_2[0xc];
                  uVar15 = param_2[0xf];
                  lVar14 = param_2[0xe];
                  cVar2 = (char)param_2[0x10];
                  bVar3 = ((uVar15 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
                  local_180 = lVar8;
                  lStack_178 = lVar12;
                  local_170 = lVar14;
                  uStack_168 = uVar15;
                  local_160 = cVar2;
                  local_150 = uVar10;
                  uStack_148 = uVar11;
                  local_140 = uVar13;
                  uStack_138 = uVar9;
                  local_130 = cVar1;
                  if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar1 == -1)) {
                    if (!bVar3 || cVar2 != -1) {
LAB_1005a5730:
                      FUN_1005a1058(&local_150,&local_98);
                      FUN_1005a1058(&local_180,&local_98);
                      FUN_100524e98(uVar10,uVar11,uVar13,uVar9,cVar1);
                      FUN_100524e98(lVar8,lVar12,lVar14,uVar15,cVar2);
                    }
                    else {
                      FUN_1005a1058(&local_150,&local_98);
                      FUN_1005a1058(&local_180,&local_98);
                      FUN_100524e98(uVar10,uVar11,uVar13,uVar9,0xff);
LAB_1005a5820:
                      uVar9 = param_1[0x11];
                      lVar8 = param_2[0x11];
                      if (uVar9 == 0) {
                        if (lVar8 == 0) {
LAB_1005a5868:
                          uVar10 = param_1[0x12];
                          FUN_1005a5400(uVar10,param_1[0x13],*(undefined4 *)(param_1 + 0x14),
                                        param_2[0x12],param_2[0x13],(int)param_2[0x14]);
                          uVar4 = (uint)uVar10;
                          goto LAB_1005a5784;
                        }
                      }
                      else if (lVar8 != 0) {
                        _swift_bridgeObjectRetain(lVar8);
                        uVar15 = uVar9;
                        _swift_bridgeObjectRetain();
                        FUN_100523efc();
                        _swift_bridgeObjectRelease(uVar9);
                        _swift_bridgeObjectRelease(lVar8);
                        if ((uVar15 & 1) != 0) goto LAB_1005a5868;
                      }
                    }
                  }
                  else {
                    if (bVar3 && cVar2 == -1) goto LAB_1005a5730;
                    local_c0 = uVar10;
                    uStack_b8 = uVar11;
                    local_b0 = uVar13;
                    uStack_a8 = uVar9;
                    local_a0 = cVar1;
                    local_98 = lVar8;
                    lStack_90 = lVar12;
                    local_88 = lVar14;
                    uStack_80 = uVar15;
                    local_78 = cVar2;
                    FUN_1005a1058(&local_150,auStack_1a8);
                    FUN_1005a1058(&local_180,auStack_1a8);
                    puVar5 = &local_c0;
                    FUN_100527718(puVar5,&local_98);
                    FUN_100524e98(lVar8,lVar12,lVar14,uVar15,cVar2);
                    FUN_100524e98(uVar10,uVar11,uVar13,uVar9,cVar1);
                    if (((ulong)puVar5 & 1) != 0) goto LAB_1005a5820;
                  }
                }
              }
              else if (lVar8 != 0) {
                _swift_bridgeObjectRetain(lVar8);
                uVar15 = uVar9;
                _swift_bridgeObjectRetain();
                FUN_100554f9c();
                _swift_bridgeObjectRelease(uVar9);
                _swift_bridgeObjectRelease(lVar8);
                if ((uVar15 & 1) != 0) goto LAB_1005a5698;
              }
            }
          }
        }
        else if (puVar7 != (undefined *)0x0) {
          if ((((undefined *)param_1[4] == (undefined *)param_2[4]) && (_Var6.unknown == puVar7)) ||
             (bVar3 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)param_1[4],_Var6,
                                 (_StringComparisonResult)(__int8)(undefined *)param_2[4]), bVar3))
          goto LAB_1005a561c;
        }
      }
    }
    else if (puVar7 != (undefined *)0x0) {
      if (((undefined *)param_1[2] == (undefined *)param_2[2] && _Var6.unknown == puVar7) ||
         (bVar3 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[2],_Var6,
                             (_StringComparisonResult)(__int8)(undefined *)param_2[2]), bVar3))
      goto LAB_1005a55e0;
    }
  }
  uVar4 = 0;
LAB_1005a5784:
  return uVar4 & 1;
}



/* Address: 0x1005a5880 | FUN_1005a5880 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1005a5880(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  _StringGuts _Var13;
  _StringGuts _Var14;
  _StringGuts _Var15;
  _StringGuts _Var16;
  _StringGuts _Var17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  bool bVar22;
  int iVar23;
  undefined8 *puVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long local_310;
  long local_308;
  long local_300;
  long local_2f0;
  undefined8 local_2e8;
  long local_290;
  long lStack_288;
  undefined8 local_280;
  long local_278;
  long local_270;
  long lStack_268;
  long local_260;
  long lStack_258;
  long local_250;
  long lStack_248;
  long local_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long local_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 uStack_1d8;
  undefined7 local_1d7;
  undefined1 uStack_1d0;
  undefined8 uStack_1cf;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined8 uStack_14f;
  long local_138;
  long local_130;
  undefined1 local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long local_c0;
  long lStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  
  uStack_178 = param_1[9];
  local_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  local_160 = param_1[0xc];
  uStack_158 = (undefined1)param_1[0xd];
  uStack_14f = *(undefined8 *)((long)param_1 + 0x71);
  uStack_157 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_150 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_1b8 = param_1[1];
  local_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_198 = param_1[5];
  local_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  iVar23 = (int)&local_1c0;
  FUN_1004dbae4();
  if (1 < iVar23) {
    if (iVar23 == 2) {
      puVar24 = &local_1c0;
      FUN_100004520();
      _Var3.unknown = (undefined *)*puVar24;
      _Var5.unknown = (undefined *)puVar24[1];
      _Var4.unknown = (undefined *)puVar24[2];
      _Var6.unknown = (undefined *)puVar24[3];
      lVar27 = puVar24[4];
      local_2f0 = puVar24[5];
      local_2e8 = puVar24[6];
      lVar29 = puVar24[7];
      lVar33 = puVar24[8];
      plVar32 = (long *)puVar24[9];
      lStack_1f8 = param_2[9];
      local_200 = param_2[8];
      lStack_1e8 = param_2[0xb];
      local_1f0 = param_2[10];
      lStack_1e0 = param_2[0xc];
      uStack_1d8 = (undefined1)param_2[0xd];
      uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
      local_1d7 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
      uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
      lStack_218 = param_2[5];
      local_220 = param_2[4];
      lStack_208 = param_2[7];
      lStack_210 = param_2[6];
      lStack_238 = param_2[1];
      local_240 = *param_2;
      lStack_228 = param_2[3];
      lStack_230 = param_2[2];
      iVar23 = (int)&local_240;
      FUN_1004dbae4();
      if (iVar23 != 2) {
        return 0;
      }
      plVar25 = &local_240;
      FUN_100004520();
      puVar8 = (undefined *)plVar25[2];
      puVar9 = (undefined *)plVar25[3];
      lVar26 = plVar25[4];
      lVar28 = plVar25[5];
      local_310 = plVar25[6];
      local_308 = plVar25[7];
      local_300 = plVar25[8];
      lVar30 = plVar25[9];
      if (((_Var3.unknown != (undefined *)*plVar25) || (_Var5.unknown != (undefined *)plVar25[1]))
         && (bVar22 = Swift::_stringCompareWithSmolCheck
                                (_Var3,_Var5,(_StringComparisonResult)(__int8)(undefined *)*plVar25)
            , !bVar22)) {
        return 0;
      }
      if (((_Var4.unknown != puVar8) || (_Var6.unknown != puVar9)) &&
         (bVar22 = Swift::_stringCompareWithSmolCheck
                             (_Var4,_Var6,(_StringComparisonResult)(__int8)puVar8), !bVar22)) {
        return 0;
      }
      if (lVar27 == 1) {
joined_r0x0001005a5da8:
        if (lVar26 == 1) goto joined_r0x0001005a60f4;
      }
      else if (lVar26 != 1) {
        local_280 = CONCAT71(local_280._1_7_,(char)local_310);
        local_b0 = CONCAT71(local_b0._1_7_,(char)local_2e8);
        local_290 = lVar26;
        lStack_288 = lVar28;
        local_278 = local_308;
        local_270 = local_300;
        local_c0 = lVar27;
        lStack_b8 = local_2f0;
        local_a8 = lVar29;
        local_a0 = lVar33;
        FUN_1004dbc6c(lVar26,lVar28,local_310,local_308,local_300);
        FUN_1004dbc6c(lVar27,local_2f0,local_2e8,lVar29,lVar33);
        plVar25 = &local_c0;
        FUN_10057f470(plVar25,&local_290);
        _swift_bridgeObjectRelease(lVar26);
        _swift_bridgeObjectRelease(local_300);
        FUN_100558f34(lVar27,local_2f0,local_2e8,lVar29,lVar33);
joined_r0x0001005a601c:
        if (((ulong)plVar25 & 1) == 0) {
          return 0;
        }
        goto joined_r0x0001005a60f4;
      }
LAB_1005a5e9c:
      lStack_248 = local_300;
      goto LAB_1005a5ec4;
    }
    if (iVar23 != 3) {
      puVar24 = &local_1c0;
      FUN_100004520();
      _Var3.unknown = (undefined *)*puVar24;
      _Var13.unknown = (undefined *)puVar24[1];
      _Var4.unknown = (undefined *)puVar24[2];
      _Var14.unknown = (undefined *)puVar24[3];
      _Var5.unknown = (undefined *)puVar24[4];
      _Var15.unknown = (undefined *)puVar24[5];
      _Var6.unknown = (undefined *)puVar24[6];
      _Var16.unknown = (undefined *)puVar24[7];
      _Var7.unknown = (undefined *)puVar24[8];
      _Var17.unknown = (undefined *)puVar24[9];
      lVar27 = puVar24[10];
      local_2f0 = puVar24[0xb];
      local_2e8 = puVar24[0xc];
      lVar29 = puVar24[0xd];
      lVar33 = puVar24[0xe];
      lStack_218 = param_2[5];
      local_220 = param_2[4];
      lStack_208 = param_2[7];
      lStack_210 = param_2[6];
      lStack_1f8 = param_2[9];
      local_200 = param_2[8];
      lStack_1e8 = param_2[0xb];
      local_1f0 = param_2[10];
      lStack_1e0 = param_2[0xc];
      uStack_1d8 = (undefined1)param_2[0xd];
      uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
      local_1d7 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
      uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
      lStack_238 = param_2[1];
      local_240 = *param_2;
      lStack_228 = param_2[3];
      lStack_230 = param_2[2];
      iVar23 = (int)&local_240;
      FUN_1004dbae4();
      if (iVar23 != 4) {
        return 0;
      }
      plVar32 = &local_240;
      FUN_100004520();
      puVar8 = (undefined *)plVar32[2];
      puVar18 = (undefined *)plVar32[3];
      puVar9 = (undefined *)plVar32[4];
      puVar19 = (undefined *)plVar32[5];
      puVar10 = (undefined *)plVar32[6];
      puVar20 = (undefined *)plVar32[7];
      puVar11 = (undefined *)plVar32[8];
      puVar21 = (undefined *)plVar32[9];
      lVar26 = plVar32[10];
      lVar28 = plVar32[0xb];
      lVar2 = plVar32[0xc];
      lVar30 = plVar32[0xd];
      lVar31 = plVar32[0xe];
      if (((_Var3.unknown != (undefined *)*plVar32) || (_Var13.unknown != (undefined *)plVar32[1]))
         && (bVar22 = Swift::_stringCompareWithSmolCheck
                                (_Var3,_Var13,(_StringComparisonResult)(__int8)(undefined *)*plVar32
                                ), !bVar22)) {
        return 0;
      }
      if (((_Var4.unknown != puVar8) || (_Var14.unknown != puVar18)) &&
         (bVar22 = Swift::_stringCompareWithSmolCheck
                             (_Var4,_Var14,(_StringComparisonResult)(__int8)puVar8), !bVar22)) {
        return 0;
      }
      if (_Var15.unknown == (undefined *)0x0) {
        if (puVar19 != (undefined *)0x0) {
          return 0;
        }
      }
      else {
        if (puVar19 == (undefined *)0x0) {
          return 0;
        }
        if (((_Var5.unknown != puVar9) || (_Var15.unknown != puVar19)) &&
           (bVar22 = Swift::_stringCompareWithSmolCheck
                               (_Var5,_Var15,(_StringComparisonResult)(__int8)puVar9), !bVar22)) {
          return 0;
        }
      }
      if (_Var16.unknown == (undefined *)0x0) {
        if (puVar20 != (undefined *)0x0) {
          return 0;
        }
      }
      else {
        if (puVar20 == (undefined *)0x0) {
          return 0;
        }
        if (((_Var6.unknown != puVar10) || (_Var16.unknown != puVar20)) &&
           (bVar22 = Swift::_stringCompareWithSmolCheck
                               (_Var6,_Var16,(_StringComparisonResult)(__int8)puVar10), !bVar22)) {
          return 0;
        }
      }
      if (_Var17.unknown == (undefined *)0x0) {
        if (puVar21 != (undefined *)0x0) {
          return 0;
        }
      }
      else {
        if (puVar21 == (undefined *)0x0) {
          return 0;
        }
        if (((_Var7.unknown != puVar11) || (_Var17.unknown != puVar21)) &&
           (bVar22 = Swift::_stringCompareWithSmolCheck
                               (_Var7,_Var17,(_StringComparisonResult)(__int8)puVar11), !bVar22)) {
          return 0;
        }
      }
      if (lVar27 == 1) {
        if (lVar26 == 1) {
          return 1;
        }
      }
      else if (lVar26 != 1) {
        local_280 = CONCAT71(local_280._1_7_,(char)lVar2);
        local_b0 = CONCAT71(local_b0._1_7_,(char)local_2e8);
        local_290 = lVar26;
        lStack_288 = lVar28;
        local_278 = lVar30;
        local_270 = lVar31;
        local_c0 = lVar27;
        lStack_b8 = local_2f0;
        local_a8 = lVar29;
        local_a0 = lVar33;
        FUN_1004dbc6c();
        FUN_1004dbc6c(lVar27,local_2f0,local_2e8,lVar29,lVar33);
        plVar25 = &local_c0;
        FUN_10057f470(plVar25,&local_290);
        _swift_bridgeObjectRelease(lVar26);
        _swift_bridgeObjectRelease(lVar31);
        FUN_100558f34(lVar27,local_2f0,local_2e8,lVar29,lVar33);
        goto joined_r0x0001005a632c;
      }
      local_290 = lVar27;
      lStack_288 = local_2f0;
      local_280 = local_2e8;
      local_278 = lVar29;
      local_270 = lVar33;
      lStack_268 = lVar26;
      local_260 = lVar28;
      lStack_258 = lVar2;
      local_250 = lVar30;
      lStack_248 = lVar31;
      FUN_1004dbc6c();
      goto LAB_1005a5f28;
    }
    puVar24 = &local_1c0;
    FUN_100004520();
    uVar36 = puVar24[5];
    uVar34 = puVar24[4];
    uVar40 = puVar24[7];
    uVar38 = puVar24[6];
    uVar1 = puVar24[8];
    lVar27 = puVar24[9];
    uVar41 = puVar24[1];
    uVar39 = *puVar24;
    uVar37 = puVar24[3];
    uVar35 = puVar24[2];
    local_2f0 = puVar24[10];
    local_2e8 = puVar24[0xb];
    lVar29 = puVar24[0xc];
    lVar33 = puVar24[0xd];
    plVar32 = (long *)puVar24[0xe];
    lStack_238 = param_2[1];
    local_240 = *param_2;
    lStack_228 = param_2[3];
    lStack_230 = param_2[2];
    lStack_218 = param_2[5];
    local_220 = param_2[4];
    lStack_208 = param_2[7];
    lStack_210 = param_2[6];
    uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
    uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
    lStack_1e8 = param_2[0xb];
    local_1f0 = param_2[10];
    lStack_1e0 = param_2[0xc];
    uStack_1d8 = (undefined1)param_2[0xd];
    local_1d7 = (undefined7)((ulong)param_2[0xd] >> 8);
    lStack_1f8 = param_2[9];
    local_200 = param_2[8];
    iVar23 = (int)&local_240;
    FUN_1004dbae4();
    if (iVar23 != 3) {
      return 0;
    }
    plVar25 = &local_240;
    FUN_100004520();
    lStack_98 = plVar25[5];
    local_a0 = plVar25[4];
    lStack_88 = plVar25[7];
    lStack_90 = plVar25[6];
    local_80 = plVar25[8];
    lVar28 = plVar25[9];
    lStack_b8 = plVar25[1];
    local_c0 = *plVar25;
    local_a8 = plVar25[3];
    local_b0 = plVar25[2];
    lVar26 = plVar25[10];
    lVar31 = plVar25[0xb];
    lVar2 = plVar25[0xc];
    lVar12 = plVar25[0xd];
    lVar30 = plVar25[0xe];
    puVar24 = &local_110;
    local_110 = uVar39;
    uStack_108 = uVar41;
    uStack_100 = uVar35;
    uStack_f8 = uVar37;
    local_f0 = uVar34;
    uStack_e8 = uVar36;
    uStack_e0 = uVar38;
    uStack_d8 = uVar40;
    local_d0 = uVar1;
    FUN_10057fa24(puVar24,&local_c0);
    if (((ulong)puVar24 & 1) == 0) {
      return 0;
    }
    if (lVar27 == 1) {
      if (lVar28 != 1) {
LAB_1005a5ee8:
        local_290 = lVar27;
        lStack_288 = local_2f0;
        local_280 = local_2e8;
        local_278 = lVar29;
        local_270 = lVar33;
        lStack_268 = lVar28;
        local_260 = lVar26;
        lStack_258 = lVar31;
        local_250 = lVar2;
        lStack_248 = lVar12;
        FUN_1004dbc6c(lVar28,lVar26,lVar31,lVar2,lVar12);
        goto LAB_1005a5f28;
      }
    }
    else {
      if (lVar28 == 1) goto LAB_1005a5ee8;
      local_280 = CONCAT71(local_280._1_7_,(char)lVar31);
      local_128 = (undefined1)local_2e8;
      local_290 = lVar28;
      lStack_288 = lVar26;
      local_278 = lVar2;
      local_270 = lVar12;
      local_138 = lVar27;
      local_130 = local_2f0;
      local_120 = lVar29;
      local_118 = lVar33;
      FUN_1004dbc6c(lVar28,lVar26,lVar31,lVar2,lVar12);
      FUN_1004dbc6c(lVar27,local_2f0,local_2e8,lVar29,lVar33);
      plVar25 = &local_138;
      FUN_10057f470(plVar25,&local_290);
      _swift_bridgeObjectRelease(lVar28);
      _swift_bridgeObjectRelease(lVar12);
      FUN_100558f34(lVar27,local_2f0,local_2e8,lVar29,lVar33);
      if (((ulong)plVar25 & 1) == 0) {
        return 0;
      }
    }
    if (plVar32 == (long *)0x0) goto joined_r0x0001005a60fc;
    if (lVar30 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar30);
    plVar25 = plVar32;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(plVar32);
    _swift_bridgeObjectRelease(lVar30);
    goto joined_r0x0001005a632c;
  }
  if (iVar23 != 0) {
    puVar24 = &local_1c0;
    FUN_100004520();
    _Var3.unknown = (undefined *)*puVar24;
    _Var5.unknown = (undefined *)puVar24[1];
    _Var4.unknown = (undefined *)puVar24[2];
    _Var6.unknown = (undefined *)puVar24[3];
    lVar27 = puVar24[4];
    local_2f0 = puVar24[5];
    local_2e8 = puVar24[6];
    lVar29 = puVar24[7];
    lVar33 = puVar24[8];
    plVar32 = (long *)puVar24[9];
    lStack_1f8 = param_2[9];
    local_200 = param_2[8];
    lStack_1e8 = param_2[0xb];
    local_1f0 = param_2[10];
    lStack_1e0 = param_2[0xc];
    uStack_1d8 = (undefined1)param_2[0xd];
    uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
    local_1d7 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
    uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
    lStack_218 = param_2[5];
    local_220 = param_2[4];
    lStack_208 = param_2[7];
    lStack_210 = param_2[6];
    lStack_238 = param_2[1];
    local_240 = *param_2;
    lStack_228 = param_2[3];
    lStack_230 = param_2[2];
    iVar23 = (int)&local_240;
    FUN_1004dbae4();
    if (iVar23 != 1) {
      return 0;
    }
    plVar25 = &local_240;
    FUN_100004520();
    puVar8 = (undefined *)plVar25[2];
    puVar9 = (undefined *)plVar25[3];
    lVar26 = plVar25[4];
    lVar28 = plVar25[5];
    local_310 = plVar25[6];
    local_308 = plVar25[7];
    local_300 = plVar25[8];
    lVar30 = plVar25[9];
    if (((_Var3.unknown != (undefined *)*plVar25) || (_Var5.unknown != (undefined *)plVar25[1])) &&
       (bVar22 = Swift::_stringCompareWithSmolCheck
                           (_Var3,_Var5,(_StringComparisonResult)(__int8)(undefined *)*plVar25),
       !bVar22)) {
      return 0;
    }
    if (((_Var4.unknown != puVar8) || (_Var6.unknown != puVar9)) &&
       (bVar22 = Swift::_stringCompareWithSmolCheck
                           (_Var4,_Var6,(_StringComparisonResult)(__int8)puVar8), !bVar22)) {
      return 0;
    }
    if (lVar27 == 1) goto joined_r0x0001005a5da8;
    if (lVar26 == 1) goto LAB_1005a5e9c;
    local_280 = CONCAT71(local_280._1_7_,(char)local_310);
    local_b0 = CONCAT71(local_b0._1_7_,(char)local_2e8);
    local_290 = lVar26;
    lStack_288 = lVar28;
    local_278 = local_308;
    local_270 = local_300;
    local_c0 = lVar27;
    lStack_b8 = local_2f0;
    local_a8 = lVar29;
    local_a0 = lVar33;
    FUN_1004dbc6c(lVar26,lVar28,local_310,local_308,local_300);
    FUN_1004dbc6c(lVar27,local_2f0,local_2e8,lVar29,lVar33);
    plVar25 = &local_c0;
    FUN_10057f470(plVar25,&local_290);
    _swift_bridgeObjectRelease(lVar26);
    _swift_bridgeObjectRelease(local_300);
    FUN_100558f34(lVar27,local_2f0,local_2e8,lVar29,lVar33);
    if (((ulong)plVar25 & 1) == 0) {
      return 0;
    }
joined_r0x0001005a60f4:
    if (plVar32 == (long *)0x0) {
joined_r0x0001005a60fc:
      if (lVar30 == 0) {
        return 1;
      }
      return 0;
    }
    if (lVar30 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar30);
    plVar25 = plVar32;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(plVar32);
    _swift_bridgeObjectRelease(lVar30);
joined_r0x0001005a632c:
    if (((ulong)plVar25 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  puVar24 = &local_1c0;
  FUN_100004520();
  _Var3.unknown = (undefined *)*puVar24;
  _Var4.unknown = (undefined *)puVar24[1];
  lVar27 = puVar24[2];
  local_2f0 = puVar24[3];
  local_2e8 = puVar24[4];
  lVar29 = puVar24[5];
  lVar33 = puVar24[6];
  plVar32 = (long *)puVar24[7];
  lStack_1f8 = param_2[9];
  local_200 = param_2[8];
  lStack_1e8 = param_2[0xb];
  local_1f0 = param_2[10];
  lStack_1e0 = param_2[0xc];
  uStack_1d8 = (undefined1)param_2[0xd];
  uStack_1cf = *(undefined8 *)((long)param_2 + 0x71);
  local_1d7 = (undefined7)*(undefined8 *)((long)param_2 + 0x69);
  uStack_1d0 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  lStack_218 = param_2[5];
  local_220 = param_2[4];
  lStack_208 = param_2[7];
  lStack_210 = param_2[6];
  lStack_238 = param_2[1];
  local_240 = *param_2;
  lStack_228 = param_2[3];
  lStack_230 = param_2[2];
  iVar23 = (int)&local_240;
  FUN_1004dbae4();
  if (iVar23 != 0) {
    return 0;
  }
  plVar25 = &local_240;
  FUN_100004520();
  lVar26 = plVar25[2];
  lVar28 = plVar25[3];
  local_310 = plVar25[4];
  local_308 = plVar25[5];
  lVar2 = plVar25[6];
  lVar30 = plVar25[7];
  if (((_Var3.unknown != (undefined *)*plVar25) || (_Var4.unknown != (undefined *)plVar25[1])) &&
     (bVar22 = Swift::_stringCompareWithSmolCheck
                         (_Var3,_Var4,(_StringComparisonResult)(__int8)(undefined *)*plVar25),
     !bVar22)) {
    return 0;
  }
  lStack_248 = lVar2;
  if (lVar27 == 1) {
    if (lVar26 == 1) goto joined_r0x0001005a60f4;
  }
  else if (lVar26 != 1) {
    local_280 = CONCAT71(local_280._1_7_,(char)local_310);
    local_b0 = CONCAT71(local_b0._1_7_,(char)local_2e8);
    local_290 = lVar26;
    lStack_288 = lVar28;
    local_278 = local_308;
    local_270 = lVar2;
    local_c0 = lVar27;
    lStack_b8 = local_2f0;
    local_a8 = lVar29;
    local_a0 = lVar33;
    FUN_1004dbc6c(lVar26,lVar28,local_310,local_308);
    FUN_1004dbc6c(lVar27,local_2f0,local_2e8,lVar29,lVar33);
    plVar25 = &local_c0;
    FUN_10057f470(plVar25,&local_290);
    _swift_bridgeObjectRelease(lVar26);
    _swift_bridgeObjectRelease(lVar2);
    FUN_100558f34(lVar27,local_2f0,local_2e8,lVar29,lVar33);
    goto joined_r0x0001005a601c;
  }
LAB_1005a5ec4:
  local_290 = lVar27;
  lStack_288 = local_2f0;
  local_280 = local_2e8;
  local_278 = lVar29;
  local_270 = lVar33;
  lStack_268 = lVar26;
  local_260 = lVar28;
  lStack_258 = local_310;
  local_250 = local_308;
  FUN_1004dbc6c(lVar26,lVar28,local_310,local_308);
LAB_1005a5f28:
  FUN_1004dbc6c(lVar27,local_2f0,local_2e8,lVar29,lVar33);
  FUN_100558eb0(&local_290);
  return 0;
}



/* Address: 0x1005a6334 | FUN_1005a6334 */

undefined8
FUN_1005a6334(ulong param_1,_StringGuts param_2,_StringGuts param_3,ulong param_4,long param_5,
             undefined *param_6,undefined *param_7,long param_8)

{
  bool bVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    if (param_5 != 0) {
      return 0;
    }
  }
  else {
    if (param_5 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(param_5);
    uVar2 = param_1;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_5);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if (((param_2.unknown == param_6) && (param_3.unknown == param_7)) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_2,param_3,(_StringComparisonResult)(__int8)param_6), bVar1)) {
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      _swift_bridgeObjectRetain(param_8);
      uVar2 = param_4;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_8);
      if ((uVar2 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1005a6440 | FUN_1005a6440 */

undefined8 FUN_1005a6440(long *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_298 [40];
  long local_270;
  long lStack_268;
  long local_260;
  ulong uStack_258;
  char local_250;
  long local_1f0;
  long lStack_1e8;
  long local_1e0;
  ulong uStack_1d8;
  char local_1d0;
  long local_1c0;
  long lStack_1b8;
  long local_1b0;
  ulong uStack_1a8;
  char local_1a0;
  long local_198;
  long lStack_190;
  long local_188;
  ulong uStack_180;
  char local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  lVar8 = *param_1;
  lVar7 = *param_2;
  lVar10 = *(long *)(lVar8 + 0x10);
  if (lVar10 != *(long *)(lVar7 + 0x10)) {
    return 0;
  }
  if (lVar10 != 0 && lVar8 != lVar7) {
    puVar11 = (undefined8 *)(lVar8 + 0x20);
    puVar12 = (undefined8 *)(lVar7 + 0x20);
    do {
      uStack_168 = puVar11[1];
      local_170 = *puVar11;
      uStack_158 = puVar11[3];
      uStack_160 = puVar11[2];
      uStack_148 = puVar11[5];
      local_150 = puVar11[4];
      uStack_138 = puVar11[7];
      uStack_140 = puVar11[6];
      uStack_128 = puVar11[9];
      local_130 = puVar11[8];
      uStack_118 = puVar11[0xb];
      local_120 = puVar11[10];
      uStack_110 = puVar11[0xc];
      uStack_ff = *(undefined8 *)((long)puVar11 + 0x71);
      uStack_100 = (undefined1)((ulong)*(undefined8 *)((long)puVar11 + 0x69) >> 0x38);
      uStack_108 = (undefined1)puVar11[0xd];
      local_107 = (undefined7)((ulong)puVar11[0xd] >> 8);
      uStack_98 = puVar12[0xb];
      local_a0 = puVar12[10];
      uStack_90 = puVar12[0xc];
      uStack_7f = *(undefined8 *)((long)puVar12 + 0x71);
      uStack_a8 = puVar12[9];
      local_b0 = puVar12[8];
      uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar12 + 0x69) >> 0x38);
      uStack_88 = (undefined1)puVar12[0xd];
      local_87 = (undefined7)((ulong)puVar12[0xd] >> 8);
      uStack_e8 = puVar12[1];
      local_f0 = *puVar12;
      uStack_d8 = puVar12[3];
      uStack_e0 = puVar12[2];
      uStack_c8 = puVar12[5];
      local_d0 = puVar12[4];
      uStack_b8 = puVar12[7];
      uStack_c0 = puVar12[6];
      FUN_1005a891c(&local_170,&local_270);
      FUN_1005a891c(&local_f0,&local_270);
      puVar5 = &local_170;
      FUN_1005a5880(puVar5,&local_f0);
      FUN_1005a8950(&local_f0);
      FUN_1005a8950(&local_170);
      if (((ulong)puVar5 & 1) == 0) {
        return 0;
      }
      puVar11 = puVar11 + 0x10;
      puVar12 = puVar12 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  lVar8 = param_1[2];
  lVar10 = param_1[1];
  uVar9 = param_1[4];
  lVar14 = param_1[3];
  cVar1 = (char)param_1[5];
  lVar13 = param_2[2];
  lVar7 = param_2[1];
  uVar16 = param_2[4];
  lVar15 = param_2[3];
  cVar2 = (char)param_2[5];
  bVar4 = ((uVar16 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  local_1f0 = lVar7;
  lStack_1e8 = lVar13;
  local_1e0 = lVar15;
  uStack_1d8 = uVar16;
  local_1d0 = cVar2;
  local_1c0 = lVar10;
  lStack_1b8 = lVar8;
  local_1b0 = lVar14;
  uStack_1a8 = uVar9;
  local_1a0 = cVar1;
  if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar1 == -1)) {
    if (!bVar4 || cVar2 != -1) {
LAB_1005a65d8:
      FUN_1005a1058(&local_1c0,&local_270);
      FUN_1005a1058(&local_1f0,&local_270);
      FUN_100524e98(lVar10,lVar8,lVar14,uVar9,cVar1);
      FUN_100524e98(lVar7,lVar13,lVar15,uVar16,cVar2);
      return 0;
    }
    FUN_1005a1058(&local_1c0,&local_270);
    FUN_1005a1058(&local_1f0,&local_270);
    FUN_100524e98(lVar10,lVar8,lVar14,uVar9,0xff);
  }
  else {
    if (bVar4 && cVar2 == -1) goto LAB_1005a65d8;
    local_270 = lVar7;
    lStack_268 = lVar13;
    local_260 = lVar15;
    uStack_258 = uVar16;
    local_250 = cVar2;
    local_198 = lVar10;
    lStack_190 = lVar8;
    local_188 = lVar14;
    uStack_180 = uVar9;
    local_178 = cVar1;
    FUN_1005a1058(&local_1c0,auStack_298);
    FUN_1005a1058(&local_1f0,auStack_298);
    plVar6 = &local_198;
    FUN_100527718(plVar6,&local_270);
    FUN_100524e98(lVar7,lVar13,lVar15,uVar16,cVar2);
    FUN_100524e98(lVar10,lVar8,lVar14,uVar9,cVar1);
    if (((ulong)plVar6 & 1) == 0) {
      return 0;
    }
  }
  bVar3 = *(byte *)((long)param_2 + 0x29);
  if (*(byte *)((long)param_1 + 0x29) == 2) {
    if (bVar3 != 2) {
      return 0;
    }
  }
  else {
    if (bVar3 == 2) {
      return 0;
    }
    if (((*(byte *)((long)param_1 + 0x29) ^ bVar3) & 1) != 0) {
      return 0;
    }
  }
  uVar9 = param_1[6];
  lVar10 = param_2[6];
  if (uVar9 == 0) {
    if (lVar10 == 0) {
      return 1;
    }
  }
  else if (lVar10 != 0) {
    _swift_bridgeObjectRetain(lVar10);
    uVar16 = uVar9;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(lVar10);
    if ((uVar16 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x1005a6744 | FUN_1005a6744 */

undefined8
FUN_1005a6744(long param_1,_StringGuts param_2,_StringGuts param_3,ulong param_4,long param_5,
             undefined *param_6,undefined *param_7,long param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_278 [168];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == *(long *)(param_5 + 0x10)) {
    if (lVar5 != 0 && param_1 != param_5) {
      puVar6 = (undefined8 *)(param_1 + 0x20);
      puVar4 = (undefined8 *)(param_5 + 0x20);
      do {
        uStack_148 = puVar6[0x11];
        local_150 = puVar6[0x10];
        uStack_138 = puVar6[0x13];
        uStack_140 = puVar6[0x12];
        local_130 = *(undefined4 *)(puVar6 + 0x14);
        uStack_188 = puVar6[9];
        local_190 = puVar6[8];
        uStack_178 = puVar6[0xb];
        uStack_180 = puVar6[10];
        uStack_168 = puVar6[0xd];
        local_170 = puVar6[0xc];
        uStack_158 = puVar6[0xf];
        uStack_160 = puVar6[0xe];
        uStack_1c8 = puVar6[1];
        local_1d0 = *puVar6;
        uStack_1b8 = puVar6[3];
        uStack_1c0 = puVar6[2];
        uStack_1a8 = puVar6[5];
        local_1b0 = puVar6[4];
        uStack_198 = puVar6[7];
        uStack_1a0 = puVar6[6];
        uStack_98 = puVar4[0x11];
        local_a0 = puVar4[0x10];
        uStack_88 = puVar4[0x13];
        uStack_90 = puVar4[0x12];
        local_80 = *(undefined4 *)(puVar4 + 0x14);
        uStack_d8 = puVar4[9];
        local_e0 = puVar4[8];
        uStack_c8 = puVar4[0xb];
        uStack_d0 = puVar4[10];
        uStack_b8 = puVar4[0xd];
        local_c0 = puVar4[0xc];
        uStack_a8 = puVar4[0xf];
        uStack_b0 = puVar4[0xe];
        uStack_118 = puVar4[1];
        local_120 = *puVar4;
        uStack_108 = puVar4[3];
        uStack_110 = puVar4[2];
        uStack_f8 = puVar4[5];
        local_100 = puVar4[4];
        uStack_e8 = puVar4[7];
        uStack_f0 = puVar4[6];
        FUN_100558d60(&local_1d0,auStack_278);
        FUN_100558d60(&local_120,auStack_278);
        puVar2 = &local_1d0;
        FUN_1005a555c(puVar2,&local_120);
        FUN_100558d9c(&local_120);
        FUN_100558d9c(&local_1d0);
        if (((ulong)puVar2 & 1) == 0) {
          return 0;
        }
        puVar4 = puVar4 + 0x15;
        puVar6 = puVar6 + 0x15;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_3.unknown == (undefined *)0x0) {
      if (param_7 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (param_7 == (undefined *)0x0) {
        return 0;
      }
      if (((param_2.unknown != param_6) || (param_3.unknown != param_7)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            (param_2,param_3,(_StringComparisonResult)(__int8)param_6), !bVar1)) {
        return 0;
      }
    }
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      _swift_bridgeObjectRetain(param_8);
      uVar3 = param_4;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_8);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1005a68fc | FUN_1005a68fc */

undefined4 FUN_1005a68fc(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x656c746974 || param_2 != &DAT_e500000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x7463757274736564) && (param_2 == (undefined1 *)0xef746e6948657669)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7463757274736564,(_StringGuts)0xef746e6948657669,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x65746f706d656469) || (param_2 != (undefined1 *)0xee00746e6948746e)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65746f706d656469,(_StringGuts)0xee00746e6948746e,
                             expecting), !bVar1)) {
        if (((param_1 != 0x6c726f576e65706f) || (param_2 != (undefined1 *)0xed0000746e694864)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6c726f576e65706f,(_StringGuts)0xed0000746e694864,
                               expecting), !bVar1)) {
          if ((param_1 == 0x796c6e4f64616572) && (param_2 == (undefined1 *)0xec000000746e6948)) {
            _swift_bridgeObjectRelease(0xec000000746e6948);
            return 4;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x796c6e4f64616572,(_StringGuts)0xec000000746e6948,
                             expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 4;
          }
          return 5;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1005a6ac0 | FUN_1005a6ac0 */

/* WARNING: Removing unreachable block (ram,0x0001005a6bf4) */
/* WARNING: Removing unreachable block (ram,0x0001005a6bf8) */
/* WARNING: Removing unreachable block (ram,0x0001005a6b88) */
/* WARNING: Removing unreachable block (ram,0x0001005a6c00) */

undefined1  [16] FUN_1005a6ac0(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined *unaff_x21;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_70 [12];
  undefined4 local_64;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd2e40;
  FUN_1000f7830(&DAT_100fd2e40,&DAT_100c613e0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = *(undefined1 **)(param_1 + 0x18);
  FUN_100004640(param_1,puVar2);
  FUN_1005a551c();
  Swift::Decoder::_container();
  if (unaff_x21 == (undefined *)0x0) {
    local_51 = 0;
    puVar2 = &local_51;
    unaff_x21 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar2,puVar1);
    local_52 = 1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_53,puVar1);
    local_54 = 3;
    puVar3 = &local_54;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar3,puVar1);
    local_64 = SUB84(puVar3,0);
    local_55 = 4;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_55,puVar1);
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  auVar5._8_8_ = unaff_x21;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x1005a6c9c | FUN_1005a6c9c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005a6cd8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1005a6c9c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (0xd < uVar1) {
    uVar1 = 0xe;
  }
  return uVar1;
}



/* Address: 0x1005a6d00 | FUN_1005a6d00 */

/* WARNING: Removing unreachable block (ram,0x0001005a6fc0) */
/* WARNING: Removing unreachable block (ram,0x0001005a771c) */
/* WARNING: Removing unreachable block (ram,0x0001005a75a8) */
/* WARNING: Removing unreachable block (ram,0x0001005a6fd0) */
/* WARNING: Removing unreachable block (ram,0x0001005a7340) */
/* WARNING: Removing unreachable block (ram,0x0001005a760c) */
/* WARNING: Removing unreachable block (ram,0x0001005a7634) */
/* WARNING: Removing unreachable block (ram,0x0001005a76d0) */
/* WARNING: Removing unreachable block (ram,0x0001005a777c) */
/* WARNING: Removing unreachable block (ram,0x0001005a77a4) */
/* WARNING: Removing unreachable block (ram,0x0001005a77ac) */
/* WARNING: Removing unreachable block (ram,0x0001005a6ed0) */
/* WARNING: Removing unreachable block (ram,0x0001005a73ac) */
/* WARNING: Removing unreachable block (ram,0x0001005a73d0) */
/* WARNING: Removing unreachable block (ram,0x0001005a702c) */
/* WARNING: Removing unreachable block (ram,0x0001005a73dc) */

void FUN_1005a6d00(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [8];
  void *pvVar3;
  bool bVar4;
  DecodingError DVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  _StringComparisonResult expecting;
  long extraout_x8;
  long unaff_x21;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  char *local_260;
  char *local_258;
  char *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  undefined8 *local_230;
  long local_228;
  undefined1 local_219;
  undefined1 local_218;
  undefined7 uStack_217;
  char *local_210;
  char *pcStack_208;
  char *pcStack_200;
  void *pvStack_1f8;
  char *local_1f0;
  char *pcStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  char *local_1d0;
  undefined1 local_1c1;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  char *pcStack_1b8;
  char *local_1b0;
  void *pvStack_1a8;
  char *local_1a0;
  char *pcStack_198;
  char *local_190;
  char *pcStack_188;
  char *local_180;
  undefined1 local_170 [8];
  char *pcStack_168;
  String local_160;
  char *local_150;
  char *pcStack_148;
  char *local_140;
  char *pcStack_138;
  char *local_130;
  char *pcStack_128;
  char *local_120;
  char *pcStack_118;
  char *local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  char *local_f0;
  void *pvStack_e8;
  char *pcStack_e0;
  void *pvStack_d8;
  char *local_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *local_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined1 local_71 [17];
  
  pcVar6 = &DAT_100fd2e30;
  FUN_1000f7830(&DAT_100fd2e30,&DAT_100c613d8);
  lVar15 = *(long *)(pcVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)&local_260 - extraout_x8;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005a7834();
  Swift::Decoder::_container();
  if (unaff_x21 != 0) {
LAB_1005a6e60:
    FUN_100004594(param_2);
    return;
  }
  local_71[0] = 0;
  local_230 = param_1;
  local_228 = lVar15;
  SVar17 = Swift::KeyedDecodingContainer::_decode(local_71,pcVar6);
  puVar11 = SVar17.bridgeObject;
  pcVar7 = SVar17.str;
  if (pcVar7 == (char *)0x74786574 && puVar11 == &DAT_e400000000000000) {
LAB_1005a6e20:
    _swift_bridgeObjectRelease(puVar11);
    local_170[0] = 1;
    SVar17 = Swift::KeyedDecodingContainer::_decode(local_170,pcVar6);
    pcVar7 = SVar17.str;
    local_1c0 = 10;
    FUN_100567a28();
    puVar9 = &DAT_100ee1da8;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_170,&DAT_100ee1da8,&local_1c0,pcVar6,&DAT_100ee1da8,pcVar7);
    pcVar7 = local_150;
    local_250 = (char *)local_170;
    local_248 = pcStack_168;
    local_240 = local_160.str;
    local_238 = local_160.bridgeObject;
    local_210 = (char *)CONCAT71(local_210._1_7_,0xd);
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1c0,&DAT_100edcda0,&local_210,pcVar6,&DAT_100edcda0,puVar9);
    (**(code **)(local_228 + 8))(lVar16,pcVar6);
    pcStack_138 = (char *)CONCAT71(uStack_1bf,local_1c0);
    local_160.bridgeObject = local_248;
    local_160.str = local_250;
    local_150 = local_240;
    pcStack_148 = local_238;
    local_140 = pcVar7;
    _local_170 = SVar17;
    FUN_10049a544(local_170);
    uStack_7f = CONCAT17(uStack_f8,uStack_ff);
  }
  else {
    expecting.value = SVar17.str._0_1_;
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x74786574,(_StringGuts)0xe400000000000000,expecting);
    if (bVar4) goto LAB_1005a6e20;
    if ((pcVar7 == (char *)0x6567616d69 && puVar11 == &DAT_e500000000000000) ||
       (bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6567616d69,(_StringGuts)0xe500000000000000,expecting),
       bVar4)) {
      _swift_bridgeObjectRelease(puVar11);
      local_170[0] = '\f';
      SVar17 = Swift::KeyedDecodingContainer::_decode(local_170,pcVar6);
      local_170[0] = 0xb;
      SVar18 = Swift::KeyedDecodingContainer::_decode(local_170,pcVar6);
      pcVar7 = SVar18.str;
      local_1c0 = 10;
      FUN_100567a28();
      puVar9 = &DAT_100ee1da8;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (local_170,&DAT_100ee1da8,&local_1c0,pcVar6,&DAT_100ee1da8,pcVar7);
      local_258 = (char *)local_170;
      local_250 = pcStack_168;
      local_248 = local_160.str;
      local_240 = local_160.bridgeObject;
      local_238 = local_150;
      local_210 = (char *)CONCAT71(local_210._1_7_,0xd);
      FUN_1004e16ac();
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&local_1c0,&DAT_100edcda0,&local_210,pcVar6,&DAT_100edcda0,puVar9);
      (**(code **)(local_228 + 8))(lVar16,pcVar6);
      pcStack_128 = (char *)CONCAT71(uStack_1bf,local_1c0);
      local_150 = local_258;
      pcStack_148 = local_250;
      local_140 = local_248;
      pcStack_138 = local_240;
      local_130 = local_238;
      _local_170 = SVar17;
      local_160 = SVar18;
      FUN_10049c188(local_170);
LAB_1005a74f0:
      pcStack_a8 = pcStack_128;
      local_b0 = local_130;
      pcStack_98 = pcStack_118;
      pcStack_a0 = local_120;
      local_90 = local_110;
      uStack_88 = uStack_108;
      uStack_7f = CONCAT17(uStack_f8,uStack_ff);
      uStack_87 = uStack_107;
      uStack_80 = local_100;
      pvStack_e8 = pcStack_168;
      local_f0 = (char *)local_170;
      pvStack_d8 = local_160.bridgeObject;
      pcStack_e0 = local_160.str;
      goto LAB_1005a7224;
    }
    if ((pcVar7 == (char *)0x6f69647561 && puVar11 == &DAT_e500000000000000) ||
       (bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6f69647561,(_StringGuts)0xe500000000000000,expecting),
       bVar4)) {
      _swift_bridgeObjectRelease(puVar11);
      local_170[0] = '\f';
      SVar17 = Swift::KeyedDecodingContainer::_decode(local_170,pcVar6);
      local_170[0] = 0xb;
      SVar18 = Swift::KeyedDecodingContainer::_decode(local_170,pcVar6);
      pcVar7 = SVar18.str;
      local_1c0 = 10;
      FUN_100567a28();
      puVar9 = &DAT_100ee1da8;
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (local_170,&DAT_100ee1da8,&local_1c0,pcVar6,&DAT_100ee1da8,pcVar7);
      local_258 = (char *)local_170;
      local_250 = pcStack_168;
      local_248 = local_160.str;
      local_240 = local_160.bridgeObject;
      local_238 = local_150;
      local_210 = (char *)CONCAT71(local_210._1_7_,0xd);
      FUN_1004e16ac();
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&local_1c0,&DAT_100edcda0,&local_210,pcVar6,&DAT_100edcda0,puVar9);
      (**(code **)(local_228 + 8))(lVar16,pcVar6);
      pcStack_128 = (char *)CONCAT71(uStack_1bf,local_1c0);
      local_150 = local_258;
      pcStack_148 = local_250;
      local_140 = local_248;
      pcStack_138 = local_240;
      local_130 = local_238;
      _local_170 = SVar17;
      local_160 = SVar18;
      FUN_100567ac0(local_170);
      goto LAB_1005a74f0;
    }
    if ((pcVar7 != (char *)0x656372756f736572 || puVar11 != &DAT_e800000000000000) &&
       (bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x656372756f736572,(_StringGuts)0xe800000000000000,expecting
                          ), !bVar4)) {
      if (pcVar7 == (char *)0x656372756f736572 && puVar11 == (undefined1 *)0xed00006b6e696c5f) {
        _swift_bridgeObjectRelease(puVar11);
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x656372756f736572,(_StringGuts)0xed00006b6e696c5f,expecting
                          );
        _swift_bridgeObjectRelease(puVar11);
        if (!bVar4) {
          auVar1[0xf] = 0;
          auVar1._0_15_ = stack0xfffffffffffffe91;
          _local_170 = (String)(auVar1 << 8);
          DVar5 = Swift::DecodingError::typeMetadataAccessor();
          puVar8 = 
          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
          _swift_allocError(DVar5.value,
                            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                            ,0,0);
          puVar9 = &DAT_100fd2e38;
          FUN_100134584(&DAT_100fd2e38,&DAT_100fd2e30,&DAT_100c613d8,
                        PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                       );
          Swift::DecodingError::_dataCorruptedError
                    (puVar8,local_170,lVar16,0xd000000000000019,0x8000000100dae070,pcVar6,puVar9);
          _swift_willThrow();
          (**(code **)(local_228 + 8))(lVar16,pcVar6);
          goto LAB_1005a6e60;
        }
      }
      local_170[0] = '\x06';
      SVar17 = Swift::KeyedDecodingContainer::_decode(local_170,pcVar6);
      local_170[0] = '\a';
      SVar18 = Swift::KeyedDecodingContainer::_decode(local_170,pcVar6);
      local_238 = SVar18.str;
      local_170[0] = '\b';
      pcVar7 = local_170;
      pcVar12 = pcVar6;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      local_170[0] = '\t';
      pcVar10 = local_170;
      pcVar13 = pcVar6;
      local_240 = pcVar7;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      local_170[0] = 0xb;
      pcVar7 = local_170;
      pcVar14 = pcVar6;
      local_250 = pcVar10;
      local_248 = pcVar13;
      Swift::KeyedDecodingContainer::_decodeIfPresent();
      local_210 = (char *)CONCAT71(local_210._1_7_,10);
      local_260 = pcVar7;
      local_258 = pcVar14;
      FUN_100567a28();
      Swift::KeyedDecodingContainer::_decodeIfPresent
                (&local_1c0,&DAT_100ee1da8,&local_210,pcVar6,&DAT_100ee1da8,pcVar7);
      (**(code **)(local_228 + 8))(lVar16,pcVar6);
      local_160.bridgeObject = SVar18.bridgeObject;
      local_160.str = local_238;
      local_150 = local_240;
      local_140 = local_250;
      pcStack_138 = local_248;
      local_130 = local_260;
      pcStack_128 = local_258;
      local_120 = (char *)CONCAT71(uStack_1bf,local_1c0);
      pcStack_118 = pcStack_1b8;
      uStack_108 = SUB81(pvStack_1a8,0);
      uStack_107 = (undefined7)((ulong)pvStack_1a8 >> 8);
      local_110 = local_1b0;
      local_100 = SUB81(local_1a0,0);
      uStack_ff = (undefined7)((ulong)local_1a0 >> 8);
      _local_170 = SVar17;
      pcStack_148 = pcVar12;
      FUN_100567a68(local_170);
      pcStack_a8 = pcStack_128;
      local_b0 = local_130;
      pcStack_98 = pcStack_118;
      pcStack_a0 = local_120;
      uStack_88 = uStack_108;
      local_90 = local_110;
      uStack_7f = CONCAT17(uStack_f8,uStack_ff);
      uStack_87 = uStack_107;
      uStack_80 = local_100;
      pvStack_e8 = pcStack_168;
      local_f0 = (char *)local_170;
      pvStack_d8 = local_160.bridgeObject;
      pcStack_e0 = local_160.str;
      goto LAB_1005a7224;
    }
    _swift_bridgeObjectRelease(puVar11);
    local_1c1 = 3;
    FUN_100567a74();
    puVar9 = &DAT_100ee1c80;
    Swift::KeyedDecodingContainer::_decode
              (&local_1c0,&DAT_100ee1c80,&local_1c1,pcVar6,&DAT_100ee1c80,puVar11);
    pcStack_1e8 = pcStack_198;
    local_1f0 = local_1a0;
    pcStack_1d8 = pcStack_188;
    pcStack_1e0 = local_190;
    local_1d0 = local_180;
    local_210 = (char *)CONCAT71(uStack_1bf,local_1c0);
    pcStack_208 = pcStack_1b8;
    pvStack_1f8 = pvStack_1a8;
    pcStack_200 = local_1b0;
    local_218 = 10;
    FUN_100567a28();
    puVar8 = &DAT_100ee1da8;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_170,&DAT_100ee1da8,&local_218,pcVar6,&DAT_100ee1da8,puVar9);
    pcVar7 = local_150;
    auVar2 = local_170;
    local_240 = pcStack_168;
    local_238 = local_160.str;
    pvVar3 = local_160.bridgeObject;
    local_219 = 0xd;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_218,&DAT_100edcda0,&local_219,pcVar6,&DAT_100edcda0,puVar8);
    (**(code **)(local_228 + 8))(lVar16,pcVar6);
    pcStack_148 = pcStack_1e8;
    local_150 = local_1f0;
    pcStack_138 = pcStack_1d8;
    local_140 = pcStack_1e0;
    pcStack_168 = pcStack_208;
    local_170 = (undefined1  [8])local_210;
    local_160.bridgeObject = pvStack_1f8;
    local_160.str = pcStack_200;
    local_130 = local_1d0;
    pcStack_128 = (char *)auVar2;
    local_120 = local_240;
    pcStack_118 = local_238;
    local_110 = pvVar3;
    uStack_108 = SUB81(pcVar7,0);
    uStack_107 = (undefined7)((ulong)pcVar7 >> 8);
    local_100 = local_218;
    uStack_ff = uStack_217;
    FUN_100567ab4(local_170);
    uStack_7f = CONCAT17(uStack_f8,uStack_ff);
  }
  pvStack_e8 = pcStack_168;
  local_f0 = (char *)local_170;
  pvStack_d8 = local_160.bridgeObject;
  pcStack_e0 = local_160.str;
  local_b0 = local_130;
  pcStack_a8 = pcStack_128;
  pcStack_a0 = local_120;
  pcStack_98 = pcStack_118;
  local_90 = local_110;
  uStack_88 = uStack_108;
  uStack_87 = uStack_107;
  uStack_80 = local_100;
LAB_1005a7224:
  local_130 = local_b0;
  pcStack_128 = pcStack_a8;
  local_120 = pcStack_a0;
  pcStack_118 = pcStack_98;
  local_110 = local_90;
  uStack_108 = uStack_88;
  uStack_107 = uStack_87;
  local_100 = uStack_80;
  local_d0 = local_150;
  pcStack_c8 = pcStack_148;
  pcStack_c0 = local_140;
  pcStack_b8 = pcStack_138;
  FUN_100004594(param_2);
  local_230[9] = pcStack_a8;
  local_230[8] = local_b0;
  local_230[0xb] = pcStack_98;
  local_230[10] = pcStack_a0;
  local_230[0xd] = CONCAT71(uStack_87,uStack_88);
  local_230[0xc] = local_90;
  *(undefined8 *)((long)local_230 + 0x71) = uStack_7f;
  *(ulong *)((long)local_230 + 0x69) = CONCAT17(uStack_80,uStack_87);
  local_230[1] = pvStack_e8;
  *local_230 = local_f0;
  local_230[3] = pvStack_d8;
  local_230[2] = pcStack_e0;
  local_230[5] = pcStack_c8;
  local_230[4] = local_d0;
  local_230[7] = pcStack_b8;
  local_230[6] = pcStack_c0;
  return;
}



/* Address: 0x1005a7834 | FUN_1005a7834 */

void FUN_1005a7834(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd26c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c612f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c612f8,&DAT_100ee4118);
  DAT_100fd26c0 = pTVar1;
  return;
}



/* Address: 0x1005a7874 | FUN_1005a7874 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005a78b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1005a7874(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Address: 0x1005a78d8 | FUN_1005a78d8 */

/* WARNING: Removing unreachable block (ram,0x0001005a7ce0) */
/* WARNING: Removing unreachable block (ram,0x0001005a7b7c) */
/* WARNING: Removing unreachable block (ram,0x0001005a7a70) */
/* WARNING: Removing unreachable block (ram,0x0001005a7a20) */
/* WARNING: Removing unreachable block (ram,0x0001005a7ae8) */
/* WARNING: Removing unreachable block (ram,0x0001005a7c10) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d08) */
/* WARNING: Removing unreachable block (ram,0x0001005a7dc4) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d10) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d4c) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d24) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d28) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d58) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d64) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d78) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d44) */
/* WARNING: Removing unreachable block (ram,0x0001005a7d48) */
/* WARNING: Removing unreachable block (ram,0x0001005a79ac) */

void FUN_1005a78d8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  long extraout_x8;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  long unaff_x21;
  long lVar10;
  char *local_2f0;
  uint local_2e4;
  char *local_2e0;
  long lStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  uint local_2bc;
  char *local_2b8;
  long lStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_278 [168];
  char *local_1d0;
  void *pvStack_1c8;
  char **local_1c0;
  undefined *puStack_1b8;
  char **local_1b0;
  undefined *puStack_1a8;
  char *pcStack_1a0;
  long lStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  char *pcStack_178;
  char *local_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char *pcStack_140;
  long lStack_138;
  undefined4 local_130;
  undefined1 local_121;
  undefined8 local_120;
  String local_118;
  char **local_108;
  undefined *puStack_100;
  char **local_f8;
  undefined *puStack_f0;
  char *local_e8;
  long lStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  byte local_c8;
  undefined7 uStack_c7;
  char *pcStack_c0;
  char *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  char *local_88;
  long lStack_80;
  undefined4 local_78;
  
  puVar1 = &DAT_100fd2e20;
  FUN_1000f7830(&DAT_100fd2e20,&DAT_100c613c8);
  lVar10 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005a7ed0();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_1d0 = (char *)((ulong)local_1d0 & 0xffffffffffffff00);
    local_118 = Swift::KeyedDecodingContainer::_decode(&local_1d0,puVar1);
    local_1d0._0_1_ = 1;
    ppcVar2 = &local_1d0;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_1d0 = (char *)CONCAT71(local_1d0._1_7_,2);
    ppcVar3 = &local_1d0;
    puVar5 = puVar1;
    local_108 = ppcVar2;
    puStack_100 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_278[0] = 3;
    local_f8 = ppcVar3;
    puStack_f0 = puVar5;
    FUN_1004dbda0();
    Swift::KeyedDecodingContainer::_decode
              (&local_1d0,&DAT_100edd000,local_278,puVar1,&DAT_100edd000,ppcVar3);
    local_2b8 = local_1d0;
    lStack_2b0 = (long)pvStack_1c8;
    local_e8 = local_1d0;
    lStack_e0 = (long)pvStack_1c8;
    local_2a8 = local_1c0;
    uStack_2a0 = puStack_1b8;
    local_d8 = local_1c0;
    uStack_d0 = puStack_1b8;
    local_2e4 = (uint)(byte)local_1b0;
    local_c8 = (byte)local_1b0;
    local_278[0] = 4;
    puVar4 = &DAT_100edd000;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1d0,&DAT_100edd000,local_278,puVar1,&DAT_100edd000,ppcVar3);
    local_2e0 = local_1d0;
    lStack_2d8 = (long)pvStack_1c8;
    local_b8 = local_1d0;
    lStack_b0 = (long)pvStack_1c8;
    local_2d0 = local_1c0;
    uStack_2c8 = puStack_1b8;
    local_a8 = local_1c0;
    uStack_a0 = puStack_1b8;
    local_2bc = (uint)(byte)local_1b0;
    local_98 = (byte)local_1b0;
    local_278[0] = 5;
    FUN_1005aaadc();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1d0,&DAT_100ee3a78,local_278,puVar1,&DAT_100ee3a78,puVar4);
    if (pvStack_1c8 == (void *)0x1) {
      pvStack_1c8 = (void *)0x0;
      uVar6 = 2;
      uVar7 = 2;
      uVar8 = 2;
      uVar9 = 2;
      local_88 = (char *)0x0;
    }
    else {
      uVar6 = (undefined1)local_1c0._0_4_;
      uVar7 = (undefined1)((uint)local_1c0._0_4_ >> 8);
      uVar8 = (undefined1)((uint)local_1c0._0_4_ >> 0x10);
      uVar9 = (undefined1)((uint)local_1c0._0_4_ >> 0x18);
      local_88 = local_1d0;
    }
    local_78 = CONCAT13(uVar9,CONCAT12(uVar8,CONCAT11(uVar7,uVar6)));
    puVar4 = &DAT_100fce820;
    lStack_80 = (long)pvStack_1c8;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    local_278[0] = 6;
    puVar5 = puVar4;
    FUN_10057a1f8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1d0,puVar4,local_278,puVar1,puVar4,puVar5);
    local_2f0 = local_1d0;
    pcStack_c0 = local_1d0;
    local_121 = 7;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_120,&DAT_100edcda0,&local_121,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar10 + 8))((long)&local_2f0 - extraout_x8,puVar1);
    uStack_90 = local_120;
    local_130 = local_78;
    uStack_180 = CONCAT71(uStack_c7,local_c8);
    uStack_188 = uStack_d0;
    local_190 = local_d8;
    pcStack_178 = pcStack_c0;
    lStack_168 = lStack_b0;
    local_170 = local_b8;
    uStack_158 = uStack_a0;
    uStack_160 = local_a8;
    pvStack_1c8 = local_118.bridgeObject;
    local_1d0 = local_118.str;
    puStack_1b8 = puStack_100;
    local_1c0 = local_108;
    puStack_1a8 = puStack_f0;
    local_1b0 = local_f8;
    lStack_198 = lStack_e0;
    pcStack_1a0 = local_e8;
    local_150 = CONCAT71(uStack_97,local_98);
    uStack_148 = local_120;
    lStack_138 = lStack_80;
    pcStack_140 = local_88;
    FUN_100558d60(&local_1d0,local_278);
    FUN_100004594(param_2);
    FUN_100558d9c(&local_118);
    param_1[0x11] = uStack_148;
    param_1[0x10] = local_150;
    param_1[0x13] = lStack_138;
    param_1[0x12] = pcStack_140;
    *(undefined4 *)(param_1 + 0x14) = local_130;
    param_1[9] = uStack_188;
    param_1[8] = local_190;
    param_1[0xb] = pcStack_178;
    param_1[10] = uStack_180;
    param_1[0xd] = lStack_168;
    param_1[0xc] = local_170;
    param_1[0xf] = uStack_158;
    param_1[0xe] = uStack_160;
    param_1[1] = pvStack_1c8;
    *param_1 = local_1d0;
    param_1[3] = puStack_1b8;
    param_1[2] = local_1c0;
    param_1[5] = puStack_1a8;
    param_1[4] = local_1b0;
    param_1[7] = lStack_198;
    param_1[6] = pcStack_1a0;
  }
  else {
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x1005a7ed0 | FUN_1005a7ed0 */

void FUN_1005a7ed0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd26d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c612a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c612a8,&DAT_100ee4088);
  DAT_100fd26d0 = pTVar1;
  return;
}



/* Address: 0x1005a7f10 | FUN_1005a7f10 */

void FUN_1005a7f10(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if (DAT_100fd26d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcb6e0;
  FUN_1000f8b08(&DAT_100fcb6e0,&DAT_100c50490);
  local_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
  puVar2 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
  ;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
             ,puVar1,&local_18);
  DAT_100fd26d8 = puVar2;
  return;
}



/* Address: 0x1005a7f78 | FUN_1005a7f78 */

void FUN_1005a7f78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd26e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c603d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c603d0,&DAT_100ee3a78);
  DAT_100fd26e0 = pTVar1;
  return;
}



/* Address: 0x1005a7fb8 | FUN_1005a7fb8 */

void FUN_1005a7fb8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd26f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61258;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61258,&DAT_100ee3ff8);
  DAT_100fd26f0 = pTVar1;
  return;
}



/* Address: 0x1005a7ff8 | FUN_1005a7ff8 */

void FUN_1005a7ff8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61208;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61208,&DAT_100ee3f68);
  DAT_100fd2708 = pTVar1;
  return;
}



/* Address: 0x1005a8038 | FUN_1005a8038 */

/* WARNING: Removing unreachable block (ram,0x0001005a81a4) */
/* WARNING: Removing unreachable block (ram,0x0001005a8214) */
/* WARNING: Removing unreachable block (ram,0x0001005a8218) */
/* WARNING: Removing unreachable block (ram,0x0001005a822c) */
/* WARNING: Removing unreachable block (ram,0x0001005a8130) */

undefined8 FUN_1005a8038(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar1 = &DAT_100fd2e18;
  FUN_1000f7830(&DAT_100fd2e18,&DAT_100c613c0);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar5);
  FUN_1005a7ff8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fcfbc0;
    FUN_1000f7830(&DAT_100fcfbc0,&BYTE_100c588a0);
    local_61 = 0;
    puVar3 = puVar2;
    FUN_1005678e8();
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar2,&local_61,puVar1,puVar2,puVar3);
    uVar5 = CONCAT71(uStack_57,local_58);
    local_58 = 1;
    puVar4 = &local_58;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar4,puVar1);
    local_61 = 2;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_61,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffff90 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar5;
}



/* Address: 0x1005a8248 | FUN_1005a8248 */

/* WARNING: Removing unreachable block (ram,0x0001005a83a0) */
/* WARNING: Removing unreachable block (ram,0x0001005a8448) */
/* WARNING: Removing unreachable block (ram,0x0001005a844c) */
/* WARNING: Removing unreachable block (ram,0x0001005a8460) */
/* WARNING: Removing unreachable block (ram,0x0001005a832c) */

undefined8 FUN_1005a8248(long param_1)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar1 = &DAT_100fd2e10;
  FUN_1000f7830(&DAT_100fd2e10,&DAT_100c613b8);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar5);
  FUN_1005a847c();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_61 = 0;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_61,puVar1,&DAT_100edcda0,KVar2.unknown);
    uVar5 = CONCAT71(uStack_57,local_58);
    local_58 = 1;
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar1);
    puVar3 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    local_61 = 2;
    puVar4 = &DAT_100fcc470;
    FUN_1004dbd24(&DAT_100fcc470,FUN_1004dbda0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar3,&local_61,puVar1,puVar3,puVar4)
    ;
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffff90 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar5;
}



/* Address: 0x1005a847c | FUN_1005a847c */

void FUN_1005a847c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2718 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c611b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c611b8,&DAT_100ee3ed8);
  DAT_100fd2718 = pTVar1;
  return;
}



/* Address: 0x1005a84bc | FUN_1005a84bc */

void FUN_1005a84bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2728 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61168;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61168,&DAT_100ee3e48);
  DAT_100fd2728 = pTVar1;
  return;
}



/* Address: 0x1005a84fc | FUN_1005a84fc */

void FUN_1005a84fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd2738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd2730;
  FUN_1000f8b08(&DAT_100fd2730,&BYTE_100c60358);
  puVar2 = puVar1;
  FUN_1005a856c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fd2738 = puVar3;
  return;
}



/* Address: 0x1005a856c | FUN_1005a856c */

void FUN_1005a856c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2740 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c604b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c604b0,&DAT_100ee3b20);
  DAT_100fd2740 = pTVar1;
  return;
}



/* Address: 0x1005a85ac | FUN_1005a85ac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005a85e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1005a85ac(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x1005a8610 | FUN_1005a8610 */

/* WARNING: Removing unreachable block (ram,0x0001005a8850) */
/* WARNING: Removing unreachable block (ram,0x0001005a8794) */
/* WARNING: Removing unreachable block (ram,0x0001005a8888) */
/* WARNING: Removing unreachable block (ram,0x0001005a889c) */
/* WARNING: Removing unreachable block (ram,0x0001005a8710) */

void FUN_1005a8610(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  uint local_11c;
  undefined1 local_118 [56];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  byte bStack_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  undefined8 local_70;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd2df8;
  FUN_1000f7830(&DAT_100fd2df8,&DAT_100c613b0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005a84bc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fd2730;
    FUN_1000f7830(&DAT_100fd2730,&BYTE_100c60358);
    local_118[0] = 0;
    puVar3 = puVar2;
    FUN_1005aaa2c();
    Swift::KeyedDecodingContainer::_decode(&local_e0,puVar2,local_118,puVar1,puVar2,puVar3);
    local_a0 = local_e0;
    local_118[0] = 1;
    FUN_1004dbda0();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_e0,&DAT_100edd000,local_118,puVar1,&DAT_100edd000,puVar2);
    local_140 = local_e0;
    uStack_98 = local_e0;
    uStack_90 = uStack_d8;
    local_138 = uStack_d8;
    local_130 = local_d0;
    local_88 = local_d0;
    local_80 = uStack_c8;
    local_128 = uStack_c8;
    local_11c = (uint)(byte)local_c0;
    bStack_78 = (byte)local_c0;
    local_e0 = CONCAT71(local_e0._1_7_,2);
    puVar4 = &local_e0;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar4,puVar1);
    uStack_77 = SUB81(puVar4,0);
    local_a1 = 3;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_a1,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar5 + 8))((long)&local_140 - extraout_x8,puVar1);
    local_70 = local_58;
    uStack_d8 = uStack_98;
    local_e0 = local_a0;
    uStack_c8 = local_88;
    local_d0 = uStack_90;
    uStack_b8 = CONCAT62(uStack_76,CONCAT11(uStack_77,bStack_78));
    local_c0 = local_80;
    local_b0 = local_58;
    FUN_1005a037c(&local_e0,local_118);
    FUN_100004594(param_2);
    FUN_100545970(&local_a0);
    param_1[1] = uStack_d8;
    *param_1 = local_e0;
    param_1[3] = uStack_c8;
    param_1[2] = local_d0;
    param_1[5] = uStack_b8;
    param_1[4] = local_c0;
    param_1[6] = local_b0;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1005a891c | FUN_1005a891c */

undefined8 FUN_1005a891c(undefined8 param_1,undefined8 param_2)

{
  FUN_1005a9ab8(param_2,param_1,&DAT_100ee3b20);
  return param_2;
}



/* Address: 0x1005a8950 | FUN_1005a8950 */

undefined8 FUN_1005a8950(undefined8 param_1)

{
  FUN_1005a98c8(param_1,&DAT_100ee3b20);
  return param_1;
}



/* Address: 0x1005a897c | FUN_1005a897c */

void FUN_1005a897c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2750 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61118;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61118,&DAT_100ee3db8);
  DAT_100fd2750 = pTVar1;
  return;
}



/* Address: 0x1005a89bc | thunk_FUN_1005a89c0 */

void thunk_FUN_1005a89c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2758 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60420;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60420,&DAT_100ee3a78);
  DAT_100fd2758 = pTVar1;
  return;
}



/* Address: 0x1005a89c0 | FUN_1005a89c0 */

void FUN_1005a89c0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2758 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60420;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60420,&DAT_100ee3a78);
  DAT_100fd2758 = pTVar1;
  return;
}



/* Address: 0x1005a8a00 | thunk_FUN_1005a8a04 */

void thunk_FUN_1005a8a04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2760 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c604d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c604d8,&DAT_100ee3b20);
  DAT_100fd2760 = pTVar1;
  return;
}



/* Address: 0x1005a8a04 | FUN_1005a8a04 */

void FUN_1005a8a04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2760 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c604d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c604d8,&DAT_100ee3b20);
  DAT_100fd2760 = pTVar1;
  return;
}



/* Address: 0x1005a8a44 | thunk_FUN_1005a8a48 */

void thunk_FUN_1005a8a48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60590;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60590,&DAT_100ee39e0);
  DAT_100fd2768 = pTVar1;
  return;
}



/* Address: 0x1005a8a48 | FUN_1005a8a48 */

void FUN_1005a8a48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c60590;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c60590,&DAT_100ee39e0);
  DAT_100fd2768 = pTVar1;
  return;
}


