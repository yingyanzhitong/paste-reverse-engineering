/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005a103c | FUN_1005a103c */

undefined1  [16] FUN_1005a103c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005a104c | FUN_1005a104c */

void FUN_1005a104c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005a1058(unaff_x20 + 0x60,param_1);
  return;
}



/* Address: 0x1005a1058 | FUN_1005a1058 */

undefined8 FUN_1005a1058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd26a0;
  FUN_1000f7830(&DAT_100fd26a0,&BYTE_100c60300);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1005a10a8 | FUN_1005a10a8 */

uint FUN_1005a10a8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 >> 8;
}



/* Address: 0x1005a10b0 | FUN_1005a10b0 */

void FUN_1005a10b0(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x11) = param_1;
  return;
}



/* Address: 0x1005a10b8 | FUN_1005a10b8 */

undefined1  [16] FUN_1005a10b8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x11;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005a10c8 | FUN_1005a10c8 */

uint FUN_1005a10c8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 >> 0x10;
}



/* Address: 0x1005a10d0 | FUN_1005a10d0 */

void FUN_1005a10d0(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x12) = param_1;
  return;
}



/* Address: 0x1005a10d8 | FUN_1005a10d8 */

undefined1  [16] FUN_1005a10d8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x12;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005a10e8 | FUN_1005a10e8 */

uint FUN_1005a10e8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 >> 0x18;
}



/* Address: 0x1005a10f0 | FUN_1005a10f0 */

void FUN_1005a10f0(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x13) = param_1;
  return;
}



/* Address: 0x1005a10f8 | FUN_1005a10f8 */

undefined1  [16] FUN_1005a10f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x13;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005a1108 | FUN_1005a1108 */

bool FUN_1005a1108(undefined8 param_1,long param_2,uint param_3)

{
  return param_2 == 0 && ((param_3 & 0xff00ffff) == 0x2000202 && (param_3 & 0xff0000) == 0x20000);
}



/* Address: 0x1005a1134 | FUN_1005a1134 */

void FUN_1005a1134(void)

{
  return;
}



/* Address: 0x1005a1148 | FUN_1005a1148 */

undefined8 FUN_1005a1148(void)

{
  return 0;
}



/* Address: 0x1005a1158 | FUN_1005a1158 */

undefined1  [16] FUN_1005a1158(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  puVar2 = (undefined1 *)0xed0000746e694864;
  uVar1 = 0x6c726f576e65706f;
  if (bVar4 != 3) {
    puVar2 = (undefined1 *)0xec000000746e6948;
    uVar1 = 0x796c6e4f64616572;
  }
  puVar3 = (undefined1 *)0xee00746e6948746e;
  uVar5 = 0x65746f706d656469;
  if (bVar4 != 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0x656c746974;
  if (bVar4 != 0) {
    uVar1 = 0x7463757274736564;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xef746e6948657669;
  }
  if (bVar4 < 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Address: 0x1005a121c | FUN_1005a121c */

void FUN_1005a121c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005a68fc();
  *param_1 = param_2;
  return;
}



/* Address: 0x1005a1240 | FUN_1005a1240 */

String FUN_1005a1240(void)

{
  String SVar1;
  
  FUN_1005a551c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005a1268 | FUN_1005a1268 */

String FUN_1005a1268(void)

{
  String SVar1;
  
  FUN_1005a551c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005a1290 | thunk_FUN_1005a5400 */

void thunk_FUN_1005a5400(void)

{
  FUN_1005a5400();
  return;
}



/* Address: 0x1005a1294 | FUN_1005a1294 */

void FUN_1005a1294(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_70 [12];
  uint local_64;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fd26a8;
  local_64 = param_4;
  FUN_1000f7830(&DAT_100fd26a8,&BYTE_100c60308);
  lVar3 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a551c();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,param_3,&local_51,puVar2);
  uVar1 = local_64;
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(local_64,&local_52,puVar2);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1 >> 8,&local_53,puVar2);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1 >> 0x10,&local_54,puVar2);
    local_55 = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1 >> 0x18,&local_55,puVar2);
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar2);
  }
  return;
}



/* Address: 0x1005a1438 | FUN_1005a1438 */

void FUN_1005a1438(Hasher param_1,Hasher param_2,void *param_3,uint param_4)

{
  byte bVar1;
  String SVar2;
  
  if (param_3 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    SVar2.bridgeObject = param_3;
    SVar2.str = param_2.unknown;
    Swift::String::hash(param_1,SVar2);
  }
  if ((param_4 & 0xff) == 2) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar1 = (byte)param_4 & 1;
  }
  Swift::Hasher::_combine(bVar1,param_2);
  if ((param_4 & 0xff00) == 0x200) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar1 = (byte)(param_4 >> 8) & 1;
  }
  Swift::Hasher::_combine(bVar1,param_2);
  if ((param_4 & 0xff0000) == 0x20000) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar1 = (byte)(param_4 >> 0x10) & 1;
  }
  Swift::Hasher::_combine(bVar1,param_2);
  if (param_4 >> 0x18 == 2) {
    bVar1 = 0;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    bVar1 = (byte)(param_4 >> 0x18) & 1;
  }
  Swift::Hasher::_combine(bVar1,param_2);
  return;
}



/* Address: 0x1005a1520 | FUN_1005a1520 */

void FUN_1005a1520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_1005a1438(HVar1.unknown,param_1,param_2,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a157c | FUN_1005a157c */

undefined8 FUN_1005a157c(undefined8 param_1)

{
  undefined4 extraout_w8;
  undefined4 extraout_var;
  long unaff_x21;
  
  FUN_1005a6ac0();
  if (unaff_x21 != 0) {
    param_1 = CONCAT44(extraout_var,extraout_w8);
  }
  return param_1;
}



/* Address: 0x1005a15a0 | FUN_1005a15a0 */

void FUN_1005a15a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined4 *)(unaff_x20 + 2);
  Swift::Hasher::init(0);
  HVar4.unknown = auStack_78;
  FUN_1005a1438(HVar4.unknown,uVar1,uVar2,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005a15f8 | FUN_1005a15f8 */

void FUN_1005a15f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005a1438(param_1,*unaff_x20,unaff_x20[1],*(undefined4 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1005a1604 | FUN_1005a1604 */

void FUN_1005a1604(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined4 *)(unaff_x20 + 2);
  Swift::Hasher::init(param_1);
  HVar4.unknown = auStack_78;
  FUN_1005a1438(HVar4.unknown,uVar1,uVar2,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005a1658 | FUN_1005a1658 */

void FUN_1005a1658(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long unaff_x21;
  
  FUN_1005a6ac0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(char *)(param_1 + 2) = (char)param_4;
    *(char *)((long)param_1 + 0x11) = (char)((uint)param_4 >> 8);
    *(char *)((long)param_1 + 0x12) = (char)((uint)param_4 >> 0x10);
    *(char *)((long)param_1 + 0x13) = (char)((uint)param_4 >> 0x18);
  }
  return;
}



/* Address: 0x1005a169c | FUN_1005a169c */

void FUN_1005a169c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005a1294(param_1,*unaff_x20,unaff_x20[1],*(undefined4 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1005a16b8 | FUN_1005a16b8 */

void FUN_1005a16b8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x2020202;
  return;
}



/* Address: 0x1005a16c8 | FUN_1005a16c8 */

void FUN_1005a16c8(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1005a5400(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),*param_2,param_2[1],
                *(undefined4 *)(param_2 + 2));
  return;
}



/* Address: 0x1005a16e4 | FUN_1005a16e4 */

undefined8 FUN_1005a16e4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x98));
  return uVar1;
}



/* Address: 0x1005a1720 | FUN_1005a1720 */

void FUN_1005a1720(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
  *(undefined8 *)(unaff_x20 + 0x90) = param_1;
  *(undefined8 *)(unaff_x20 + 0x98) = param_2;
  *(char *)(unaff_x20 + 0xa0) = (char)param_3;
  *(char *)(unaff_x20 + 0xa1) = (char)((uint)param_3 >> 8);
  *(char *)(unaff_x20 + 0xa2) = (char)((uint)param_3 >> 0x10);
  *(char *)(unaff_x20 + 0xa3) = (char)((uint)param_3 >> 0x18);
  return;
}



/* Address: 0x1005a1784 | FUN_1005a1784 */

void FUN_1005a1784(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
                  undefined8 *param_13,undefined8 param_14,undefined8 param_15)

{
  undefined1 auStack_228 [168];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  
  uStack_a0 = param_8[1];
  local_a8 = *param_8;
  uStack_90 = param_8[3];
  local_98 = param_8[2];
  local_88 = *(undefined1 *)(param_8 + 4);
  uStack_70 = param_13[1];
  local_78 = *param_13;
  uStack_60 = param_13[3];
  local_68 = param_13[2];
  local_58 = *(undefined1 *)(param_13 + 4);
  uStack_148 = param_8[1];
  local_150 = *param_8;
  uStack_138 = param_8[3];
  local_140 = param_8[2];
  local_130 = *(undefined1 *)(param_8 + 4);
  local_128 = param_14;
  uStack_118 = param_13[1];
  local_120 = *param_13;
  uStack_108 = param_13[3];
  uStack_110 = param_13[2];
  local_100 = *(undefined1 *)(param_13 + 4);
  uStack_f8 = param_15;
  local_e8 = param_10;
  local_38 = (undefined1)param_11;
  local_37 = (undefined1)((uint)param_11 >> 8);
  local_36 = (undefined1)((uint)param_11 >> 0x10);
  local_35 = (undefined1)((uint)param_11 >> 0x18);
  local_e0 = param_11;
  local_80 = param_14;
  local_50 = param_15;
  local_40 = param_10;
  local_180 = param_2;
  uStack_178 = param_3;
  local_170 = param_4;
  uStack_168 = param_5;
  local_160 = param_6;
  uStack_158 = param_7;
  uStack_f0 = param_9;
  local_d8 = param_2;
  uStack_d0 = param_3;
  local_c8 = param_4;
  uStack_c0 = param_5;
  local_b8 = param_6;
  uStack_b0 = param_7;
  uStack_48 = param_9;
  FUN_100558d60(&local_180,auStack_228);
  FUN_100558d9c(&local_d8);
  param_1[0x11] = uStack_f8;
  param_1[0x10] = CONCAT71(uStack_ff,local_100);
  param_1[0x13] = local_e8;
  param_1[0x12] = uStack_f0;
  *(undefined4 *)(param_1 + 0x14) = local_e0;
  param_1[9] = uStack_138;
  param_1[8] = local_140;
  param_1[0xb] = local_128;
  param_1[10] = CONCAT71(uStack_12f,local_130);
  param_1[0xd] = uStack_118;
  param_1[0xc] = local_120;
  param_1[0xf] = uStack_108;
  param_1[0xe] = uStack_110;
  param_1[1] = uStack_178;
  *param_1 = local_180;
  param_1[3] = uStack_168;
  param_1[2] = local_170;
  param_1[5] = uStack_158;
  param_1[4] = local_160;
  param_1[7] = uStack_148;
  param_1[6] = local_150;
  return;
}



/* Address: 0x1005a18ac | thunk_FUN_1005a18b0 */

void thunk_FUN_1005a18b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined8 param_4)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  uStack_a0 = 1;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_b0 = param_2;
  uStack_a8 = param_3;
  uStack_78 = param_4;
  FUN_10049a544(&uStack_b0);
  param_1[9] = uStack_68;
  param_1[8] = uStack_70;
  param_1[0xb] = uStack_58;
  param_1[10] = uStack_60;
  param_1[0xd] = CONCAT71(uStack_47,uStack_48);
  param_1[0xc] = uStack_50;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_3f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_40,uStack_47);
  param_1[1] = uStack_a8;
  *param_1 = uStack_b0;
  param_1[3] = uStack_98;
  param_1[2] = uStack_a0;
  param_1[5] = uStack_88;
  param_1[4] = uStack_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x1005a18b0 | FUN_1005a18b0 */

void FUN_1005a18b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  local_a0 = 1;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_b0 = param_2;
  uStack_a8 = param_3;
  local_78 = param_4;
  FUN_10049a544(&local_b0);
  param_1[9] = uStack_68;
  param_1[8] = local_70;
  param_1[0xb] = uStack_58;
  param_1[10] = uStack_60;
  param_1[0xd] = CONCAT71(uStack_47,uStack_48);
  param_1[0xc] = local_50;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_3f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_40,uStack_47);
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = local_98;
  param_1[2] = local_a0;
  param_1[5] = local_88;
  param_1[4] = uStack_90;
  param_1[7] = local_78;
  param_1[6] = uStack_80;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x1005a1940 | FUN_1005a1940 */

void FUN_1005a1940(void)

{
  FUN_1005a1958();
  return;
}



/* Address: 0x1005a194c | FUN_1005a194c */

void FUN_1005a194c(void)

{
  FUN_1005a1958();
  return;
}



/* Address: 0x1005a1958 | FUN_1005a1958 */

void FUN_1005a1958(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *param_7)

{
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  local_90 = 1;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  local_78 = 0;
  local_b0 = param_2;
  uStack_a8 = param_3;
  local_a0 = param_4;
  uStack_98 = param_5;
  local_68 = param_6;
  (*param_7)(&local_b0);
  param_1[9] = local_68;
  param_1[8] = uStack_70;
  param_1[0xb] = uStack_58;
  param_1[10] = uStack_60;
  param_1[0xd] = CONCAT71(uStack_47,uStack_48);
  param_1[0xc] = local_50;
  *(undefined8 *)((long)param_1 + 0x71) = uStack_3f;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_40,uStack_47);
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = uStack_98;
  param_1[2] = local_a0;
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = local_78;
  param_1[6] = uStack_80;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_6);
  return;
}



/* Address: 0x1005a19f8 | FUN_1005a19f8 */

/* WARNING: Removing unreachable block (ram,0x0001005a22c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1005a19f8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,byte *param_5)

{
  uint uVar1;
  int iVar2;
  Hasher into;
  Hasher HVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  long extraout_x8;
  code *pcVar10;
  Hasher unaff_x19;
  byte *pbVar11;
  byte *unaff_x20;
  undefined8 unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 uVar12;
  undefined8 *unaff_x25;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x28;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar15;
  undefined8 in_register_00005008;
  undefined8 uVar16;
  undefined8 in_register_00005028;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  String SVar37;
  String SVar38;
  String SVar39;
  undefined1 auStack_70 [80];
  
  pbVar7 = &DAT_e400000000000000;
  uVar1 = 0x65707974;
  into.unknown = &DAT_65707974;
  pbVar9 = (byte *)(param_3 & 0xff);
  HVar3.unknown = into.unknown;
  pbVar11 = pbVar7;
  pbVar4 = pbVar9;
  switch(pbVar9) {
  default:
    uVar1 = 0x6574;
  case (byte *)0xce:
  case (byte *)0xe8:
  case (byte *)0xf6:
    auVar18._4_4_ = 0;
    auVar18._0_4_ = uVar1 & 0xffff | 0x74780000;
    auVar18._8_8_ = &DAT_e400000000000000;
    return auVar18;
  case (byte *)0x2:
    auVar22._8_8_ = &DAT_e500000000000000;
    auVar22._0_8_ = 0x6567616d69;
    return auVar22;
  case (byte *)0x3:
    puVar8 = &DAT_e800000000000000;
    goto LAB_1005a1aa0;
  case (byte *)0x4:
  case (byte *)0x8c:
    pbVar7 = (byte *)0x6c5f;
  case (byte *)0x32:
  case (byte *)0x3a:
  case (byte *)0x42:
  case (byte *)0x4a:
  case (byte *)0x52:
  case (byte *)0x5a:
  case (byte *)0x62:
  case (byte *)0x72:
  case (byte *)0x82:
  case (byte *)0x8a:
  case (byte *)0x92:
  case (byte *)0xb2:
    pbVar7 = (byte *)((ulong)pbVar7 | 0x6b6e690000);
  case (byte *)0x3c:
  case (byte *)0x44:
  case (byte *)0x4c:
  case (byte *)0x54:
  case (byte *)0x5c:
  case (byte *)0x64:
  case (byte *)0x74:
  case (byte *)0x84:
  case (byte *)0x94:
    puVar8 = (undefined1 *)((ulong)pbVar7 & 0xffffffffffff | 0xed00000000000000);
LAB_1005a1aa0:
    auVar23._8_8_ = puVar8;
    auVar23._0_8_ = 0x656372756f736572;
    return auVar23;
  case (byte *)0x5:
    pbVar7 = &DAT_e500000000000000;
  case (byte *)0x9a:
  case (byte *)0xae:
  case (byte *)0xb6:
  case (byte *)0xbe:
  case (byte *)0xc6:
  case (byte *)0xda:
  case (byte *)0xee:
    auVar25._8_8_ = pbVar7;
    auVar25._0_8_ = 0x6f69647561;
    return auVar25;
  case (byte *)0x6:
    auVar27._8_8_ = 0xe300000000000000;
    auVar27._0_8_ = 0x697275;
    return auVar27;
  case (byte *)0x7:
    auVar24._8_8_ = &DAT_e400000000000000;
    auVar24._0_8_ = 0x656d616e;
    return auVar24;
  case (byte *)0x8:
    pbVar7 = &DAT_e500000000000000;
  case (byte *)0x99:
  case (byte *)0xad:
  case (byte *)0xb5:
  case (byte *)0xbd:
  case (byte *)0xc5:
  case (byte *)0xd9:
  case (byte *)0xed:
    auVar29._8_8_ = pbVar7;
    auVar29._0_8_ = 0x656c746974;
    return auVar29;
  case (byte *)0x9:
    pbVar7 = (byte *)0x6f69;
  case (byte *)0xb9:
  case (byte *)0xc1:
  case (byte *)0xc9:
  case (byte *)0xf1:
    pbVar7 = (byte *)((ulong)pbVar7 | 0x6e0000);
  case (byte *)0x31:
  case (byte *)0x39:
  case (byte *)0x41:
  case (byte *)0x49:
  case (byte *)0x51:
  case (byte *)0x59:
  case (byte *)0x61:
  case (byte *)0x71:
  case (byte *)0x81:
  case (byte *)0x89:
  case (byte *)0x91:
  case (byte *)0xb1:
    pbVar7 = (byte *)((ulong)pbVar7 & 0xffffffffffff | 0xeb00000000000000);
    into.unknown = (byte *)0x7470697263736564;
  case (byte *)0xb8:
    auVar21._8_8_ = pbVar7;
    auVar21._0_8_ = into.unknown;
    return auVar21;
  case (byte *)0xa:
  case (byte *)0xd5:
  case (byte *)0xfd:
    pbVar7 = (byte *)0xeb00000000736e6f;
    into.unknown = (byte *)0x6e61;
  case (byte *)0xd8:
    into.unknown = (undefined *)((ulong)into.unknown & 0xffffffff0000ffff | 0x697461746f6e0000);
  case (byte *)0xdc:
    auVar28._8_8_ = pbVar7;
    auVar28._0_8_ = into.unknown;
    return auVar28;
  case (byte *)0xb:
  case (byte *)0xa6:
  case (byte *)0xe6:
    pbVar7 = &DAT_e800000000000000;
  case (byte *)0xa8:
    into.unknown = (byte *)0x696d;
  case (byte *)0x9e:
  case (byte *)0xde:
    into.unknown = (undefined *)((ulong)into.unknown & 0xffffffff0000ffff | 0x7954656d0000);
  case (byte *)0x34:
    auVar19._0_8_ = (ulong)into.unknown | 0x6570000000000000;
    auVar19._8_8_ = pbVar7;
    return auVar19;
  case (byte *)0xc:
    auVar20._8_8_ = &DAT_e400000000000000;
    auVar20._0_8_ = 0x61746164;
    return auVar20;
  case (byte *)0xd:
  case (byte *)0xd4:
    pbVar7 = &DAT_e500000000000000;
  case (byte *)0xec:
    into.unknown = (byte *)0x74656d5f;
  case (byte *)0x15:
  case (byte *)0x25:
    into.unknown = into.unknown | 0x6100000000;
  case (byte *)0x0:
    auVar26._8_8_ = pbVar7;
    auVar26._0_8_ = into.unknown;
    return auVar26;
  case (byte *)0x1f:
  case (byte *)0x2f:
    break;
  case (byte *)0x27:
    unaff_x20 = &DAT_e400000000000000;
    HVar3.unknown = unaff_x19.unknown;
  case (byte *)0x26:
    pbVar7 = param_5;
  case (byte *)0x30:
  case (byte *)0x38:
    into.unknown = unaff_x20;
    SVar38.bridgeObject = into.unknown;
    SVar38.str = (char *)pbVar7;
    Swift::String::hash(HVar3,SVar38);
  case (byte *)0xc0:
  case (byte *)0x17:
    _swift_bridgeObjectRelease(into.unknown);
    auVar31._8_8_ = pbVar7;
    auVar31._0_8_ = into.unknown;
    return auVar31;
  case (byte *)0x40:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (byte *)0x13:
  case (byte *)0x16:
  case (byte *)0x23:
  case (byte *)0x28:
  case (byte *)0x29:
  case (byte *)0xc8:
    *(long *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    unaff_x19.unknown = (undefined *)(ulong)*unaff_x20;
  case (byte *)0x11:
  case (byte *)0x12:
  case (byte *)0x21:
  case (byte *)0x22:
  case (byte *)0x48:
    into.unknown = unaff_x19.unknown;
    Swift::Hasher::init(0x65707974);
    FUN_1005a19f8();
  case (byte *)0x14:
  case (byte *)0x18:
  case (byte *)0x24:
    param_5 = into.unknown;
  case (byte *)0x10:
  case (byte *)0x19:
  case (byte *)0x20:
    unaff_x19.unknown = pbVar7;
  case (byte *)0xb0:
    HVar3.unknown = (undefined *)((long)register0x00000008 + 8);
  case (byte *)0x50:
    into.unknown = unaff_x19.unknown;
    pbVar7 = param_5;
    SVar39.bridgeObject = into.unknown;
    SVar39.str = (char *)pbVar7;
    Swift::String::hash(HVar3,SVar39);
    _swift_bridgeObjectRelease();
  case (byte *)0x58:
  case (byte *)0x9c:
    into.unknown = (undefined *)Swift::Hasher::_finalize(into);
  case (byte *)0x80:
  case (byte *)0x70:
    auVar32._8_8_ = pbVar7;
    auVar32._0_8_ = into.unknown;
    return auVar32;
  case (byte *)0x60:
  case (byte *)0x88:
  case (byte *)0xfc:
    pbVar7 = _DAT_6570797c;
    pbVar4 = _DAT_65707974;
    unaff_x19.unknown = pbVar9;
  case (byte *)0x90:
    FUN_1005a6c9c(pbVar4,pbVar7);
    *unaff_x19.unknown = (byte)pbVar4;
    auVar33._8_8_ = pbVar7;
    auVar33._0_8_ = pbVar4;
    return auVar33;
  case (byte *)0xba:
  case (byte *)0xc2:
  case (byte *)0xca:
  case (byte *)0xf2:
    auVar34._8_8_ = &DAT_e400000000000000;
    auVar34._0_8_ = &DAT_65707974;
    return auVar34;
  case (byte *)0xbb:
  case (byte *)0xc3:
  case (byte *)0xcb:
  case (byte *)0xf3:
    goto switchD_1005a1a20_caseD_bb;
  case (byte *)0xd6:
  case (byte *)0xfe:
  case (byte *)0xac:
  case (byte *)0xb4:
  case (byte *)0xbc:
  case (byte *)0xc4:
    pbVar11 = (byte *)(ulong)*unaff_x20;
    Swift::Hasher::init(0);
    FUN_1005a19f8();
    into.unknown = &stack0x00000008;
    unaff_x19.unknown = pbVar7;
  case (byte *)0x9d:
  case (byte *)0xdd:
    param_5 = unaff_x19.unknown;
    unaff_x19.unknown = param_5;
  case (byte *)0x98:
    SVar37.bridgeObject = param_5;
    SVar37.str = (char *)pbVar11;
    Swift::String::hash(into,SVar37);
    _swift_bridgeObjectRelease();
    auVar30._0_8_ = Swift::Hasher::_finalize(unaff_x19);
    auVar30._8_8_ = pbVar11;
    return auVar30;
  case (byte *)0xf0:
    uVar5 = (ulong)*unaff_x20;
    FUN_1005a19f8(uVar5);
    auVar35._8_8_ = pbVar7;
    auVar35._0_8_ = uVar5;
    return auVar35;
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  unaff_x23 = (long)&stack0x00000000 - extraout_x8;
  FUN_100004640();
  FUN_1005a7834();
  Swift::Encoder::_container();
  in_register_00005008 = unaff_x25[9];
  param_1 = unaff_x25[8];
  in_register_00005028 = unaff_x25[0xb];
  param_2 = unaff_x25[10];
switchD_1005a1a20_caseD_bb:
  *(undefined8 *)(unaff_x28 + 0x98) = in_register_00005008;
  *(undefined8 *)(unaff_x28 + 0x90) = param_1;
  *(undefined8 *)(unaff_x28 + 0xa8) = in_register_00005028;
  *(undefined8 *)(unaff_x28 + 0xa0) = param_2;
  uVar15 = unaff_x25[0xc];
  *(undefined8 *)(unaff_x28 + 0xb8) = unaff_x25[0xd];
  *(undefined8 *)(unaff_x28 + 0xb0) = uVar15;
  uVar15 = *(undefined8 *)((long)unaff_x25 + 0x69);
  *(undefined8 *)(unaff_x28 + 0xc1) = *(undefined8 *)((long)unaff_x25 + 0x71);
  *(undefined8 *)(unaff_x28 + 0xb9) = uVar15;
  uVar15 = *unaff_x25;
  uVar17 = unaff_x25[3];
  uVar13 = unaff_x25[2];
  *(undefined8 *)(unaff_x28 + 0x58) = unaff_x25[1];
  *(undefined8 *)(unaff_x28 + 0x50) = uVar15;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar17;
  *(undefined8 *)(unaff_x28 + 0x60) = uVar13;
  uVar15 = unaff_x25[4];
  uVar17 = unaff_x25[7];
  uVar13 = unaff_x25[6];
  *(undefined8 *)(unaff_x28 + 0x78) = unaff_x25[5];
  *(undefined8 *)(unaff_x28 + 0x70) = uVar15;
  *(undefined8 *)(unaff_x28 + 0x88) = uVar17;
  *(undefined8 *)(unaff_x28 + 0x80) = uVar13;
  iVar2 = (int)unaff_x29 + -0xe0;
  FUN_1004dbae4();
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      puVar6 = (undefined8 *)(unaff_x29 + -0xe0);
      FUN_100004520();
      uVar15 = puVar6[1];
      *(undefined8 *)(unaff_x19.unknown + 0x80) = *puVar6;
      *(undefined8 *)(unaff_x19.unknown + 0x70) = uVar15;
      uVar15 = puVar6[2];
      uVar17 = puVar6[3];
      uVar14 = puVar6[5];
      uVar13 = puVar6[4];
      uVar12 = puVar6[6];
      *(undefined8 *)(unaff_x19.unknown + 0x58) = puVar6[7];
      *(undefined8 *)(unaff_x19.unknown + 0x50) = uVar12;
      *(undefined8 *)(unaff_x19.unknown + 0x68) = uVar14;
      *(undefined8 *)(unaff_x19.unknown + 0x60) = uVar13;
      uVar13 = puVar6[8];
      uVar14 = puVar6[9];
      unaff_x19.unknown[0xf0] = 0;
      uVar12 = 0x6567616d69;
      goto LAB_1005a2234;
    }
    puVar6 = (undefined8 *)(unaff_x29 + -0xe0);
    FUN_100004520();
    uVar15 = *puVar6;
    uVar17 = puVar6[1];
    uVar14 = puVar6[3];
    uVar13 = puVar6[2];
    uVar12 = puVar6[4];
    *(undefined8 *)(unaff_x19.unknown + 0x78) = puVar6[5];
    *(undefined8 *)(unaff_x19.unknown + 0x70) = uVar12;
    *(undefined8 *)(unaff_x19.unknown + 0x88) = uVar14;
    *(undefined8 *)(unaff_x19.unknown + 0x80) = uVar13;
    uVar13 = puVar6[6];
    uVar14 = puVar6[7];
    unaff_x19.unknown[0xf0] = 0;
    Swift::KeyedEncodingContainer::_encode
              (0x74786574,&DAT_e400000000000000,unaff_x19.unknown + 0xf0);
    if (unaff_x24 == 0) {
      unaff_x19.unknown[0xf0] = 1;
      Swift::KeyedEncodingContainer::_encode(uVar15,uVar17,unaff_x19.unknown + 0xf0);
      *(undefined8 *)(unaff_x19.unknown + 0xf8) = *(undefined8 *)(unaff_x19.unknown + 0x88);
      *(undefined8 *)(unaff_x19.unknown + 0xf0) = *(undefined8 *)(unaff_x19.unknown + 0x80);
      *(undefined8 *)(unaff_x19.unknown + 0x108) = *(undefined8 *)(unaff_x19.unknown + 0x78);
      *(undefined8 *)(unaff_x19.unknown + 0x100) = *(undefined8 *)(unaff_x19.unknown + 0x70);
      *(undefined8 *)(unaff_x19.unknown + 0x110) = uVar13;
      unaff_x19.unknown[0xa0] = 10;
      FUN_10056382c();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x19.unknown + 0xf0,unaff_x19.unknown + 0xa0);
      *(undefined8 *)(unaff_x19.unknown + 0xf0) = uVar14;
      goto LAB_1005a2360;
    }
LAB_1005a2278:
    pcVar10 = *(code **)(*(long *)(unaff_x29 + -0x48) + 8);
  }
  else {
    if (iVar2 == 2) {
      puVar6 = (undefined8 *)(unaff_x29 + -0xe0);
      FUN_100004520();
      uVar15 = puVar6[1];
      *(undefined8 *)(unaff_x19.unknown + 0x80) = *puVar6;
      *(undefined8 *)(unaff_x19.unknown + 0x70) = uVar15;
      uVar15 = puVar6[2];
      uVar17 = puVar6[3];
      uVar14 = puVar6[5];
      uVar13 = puVar6[4];
      uVar12 = puVar6[6];
      *(undefined8 *)(unaff_x19.unknown + 0x58) = puVar6[7];
      *(undefined8 *)(unaff_x19.unknown + 0x50) = uVar12;
      *(undefined8 *)(unaff_x19.unknown + 0x68) = uVar14;
      *(undefined8 *)(unaff_x19.unknown + 0x60) = uVar13;
      uVar13 = puVar6[8];
      uVar14 = puVar6[9];
      unaff_x19.unknown[0xf0] = 0;
      uVar12 = 0x6f69647561;
LAB_1005a2234:
      Swift::KeyedEncodingContainer::_encode(uVar12,&DAT_e500000000000000,unaff_x19.unknown + 0xf0);
      if (unaff_x24 != 0) goto LAB_1005a2278;
      *(undefined8 *)(unaff_x19.unknown + 0x40) = uVar14;
      *(undefined8 *)(unaff_x19.unknown + 0x48) = uVar17;
      unaff_x19.unknown[0xf0] = 0xc;
      Swift::KeyedEncodingContainer::_encode
                (*(undefined8 *)(unaff_x19.unknown + 0x80),*(undefined8 *)(unaff_x19.unknown + 0x70)
                 ,unaff_x19.unknown + 0xf0);
      unaff_x19.unknown[0xf0] = 0xb;
      Swift::KeyedEncodingContainer::_encode
                (uVar15,*(undefined8 *)(unaff_x19.unknown + 0x48),unaff_x19.unknown + 0xf0);
      *(undefined8 *)(unaff_x19.unknown + 0xf8) = *(undefined8 *)(unaff_x19.unknown + 0x68);
      *(undefined8 *)(unaff_x19.unknown + 0xf0) = *(undefined8 *)(unaff_x19.unknown + 0x60);
      *(undefined8 *)(unaff_x19.unknown + 0x108) = *(undefined8 *)(unaff_x19.unknown + 0x58);
      *(undefined8 *)(unaff_x19.unknown + 0x100) = *(undefined8 *)(unaff_x19.unknown + 0x50);
      *(undefined8 *)(unaff_x19.unknown + 0x110) = uVar13;
      unaff_x19.unknown[0xa0] = 10;
      FUN_10056382c();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x19.unknown + 0xf0,unaff_x19.unknown + 0xa0);
      *(undefined8 *)(unaff_x19.unknown + 0xf0) = *(undefined8 *)(unaff_x19.unknown + 0x40);
LAB_1005a2360:
      unaff_x19.unknown[0xa0] = 0xd;
      FUN_1004e02ac();
      pbVar7 = unaff_x19.unknown + 0xf0;
      pbVar11 = unaff_x19.unknown + 0xa0;
    }
    else if (iVar2 == 3) {
      puVar6 = (undefined8 *)(unaff_x29 + -0xe0);
      FUN_100004520();
      uVar15 = puVar6[2];
      *(undefined8 *)(unaff_x19.unknown + 0x108) = puVar6[3];
      *(undefined8 *)(unaff_x19.unknown + 0x100) = uVar15;
      uVar15 = puVar6[4];
      *(undefined8 *)(unaff_x19.unknown + 0x118) = puVar6[5];
      *(undefined8 *)(unaff_x19.unknown + 0x110) = uVar15;
      uVar15 = puVar6[6];
      *(undefined8 *)(unaff_x28 + 0x38) = puVar6[7];
      *(undefined8 *)(unaff_x28 + 0x30) = uVar15;
      *(undefined8 *)(unaff_x28 + 0x40) = puVar6[8];
      uVar15 = *puVar6;
      *(undefined8 *)(unaff_x19.unknown + 0xf8) = puVar6[1];
      *(undefined8 *)(unaff_x19.unknown + 0xf0) = uVar15;
      uVar17 = puVar6[0xb];
      uVar13 = puVar6[10];
      uVar15 = puVar6[9];
      *(undefined8 *)(unaff_x19.unknown + 0x78) = puVar6[0xc];
      *(undefined8 *)(unaff_x19.unknown + 0x70) = uVar17;
      *(undefined8 *)(unaff_x19.unknown + 0x88) = uVar13;
      *(undefined8 *)(unaff_x19.unknown + 0x80) = uVar15;
      uVar15 = puVar6[0xd];
      uVar13 = puVar6[0xe];
      unaff_x19.unknown[0xa0] = 0;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,&DAT_e800000000000000,unaff_x19.unknown + 0xa0);
      if (unaff_x24 != 0) {
        (**(code **)(*(long *)(unaff_x29 + -0x48) + 8))(unaff_x23);
        goto LAB_1005a2338;
      }
      uVar14 = *(undefined8 *)(unaff_x28 + 0x38);
      uVar17 = *(undefined8 *)(unaff_x28 + 0x30);
      *(undefined8 *)(unaff_x19.unknown + 200) = *(undefined8 *)(unaff_x19.unknown + 0x118);
      *(undefined8 *)(unaff_x19.unknown + 0xc0) = *(undefined8 *)(unaff_x19.unknown + 0x110);
      *(undefined8 *)(unaff_x19.unknown + 0xd8) = uVar14;
      *(undefined8 *)(unaff_x19.unknown + 0xd0) = uVar17;
      *(undefined8 *)(unaff_x19.unknown + 0xe0) = *(undefined8 *)(unaff_x28 + 0x40);
      *(undefined8 *)(unaff_x19.unknown + 0xa8) = *(undefined8 *)(unaff_x19.unknown + 0xf8);
      *(undefined8 *)(unaff_x19.unknown + 0xa0) = *(undefined8 *)(unaff_x19.unknown + 0xf0);
      *(undefined8 *)(unaff_x19.unknown + 0xb8) = *(undefined8 *)(unaff_x19.unknown + 0x108);
      *(undefined8 *)(unaff_x19.unknown + 0xb0) = *(undefined8 *)(unaff_x19.unknown + 0x100);
      unaff_x19.unknown[0x9f] = 3;
      FUN_10056386c();
      Swift::KeyedEncodingContainer::_encode(unaff_x19.unknown + 0xa0,unaff_x19.unknown + 0x9f);
      *(undefined8 *)(unaff_x19.unknown + 0xa8) = *(undefined8 *)(unaff_x19.unknown + 0x88);
      *(undefined8 *)(unaff_x19.unknown + 0xa0) = *(undefined8 *)(unaff_x19.unknown + 0x80);
      *(undefined8 *)(unaff_x19.unknown + 0xb8) = *(undefined8 *)(unaff_x19.unknown + 0x78);
      *(undefined8 *)(unaff_x19.unknown + 0xb0) = *(undefined8 *)(unaff_x19.unknown + 0x70);
      *(undefined8 *)(unaff_x19.unknown + 0xc0) = uVar15;
      unaff_x19.unknown[0x9f] = 10;
      FUN_10056382c();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x19.unknown + 0xa0,unaff_x19.unknown + 0x9f);
      *(undefined8 *)(unaff_x19.unknown + 0xa0) = uVar13;
      unaff_x19.unknown[0x9f] = 0xd;
      FUN_1004e02ac();
      pbVar7 = unaff_x19.unknown + 0xa0;
      pbVar11 = unaff_x19.unknown + 0x9f;
    }
    else {
      puVar6 = (undefined8 *)(unaff_x29 + -0xe0);
      FUN_100004520();
      uVar15 = puVar6[1];
      *(undefined8 *)(unaff_x19.unknown + 0x80) = *puVar6;
      *(undefined8 *)(unaff_x19.unknown + 0x70) = uVar15;
      uVar15 = puVar6[3];
      *(undefined8 *)(unaff_x19.unknown + 0x60) = puVar6[2];
      uVar13 = puVar6[5];
      *(undefined8 *)(unaff_x19.unknown + 0x38) = puVar6[4];
      *(undefined8 *)(unaff_x19.unknown + 0x40) = uVar13;
      *(undefined8 *)(unaff_x19.unknown + 0x48) = uVar15;
      uVar13 = puVar6[7];
      *(undefined8 *)(unaff_x19.unknown + 0x50) = puVar6[6];
      uVar15 = puVar6[8];
      uVar17 = puVar6[9];
      uVar12 = puVar6[0xb];
      uVar14 = puVar6[10];
      uVar16 = puVar6[0xc];
      *(undefined8 *)(unaff_x19.unknown + 0x18) = puVar6[0xd];
      *(undefined8 *)(unaff_x19.unknown + 0x10) = uVar16;
      *(undefined8 *)(unaff_x19.unknown + 0x28) = uVar12;
      *(undefined8 *)(unaff_x19.unknown + 0x20) = uVar14;
      uVar14 = puVar6[0xe];
      unaff_x19.unknown[0xf0] = 0;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,0xed00006b6e696c5f,unaff_x19.unknown + 0xf0);
      if (unaff_x24 != 0) goto LAB_1005a2278;
      uVar12 = *(undefined8 *)(unaff_x19.unknown + 0x60);
      *(undefined8 *)unaff_x19.unknown = uVar17;
      *(undefined8 *)(unaff_x19.unknown + 8) = uVar13;
      uVar13 = *(undefined8 *)(unaff_x19.unknown + 0x50);
      unaff_x19.unknown[0xf0] = 6;
      Swift::KeyedEncodingContainer::_encode
                (*(undefined8 *)(unaff_x19.unknown + 0x80),*(undefined8 *)(unaff_x19.unknown + 0x70)
                 ,unaff_x19.unknown + 0xf0);
      unaff_x19.unknown[0xf0] = 7;
      Swift::KeyedEncodingContainer::_encode
                (uVar12,*(undefined8 *)(unaff_x19.unknown + 0x48),unaff_x19.unknown + 0xf0);
      unaff_x19.unknown[0xf0] = 8;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (*(undefined8 *)(unaff_x19.unknown + 0x38),*(undefined8 *)(unaff_x19.unknown + 0x40)
                 ,unaff_x19.unknown + 0xf0);
      unaff_x19.unknown[0xf0] = 9;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (uVar13,*(undefined8 *)(unaff_x19.unknown + 8),unaff_x19.unknown + 0xf0);
      unaff_x19.unknown[0xf0] = 0xb;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (uVar15,*(undefined8 *)unaff_x19.unknown,unaff_x19.unknown + 0xf0);
      *(undefined8 *)(unaff_x19.unknown + 0xf8) = *(undefined8 *)(unaff_x19.unknown + 0x28);
      *(undefined8 *)(unaff_x19.unknown + 0xf0) = *(undefined8 *)(unaff_x19.unknown + 0x20);
      *(undefined8 *)(unaff_x19.unknown + 0x108) = *(undefined8 *)(unaff_x19.unknown + 0x18);
      *(undefined8 *)(unaff_x19.unknown + 0x100) = *(undefined8 *)(unaff_x19.unknown + 0x10);
      *(undefined8 *)(unaff_x19.unknown + 0x110) = uVar14;
      unaff_x19.unknown[0xa0] = 10;
      FUN_10056382c();
      pbVar7 = unaff_x19.unknown + 0xf0;
      pbVar11 = unaff_x19.unknown + 0xa0;
    }
    Swift::KeyedEncodingContainer::_encodeIfPresent(pbVar7,pbVar11);
    pcVar10 = *(code **)(*(long *)(unaff_x29 + -0x48) + 8);
  }
  (*pcVar10)(unaff_x23);
LAB_1005a2338:
  auVar36._8_8_ = unaff_x22;
  auVar36._0_8_ = unaff_x23;
  return auVar36;
}



/* Address: 0x1005a1b2c | FUN_1005a1b2c */

void FUN_1005a1b2c(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_1005a19f8();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x1005a1b8c | FUN_1005a1b8c */

void FUN_1005a1b8c(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_1005a19f8();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1005a1bcc | switchD_1005a1a20::caseD_40 */

void switchD_1005a1a20::caseD_40(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_1005a19f8();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x1005a1c28 | FUN_1005a1c28 */

void FUN_1005a1c28(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1005a6c9c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1005a1c54 | FUN_1005a1c54 */

void FUN_1005a1c54(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_1005a19f8();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1005a1c7c | FUN_1005a1c7c */

void FUN_1005a1c7c(void)

{
  undefined1 *unaff_x20;
  
  FUN_1005a19f8(*unaff_x20);
  return;
}



/* Address: 0x1005a1c94 | FUN_1005a1c94 */

void FUN_1005a1c94(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005a6c9c();
  *param_1 = param_2;
  return;
}



/* Address: 0x1005a1cb8 | FUN_1005a1cb8 */

void FUN_1005a1cb8(undefined1 *param_1)

{
  *param_1 = 0xe;
  return;
}



/* Address: 0x1005a1cc4 | FUN_1005a1cc4 */

String FUN_1005a1cc4(void)

{
  String SVar1;
  
  FUN_1005a7834();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005a1cec | FUN_1005a1cec */

String FUN_1005a1cec(void)

{
  String SVar1;
  
  FUN_1005a7834();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005a1d14 | FUN_1005a1d14 */

void FUN_1005a1d14(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1005a6d00(&local_a0);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_58;
    param_1[8] = local_60;
    param_1[0xb] = uStack_48;
    param_1[10] = uStack_50;
    param_1[0xd] = CONCAT71(uStack_37,uStack_38);
    param_1[0xc] = local_40;
    *(undefined8 *)((long)param_1 + 0x71) = uStack_2f;
    *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_30,uStack_37);
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = local_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
  }
  return;
}



/* Address: 0x1005a1d6c | FUN_1005a1d6c */

/* WARNING: Removing unreachable block (ram,0x0001005a22c0) */

void FUN_1005a1d6c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  long lVar9;
  long extraout_x8;
  code *pcVar10;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_230;
  ulong local_228;
  ulong local_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong local_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  undefined1 local_191;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar2 = &DAT_100fd26b8;
  FUN_1000f7830(&DAT_100fd26b8,&BYTE_100c60310);
  lVar9 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a7834();
  Swift::Encoder::_container();
  uStack_a8 = unaff_x20[9];
  local_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  local_90 = unaff_x20[0xc];
  uStack_88 = (undefined1)unaff_x20[0xd];
  uStack_7f = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_e8 = unaff_x20[1];
  local_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  local_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  iVar1 = (int)&local_f0;
  FUN_1004dbae4();
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      puVar6 = &local_f0;
      FUN_100004520();
      local_1b0 = *puVar6;
      local_1c0 = puVar6[1];
      uVar4 = puVar6[2];
      uVar14 = puVar6[3];
      uStack_1c8 = puVar6[5];
      local_1d0 = puVar6[4];
      uStack_1d8 = puVar6[7];
      local_1e0 = puVar6[6];
      uVar12 = puVar6[8];
      uVar11 = puVar6[9];
      uVar3 = 0x6567616d69;
      goto LAB_1005a2234;
    }
    puVar6 = &local_f0;
    FUN_100004520();
    uVar4 = *puVar6;
    uVar14 = puVar6[1];
    uStack_1a8 = puVar6[3];
    local_1b0 = puVar6[2];
    uStack_1b8 = puVar6[5];
    local_1c0 = puVar6[4];
    uVar12 = puVar6[6];
    uVar11 = puVar6[7];
    local_140 = local_140 & 0xffffffffffffff00;
    Swift::KeyedEncodingContainer::_encode(0x74786574,&DAT_e400000000000000,&local_140,puVar2);
    if (unaff_x21 == 0) {
      local_140 = CONCAT71(local_140._1_7_,1);
      Swift::KeyedEncodingContainer::_encode(uVar4,uVar14,&local_140,puVar2);
      uStack_138 = uStack_1a8;
      local_140 = local_1b0;
      uStack_128 = uStack_1b8;
      local_130 = local_1c0;
      local_190 = CONCAT71(local_190._1_7_,10);
      local_120 = uVar12;
      FUN_10056382c();
      puVar6 = &local_140;
      Swift::KeyedEncodingContainer::_encodeIfPresent(puVar6,&local_190,puVar2,&DAT_100ee1da8,uVar4)
      ;
      local_140 = uVar11;
      goto LAB_1005a2360;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        puVar6 = &local_f0;
        FUN_100004520();
        uStack_128 = puVar6[3];
        local_130 = puVar6[2];
        uStack_118 = puVar6[5];
        local_120 = puVar6[4];
        uStack_108 = puVar6[7];
        local_110 = puVar6[6];
        local_100 = puVar6[8];
        uStack_138 = puVar6[1];
        local_140 = *puVar6;
        uStack_1b8 = puVar6[0xc];
        local_1c0 = puVar6[0xb];
        uStack_1a8 = puVar6[10];
        local_1b0 = puVar6[9];
        uVar4 = puVar6[0xd];
        uVar12 = puVar6[0xe];
        local_190 = local_190 & 0xffffffffffffff00;
        uVar3 = 0x656372756f736572;
        Swift::KeyedEncodingContainer::_encode
                  (0x656372756f736572,&DAT_e800000000000000,&local_190,puVar2);
        if (unaff_x21 != 0) {
          (**(code **)(lVar9 + 8))((long)&local_230 - extraout_x8,puVar2);
          return;
        }
        uStack_168 = uStack_118;
        local_170 = local_120;
        uStack_158 = uStack_108;
        uStack_160 = local_110;
        local_150 = local_100;
        uStack_188 = uStack_138;
        local_190 = local_140;
        uStack_178 = uStack_128;
        uStack_180 = local_130;
        local_191 = 3;
        FUN_10056386c();
        puVar5 = &local_190;
        Swift::KeyedEncodingContainer::_encode(puVar5,&local_191,puVar2,&DAT_100ee1c80,uVar3);
        uStack_188 = uStack_1a8;
        local_190 = local_1b0;
        uStack_178 = uStack_1b8;
        uStack_180 = local_1c0;
        local_191 = 10;
        local_170 = uVar4;
        FUN_10056382c();
        puVar6 = &local_190;
        Swift::KeyedEncodingContainer::_encodeIfPresent
                  (puVar6,&local_191,puVar2,&DAT_100ee1da8,puVar5);
        local_191 = 0xd;
        local_190 = uVar12;
        FUN_1004e02ac();
        puVar5 = &local_190;
        puVar7 = (ulong *)&local_191;
LAB_1005a2380:
        puVar8 = &DAT_100edcda0;
      }
      else {
        puVar5 = &local_f0;
        FUN_100004520();
        local_1b0 = *puVar5;
        local_1c0 = puVar5[1];
        local_1d0 = puVar5[2];
        local_1e8 = puVar5[3];
        local_1f8 = puVar5[4];
        local_1f0 = puVar5[5];
        local_1e0 = puVar5[6];
        uVar4 = puVar5[7];
        puVar6 = (ulong *)puVar5[8];
        uVar12 = puVar5[9];
        uStack_208 = puVar5[0xb];
        uStack_210 = puVar5[10];
        uStack_218 = puVar5[0xd];
        local_220 = puVar5[0xc];
        uVar13 = puVar5[0xe];
        local_140 = local_140 & 0xffffffffffffff00;
        Swift::KeyedEncodingContainer::_encode
                  (0x656372756f736572,0xed00006b6e696c5f,&local_140,puVar2);
        uVar11 = local_1d0;
        uVar14 = local_1e0;
        if (unaff_x21 != 0) goto LAB_1005a2278;
        local_140._0_1_ = 6;
        local_230 = uVar12;
        local_228 = uVar4;
        Swift::KeyedEncodingContainer::_encode(local_1b0,local_1c0,&local_140,puVar2);
        local_140._0_1_ = 7;
        Swift::KeyedEncodingContainer::_encode(uVar11,local_1e8,&local_140,puVar2);
        local_140._0_1_ = 8;
        Swift::KeyedEncodingContainer::_encodeIfPresent(local_1f8,local_1f0,&local_140,puVar2);
        local_140._0_1_ = 9;
        Swift::KeyedEncodingContainer::_encodeIfPresent(uVar14,local_228,&local_140,puVar2);
        local_140 = CONCAT71(local_140._1_7_,0xb);
        Swift::KeyedEncodingContainer::_encodeIfPresent(puVar6,local_230,&local_140,puVar2);
        uStack_138 = uStack_208;
        local_140 = uStack_210;
        uStack_128 = uStack_218;
        local_130 = local_220;
        local_190 = CONCAT71(local_190._1_7_,10);
        local_120 = uVar13;
        FUN_10056382c();
        puVar8 = &DAT_100ee1da8;
        puVar5 = &local_140;
        puVar7 = &local_190;
      }
      Swift::KeyedEncodingContainer::_encodeIfPresent(puVar5,puVar7,puVar2,puVar8,puVar6);
      pcVar10 = *(code **)(lVar9 + 8);
      goto LAB_1005a228c;
    }
    puVar6 = &local_f0;
    FUN_100004520();
    local_1b0 = *puVar6;
    local_1c0 = puVar6[1];
    uVar4 = puVar6[2];
    uVar14 = puVar6[3];
    uStack_1c8 = puVar6[5];
    local_1d0 = puVar6[4];
    uStack_1d8 = puVar6[7];
    local_1e0 = puVar6[6];
    uVar12 = puVar6[8];
    uVar11 = puVar6[9];
    uVar3 = 0x6f69647561;
LAB_1005a2234:
    local_140 = local_140 & 0xffffffffffffff00;
    Swift::KeyedEncodingContainer::_encode(uVar3,&DAT_e500000000000000,&local_140,puVar2);
    if (unaff_x21 == 0) {
      local_140._0_1_ = 0xc;
      local_1f0 = uVar11;
      local_1e8 = uVar14;
      Swift::KeyedEncodingContainer::_encode(local_1b0,local_1c0,&local_140,puVar2);
      local_140 = CONCAT71(local_140._1_7_,0xb);
      Swift::KeyedEncodingContainer::_encode(uVar4,local_1e8,&local_140,puVar2);
      uStack_138 = uStack_1c8;
      local_140 = local_1d0;
      uStack_128 = uStack_1d8;
      local_130 = local_1e0;
      local_190 = CONCAT71(local_190._1_7_,10);
      local_120 = uVar12;
      FUN_10056382c();
      puVar6 = &local_140;
      Swift::KeyedEncodingContainer::_encodeIfPresent(puVar6,&local_190,puVar2,&DAT_100ee1da8,uVar4)
      ;
      local_140 = local_1f0;
LAB_1005a2360:
      local_190 = CONCAT71(local_190._1_7_,0xd);
      FUN_1004e02ac();
      puVar5 = &local_140;
      puVar7 = &local_190;
      goto LAB_1005a2380;
    }
  }
LAB_1005a2278:
  pcVar10 = *(code **)(lVar9 + 8);
LAB_1005a228c:
  (*pcVar10)((long)&local_230 - extraout_x8,puVar2);
  return;
}



/* Address: 0x1005a23a8 | thunk_FUN_1005a5880 */

void thunk_FUN_1005a5880(void)

{
  FUN_1005a5880();
  return;
}



/* Address: 0x1005a23ac | FUN_1005a23ac */

void FUN_1005a23ac(Hasher param_1,Hasher param_2)

{
  void *pvVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  int iVar5;
  __uint64 _Var6;
  String *pSVar7;
  Hasher HVar8;
  Hasher HVar9;
  char *pcVar10;
  char *pcVar12;
  undefined8 *unaff_x20;
  void *pvVar13;
  char *pcVar14;
  void *pvVar15;
  char *pcVar16;
  void *pvVar17;
  String SVar18;
  String SVar19;
  String local_160;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  void *local_e0;
  char *pcStack_d8;
  void *pvStack_d0;
  char *pcStack_c8;
  void *local_c0;
  char *local_b0;
  void *pvStack_a8;
  char *pcStack_a0;
  void *pvStack_98;
  char *local_90;
  void *pvStack_88;
  char *pcStack_80;
  void *pvStack_78;
  char *local_70;
  void *pvVar11;
  
  uStack_118 = unaff_x20[9];
  local_120 = unaff_x20[8];
  uStack_108 = unaff_x20[0xb];
  uStack_110 = unaff_x20[10];
  local_100 = unaff_x20[0xc];
  uStack_f8 = (undefined1)unaff_x20[0xd];
  uStack_ef = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_f7 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_f0 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  local_160.bridgeObject = (void *)unaff_x20[1];
  local_160.str = (char *)*unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  uStack_138 = unaff_x20[5];
  local_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  iVar5 = (int)&local_160;
  FUN_1004dbae4();
  if (iVar5 < 2) {
    if (iVar5 != 0) {
      pSVar7 = &local_160;
      FUN_100004520();
      pcVar10 = pSVar7->str;
      pvVar13 = pSVar7->bridgeObject;
      pcVar12 = pSVar7[1].str;
      pvVar11 = pSVar7[1].bridgeObject;
      local_90 = pSVar7[4].str;
      pcVar14 = pSVar7[4].bridgeObject;
      pvStack_a8 = pSVar7[2].bridgeObject;
      local_b0 = pSVar7[2].str;
      pvStack_98 = pSVar7[3].bridgeObject;
      pcStack_a0 = pSVar7[3].str;
      _Var6 = 1;
      goto LAB_1005a25b8;
    }
    pSVar7 = &local_160;
    FUN_100004520();
    pcVar10 = pSVar7->str;
    pvVar11 = pSVar7->bridgeObject;
    local_90 = pSVar7[3].str;
    pcVar14 = pSVar7[3].bridgeObject;
    pvStack_a8 = pSVar7[1].bridgeObject;
    local_b0 = pSVar7[1].str;
    pvStack_98 = pSVar7[2].bridgeObject;
    pcStack_a0 = pSVar7[2].str;
    Swift::Hasher::_combine(0,param_2);
    param_2.unknown = pcVar10;
  }
  else {
    if (iVar5 != 2) {
      if (iVar5 != 3) {
        pSVar7 = &local_160;
        FUN_100004520();
        SVar18 = *pSVar7;
        HVar8.unknown = pSVar7[1].str;
        SVar19 = pSVar7[1];
        HVar9.unknown = pSVar7[2].str;
        pvVar11 = pSVar7[2].bridgeObject;
        SVar2 = pSVar7[2];
        pcVar10 = pSVar7[3].str;
        pvVar13 = pSVar7[3].bridgeObject;
        SVar3 = pSVar7[3];
        pvVar1 = pSVar7[4].bridgeObject;
        SVar4 = pSVar7[4];
        pvVar15 = pSVar7[5].bridgeObject;
        pcVar14 = pSVar7[5].str;
        pvVar17 = pSVar7[6].bridgeObject;
        pcVar16 = pSVar7[6].str;
        pcVar12 = pSVar7[7].str;
        Swift::Hasher::_combine(4,param_2);
        Swift::String::hash(param_1,SVar18);
        Swift::String::hash(param_1,SVar19);
        if (pvVar11 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar8);
          HVar9.unknown = HVar8.unknown;
        }
        else {
          Swift::Hasher::_combine(1,HVar8);
          Swift::String::hash(param_1,SVar2);
        }
        if (pvVar13 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar9);
        }
        else {
          Swift::Hasher::_combine(1,HVar9);
          Swift::String::hash(param_1,SVar3);
          HVar9.unknown = pcVar10;
        }
        if (pvVar1 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar9);
        }
        else {
          Swift::Hasher::_combine(1,HVar9);
          Swift::String::hash(param_1,SVar4);
        }
        local_b0 = pcVar14;
        pvStack_a8 = pvVar15;
        pcStack_a0 = pcVar16;
        pvStack_98 = pvVar17;
        local_90 = pcVar12;
        FUN_10055fb80(param_1.unknown);
        return;
      }
      pSVar7 = &local_160;
      FUN_100004520();
      pvStack_88 = pSVar7[2].bridgeObject;
      local_90 = pSVar7[2].str;
      pvStack_78 = pSVar7[3].bridgeObject;
      pcStack_80 = pSVar7[3].str;
      local_70 = pSVar7[4].str;
      pvStack_a8 = pSVar7->bridgeObject;
      local_b0 = pSVar7->str;
      pvStack_98 = pSVar7[1].bridgeObject;
      pcStack_a0 = pSVar7[1].str;
      local_c0 = pSVar7[6].bridgeObject;
      pcVar14 = pSVar7[7].str;
      pcStack_d8 = pSVar7[5].str;
      local_e0 = pSVar7[4].bridgeObject;
      pcStack_c8 = pSVar7[6].str;
      pvStack_d0 = pSVar7[5].bridgeObject;
      Swift::Hasher::_combine(3,param_2);
      FUN_10057b19c(param_1.unknown);
      goto LAB_1005a25e4;
    }
    pSVar7 = &local_160;
    FUN_100004520();
    pcVar10 = pSVar7->str;
    pvVar13 = pSVar7->bridgeObject;
    pcVar12 = pSVar7[1].str;
    pvVar11 = pSVar7[1].bridgeObject;
    local_90 = pSVar7[4].str;
    pcVar14 = pSVar7[4].bridgeObject;
    pvStack_a8 = pSVar7[2].bridgeObject;
    local_b0 = pSVar7[2].str;
    pvStack_98 = pSVar7[3].bridgeObject;
    pcStack_a0 = pSVar7[3].str;
    _Var6 = 2;
LAB_1005a25b8:
    Swift::Hasher::_combine(_Var6,param_2);
    SVar18.bridgeObject = pvVar13;
    SVar18.str = pcVar10;
    Swift::String::hash(param_1,SVar18);
    param_2.unknown = pcVar12;
  }
  SVar19.bridgeObject = pvVar11;
  SVar19.str = param_2.unknown;
  Swift::String::hash(param_1,SVar19);
LAB_1005a25e4:
  FUN_10055fb80(param_1.unknown);
  if (pcVar14 == (char *)0x0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004df778(param_1.unknown,pcVar14);
  }
  return;
}



/* Address: 0x1005a2688 | FUN_1005a2688 */

void FUN_1005a2688(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005a23ac();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a26c4 | thunk_FUN_1005a23ac */

void thunk_FUN_1005a23ac(void)

{
  FUN_1005a23ac();
  return;
}



/* Address: 0x1005a26c8 | FUN_1005a26c8 */

void FUN_1005a26c8(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005a23ac();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a2700 | FUN_1005a2700 */

void FUN_1005a2700(void)

{
  FUN_1005a1d6c();
  return;
}



/* Address: 0x1005a2714 | FUN_1005a2714 */

uint FUN_1005a2714(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  local_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  local_c0 = param_1[0xc];
  uStack_b8 = (undefined1)param_1[0xd];
  uStack_af = *(undefined8 *)((long)param_1 + 0x71);
  uStack_b7 = (undefined7)*(undefined8 *)((long)param_1 + 0x69);
  uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x69) >> 0x38);
  uStack_118 = param_1[1];
  local_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  local_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  local_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  local_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  local_60 = param_2[8];
  uStack_48 = param_2[0xb];
  local_50 = param_2[10];
  uStack_40 = param_2[0xc];
  uStack_2f = *(undefined8 *)((long)param_2 + 0x71);
  uStack_30 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x69) >> 0x38);
  uStack_38 = (undefined1)param_2[0xd];
  local_37 = (undefined7)((ulong)param_2[0xd] >> 8);
  FUN_1005a5880(&local_120,&local_a0);
  return uVar1 & 1;
}



/* Address: 0x1005a2794 | FUN_1005a2794 */

void FUN_1005a2794(void)

{
  undefined1 *unaff_x20;
  
  FUN_1005a0c78(0,*unaff_x20);
  return;
}



/* Address: 0x1005a27a0 | FUN_1005a27a0 */

void FUN_1005a27a0(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10056f5d0(param_1,*unaff_x20);
  return;
}



/* Address: 0x1005a27a8 | FUN_1005a27a8 */

void FUN_1005a27a8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1005a0c78(param_1,*unaff_x20);
  return;
}



/* Address: 0x1005a27b0 | FUN_1005a27b0 */

void FUN_1005a27b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1005a7874(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1005a27dc | FUN_1005a27dc */

void FUN_1005a27dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar6 = 0x736e6f6369;
  if (bVar5 != 6) {
    uVar6 = 0x6174656d5f;
  }
  puVar3 = (undefined1 *)0xec000000616d6568;
  uVar7 = 0x635374757074756f;
  if (bVar5 != 4) {
    puVar3 = (undefined1 *)0xeb00000000736e6f;
    uVar7 = 0x697461746f6e6e61;
  }
  puVar4 = &DAT_e500000000000000;
  if (bVar5 < 6) {
    puVar4 = puVar3;
    uVar6 = uVar7;
  }
  puVar3 = &DAT_eb000000006e6f69;
  uVar7 = 0x7470697263736564;
  if (bVar5 != 2) {
    puVar3 = (undefined1 *)0xeb00000000616d65;
    uVar7 = 0x6863537475706e69;
  }
  uVar1 = 0x656d616e;
  if (bVar5 != 0) {
    uVar1 = 0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar5 != 0) {
    puVar2 = &DAT_e500000000000000;
  }
  if (bVar5 < 2) {
    puVar3 = puVar2;
    uVar7 = uVar1;
  }
  if (bVar5 < 4) {
    puVar4 = puVar3;
    uVar6 = uVar7;
  }
  *param_1 = uVar6;
  param_1[1] = puVar4;
  return;
}


